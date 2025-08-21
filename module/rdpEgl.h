/*
Copyright 2018-2019 Jay Sorg

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

EGL

*/

#ifndef _RDPEGL_H
#define _RDPEGL_H

struct rdp_dma_buf_info
{
    uint32_t width;
    uint32_t height;
    uint16_t stride;
    uint32_t size;
    uint32_t format;
};

extern _X_EXPORT void *
rdpEglCreate(ScreenPtr screen);
extern _X_EXPORT int
rdpEglDestroy(void *eglptr);
extern _X_EXPORT Bool
rdpEglCaptureRfx(rdpClientCon *clientCon, RegionPtr in_reg, BoxPtr *out_rects,
                 int *num_out_rects, struct image_data *id);
int
rdpEglGetPixmapFd(rdpPtr dev, struct rdp_dma_buf_info *dma_buf_info);

#endif
