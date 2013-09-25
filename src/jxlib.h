/**
 * @file jxlib.h
 * @author Joe Wingbermuehle
 * @date 2004-2006
 *
 * @brief Macros to wrap X calls for debugging.
 *
 */

#ifndef JXLIB_H
#define JXLIB_H

/* xcb_change_save_set(conn, XCB_SET_MODE_INSERT, client); */
#define JXAddToSaveSet( a, b ) \
   ( SetCheckpoint(), XAddToSaveSet( a, b ) )

/* xcb_alloc_color (connection, colormapId, r,g,b */
#define JXAllocColor( a, b, c ) \
   ( SetCheckpoint(), XAllocColor( a, b, c ) )

/*  */
#define JXGetRGBColormaps( a, b, c, d, e ) \
   ( SetCheckpoint(), XGetRGBColormaps( a, b, c, d, e ) )

/* */
#define JXQueryColor( a, b, c ) \
   ( SetCheckpoint(), XQueryColor( a, b, c ) )

/* xcb_allow_events(conn, mode, time) */
#define JXAllowEvents( a, b, c ) \
   ( SetCheckpoint(), XAllowEvents( a, b, c ) )

/* xcb_change_property(conn,mode,window,property,type,format,data_len,data) */
#define JXChangeProperty( a, b, c, d, e, f, g, h ) \
   ( SetCheckpoint(), XChangeProperty( a, b, c, d, e, f, g, h ) )

/* xcb_delete_property(conn, window, property) */
#define JXDeleteProperty( a, b, c ) \
   ( SetCheckpoint(), XDeleteProperty( a, b, c ) )

/* xcb_change_window_attributes(conn, window, value_mask, value_list) */
#define JXChangeWindowAttributes( a, b, c, d ) \
   ( SetCheckpoint(), XChangeWindowAttributes( a, b, c, d ) )

/*  */
#define JXCheckTypedEvent( a, b, c ) \
   ( SetCheckpoint(), XCheckTypedEvent( a, b, c ) )

/*  */
#define JXCheckTypedWindowEvent( a, b, c, d ) \
   ( SetCheckpoint(), XCheckTypedWindowEvent( a, b, c, d ) )

/* use xcb_clear_area with defaults */
#define JXClearWindow( a, b ) \
   ( SetCheckpoint(), XClearWindow( a, b ) )

/* xcb_clear_area(conn, exposures, window, x, y, width, height) */
#define JXClearArea( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XClearArea( a, b, c, d, e, f, g ) )

/* xcb_disconnect(conn) */
#define JXCloseDisplay( a ) \
   ( SetCheckpoint(), XCloseDisplay( a ) )

/* xcb_configure_window(conn, window, value_mask, value_list) */
#define JXConfigureWindow( a, b, c, d ) \
   ( SetCheckpoint(), XConfigureWindow( a, b, c, d ) )

/* NOP? */
#define JXConnectionNumber( a ) \
   ( SetCheckpoint(), XConnectionNumber( a ) )

/* xcb_copy_area(conn, src_drawable, dst_drawable, gc, src_x, src_y, dst_x, dst_y, width, height) */
/* consider XCB_COPY_FROM_PARENT on intial draw */
#define JXCopyArea( a, b, c, d, e, f, g, h, i, j ) \
   ( SetCheckpoint(), XCopyArea( a, b, c, d, e, f, g, h, i, j ) )

/* xcb_copy_plane(conn, src_drawable, dst_drawable, gc, src_x, src_y, dst_x, dst_y, width, height, bit_plane) */
#define JXCopyPlane( a, b, c, d, e, f, g, h, i, j, k ) \
   ( SetCheckpoint(), XCopyPlane( a, b, c, d, e, f, g, h, i, j, k ) )

/* see https://github.com/rocwang/heterosis/blob/master/heterosis.c or use
xcb_cursor_load_cursor(xcb_cursor_context_t *c, const char *name)
*/
#define JXCreateFontCursor( a, b ) \
   ( SetCheckpoint(), XCreateFontCursor( a, b ) )

