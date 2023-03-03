/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Sun May 31 09:10:09 2020. */

#ifndef PB_RELAYCONFIG_PB_H_INCLUDED
#define PB_RELAYCONFIG_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _RelayConfigMessage {
    uint8_t led_type;
    uint16_t led_start;
    uint16_t led_end;
    uint8_t power_on_state;
    uint8_t last_state;
    uint32_t study_index[4];
    uint32_t study[40];
    uint8_t led_light;
    uint8_t led_time;
    uint8_t switch_mode;
    uint8_t power_mode;
    uint8_t module_type;
    uint16_t report_interval;
    uint8_t led;
/* @@protoc_insertion_point(struct:RelayConfigMessage) */
} RelayConfigMessage;

/* Struct field encoding specification for nanopb */
extern const pb_field_t RelayConfigMessage_fields[15];

/* Maximum encoded size of messages (where known) */
#define RelayConfigMessage_size                  341

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define RELAYCONFIG_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
