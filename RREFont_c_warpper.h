// This is just a warpper for RREFont.
#include "RREFont.h"
#include "esp_system.h"


typedef void CRREFont;

#ifdef __cplusplus
extern "C" {
#endif

CRREFont * CRREFont_new();
void CRREFont_setFont(CRREFont *crf, RRE_Font *f);
void CRREFont_init(CRREFont *crf,void (*rectFun)(int x, int y, int w, int h, int c), int swd, int sht);
void CRREFont_setCR(CRREFont *crf, uint8_t _cr);
void CRREFont_setFg(CRREFont *crf, int _fg);
void CRREFont_setBg(CRREFont *crf, int _bg);
void CRREFont_setColor(CRREFont *crf, int c);
void CRREFont_setColorFGBG(CRREFont *crf, int c, int _bg);
void CRREFont_setBold(CRREFont *crf, uint8_t _bold);
void CRREFont_setSpacing(CRREFont *crf, uint8_t sp);
void CRREFont_setSpacingY(CRREFont *crf, uint8_t sp);
void CRREFont_setScaleXY(CRREFont *crf, uint8_t _sx, uint8_t _sy);
void CRREFont_setScale(CRREFont *crf, uint8_t s);
void CRREFont_setFontMinWd(CRREFont *crf, uint8_t wd);
void CRREFont_setCharMinWd(CRREFont *crf, uint8_t wd);
void CRREFont_setDigitMinWd(CRREFont *crf, uint8_t wd);
unsigned char CRREFont_convertPolish(CRREFont *crf, unsigned char _c);
int CRREFont_getWidth(CRREFont *crf);
int CRREFont_getHeight(CRREFont *crf);
int CRREFont_charWidthNoSort(CRREFont *crf, uint8_t c, int *_xmin);
int CRREFont_charWidthOptim(CRREFont *crf, uint8_t c, int *_xmin);
int CRREFont_charWidth(CRREFont *crf, uint8_t c, int *_xmin);
int CRREFont_drawChar(CRREFont *crf, int x, int y, unsigned char c);
int CRREFont_strWidth(CRREFont *crf, char *str);
int CRREFont_printStr(CRREFont *crf, int xpos, int ypos, char *str);
void CRREFont_setIsNumberFun(CRREFont *crf, bool (*fun)(uint8_t));
void CRREFont_setFillRectFun(CRREFont *crf, void (*fun)(int x, int y, int w, int h, int c));
void CRREFont_delete(CRREFont *crf);
int CRREFont_printf(CRREFont *crf, int x, int y, char *fmt, ...);

#ifdef __cplusplus
}
#endif