/* xcb_create_gc(conn, cid, drawable, value_mask, value_list) */
#define JXCreateGC( a, b, c, d ) \
   ( SetCheckpoint(), XCreateGC( a, b, c, d ) )

/* xcb_image_create(width, height, XCB_IMAGE_FORMAT_XY_PIXMAP, 8, 1, 1, 8, XCB_IMAGE_ORDER_LSB_FIRST, XCB_IMAGE_ORDER_LSB_FIRST, 0, 0, data) */
#define JXCreateImage( a, b, c, d, e, f, g, h, i, j ) \
   ( \
      SetCheckpoint(), \
      XCreateImage( a, b, c, d, e, f, g, h, i, j ) \
   )

/* xcb_create_pixmap(display, depth, pix, d, width, height) */
#define JXCreatePixmap( a, b, c, d, e ) \
   ( SetCheckpoint(), XCreatePixmap( a, b, c, d, e ) )

/* xcb_create_pixmap_from_bitmap_data(display,drawable,data,width,height,depth,fg,bg,gcp)*/
#define JXCreatePixmapFromBitmapData( a, b, c, d, e, f, g, h ) \
   ( \
      SetCheckpoint(), \
      XCreatePixmapFromBitmapData( a, b, c, d, e, f, g, h ) \
   )

/*  */
#define JXCreateBitmapFromData( a, b, c, d, e ) \
   ( SetCheckpoint(), XCreateBitmapFromData( a, b, c, d, e ) )

/* xcb_create_window(conn,depth,wid,parent,x,y,width,height,border_width,_class,visual,value_mask,value_list)
add some defaults to make it "simple" */
#define JXCreateSimpleWindow( a, b, c, d, e, f, g, h, i ) \
   ( \
      SetCheckpoint(), \
      XCreateSimpleWindow( a, b, c, d, e, f, g, h, i ) \
   )

/* xcb_create_window(conn,depth,wid,parent,x,y,width,height,border_width,_class,visual,value_mask,value_list) 
NOTE: wid from xcb_generate_id(conn);*/
#define JXCreateWindow( a, b, c, d, e, f, g, h, i, j, k, l ) \
   ( \
      SetCheckpoint(), \
      XCreateWindow( a, b, c, d, e, f, g, h, i, j, k, l ) \
   )

/* xcb_change_window_attributes (connection, window, XCB_CW_CURSOR, cursor); */
#define JXDefineCursor( a, b, c ) \
   ( SetCheckpoint(), XDefineCursor( a, b, c ) )

/* xcb_image_destroy(image) */
#define JXDestroyImage( a ) \
   ( SetCheckpoint(), XDestroyImage( a ) )

/* xcb_destroy_window(conn,window) */
#define JXDestroyWindow( a, b ) \
   ( SetCheckpoint(), XDestroyWindow( a, b ) )

/* xcb_poly_point(conn, coordinate_mode, drawable, gc, points_len, points)
where points_len==1, but may be better to refactor */
#define JXDrawPoint( a, b, c, d, e ) \ 
   ( SetCheckpoint(), XDrawPoint( a, b, c, d, e ) )

/* xcb_poly_line(conn, coordinate_mode, drawable, gc, points_len, points) */
#define JXDrawLine( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XDrawLine( a, b, c, d, e, f, g ) )

/* xcb_poly_segment(conn, drawable, gc, segments_len, segments) */
#define JXDrawSegments( a, b, c, d, e ) \
   ( SetCheckpoint(), XDrawSegments( a, b, c, d, e ) )

/* xcb_poly_rectangle(conn, drawable, gc, rectangles_len, rectangles) */
#define JXDrawRectangle( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XDrawRectangle( a, b, c, d, e, f, g ) )

