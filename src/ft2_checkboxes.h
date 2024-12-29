#ifndef _ft2_checkboxes_h_
#define _ft2_checkboxes_h_

#include <stdint.h>
#include <stdbool.h>

enum // CHECKBOXES
{
	CB_RES_1, // reserved

	// NIBBLES
	CB_NIBBLES_SURROUND,
	CB_NIBBLES_GRID,
	CB_NIBBLES_WRAP,

	// ADVANCED EDIT
	CB_ENABLE_MASKING,
	CB_COPY_MASK_0,
	CB_COPY_MASK_1,
	CB_COPY_MASK_2,
	CB_COPY_MASK_3,
	CB_COPY_MASK_4,
	CB_PASTE_MASK_0,
	CB_PASTE_MASK_1,
	CB_PASTE_MASK_2,
	CB_PASTE_MASK_3,
	CB_PASTE_MASK_4,
	CB_TRANSP_MASK_0,
	CB_TRANSP_MASK_1,
	CB_TRANSP_MASK_2,
	CB_TRANSP_MASK_3,
	CB_TRANSP_MASK_4,

	// INSTRUMENT EDITOR
	CB_INST_VENV,
	CB_INST_VENV_SUS,
	CB_INST_VENV_LOOP,
	CB_INST_PENV,
	CB_INST_PENV_SUS,
	CB_INST_PENV_LOOP,

	// INSTRUMENT EDITOR EXTENSION
	CB_INST_EXT_MIDI,
	CB_INST_EXT_MUTE,

	// TRIM
	CB_TRIM_PATT,
	CB_TRIM_INST,
	CB_TRIM_SAMP,
	CB_TRIM_CHAN,
	CB_TRIM_SMPD,
	CB_TRIM_CONV,

	// CONFIG
	CB_CONF_AUTOSAVE,

	// CONFIG AUDIO
	CB_CONF_VOL_RAMP,

	// CONFIG LAYOUT
	CB_CONF_PATTSTRETCH,
	CB_CONF_HEXCOUNT,
	CB_CONF_ACCIDENTAL,
	CB_CONF_SHOWZEROES,
	CB_CONF_FRAMEWORK,
	CB_CONF_LINECOLORS,
	CB_CONF_CHANNUMS,
	CB_CONF_SHOW_VOLCOL,
	CB_CONF_ENABLE_CUSTOM_POINTER,
	CB_CONF_SOFTWARE_MOUSE,

	// CONFIG MISCELLANEOUS
	CB_CONF_SAMP_CUT_TO_BUF,
	CB_CONF_PATT_CUT_TO_BUF,
	CB_CONF_KILL_NOTES_AT_STOP,
	CB_CONF_FILE_OVERWRITE_WARN,
	CB_CONF_MULTICHAN_REC,
	CB_CONF_MULTICHAN_JAZZ,
	CB_CONF_MULTICHAN_EDIT,
	CB_CONF_REC_KEYOFF,
	CB_CONF_QUANTIZATION,
	CB_CONF_CHANGE_PATTLEN_INS_DEL,
	CB_CONF_USE_OLD_ABOUT_SCREEN,
	CB_CONF_MIDI_ENABLE,
	CB_CONF_MIDI_REC_ALL,
	CB_CONF_MIDI_REC_TRANS,
	CB_CONF_MIDI_REC_VELOC,
	CB_CONF_MIDI_REC_AFTERTOUCH,
	CB_CONF_FORCE_VSYNC_OFF,
	CB_CONF_START_IN_FULLSCREEN,
	CB_CONF_STRETCH_IMAGE,
	CB_CONF_PIXEL_FILTER,

	CB_WAV_BPM_MODE,

	NUM_CHECKBOXES
};

enum
{
	CHECKBOX_UNPRESSED = 0,
	CHECKBOX_PRESSED = 1,
	CHECKBOX_UNCHECKED = 0,
	CHECKBOX_CHECKED = 1
};

#define CHECKBOX_W 13
#define CHECKBOX_H 12

typedef struct checkBox_t // DO NOT TOUCH!
{
	uint16_t x, y, clickAreaWidth, clickAreaHeight;
	void (*callbackFunc)(void);
	uint8_t state;
	bool checked, visible;
} checkBox_t;

void drawCheckBox(uint16_t checkBoxID);
void showCheckBox(uint16_t checkBoxID);
void hideCheckBox(uint16_t checkBoxID);
void handleCheckBoxesWhileMouseDown(void);
bool testCheckBoxMouseDown(void);
void testCheckBoxMouseRelease(void);

#endif
