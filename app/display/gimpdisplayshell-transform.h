/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_DISPLAY_SHELL_TRANSFORM_H__
#define __GIMP_DISPLAY_SHELL_TRANSFORM_H__


/*  zoom: functions to transform from image space to unrotated display
 *  space and back, taking into account scroll offset and scale
 */

void  gimp_display_shell_zoom_coords          (const GimpDisplayShell *shell,
                                               const GimpCoords       *image_coords,
                                               GimpCoords             *display_coords);
void  gimp_display_shell_unzoom_coords        (const GimpDisplayShell *shell,
                                               const GimpCoords       *display_coords,
                                               GimpCoords             *image_coords);

void  gimp_display_shell_zoom_xy              (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gint                   *nx,
                                               gint                   *ny);
void  gimp_display_shell_unzoom_xy            (const GimpDisplayShell *shell,
                                               gint                    x,
                                               gint                    y,
                                               gint                   *nx,
                                               gint                   *ny,
                                               gboolean                round);

void  gimp_display_shell_zoom_xy_f            (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gdouble                *nx,
                                               gdouble                *ny);
void  gimp_display_shell_unzoom_xy_f          (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gdouble                *nx,
                                               gdouble                *ny);

void  gimp_display_shell_zoom_segments        (const GimpDisplayShell *shell,
                                               const GimpBoundSeg     *src_segs,
                                               GimpSegment            *dest_segs,
                                               gint                    n_segs,
                                               gdouble                 offset_x,
                                               gdouble                 offset_y);


/*  rotate: functions to transform from unrotated but zoomed display
 *  space to rotated display space and back
 */

void  gimp_display_shell_rotate_coords        (const GimpDisplayShell *shell,
                                               const GimpCoords       *image_coords,
                                               GimpCoords             *display_coords);
void  gimp_display_shell_unrotate_coords      (const GimpDisplayShell *shell,
                                               const GimpCoords       *display_coords,
                                               GimpCoords             *image_coords);

void  gimp_display_shell_rotate_xy            (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gint                   *nx,
                                               gint                   *ny);
void  gimp_display_shell_unrotate_xy          (const GimpDisplayShell *shell,
                                               gint                    x,
                                               gint                    y,
                                               gint                   *nx,
                                               gint                   *ny);

void  gimp_display_shell_rotate_xy_f          (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gdouble                *nx,
                                               gdouble                *ny);
void  gimp_display_shell_unrotate_xy_f        (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gdouble                *nx,
                                               gdouble                *ny);

void  gimp_display_shell_rotate_bounds        (GimpDisplayShell       *shell,
                                               gdouble                 x1,
                                               gdouble                 y1,
                                               gdouble                 x2,
                                               gdouble                 y2,
                                               gdouble                *nx1,
                                               gdouble                *ny1,
                                               gdouble                *nx2,
                                               gdouble                *ny2);
void  gimp_display_shell_unrotate_bounds      (GimpDisplayShell       *shell,
                                               gdouble                 x1,
                                               gdouble                 y1,
                                               gdouble                 x2,
                                               gdouble                 y2,
                                               gdouble                *nx1,
                                               gdouble                *ny1,
                                               gdouble                *nx2,
                                               gdouble                *ny2);


/*  transform: functions to transform from image space to rotated display
 *  space and back, taking into account scroll offset, scale, and rotation
 */

void  gimp_display_shell_transform_coords     (const GimpDisplayShell *shell,
                                               const GimpCoords       *image_coords,
                                               GimpCoords             *display_coords);
void  gimp_display_shell_untransform_coords   (const GimpDisplayShell *shell,
                                               const GimpCoords       *display_coords,
                                               GimpCoords             *image_coords);

void  gimp_display_shell_transform_xy         (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gint                   *nx,
                                               gint                   *ny);
void  gimp_display_shell_untransform_xy       (const GimpDisplayShell *shell,
                                               gint                    x,
                                               gint                    y,
                                               gint                   *nx,
                                               gint                   *ny,
                                               gboolean                round);

void  gimp_display_shell_transform_xy_f       (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gdouble                *nx,
                                               gdouble                *ny);
void  gimp_display_shell_untransform_xy_f     (const GimpDisplayShell *shell,
                                               gdouble                 x,
                                               gdouble                 y,
                                               gdouble                *nx,
                                               gdouble                *ny);

void  gimp_display_shell_transform_bounds     (const GimpDisplayShell *shell,
                                               gdouble                 x1,
                                               gdouble                 y1,
                                               gdouble                 x2,
                                               gdouble                 y2,
                                               gdouble                *nx1,
                                               gdouble                *ny1,
                                               gdouble                *nx2,
                                               gdouble                *ny2);
void  gimp_display_shell_untransform_bounds   (const GimpDisplayShell *shell,
                                               gdouble                 x1,
                                               gdouble                 y1,
                                               gdouble                 x2,
                                               gdouble                 y2,
                                               gdouble                *nx1,
                                               gdouble                *ny1,
                                               gdouble                *nx2,
                                               gdouble                *ny2);

void  gimp_display_shell_untransform_viewport (const GimpDisplayShell *shell,
                                               gint                   *x,
                                               gint                   *y,
                                               gint                   *width,
                                               gint                   *height);


#endif /* __GIMP_DISPLAY_SHELL_TRANSFORM_H__ */