/* xcb_poly_fill_rectangle(conn, drawable, gc, rectangles_len, rectangles) */
#define JXFillRectangles( a, b, c, d, e ) \
   ( SetCheckpoint(), XFillRectangles( a, b, c, d, e ) )

/* xcb_poly_arc(conn, drawable, gc, arcs_len, arcs) */
#define JXDrawArcs( a, b, c, d, e ) \
   ( SetCheckpoint(), XDrawArcs( a, b, c, d, e ) )

/* xcb_poly_fill_arc(conn, drawable, gc, arcs_len, arcs) */
#define JXFillArcs( a, b, c, d, e ) \
   ( SetCheckpoint(), XFillArcs( a, b, c, d, e ) )

/* set attributes in gc for XCB_LINE_WIDTH and XCB_LINE_STYLE */
#define JXSetLineAttributes( a, b, c, d, e, f ) \
   ( SetCheckpoint(), XSetLineAttributes( a, b, c, d, e, f ) )

/* xcb_image_text_8(c, length, window, gc, x1, y1, label) */
#define JXDrawString( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XDrawString( a, b, c, d, e, f, g ) )

/* xcb_get_property(conn, _delete, window, XCB_ATOM_WM_NAME, XCB_ATOM_STRING, long_offset, long_length) */
#define JXFetchName( a, b, c ) \
   ( SetCheckpoint(), XFetchName( a, b, c ) )

/* xcb_poly_fill_rectangle(conn, drawable, gc, rectangles_len, rectangles) */
#define JXFillRectangle( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XFillRectangle( a, b, c, d, e, f, g ) )

/* xcb_flush (conn) */
#define JXFlush( a ) \
   ( SetCheckpoint(), XFlush( a ) )

/* free(a) */
#define JXFree( a ) \
   ( SetCheckpoint(), XFree( a ) )

/* xcb_free_colors(conn, cmap, plane_mask, pixels_len, pixels) */
#define JXFreeColors( a, b, c, d, e ) \
   ( SetCheckpoint(), XFreeColors( a, b, c, d, e ) )

/* xcb_free_cursor(conn, cursor) */
#define JXFreeCursor( a, b ) \
   ( SetCheckpoint(), XFreeCursor( a, b ) )

/*  */
#define JXFreeFont( a, b ) \
   ( SetCheckpoint(), XFreeFont( a, b ) )

#define JXFreeGC( a, b ) \
   ( SetCheckpoint(), XFreeGC( a, b ) )

#define JXFreeModifiermap( a ) \
   ( SetCheckpoint(), XFreeModifiermap( a ) )

/* xcb_free_pixmap(conn, pixmap) */
#define JXFreePixmap( a, b ) \
   ( SetCheckpoint(), XFreePixmap( a, b ) )

/* xcb_get_atom_name(conn, atom) */
#define JXGetAtomName( a, b ) \
   ( SetCheckpoint(), XGetAtomName( a, b ) )

/* xcb_get_modifier_mapping(conn) */
#define JXGetModifierMapping( a ) \
   ( SetCheckpoint(), XGetModifierMapping( a ) )

/*  */
#define JXGetSubImage( a, b, c, d, e, f, g, h, i, j, k ) \
   ( SetCheckpoint(), XGetSubImage( a, b, c, d, e, f, g, h, i, j, k ) )

/*  */
#define JXGetTransientForHint( a, b, c ) \
   ( SetCheckpoint(), XGetTransientForHint( a, b, c ) )

/*  */
#define JXGetClassHint( a, b, c ) \
   ( SetCheckpoint(), XGetClassHint( a, b, c ) )

/* xcb_get_window_attributes(conn, window) */
#define JXGetWindowAttributes( a, b, c ) \
   ( SetCheckpoint(), XGetWindowAttributes( a, b, c ) )

/* xcb_get_property(conn, delete, window, property, type, long_offset, long_length) */
#define JXGetWindowProperty( a, b, c, d, e, f, g, h, i, j, k, l ) \
   ( SetCheckpoint(), \
   XGetWindowProperty( a, b, c, d, e, f, g, h, i, j, k, l ) )

