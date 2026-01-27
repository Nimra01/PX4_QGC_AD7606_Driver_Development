#pragma once
#define AD7606_DATA_HPP

#include <uORB/uORB.h>
#include <uORB/SubscriptionInterval.hpp>
#include <uORB/Subscription.hpp>
#include <uORB/topics/ad7606_data.h>

#include <modules/mavlink/mavlink_stream.h>

class MavlinkStreamAD7606_DATA final : public MavlinkStream
{
public:
    static MavlinkStream *new_instance(Mavlink *mavlink)
    {
        return new MavlinkStreamAD7606_DATA(mavlink);
    }

    static constexpr const char *get_name_static()
    {
        return "AD7606_DATA";
    }

    static constexpr uint16_t get_id_static()
    {
        return 42010;
    }

    const char *get_name() const override { return get_name_static(); }
    uint16_t get_id() override { return get_id_static(); }

    unsigned get_size() override
    {
        return sizeof(mavlink_ad7606_data_t) + MAVLINK_NUM_NON_PAYLOAD_BYTES;


private:
    explicit MavlinkStreamAD7606_DATA(Mavlink *mavlink)
        : MavlinkStream(mavlink) {}

    uORB::Subscription _ad7606_sub{ORB_ID(ad7606_data)};

    bool send() override
    {
        ad7606_data_s data{};

        if (!_ad7606_sub.update(&data)) {
            return false;
        }

        mavlink_ad7606_data_t msg{};

        msg.time_boot_ms = data.timestamp / 1000;
        msg.ts           = data.ts;

        msg.elev_port    = data.elev_port;
        msg.elev_stbd    = data.elev_stbd;
        msg.flap_port    = data.flap_port;
        msg.flap_stbd    = data.flap_stbd;
        msg.rudder_port  = data.rudder_port;
        msg.rudder_stbd  = data.rudder_stbd;
        msg.strain_port  = data.strain_port;
        msg.strain_stbd  = data.strain_stbd;

        mavlink_msg_ad7606_data_send_struct(
            _mavlink->get_channel(),
            &msg
        );

        return true;
    }
};
