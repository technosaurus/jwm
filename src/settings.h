/**
 * @file settings.h
 * @author Joe Wingbermuehle
 * @date 2012
 *
 * @brief JWM settings.
 *
 */

#ifndef SETTINGS_H
#define SETTINGS_H

/** Window snap modes. */
typedef unsigned char SnapModeType;
#define SNAP_NONE    0  /**< Don't snap. */
#define SNAP_SCREEN  1  /**< Snap to the edges of the screen. */
#define SNAP_BORDER  2  /**< Snap to all borders. */

/** Window move modes. */
typedef unsigned char MoveModeType;
#define MOVE_OPAQUE     0  /**< Show window contents while moving. */
#define MOVE_OUTLINE    1  /**< Show an outline while moving. */

/** Window resize modes. */
typedef unsigned char ResizeModeType;
#define RESIZE_OPAQUE   0  /**< Show window contents while resizing. */
#define RESIZE_OUTLINE  1  /**< Show an outline while resizing. */

/** Status window types. */
typedef unsigned char StatusWindowType;
#define SW_OFF       0  /**< No status window. */
#define SW_SCREEN    1  /**< Centered on screen. */
#define SW_WINDOW    2  /**< Centered on window. */
#define SW_CORNER    3  /**< Upper-left corner. */

/** Focus models. */
typedef unsigned char FocusModelType;
#define FOCUS_SLOPPY 0
#define FOCUS_CLICK  1

/** Taskbar insert modes. */
typedef unsigned char InsertModeType;
#define INSERT_LEFT  0
#define INSERT_RIGHT 1

/** Settings. */
typedef struct {
   unsigned int doubleClickSpeed;
   unsigned int doubleClickDelta;
   unsigned int snapDistance;
   unsigned int popupDelay;
   unsigned int trayOpacity;
   unsigned int activeClientOpacity;
   unsigned int inactiveClientOpacity;
   unsigned int borderWidth;
   unsigned int titleHeight;
   unsigned int desktopWidth;
   unsigned int desktopHeight;
   unsigned int desktopCount;
   unsigned int menuOpacity;
   unsigned int desktopDelay;
   SnapModeType snapMode;
   MoveModeType moveMode;
   StatusWindowType moveStatusType;
   StatusWindowType resizeStatusType;
   FocusModelType focusModel;
   ResizeModeType resizeMode;
   InsertModeType taskInsertMode;
   char popupEnabled;
   char exitConfirmation;
} Settings;

extern Settings settings;

/*@{*/
void InitializeSettings();
void StartupSettings();
#define ShutdownSettings()    (void)(0)
#define DestroySettings()     (void)(0)
/*@}*/

/** Update a string setting. */
void SetPathString(char **dest, const char *src);

#endif