/*  */
#define JXGetWMColormapWindows( a, b, c, d ) \
   ( SetCheckpoint(), XGetWMColormapWindows( a, b, c, d ) )

#define JXGetWMNormalHints( a, b, c, d ) \
   ( SetCheckpoint(), XGetWMNormalHints( a, b, c, d ) )

#define JXSetIconSizes( a, b, c, d ) \
   ( SetCheckpoint(), XSetIconSizes( a, b, c, d ) )

#define JXSetWindowBorder( a, b, c ) \
   ( SetCheckpoint(), XSetWindowBorder( a, b, c ) )

#define JXGetWMHints( a, b ) \
   ( SetCheckpoint(), XGetWMHints( a, b ) )

#define JXGrabButton( a, b, c, d, e, f, g, h, i, j ) \
   ( SetCheckpoint(), XGrabButton( a, b, c, d, e, f, g, h, i, j ) )

/* xcb_key_symbols_get_keysym(syms, keycode, col); */
#define JXKeycodeToKeysym( a, b, c ) \
   ( SetCheckpoint(), XKeycodeToKeysym( a, b, c ) )

/* xcb_grab_key(conn,events,grab_window,modifiers,key,pointer_mode,keyboard_mode) */
#define JXGrabKey( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XGrabKey( a, b, c, d, e, f, g ) )

/* xcb_ungrab_key(conn, key, grab_window, modifiers) */
#define JXUngrabKey( a, b, c, d ) \
   ( SetCheckpoint(), XUngrabKey( a, b, c, d ) )

/* xcb_grab_keyboard(conn,owner_events, grab_window, time, pointer_mode, keyboard_mode) */
#define JXGrabKeyboard( a, b, c, d, e, f ) \
   ( SetCheckpoint(), XGrabKeyboard( a, b, c, d, e, f ) )

/* xcb_grab_pointer(conn,owner_events,grab_window,event_mask,pointer_mode,keyboard_mode,confine_to,cursor,time) */
#define JXGrabPointer( a, b, c, d, e, f, g, h, i ) \
   ( SetCheckpoint(), XGrabPointer( a, b, c, d, e, f, g, h, i ) )

/* xcb_grab_server(conn) */
#define JXGrabServer( a ) \
   ( SetCheckpoint(), XGrabServer( a ) )

/* xcb_install_colormap(conn, cmap) */
#define JXInstallColormap( a, b ) \
   ( SetCheckpoint(), XInstallColormap( a, b ) )

/* xcb_intern_atom(conn,only_if_exists,name_len,name) */
#define JXInternAtom( a, b, c ) \
   ( SetCheckpoint(), XInternAtom( a, b, c ) )

/*  */
#define JXKeysymToKeycode( a, b ) \
   ( SetCheckpoint(), XKeysymToKeycode( a, b ) )

/* xcb_kill_client(conn, resource) */
#define JXKillClient( a, b ) \
   ( SetCheckpoint(), XKillClient( a, b ) )

/* xcb_query_font (conn, font) */
#define JXLoadQueryFont( a, b ) \
   ( SetCheckpoint(), XLoadQueryFont( a, b ) )

/* xcb_unmap_window(conn,, window );uint32_t values[] = { XCB_STACK_MODE_ABOVE };
xcb_configure_window(conn, window, XCB_CONFIG_WINDOW_STACK_MODE, values)
xcb_map_window(conn, window) */
#define JXMapRaised( a, b ) \
   ( SetCheckpoint(), XMapRaised( a, b ) )

/* xcb_map_window(conn, window) */
#define JXMapWindow( a, b ) \
   ( SetCheckpoint(), XMapWindow( a, b ) )

/*  uint32_t values[] = { x, y, width, height }; xcb_configure_window(conn, window,
   XCB_CONFIG_WINDOW_X | XCB_CONFIG_WINDOW_Y | XCB_CONFIG_WINDOW_WIDTH | XCB_CONFIG_WINDOW_HEIGHT, values) */
