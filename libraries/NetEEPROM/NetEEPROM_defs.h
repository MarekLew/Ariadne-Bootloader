#ifndef NetEEPROM_defs_h
#define NetEEPROM_defs_h

#define NETEEPROM_SETTINGS_OFFSET 5
/* EEPROM partitioning */
#define NETEEPROM_MAJVER   0
#define NETEEPROM_MINVER   1
#define NETEEPROM_IMG_STAT 2
#define NETEEPROM_SIG_1    3
#define NETEEPROM_SIG_2    4
#define NETEEPROM_DATA     5
#define NETEEPROM_GW       6
#define NETEEPROM_SN       9
#define NETEEPROM_MAC      13
#define NETEEPROM_IP       19
#define NETEEPROM_SIG_3    23
#define NETEEPROM_PORT     24
#define NETEEPROM_SIG_4    26
#define NETEEPROM_PSIZE    27
#define NETEEPROM_PASS     28
#define NETEEPROM_END      63

/* EERPOM values */
#define NETEEPROM_SIG_1_VALUE   (0x55)
#define NETEEPROM_SIG_2_VALUE   (0xAA)
#define NETEEPROM_SIG_3_VALUE   (0xBB)
#define NETEEPROM_SIG_4_VALUE   (0xCC)

#define NETEEPROM_IMG_OK_VALUE  (0xEE)
#define NETEEPROM_IMG_BAD_VALUE (0xFF)

#define DEFAULT_IP_ADDR     192,168,1,128
#define DEFAULT_SUB_MASK    255,255,255,0
#define DEFAULT_GW_ADDR     192,168,1,1
#define DEFAULT_MAC_ADDR    0xDE,0xAD,0xBE,0xEF,0xFE,0xED

#endif