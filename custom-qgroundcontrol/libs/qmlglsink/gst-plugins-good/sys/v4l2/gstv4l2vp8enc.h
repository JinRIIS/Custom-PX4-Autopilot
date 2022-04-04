/*
 * Copyright (C) 2017 Collabora Inc.
 *    Author: Nicolas Dufresne <nicolas.dufresne@collabora.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef __GST_V4L2_VP8_ENC_H__
#define __GST_V4L2_VP8_ENC_H__

#include <gst/gst.h>
#include "gstv4l2videoenc.h"

G_BEGIN_DECLS
#define GST_TYPE_V4L2_VP8_ENC \
  (gst_v4l2_vp8_enc_get_type())
#define GST_V4L2_VP8_ENC(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_V4L2_VP8_ENC,GstV4l2Vp8Enc))
#define GST_V4L2_VP8_ENC_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_V4L2_VP8_ENC,GstV4l2Vp8EncClass))
#define GST_IS_V4L2_VP8_ENC(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_V4L2_VP8_ENC))
#define GST_IS_V4L2_VP8_ENC_CLASS(obj) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_V4L2_VP8_ENC))
typedef struct _GstV4l2Vp8Enc GstV4l2Vp8Enc;
typedef struct _GstV4l2Vp8EncClass GstV4l2Vp8EncClass;

struct _GstV4l2Vp8Enc
{
  GstV4l2VideoEnc parent;
};

struct _GstV4l2Vp8EncClass
{
  GstV4l2VideoEncClass parent_class;
};

GType gst_v4l2_vp8_enc_get_type (void);

gboolean gst_v4l2_is_vp8_enc (GstCaps * sink_caps, GstCaps * src_caps);

void gst_v4l2_vp8_enc_register (GstPlugin * plugin, const gchar * basename,
    const gchar * device_path, gint video_fd, GstCaps * sink_caps, GstCaps * src_caps);

G_END_DECLS
#endif /* __GST_V4L2_VP8_ENC_H__ */