#define JXMoveResizeWindow( a, b, c, d, e, f ) \
   ( SetCheckpoint(), XMoveResizeWindow( a, b, c, d, e, f ) )

/* xcb_configure_window(conn, window, XCB_CONFIG_WINDOW_X | XCB_CONFIG_WINDOW_Y, values) */
#define JXMoveWindow( a, b, c, d ) \
   ( SetCheckpoint(), XMoveWindow( a, b, c, d ) )

/*  */
#define JXNextEvent( a, b ) \
   ( SetCheckpoint(), XNextEvent( a, b ) )

/*  */
#define JXMaskEvent( a, b, c ) \
   ( SetCheckpoint(), XMaskEvent( a, b, c ) )

/*  */
#define JXCheckMaskEvent( a, b, c ) \
   ( SetCheckpoint(), XCheckMaskEvent( a, b, c ) )

/*  */
#define JXOpenDisplay( a ) \
   ( SetCheckpoint(), XOpenDisplay( a ) )

/* xcb_alloc_named_color(conn, cmap, name_len, name) */
#define JXParseColor( a, b, c, d ) \
   ( SetCheckpoint(), XParseColor( a, b, c, d ) )

#define JXPending( a ) \
   ( SetCheckpoint(), XPending( a ) )

#define JXPutBackEvent( a, b ) \
   ( SetCheckpoint(), XPutBackEvent( a, b ) )

/* xcb_get_image(conn, format, drawable, x, y, width, height, plane_mask) */
#define JXGetImage( a, b, c, d, e, f, g, h ) \
   ( SetCheckpoint(), XGetImage( a, b, c, d, e, f, g, h ) )

/* xcb_put_image(conn, format, drawable, gc, width, height, dst_x, dst_y, left_pad, depth, data_len, data) */
#define JXPutImage( a, b, c, d, e, f, g, h, i, j ) \
   ( SetCheckpoint(), XPutImage( a, b, c, d, e, f, g, h, i, j ) )

/* xcb_query_pointer(conn, window) */
#define JXQueryPointer( a, b, c, d, e, f, g, h, i ) \
   ( SetCheckpoint(), XQueryPointer( a, b, c, d, e, f, g, h, i ) )

/* xcb_query_tree(conn, window) */
#define JXQueryTree( a, b, c, d, e, f ) \
   ( SetCheckpoint(), XQueryTree( a, b, c, d, e, f ) )

/* xcb_reparent_window(conn, window, parent, x, y) */
#define JXReparentWindow( a, b, c, d, e ) \
   ( SetCheckpoint(), XReparentWindow( a, b, c, d, e ) )

/*  */
#define JXRemoveFromSaveSet( a, b ) \
   ( SetCheckpoint(), XRemoveFromSaveSet( a, b ) )

/* xcb_configure_window(conn, window, XCB_CONFIG_WINDOW_WIDTH | XCB_CONFIG_WINDOW_HEIGHT, values) */
#define JXResizeWindow( a, b, c, d ) \
   ( SetCheckpoint(), XResizeWindow( a, b, c, d ) )

/*  */
#define JXRestackWindows( a, b, c ) \
   ( SetCheckpoint(), XRestackWindows( a, b, c ) )

/*  */
#define JXRaiseWindow( a, b ) \
   ( SetCheckpoint(), XRaiseWindow( a, b ) )

/*  */
#define JXSelectInput( a, b, c ) \
   ( SetCheckpoint(), XSelectInput( a, b, c ) )

/*  */
#define JXSendEvent( a, b, c, d, e ) \
   ( SetCheckpoint(), XSendEvent( a, b, c, d, e ) )

/*  */
#define JXSetBackground( a, b, c ) \
   ( SetCheckpoint(), XSetBackground( a, b, c ) )

/*  */
#define JXSetClipMask( a, b, c ) \
   ( SetCheckpoint(), XSetClipMask( a, b, c ) )

