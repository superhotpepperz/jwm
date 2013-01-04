/**
 * @file popup.h
 * @author Joe Wingbermuehle
 * @date 2004-2006
 *
 * @brief Header for popup functions.
 *
 */

#ifndef POPUP_H
#define POPUP_H

struct TimeType;

/*@{*/
void InitializePopup();
void StartupPopup();
void ShutdownPopup();
void DestroyPopup();
/*@}*/

/** Calculate dimensions of a popup window given the popup text.
 * @param text The text to measure.
 * @param width The width output.
 * @param height The height output.
 */
void MeasurePopupText(const char *text, int *width, int *height);

/** Show a popup window.
 * @param x The x coordinate of the left edge of the popup window.
 * @param y The y coordinate of the bottom edge of the popup window.
 * @param text The text to display in the popup.
 */
void ShowPopup(int x, int y, const char *text);

/** Signal the popup window.
 * @param now The effective time of the signal.
 * @param x The x-coordinate of the mouse.
 * @param y The y-coordinate of the mouse.
 */
void SignalPopup(const struct TimeType *now, int x, int y);

/** Process a popup event.
 * @param event The event to process.
 * @return 1 if handled, 0 otherwise.
 */
char ProcessPopupEvent(const XEvent *event);

#endif /* POPUP_H */

