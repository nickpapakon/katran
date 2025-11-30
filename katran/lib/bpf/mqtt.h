#ifndef __MQTT_H
#define __MQTT_H

#define MQTT_PORT 1883

struct mqtthdr {
#if defined(__LITTLE_ENDIAN_BITFIELD)
	__u8	flags:4,
		msg_type:4;
#elif defined (__BIG_ENDIAN_BITFIELD)
	__u8	msg_type:4,
  		flags:4;
#else
#error	"Please fix <asm/byteorder.h>"
#endif
    // __u8  control_type;   // Control Packet type and flags
    __u8  remaining_len;  // Remaining Length
};

#endif // of __MQTT_H