/*  */
#define JXSetClipOrigin( a, b, c, d ) \
   ( SetCheckpoint(), XSetClipOrigin( a, b, c, d) )

/*  */
#define JXSetClipRectangles( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XSetClipRectangles( a, b, c, d, e, f, g ) )

/*  */
#define JXSetErrorHandler( a ) \
   ( SetCheckpoint(), XSetErrorHandler( a ) )

/*  */
#define JXSetFont( a, b, c ) \
   ( SetCheckpoint(), XSetFont( a, b, c ) )

/*  */
#define JXSetForeground( a, b, c ) \
   ( SetCheckpoint(), XSetForeground( a, b, c ) )

/*  */
#define JXSetInputFocus( a, b, c, d ) \
   ( SetCheckpoint(), XSetInputFocus( a, b, c, d ) )

/*  */
#define JXSetWindowBackground( a, b, c ) \
   ( SetCheckpoint(), XSetWindowBackground( a, b, c ) )

/*  */
#define JXSetWindowBorderWidth( a, b, c ) \
   ( SetCheckpoint(), XSetWindowBorderWidth( a, b, c ) )

/*  */
#define JXSetWMNormalHints( a, b, c ) \
   ( SetCheckpoint(), XSetWMNormalHints( a, b, c ) )

/*  */
#define JXShapeCombineRectangles( a, b, c, d, e, f, g, h, i ) \
   ( SetCheckpoint(), XShapeCombineRectangles( a, b, c, d, e, f, g, h, i ) )

/*  */
#define JXShapeCombineShape( a, b, c, d, e, f, g, h ) \
   ( SetCheckpoint(), XShapeCombineShape( a, b, c, d, e, f, g, h ) )

/*  */
#define JXShapeCombineMask( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XShapeCombineMask( a, b, c, d, e, f, g ) )

/*  */
#define JXShapeQueryExtension( a, b, c ) \
   ( SetCheckpoint(), XShapeQueryExtension( a, b, c ) )

/*  */
#define JXQueryExtension( a, b, c, d, e ) \
   ( SetCheckpoint(), XQueryExtension( a, b, c, d, e ) )

/*  */
#define JXShapeQueryExtents( a, b, c, d, e, f, g, h, i, j, k, l ) \
   ( SetCheckpoint(), \
   XShapeQueryExtents( a, b, c, d, e, f, g, h, i, j, k, l ) )

/*  */
#define JXShapeGetRectangles( a, b, c, d, e ) \
   ( SetCheckpoint(), XShapeGetRectangles( a, b, c, d, e ) )

/*  */
#define JXShapeSelectInput( a, b, c ) \
   ( SetCheckpoint(), XShapeSelectInput( a, b, c ) )

/*  */
#define JXStoreName( a, b, c ) \
   ( SetCheckpoint(), XStoreName( a, b, c ) )

/*  */
#define JXStringToKeysym( a ) \
   ( SetCheckpoint(), XStringToKeysym( a ) )

/*  */
#define JXSync( a, b ) \
   ( SetCheckpoint(), XSync( a, b ) )

/*  */
#define JXTextWidth( a, b, c ) \
   ( SetCheckpoint(), XTextWidth( a, b, c ) )

/*  */
#define JXUngrabButton( a, b, c, d ) \
   ( SetCheckpoint(), XUngrabButton( a, b, c, d ) )

/*  */
#define JXUngrabKeyboard( a, b ) \
   ( SetCheckpoint(), XUngrabKeyboard( a, b ) )

/*  */
#define JXUngrabPointer( a, b ) \
   ( SetCheckpoint(), XUngrabPointer( a, b ) )

/*  */
#define JXUngrabServer( a ) \
   ( SetCheckpoint(), XUngrabServer( a ) )

/*  */
#define JXUnmapWindow( a, b ) \
   ( SetCheckpoint(), XUnmapWindow( a, b ) )

