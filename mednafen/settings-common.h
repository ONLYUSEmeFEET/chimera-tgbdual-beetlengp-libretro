#ifndef _MDFN_SETTINGS_COMMON_H
#define _MDFN_SETTINGS_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
   MDFNST_INT = 0,
   MDFNST_UINT,
   MDFNST_BOOL,
   MDFNST_FLOAT,
   MDFNST_STRING,
   MDFNST_ENUM,
   MDFNST_ALIAS
} MDFNSettingType;

#define MDFNSF_NOFLAGS		0

#define MDFNSF_CAT_INPUT         (1 << 8)
#define MDFNSF_CAT_SOUND	      (1 << 9)
#define MDFNSF_CAT_VIDEO	      (1 << 10)
#define MDFNSF_EMU_STATE         (1 << 17)
#define MDFNSF_UNTRUSTED_SAFE	   (1 << 18)
#define MDFNSF_SUPPRESS_DOC	   (1 << 19)
#define MDFNSF_COMMON_TEMPLATE	(1 << 20)
#define MDFNSF_REQUIRES_RELOAD	(1 << 24)
#define MDFNSF_REQUIRES_RESTART	(1 << 25)

typedef struct
{
   const char *string;
   int number;
   const char *description;
   const char *description_extra;
} MDFNSetting_EnumList;

typedef struct
{
   const char *name;
   uint32_t flags;
   const char *description;
   const char *description_extra;

   MDFNSettingType type;
   const char *default_value;
   const char *minimum;
   const char *maximum;
   bool (*validate_func)(const char *name, const char *value);
   void (*ChangeNotification)(const char *name);
   const MDFNSetting_EnumList *enum_list;
} MDFNSetting;

typedef struct __MDFNCS
{
   char *name;
   char *value;
   char *game_override;    // per-game setting override(netplay_override > game_override > value, in precedence)

   const MDFNSetting *desc;
   void (*ChangeNotification)(const char *name);
   uint32_t name_hash;
} MDFNCS;

#ifdef __cplusplus
}
#endif

#endif
