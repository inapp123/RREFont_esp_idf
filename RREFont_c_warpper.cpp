#include "RREFont_c_warpper.h"
#include "RREFont.h"
#include <stdarg.h>

extern "C" {


CRREFont * CRREFont_new() {
    return (CRREFont *)(new RREFont());
}

void CRREFont_setFont(CRREFont *crf, RRE_Font *f){
    ((RREFont *)crf)->setFont(f);
}

void CRREFont_init(CRREFont *crf,void (*rectFun)(int x, int y, int w, int h, int c), int swd, int sht){
    ((RREFont *)crf)->init(rectFun, swd, sht);
}

void CRREFont_setCR(CRREFont *crf, uint8_t _cr){
    ((RREFont *)crf)->setCR(_cr);
}

void CRREFont_setFg(CRREFont *crf, int _fg){
    ((RREFont *)crf)->setFg(_fg);
}

void CRREFont_setBg(CRREFont *crf, int _bg){
    ((RREFont *)crf)->setBg(_bg);
}

void CRREFont_setColor(CRREFont *crf, int c){
    ((RREFont *)crf)->setColor(c);
}

void CRREFont_setColorFGBG(CRREFont *crf, int c, int _bg){
    ((RREFont *)crf)->setColor(c, _bg);
}

void CRREFont_setBold(CRREFont *crf, uint8_t _bold){
    ((RREFont *)crf)->setBold(_bold);
}

void CRREFont_setSpacing(CRREFont *crf, uint8_t sp){
    ((RREFont *)crf)->setSpacing(sp);
}

void CRREFont_setSpacingY(CRREFont *crf, uint8_t sp){
    ((RREFont *)crf)->setSpacingY(sp);
}

void CRREFont_setScaleXY(CRREFont *crf, uint8_t _sx, uint8_t _sy){
    ((RREFont *)crf)->setScale(_sx, _sy);
}

void CRREFont_setScale(CRREFont *crf, uint8_t s){
    ((RREFont *)crf)->setScale(s);
}

void CRREFont_setFontMinWd(CRREFont *crf, uint8_t wd){
    ((RREFont *)crf)->setFontMinWd(wd);
}

void CRREFont_setCharMinWd(CRREFont *crf, uint8_t wd){
    ((RREFont *)crf)->setCharMinWd(wd);
}

void CRREFont_setDigitMinWd(CRREFont *crf, uint8_t wd){
    ((RREFont *)crf)->setDigitMinWd(wd);
}

unsigned char CRREFont_convertPolish(CRREFont *crf, unsigned char _c){
    return ((RREFont *)crf)->convertPolish(_c);
}

int CRREFont_getWidth(CRREFont *crf){
    return ((RREFont *)crf)->getWidth();
}

int CRREFont_getHeight(CRREFont *crf){
    return ((RREFont *)crf)->getHeight();
}

int CRREFont_charWidthNoSort(CRREFont *crf, uint8_t c, int *_xmin){
    return ((RREFont *)crf)->charWidthNoSort(c, _xmin);
}

int CRREFont_charWidthOptim(CRREFont *crf, uint8_t c, int *_xmin){
    return ((RREFont *)crf)->charWidthOptim(c, _xmin);
}

int CRREFont_charWidth(CRREFont *crf, uint8_t c, int *_xmin){
    return ((RREFont *)crf)->charWidth(c, _xmin);
}

int CRREFont_drawChar(CRREFont *crf, int x, int y, unsigned char c){
    return ((RREFont *)crf)->drawChar(x, y, c);
}

int CRREFont_strWidth(CRREFont *crf, char *str){
    return ((RREFont *)crf)->strWidth(str);
}

int CRREFont_printStr(CRREFont *crf, int xpos, int ypos, char *str){
    return ((RREFont *)crf)->printStr(xpos, ypos, str);
}

void CRREFont_setIsNumberFun(CRREFont *crf, bool (*fun)(uint8_t)){
    ((RREFont *)crf)->setIsNumberFun(fun);
}

void CRREFont_setFillRectFun(CRREFont *crf, void (*fun)(int x, int y, int w, int h, int c)){
    ((RREFont *)crf)->setFillRectFun(fun);
}

void CRREFont_delete(CRREFont *crf){
    delete (RREFont *)crf;
}

int CRREFont_printf(CRREFont *crf, int x, int y, char *fmt, ...){
    static char buf[1024];
    va_list args;
    va_start(args, fmt);
    vsprintf(buf, fmt, args);
    va_end(args);

    return ((RREFont *)crf)->printStr(x, y, buf);
}


}