/*  */
#define JXWarpPointer( a, b, c, d, e, f, g, h, i ) \
   ( SetCheckpoint(), XWarpPointer( a, b, c, d, e, f, g, h, i ) )

/*  */
#define JXSetSelectionOwner( a, b, c, d ) \
   ( SetCheckpoint(), XSetSelectionOwner( a, b, c, d ) )

/*  */
#define JXGetSelectionOwner( a, b ) \
   ( SetCheckpoint(), XGetSelectionOwner( a, b ) )

/*  */
#define JXSetRegion( a, b, c ) \
   ( SetCheckpoint(), XSetRegion( a, b, c ) )

/* XFT */

#define JXftFontOpenName( a, b, c ) \
   ( SetCheckpoint(), XftFontOpenName( a, b, c ) )

#define JXftFontOpenXlfd( a, b, c ) \
   ( SetCheckpoint(), XftFontOpenXlfd( a, b, c ) )

#define JXftDrawCreate( a, b, c, d ) \
   ( SetCheckpoint(), XftDrawCreate( a, b, c, d ) )

#define JXftDrawDestroy( a ) \
   ( SetCheckpoint(), XftDrawDestroy( a ) )

#define JXftTextExtentsUtf8( a, b, c, d, e ) \
   ( SetCheckpoint(), XftTextExtentsUtf8( a, b, c, d, e ) )

#define JXftDrawChange( a, b ) \
   ( SetCheckpoint(), XftDrawChange( a, b ) )

#define JXftDrawSetClipRectangles( a, b, c, d, e ) \
   ( SetCheckpoint(), XftDrawSetClipRectangles( a, b, c, d, e ) )

#define JXftDrawStringUtf8( a, b, c, d, e, f, g ) \
   ( SetCheckpoint(), XftDrawStringUtf8( a, b, c, d, e, f, g ) )

#define JXftColorFree( a, b, c, d ) \
   ( SetCheckpoint(), XftColorFree( a, b, c, d ) )

#define JXftColorAllocValue( a, b, c, d, e ) \
   ( SetCheckpoint(), XftColorAllocValue( a, b, c, d, e ) )

#define JXftFontClose( a, b ) \
   ( SetCheckpoint(), XftFontClose( a, b ) )

#define JXftDrawSetClip( a, b ) \
   ( SetCheckpoint(), XftDrawSetClip( a, b ) )

/* Xrender */
/* xcb_query_extension(c, strlen(ext->name), ext->name) */
#define JXRenderQueryExtension( a, b, c ) \
   ( SetCheckpoint(), XRenderQueryExtension( a, b, c ) )

#define JXRenderFindVisualFormat( a, b ) \
   ( SetCheckpoint(), XRenderFindVisualFormat( a, b ) )

#define JXRenderFindFormat( a, b, c, d ) \
   ( SetCheckpoint(), XRenderFindFormat( a, b, c, d ) )

#define JXRenderFindStandardFormat( a, b ) \
   ( SetCheckpoint(), XRenderFindStandardFormat( a, b ) )

/*xcb_render_create_picture(conn, root_picture, root_drawable, window_format, value_mask, value_list)*/
#define JXRenderCreatePicture( a, b, c, d, e ) \
   ( SetCheckpoint(), XRenderCreatePicture( a, b, c, d, e ) )

/* xcb_render_free_picture(conn, alpha_pict) */
#define JXRenderFreePicture( a, b ) \
   ( SetCheckpoint(), XRenderFreePicture( a, b ) )

/* xcb_render_composite(conn, XCB_RENDER_PICT_OP_OVER, pict_surfaces[0], alpha_pict , window_pict, f, g, h, i, j, k,l, m) */
#define JXRenderComposite( a, b, c, d, e, f, g, h, i, j, k, l, m ) \
   ( SetCheckpoint(), \
     XRenderComposite( a, b, c, d, e, f, g, h, i, j, k, l, m) )

#endif /* JXLIB_H */

