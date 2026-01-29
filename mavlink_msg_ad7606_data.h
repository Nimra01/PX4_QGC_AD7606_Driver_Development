#pragma once
// MESSAGE AD7606_DATA PACKING

#define MAVLINK_MSG_ID_AD7606_DATA 42010


typedef struct __mavlink_ad7606_data_t {
 uint64_t timestamp; /*<  */
 uint32_t ts; /*<  */
 uint16_t elev_port; /*<  */
 uint16_t elev_stbd; /*<  */
 uint16_t flap_port; /*<  */
 uint16_t flap_stbd; /*<  */
 uint16_t rudder_port; /*<  */
 uint16_t rudder_stbd; /*<  */
 uint16_t strain_port; /*<  */
 uint16_t strain_stbd; /*<  */
} mavlink_ad7606_data_t;

#define MAVLINK_MSG_ID_AD7606_DATA_LEN 28
#define MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN 28
#define MAVLINK_MSG_ID_42010_LEN 28
#define MAVLINK_MSG_ID_42010_MIN_LEN 28

#define MAVLINK_MSG_ID_AD7606_DATA_CRC 82
#define MAVLINK_MSG_ID_42010_CRC 82



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AD7606_DATA { \
    42010, \
    "AD7606_DATA", \
    10, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ad7606_data_t, timestamp) }, \
         { "ts", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ad7606_data_t, ts) }, \
         { "elev_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_ad7606_data_t, elev_port) }, \
         { "elev_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_ad7606_data_t, elev_stbd) }, \
         { "flap_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_ad7606_data_t, flap_port) }, \
         { "flap_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_ad7606_data_t, flap_stbd) }, \
         { "rudder_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_ad7606_data_t, rudder_port) }, \
         { "rudder_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_ad7606_data_t, rudder_stbd) }, \
         { "strain_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ad7606_data_t, strain_port) }, \
         { "strain_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ad7606_data_t, strain_stbd) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AD7606_DATA { \
    "AD7606_DATA", \
    10, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ad7606_data_t, timestamp) }, \
         { "ts", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ad7606_data_t, ts) }, \
         { "elev_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_ad7606_data_t, elev_port) }, \
         { "elev_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_ad7606_data_t, elev_stbd) }, \
         { "flap_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_ad7606_data_t, flap_port) }, \
         { "flap_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_ad7606_data_t, flap_stbd) }, \
         { "rudder_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_ad7606_data_t, rudder_port) }, \
         { "rudder_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_ad7606_data_t, rudder_stbd) }, \
         { "strain_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ad7606_data_t, strain_port) }, \
         { "strain_stbd", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ad7606_data_t, strain_stbd) }, \
         } \
}
#endif

/**
 * @brief Pack a ad7606_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  
 * @param ts  
 * @param elev_port  
 * @param elev_stbd  
 * @param flap_port  
 * @param flap_stbd  
 * @param rudder_port  
 * @param rudder_stbd  
 * @param strain_port  
 * @param strain_stbd  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ad7606_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint32_t ts, uint16_t elev_port, uint16_t elev_stbd, uint16_t flap_port, uint16_t flap_stbd, uint16_t rudder_port, uint16_t rudder_stbd, uint16_t strain_port, uint16_t strain_stbd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AD7606_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, ts);
    _mav_put_uint16_t(buf, 12, elev_port);
    _mav_put_uint16_t(buf, 14, elev_stbd);
    _mav_put_uint16_t(buf, 16, flap_port);
    _mav_put_uint16_t(buf, 18, flap_stbd);
    _mav_put_uint16_t(buf, 20, rudder_port);
    _mav_put_uint16_t(buf, 22, rudder_stbd);
    _mav_put_uint16_t(buf, 24, strain_port);
    _mav_put_uint16_t(buf, 26, strain_stbd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AD7606_DATA_LEN);
#else
    mavlink_ad7606_data_t packet;
    packet.timestamp = timestamp;
    packet.ts = ts;
    packet.elev_port = elev_port;
    packet.elev_stbd = elev_stbd;
    packet.flap_port = flap_port;
    packet.flap_stbd = flap_stbd;
    packet.rudder_port = rudder_port;
    packet.rudder_stbd = rudder_stbd;
    packet.strain_port = strain_port;
    packet.strain_stbd = strain_stbd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AD7606_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AD7606_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
}

/**
 * @brief Pack a ad7606_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  
 * @param ts  
 * @param elev_port  
 * @param elev_stbd  
 * @param flap_port  
 * @param flap_stbd  
 * @param rudder_port  
 * @param rudder_stbd  
 * @param strain_port  
 * @param strain_stbd  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ad7606_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint32_t ts,uint16_t elev_port,uint16_t elev_stbd,uint16_t flap_port,uint16_t flap_stbd,uint16_t rudder_port,uint16_t rudder_stbd,uint16_t strain_port,uint16_t strain_stbd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AD7606_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, ts);
    _mav_put_uint16_t(buf, 12, elev_port);
    _mav_put_uint16_t(buf, 14, elev_stbd);
    _mav_put_uint16_t(buf, 16, flap_port);
    _mav_put_uint16_t(buf, 18, flap_stbd);
    _mav_put_uint16_t(buf, 20, rudder_port);
    _mav_put_uint16_t(buf, 22, rudder_stbd);
    _mav_put_uint16_t(buf, 24, strain_port);
    _mav_put_uint16_t(buf, 26, strain_stbd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AD7606_DATA_LEN);
#else
    mavlink_ad7606_data_t packet;
    packet.timestamp = timestamp;
    packet.ts = ts;
    packet.elev_port = elev_port;
    packet.elev_stbd = elev_stbd;
    packet.flap_port = flap_port;
    packet.flap_stbd = flap_stbd;
    packet.rudder_port = rudder_port;
    packet.rudder_stbd = rudder_stbd;
    packet.strain_port = strain_port;
    packet.strain_stbd = strain_stbd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AD7606_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AD7606_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
}

/**
 * @brief Encode a ad7606_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ad7606_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ad7606_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ad7606_data_t* ad7606_data)
{
    return mavlink_msg_ad7606_data_pack(system_id, component_id, msg, ad7606_data->timestamp, ad7606_data->ts, ad7606_data->elev_port, ad7606_data->elev_stbd, ad7606_data->flap_port, ad7606_data->flap_stbd, ad7606_data->rudder_port, ad7606_data->rudder_stbd, ad7606_data->strain_port, ad7606_data->strain_stbd);
}

/**
 * @brief Encode a ad7606_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ad7606_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ad7606_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ad7606_data_t* ad7606_data)
{
    return mavlink_msg_ad7606_data_pack_chan(system_id, component_id, chan, msg, ad7606_data->timestamp, ad7606_data->ts, ad7606_data->elev_port, ad7606_data->elev_stbd, ad7606_data->flap_port, ad7606_data->flap_stbd, ad7606_data->rudder_port, ad7606_data->rudder_stbd, ad7606_data->strain_port, ad7606_data->strain_stbd);
}

/**
 * @brief Send a ad7606_data message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  
 * @param ts  
 * @param elev_port  
 * @param elev_stbd  
 * @param flap_port  
 * @param flap_stbd  
 * @param rudder_port  
 * @param rudder_stbd  
 * @param strain_port  
 * @param strain_stbd  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ad7606_data_send(mavlink_channel_t chan, uint64_t timestamp, uint32_t ts, uint16_t elev_port, uint16_t elev_stbd, uint16_t flap_port, uint16_t flap_stbd, uint16_t rudder_port, uint16_t rudder_stbd, uint16_t strain_port, uint16_t strain_stbd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AD7606_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, ts);
    _mav_put_uint16_t(buf, 12, elev_port);
    _mav_put_uint16_t(buf, 14, elev_stbd);
    _mav_put_uint16_t(buf, 16, flap_port);
    _mav_put_uint16_t(buf, 18, flap_stbd);
    _mav_put_uint16_t(buf, 20, rudder_port);
    _mav_put_uint16_t(buf, 22, rudder_stbd);
    _mav_put_uint16_t(buf, 24, strain_port);
    _mav_put_uint16_t(buf, 26, strain_stbd);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AD7606_DATA, buf, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
#else
    mavlink_ad7606_data_t packet;
    packet.timestamp = timestamp;
    packet.ts = ts;
    packet.elev_port = elev_port;
    packet.elev_stbd = elev_stbd;
    packet.flap_port = flap_port;
    packet.flap_stbd = flap_stbd;
    packet.rudder_port = rudder_port;
    packet.rudder_stbd = rudder_stbd;
    packet.strain_port = strain_port;
    packet.strain_stbd = strain_stbd;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AD7606_DATA, (const char *)&packet, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
#endif
}

/**
 * @brief Send a ad7606_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ad7606_data_send_struct(mavlink_channel_t chan, const mavlink_ad7606_data_t* ad7606_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ad7606_data_send(chan, ad7606_data->timestamp, ad7606_data->ts, ad7606_data->elev_port, ad7606_data->elev_stbd, ad7606_data->flap_port, ad7606_data->flap_stbd, ad7606_data->rudder_port, ad7606_data->rudder_stbd, ad7606_data->strain_port, ad7606_data->strain_stbd);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AD7606_DATA, (const char *)ad7606_data, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_AD7606_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ad7606_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint32_t ts, uint16_t elev_port, uint16_t elev_stbd, uint16_t flap_port, uint16_t flap_stbd, uint16_t rudder_port, uint16_t rudder_stbd, uint16_t strain_port, uint16_t strain_stbd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, ts);
    _mav_put_uint16_t(buf, 12, elev_port);
    _mav_put_uint16_t(buf, 14, elev_stbd);
    _mav_put_uint16_t(buf, 16, flap_port);
    _mav_put_uint16_t(buf, 18, flap_stbd);
    _mav_put_uint16_t(buf, 20, rudder_port);
    _mav_put_uint16_t(buf, 22, rudder_stbd);
    _mav_put_uint16_t(buf, 24, strain_port);
    _mav_put_uint16_t(buf, 26, strain_stbd);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AD7606_DATA, buf, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
#else
    mavlink_ad7606_data_t *packet = (mavlink_ad7606_data_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->ts = ts;
    packet->elev_port = elev_port;
    packet->elev_stbd = elev_stbd;
    packet->flap_port = flap_port;
    packet->flap_stbd = flap_stbd;
    packet->rudder_port = rudder_port;
    packet->rudder_stbd = rudder_stbd;
    packet->strain_port = strain_port;
    packet->strain_stbd = strain_stbd;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AD7606_DATA, (const char *)packet, MAVLINK_MSG_ID_AD7606_DATA_MIN_LEN, MAVLINK_MSG_ID_AD7606_DATA_LEN, MAVLINK_MSG_ID_AD7606_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE AD7606_DATA UNPACKING


/**
 * @brief Get field timestamp from ad7606_data message
 *
 * @return  
 */
static inline uint64_t mavlink_msg_ad7606_data_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field ts from ad7606_data message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_ad7606_data_get_ts(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field elev_port from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_elev_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field elev_stbd from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_elev_stbd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field flap_port from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_flap_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field flap_stbd from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_flap_stbd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field rudder_port from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_rudder_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field rudder_stbd from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_rudder_stbd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field strain_port from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_strain_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field strain_stbd from ad7606_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_ad7606_data_get_strain_stbd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Decode a ad7606_data message into a struct
 *
 * @param msg The message to decode
 * @param ad7606_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_ad7606_data_decode(const mavlink_message_t* msg, mavlink_ad7606_data_t* ad7606_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ad7606_data->timestamp = mavlink_msg_ad7606_data_get_timestamp(msg);
    ad7606_data->ts = mavlink_msg_ad7606_data_get_ts(msg);
    ad7606_data->elev_port = mavlink_msg_ad7606_data_get_elev_port(msg);
    ad7606_data->elev_stbd = mavlink_msg_ad7606_data_get_elev_stbd(msg);
    ad7606_data->flap_port = mavlink_msg_ad7606_data_get_flap_port(msg);
    ad7606_data->flap_stbd = mavlink_msg_ad7606_data_get_flap_stbd(msg);
    ad7606_data->rudder_port = mavlink_msg_ad7606_data_get_rudder_port(msg);
    ad7606_data->rudder_stbd = mavlink_msg_ad7606_data_get_rudder_stbd(msg);
    ad7606_data->strain_port = mavlink_msg_ad7606_data_get_strain_port(msg);
    ad7606_data->strain_stbd = mavlink_msg_ad7606_data_get_strain_stbd(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AD7606_DATA_LEN? msg->len : MAVLINK_MSG_ID_AD7606_DATA_LEN;
        memset(ad7606_data, 0, MAVLINK_MSG_ID_AD7606_DATA_LEN);
    memcpy(ad7606_data, _MAV_PAYLOAD(msg), len);
#endif
}
