#ifndef __MMKEYS_H__
#define __MMKEYS_H__

typedef void (*mmkey_cbfunc)(UINT8 event);

#define MMKEY_PLAY	0x01
#define MMKEY_PREV	0x10
#define MMKEY_NEXT	0x11

// Defines for the DBUS Signal handler
#define SIGNAL_METADATA    0x01 // Metadata changed
#define SIGNAL_PLAYSTATUS  0x02 // Playback Status Changed
#define SIGNAL_SEEKSTATUS  0x04 // Seek Status Changed
#define SIGNAL_SEEK        0x08 // Seeked
#define SIGNAL_CONTROLS    0x10 // Playback controls need to be updated (CanGoNext/Previous)
#define SIGNAL_ALL         0xFF // All Signals

UINT8 MultimediaKeyHook_Init(void);
void MultimediaKeyHook_Deinit(void);
void MultimediaKeyHook_SetCallback(mmkey_cbfunc callbackFunc);

#endif	// __MMKEYS_H__
