/**
 * @file button.h
 * @author Joe Wingbermuehle
 * @date 2004-2006
 *
 * @brief Header file for button functions.
 *
 */

#ifndef BUTTON_H
#define BUTTON_H

#include "font.h"

struct IconNode;
struct VisualData;

/** Button types. */
typedef unsigned char ButtonType;
#define BUTTON_LABEL       0  /**< Label. */
#define BUTTON_MENU        1  /**< Menu item. */
#define BUTTON_MENU_ACTIVE 2  /**< Active menu item. */
#define BUTTON_TRAY        3  /**< Inactive tray button. */
#define BUTTON_TRAY_ACTIVE 4  /**< Active tray button. */
#define BUTTON_TASK        5  /**< Item in the task list. */
#define BUTTON_TASK_ACTIVE 6  /**< Active item in the task list. */

/** Alignment of content in a button. */
typedef unsigned char AlignmentType;
#define ALIGN_LEFT   0  /**< Left align. */
#define ALIGN_CENTER 1  /**< Center align. */

/** Data used for drawing a button. */
typedef struct {

   ButtonType type;           /**< The type of button to draw. */
   AlignmentType alignment;   /**< Alignment of the button content. */
   FontType font;             /**< The font for button text. */
   char border;               /**< Determine if we should have a border. */

   const struct VisualData *visual;  /**< Visual and depth to use. */
   Drawable drawable;         /**< The place to put the button. */

   int x, y;                  /**< The coordinates to render the button. */
   int width, height;         /**< The size of the button. */

   struct IconNode *icon;     /**< Icon used in the button. */
   const char *text;          /**< Text used in the button. */

} ButtonNode;

/** Draw a button.
 * @param bp The button to draw.
 */
void DrawButton(ButtonNode *bp);

/** Reset the contents of a ButtonNode structure.
 * @param bp The structure to reset.
 * @param d The drawable to use.
 * @param g The graphics context to use.
 */
void ResetButton(ButtonNode *bp, Drawable d,
                 const struct VisualData *visual);

#endif /* BUTTON_H */

