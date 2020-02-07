/* FreeTDS - Library of routines accessing Sybase and Microsoft databases
 * Copyright (C) 1998-2004, 2005, 2010  Brian Bruns, Bill Thompson
 * Copyright (C) 2014-2020 NEXTGRES, LLC.
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
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <cspublic.h>
#include <ctpublic.h>
#include <ospublic.h>
#include <bkpublic.h>
#include <ospublic.h>
#include <oserror.h>
//#include <tds.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* ------------------------------------------------------------------------- */

CS_VOID *CS_PUBLIC
_srv_alloc (
  CS_INT size
) {
  void *mem = malloc((size_t) size);

  if (NULL != mem) {
    return ((CS_VOID *) mem);
  } else {
    return ((CS_VOID *) NULL);
  }
} /* _srv_alloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_alt_bind (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       item,
  CS_DATAFMT  *lclfmtp,
  CS_BYTE     *varaddrp,
  CS_INT      *varlenp,
  CS_SMALLINT *indp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_alt_bind(%p, %d, %d, %p, %p, %p, %p)\n",
    spp, altid, item, lclfmtp, varaddrp, varlenp, indp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_alt_bind()\n");
  return (CS_FAIL);
} /* _srv_alt_bind() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_alt_descfmt (
  SRV_PROC   *spp,
  CS_INT      altid,
  CS_INT      optype,
  CS_INT      operand,
  CS_INT      item,
  CS_DATAFMT *rmtfmtp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_alt_descfmt(%p, %d, %d, %d, %d, %p)\n",
    spp, altid, optype, operand, item, rmtfmtp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_alt_descfmt()\n");
  return (CS_FAIL);
} /* _srv_alt_descfmt() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_alt_exist (
  SRV_PROC *spp,
  CS_INT    altid
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_alt_exist(%p, %d)\n", spp, altid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_alt_exist()\n");
  return (CS_FAIL);
} /* _srv_alt_exist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_alt_header (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       numbylist,
  CS_SMALLINT *bylistarray
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_alt_header(%p, %d, %d, %hd)\n",
    spp, altid, numbylist, bylistarray);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_alt_header()\n");
  return (CS_FAIL);
} /* _srv_alt_header() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_alt_xferdata (
  SRV_PROC *spp,
  CS_INT    altid
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_alt_xferdata(%p, %d)\n", spp, altid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_alt_xferdata()\n");
  return (CS_FAIL);
} /* _srv_alt_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_bind (
  SRV_PROC    *spp,
  CS_INT       cmd,
  CS_INT       type,
  CS_INT       item,
  CS_DATAFMT  *lclfmtp,
  CS_BYTE     *varaddrp,
  CS_INT      *varlenp,
  CS_SMALLINT *indp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_bind(%p, %d, %d, %d, %p, %p, %p, %p)\n",
    spp, cmd, type, item, lclfmtp, varaddrp, varlenp, indp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_bind()\n");
  return (CS_FAIL);
} /* _srv_bind() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
_srv_bmove (
  CS_VOID *from,
  CS_VOID *to,
  CS_INT   cnt
) {
  assert(from);
  assert(to);
  assert(cnt >= 0);

#if 0
  /*
   * XXX FIX
   *
   * After running into some odd behavior, it appears the real OpenServer uses
   * memcpy instead of the safer alternative, memmove. We default the behavior
   * to match OpenServer but, in the future, we may want to have a compile-time
   * flag...
   */
  memmove((void *) to, (const void *) from, (size_t) cnt);
#else
  memcpy((void *) to, (const void *) from, (size_t) cnt);
#endif
} /* _srv_bmove() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
_srv_bzero (
  CS_VOID *location,
  CS_INT   cnt
) {
  assert(location);
  assert(cnt >= 0);

  memset((void *) location, 0, (size_t) cnt);
} /* _srv_bzero() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_callback (
  SRV_PROC         *srvproc,
  CS_INT            callback_type,
  SRV_CALLBACK_FUNC funcp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_callback(%p, %d, %p)\n",
    srvproc, callback_type, funcp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_callback()\n");
  return (CS_FAIL);
} /* _srv_callback() */

/* ------------------------------------------------------------------------- */

CS_BOOL CS_PUBLIC
_srv_capability (
  CS_INT capability
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_capability(%d)\n", capability);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_capability()\n");

#if 0
  switch (capability) {
    case SRV_C_DEBUG:
    case SRV_C_EXIT:
    case SRV_C_RESUME:
    case SRV_C_PREEMPT:
    case SRV_C_SELECT:
    case SRV_C_SUSPEND:
    case SRV_C_TIMESLICE:
#ifdef SRV_POLL
    case SRV_POLL:
#endif /* SRV_POLL */
      {
        return (CS_FALSE);
      }

    default:
      return (CS_FALSE);
  }
#endif

  return (CS_FALSE);
} /* _srv_capability() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_capability_info (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type,
  CS_INT    capability,
  CS_VOID  *val
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_capability_info(%p, %d, %d, %d, %p)\n",
    spp, cmd, type, capability, val);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_capability_info()\n");
  return (CS_FAIL);
} /* _srv_capability_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_charset_set (
  SRV_PROC *srvproc,
  CS_INT    charset
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_charset_set(%p, %d)\n", srvproc, charset);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_charset_set()\n");
  return (CS_FAIL);
} /* _srv_charset_set() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_createmsgq (
  CS_CHAR   *mqname,
  CS_INT     mqlen,
  SRV_OBJID *mqid
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_createmsgq(%s, %d, %p)\n",
    mqname, mqlen, mqid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_createmsgq()\n");
  return (CS_FAIL);
} /* _srv_createmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_createmutex (
  CS_CHAR   *mutex_name,
  CS_INT     mutex_namelen,
  SRV_OBJID *mutex_id
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_createmutex(%s, %d, %p)\n",
    mutex_name, mutex_namelen, mutex_id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_createmutex()\n");
  return (CS_FAIL);
} /* _srv_createmutex() */

/* ------------------------------------------------------------------------- */

SRV_PROC *CS_PUBLIC
_srv_createproc (
  SRV_SERVER *server
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_createproc(%p)\n", server);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_createproc()\n");
  return (CS_FAIL);
} /* _srv_createproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_cursor_props (
  SRV_PROC    *spp,
  CS_INT       cmd,
  SRV_CURDESC *cdp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_cursor_props(%p, %d, %p)\n", spp, cmd, cdp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_cursor_props()\n");
  return (CS_FAIL);
} /* _srv_cursor_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_dbg_stack (
  SRV_PROC *srvproc,
  CS_INT depth,
  CS_RETCODE(CS_PUBLIC *funcp) (CS_CHAR *buf, CS_INT buflen)
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_dbg_stack(%p, %d, %p)\n",
    srvproc, depth, funcp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_dbg_stack()\n");
  return (CS_FAIL);
} /* _srv_dbg_stack() */

/* ------------------------------------------------------------------------- */

int CS_PUBLIC
_srv_dbg_stop (
  void
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_dbg_stop()\n");
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_dbg_stop()\n");
  return (CS_FAIL);
} /* _srv_dbg_stop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_dbg_switch (
  CS_INT spid
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_dbg_switch(%d)\n", spid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_dbg_switch()\n");
  return (CS_FAIL);
} /* _srv_dbg_switch() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_define_event (
  SRV_SERVER *ssp,
  CS_INT      type,
  CS_CHAR    *namep,
  CS_INT      namelen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_define_event(%p, %d, %s, %d)\n",
    ssp, type, namep, namelen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_define_event()\n");
  return (CS_FAIL);
} /* _srv_define_event() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_deletemsgq (
  CS_CHAR  *name,
  CS_INT    length,
  SRV_OBJID id
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_deletemsgq(%s, %d, %p)\n", name, length, id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_deletemsgq()\n");
  return (CS_FAIL);
} /* _srv_deletemsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_deletemutex (
  CS_CHAR  *mutex_name,
  CS_INT    mutex_namelen,
  SRV_OBJID mutex_id
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_deletemutex(%s, %d, %p)\n",
    mutex_name, mutex_namelen, mutex_id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_deletemutex()\n");
  return (CS_FAIL);
} /* _srv_deletemutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_descfmt (
  SRV_PROC   *spp,
  CS_INT      cmd,
  CS_INT      type,
  CS_INT      item,
  CS_DATAFMT *rmtfmtp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_descfmt(%p, %d, %d, %d, %p)\n",
    spp, cmd, type, item, rmtfmtp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_descfmt()\n");
  return (CS_FAIL);
} /* _srv_descfmt() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_dropproc (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_dropproc(%p)\n", srvproc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_dropproc()\n");
  return (CS_FAIL);
} /* _srv_dropproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_dynamic (
  SRV_PROC *srvproc,
  CS_INT    cmd,
  CS_INT    item,
  CS_VOID  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_dynamic(%p, %d, %d, %p, %d, %p)\n",
    srvproc, cmd, item, buf, buflen, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_dynamic()\n");
  return (CS_FAIL);
} /* _srv_dynamic() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_envchange (
  SRV_PROC *spp,
  CS_INT    type,
  CS_CHAR  *oldvalp,
  CS_INT    oldvallen,
  CS_CHAR  *newvalp,
  CS_INT    newvallen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_envchange(%p, %d, %p, %d, %p, %d)\n",
    spp, type, oldvalp, oldvallen, newvalp, newvallen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_envchange()\n");
  return (CS_FAIL);
} /* _srv_envchange() */

/* ------------------------------------------------------------------------- */

SRV_ERRHANDLE_FUNC CS_PUBLIC
_srv_errhandle (
  SRV_ERRHANDLE_FUNC errhp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_errhandle(%p)\n", errhp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_errhandle()\n");
  return (CS_FAIL);
} /* _srv_errhandle() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_event (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_event(%p, %d, %p)\n", srvproc, event, data);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_event()\n");
  return (CS_FAIL);
} /* _srv_event() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_event_deferred (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_event_deferred(%p, %d, %p)\n",
    srvproc, event, data);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_event_deferred()\n");
  return (CS_FAIL);
} /* _srv_event_deferred() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_free (
  CS_VOID *mp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_free(%p)\n", mp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_free()\n");

#if 0
  if (NULL != mp) {
    free(mp);
    return (CS_SUCCEED);
  } else {
    return (CS_FAIL);
  }
#endif
} /* _srv_free() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_get_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_get_text(%p, %p, %d, %p)\n",
    spp, buf, buflen, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_get_text()\n");
  return (CS_FAIL);
} /* _srv_get_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_getloginfo (
  SRV_PROC    *srvproc,
  CS_LOGINFO **loginfo
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_getloginfo(%p, %p)\n", srvproc, loginfo);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_getloginfo()\n");
  return (CS_FAIL);
} /* _srv_getloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_getmsgq (
  SRV_OBJID mqid,
  CS_VOID **msgp,
  CS_INT    flags,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_getmsgq(%p, %p, %d, %p)\n",
    mqid, msgp, flags, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_getmsgq()\n");
  return (CS_FAIL);
} /* _srv_getmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_getobjid (
  CS_INT     obj_type,
  CS_CHAR   *obj_name,
  CS_INT     obj_namelen,
  SRV_OBJID *obj_id,
  CS_INT    *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_getobjid(%d, %s, %d, %p, %p)\n",
    obj_type, obj_name, obj_namelen, obj_id, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_getobjid()\n");
  return (CS_FAIL);
} /* _srv_getobjid() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_getobjname (
  CS_INT    obj_type,
  SRV_OBJID obj_id,
  CS_CHAR  *obj_name,
  CS_INT   *obj_namelen,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_getobjname(%d, %p, %p, %p, %p)\n",
    obj_type, obj_id, obj_name, obj_namelen, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_getobjname()\n");
  return (CS_FAIL);
} /* _srv_getobjname() */

/* ------------------------------------------------------------------------- */

SRV_EVENTHANDLE_FUNC CS_PUBLIC
_srv_handle (
  SRV_SERVER          *unused,
  CS_INT               event,
  SRV_EVENTHANDLE_FUNC eventhp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_handle(%p, %d, %p)\n",
    unused, event, eventhp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_handle()\n");
  return (CS_FAIL);
} /* _srv_handle() */

/* ------------------------------------------------------------------------- */

SRV_SERVER *CS_PUBLIC
_srv_init (
  SRV_CONFIG *scp,
  CS_CHAR    *servername,
  CS_INT      namelen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_init(%p, %s, %d)\n",
    scp, servername, namelen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_init()\n");
#if 0
  assert(scp);
  assert(servername);
  assert(namelen >= 0);
#endif
  return (CS_FAIL);
} /* _srv_init() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_langcpy (
  SRV_PROC *srvproc,
  CS_INT    start,
  CS_INT    numbytes,
  CS_CHAR  *dest
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_langcpy(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_langcpy()\n");
  return (CS_FAIL);
} /* _srv_langcpy() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_langlen (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_langlen(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_langlen()\n");
  return (CS_FAIL);
} /* _srv_langlen() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
_srv_langptr (
  SRV_PROC *srvproc,
  CS_INT    n
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_langptr(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_langptr()\n");
  return (CS_FAIL);
} /* _srv_langptr() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_lockmutex (
  SRV_OBJID mutex_id,
  CS_INT    flags,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_lockmutex(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_lockmutex()\n");
  return (CS_FAIL);
} /* _srv_lockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_log (
  SRV_SERVER *server,
  CS_BOOL     dateflag,
  CS_CHAR    *msg,
  CS_INT      msglen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_log(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_log()\n");
  return (CS_FAIL);
} /* _srv_log() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_mask (
  CS_INT          cmd,
  SRV_MASK_ARRAY *mp,
  CS_INT          bit,
  CS_BOOL        *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_mask(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_mask()\n");
  return (CS_FAIL);
} /* _srv_mask() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_msg (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT   *msgid,
  CS_INT   *status
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_msg(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_msg()\n");
  return (CS_FAIL);
} /* _srv_msg() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_negotiate (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_negotiate(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_negotiate()\n");
  return (CS_FAIL);
} /* _srv_negotiate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_numparams (
  SRV_PROC *spp,
  CS_INT   *numparams
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_numparams(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_numparams()\n");
  return (CS_FAIL);
} /* _srv_numparams() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_offset (
  SRV_PROC *spp,
  CS_INT    offtype,
  CS_INT    offvalue
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_offset(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_offset()\n");
  return (CS_FAIL);
} /* _srv_offset() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_options (
  SRV_PROC *srvproc,
  CS_INT    cmd,
  CS_INT   *optcmd,
  CS_INT   *option,
  CS_VOID  *buf,
  CS_INT    bufsize,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_options(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_options()\n");
  return (CS_FAIL);
} /* _srv_options() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_orderby (
  SRV_PROC *spp,
  CS_INT    numcols,
  CS_INT   *collist
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_orderby(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_orderby()\n");
  return (CS_FAIL);
} /* _srv_orderby() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_poll (
  SRV_POLLFD *fdp,
  CS_INT      nfds,
  CS_INT      waitflag
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_poll(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_poll()\n");
  return (CS_FAIL);
} /* _srv_poll() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_props (
  CS_CONTEXT *contextp,
  CS_INT      cmd,
  CS_INT      property,
  CS_VOID    *buf,
  CS_INT      buflen,
  CS_INT     *outlen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_props(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_props()\n");
  return (CS_FAIL);
} /* _srv_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_putmsgq (
  SRV_OBJID mqid,
  CS_VOID  *msgp,
  CS_INT    flags
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_putmsgq(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_putmsgq()\n");
  return (CS_FAIL);
} /* _srv_putmsgq() */

/* ------------------------------------------------------------------------- */

CS_VOID *CS_PUBLIC
_srv_realloc (
  CS_VOID *ptr,
  CS_INT   size
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_realloc(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_realloc()\n");
  return (CS_FAIL);
} /* _srv_realloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_recvpassthru (
  SRV_PROC *srvproc,
  CS_BYTE **recv_bufp,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_recvpassthru(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_recvpassthru()\n");
  return (CS_FAIL);
} /* _srv_recvpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regcreate (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regcreate(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regcreate()\n");
  return (CS_FAIL);
} /* _srv_regcreate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regdefine (
  SRV_PROC            *srvproc,
  CS_CHAR             *name,
  CS_INT               namelen,
  SRV_EVENTHANDLE_FUNC handler
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regdefine(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regdefine()\n");
  return (CS_FAIL);
} /* _srv_regdefine() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regdrop (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regdrop(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regdrop()\n");
  return (CS_FAIL);
} /* _srv_regdrop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regexec (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regexec(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regexec()\n");
  return (CS_FAIL);
} /* _srv_regexec() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_reginit (
  SRV_PROC *srvproc,
  CS_CHAR  *name,
  CS_INT    namelen,
  CS_INT    options
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_reginit(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_reginit()\n");
  return (CS_FAIL);
} /* _srv_reginit() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_reglist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_reglist(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_reglist()\n");
  return (CS_FAIL);
} /* _srv_reglist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_reglistfree (
  SRV_PROC     *srvproc,
  SRV_PROCLIST *proc_list
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_reglistfree(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_reglistfree()\n");
  return (CS_FAIL);
} /* _srv_reglistfree() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regnowatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regnowatch(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regnowatch()\n");
  return (CS_FAIL);
} /* _srv_regnowatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regparam (
  SRV_PROC *srvproc,
  CS_CHAR  *paramname,
  CS_INT    namelen,
  CS_INT    type,
  CS_INT    datalen,
  CS_BYTE  *value
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regparam(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regparam()\n");
  return (CS_FAIL);
} /* _srv_regparam() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regwatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT    options,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regwatch(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regwatch()\n");
  return (CS_FAIL);
} /* _srv_regwatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_regwatchlist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_regwatchlist(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_regwatchlist()\n");
  return (CS_FAIL);
} /* _srv_regwatchlist() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
_srv_rpcdb (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_rpcdb(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_rpcdb()\n");
  return (CS_FAIL);
} /* _srv_rpcdb() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
_srv_rpcname (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_rpcname(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_rpcname()\n");
  return (CS_FAIL);
} /* _srv_rpcname() */

/* ------------------------------------------------------------------------- */

CS_SMALLINT CS_PUBLIC
_srv_rpcnumber (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_rpcnumber(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_rpcnumber()\n");
  return (CS_FAIL);
} /* _srv_rpcnumber() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_rpcoptions (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_rpcoptions(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_rpcoptions()\n");
  return (CS_FAIL);
} /* _srv_rpcoptions() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
_srv_rpcowner (
  SRV_PROC *spp,
  CS_INT   *lenp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_rpcowner(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_rpcowner()\n");
  return (CS_FAIL);
} /* _srv_rpcowner() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_run (
  SRV_SERVER *unused
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_run(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_run()\n");
  return (CS_FAIL);
} /* _srv_run() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
_srv_select (
  CS_INT          nfds,
  SRV_MASK_ARRAY *readmask,
  SRV_MASK_ARRAY *writemask,
  SRV_MASK_ARRAY *exceptmask,
  CS_INT          waitflag
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_select(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_select()\n");
  return (CS_FAIL);
} /* _srv_select() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_send_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_send_text(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_send_text()\n");
  return (CS_FAIL);
} /* _srv_send_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_senddone (
  SRV_PROC *srvproc,
  CS_INT    status,
  CS_INT    transtate,
  CS_INT    count
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_senddone(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_senddone()\n");

  assert(srvproc);

  switch (status)
  {
    case SRV_DONE_FINAL:
      {
      }
      break;

    case SRV_DONE_MORE:
      {
      }
      break;

    case SRV_DONE_ERROR:
      {
      }
      break;

    case SRV_DONE_COUNT:
      {
      }
      break;

    case SRV_DONE_FLUSH:
      {
      }
      break;

    default:
      {
      }
      break;
  }

  tds_put_byte(srvproc->tds, TDS_DONE_TOKEN);
  tds_put_smallint(srvproc->tds, status);
  tds_put_smallint(srvproc->tds, transtate);
  if (IS_TDS72_PLUS(srvproc->tds->conn)) {
    tds_put_int8(srvproc->tds, count);
  } else {
    tds_put_int(srvproc->tds, count);
  }

  return (CS_FAIL);
} /* _srv_senddone() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_sendinfo (
  SRV_PROC     *spp,
  CS_SERVERMSG *errmsg,
  CS_INT        tran_state
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_sendinfo(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_sendinfo()\n");
  return (CS_FAIL);
} /* _srv_sendinfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_sendpassthru (
  SRV_PROC *srvproc,
  CS_BYTE  *send_bufp,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_sendpassthru(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_sendpassthru()\n");
  return (CS_FAIL);
} /* _srv_sendpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_sendstatus (
  SRV_PROC *srvproc,
  CS_INT    value
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_sendstatus(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_sendstatus()\n");
  return (CS_FAIL);
} /* _srv_sendstatus() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_setcontrol (
  SRV_PROC *spp,
  CS_INT    colnum,
  CS_BYTE  *ctrlinfo,
  CS_INT    ctrllen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_setcontrol(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_setcontrol()\n");
  return (CS_FAIL);
} /* _srv_setcontrol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_setloginfo (
  SRV_PROC   *srvproc,
  CS_LOGINFO *loginfo
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_setloginfo(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_setloginfo()\n");
  return (CS_FAIL);
} /* _srv_setloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_setpri (
  SRV_PROC *srvproc,
  CS_INT    mode,
  CS_INT    priority
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_setpri(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_setpri()\n");
  return (CS_FAIL);
} /* _srv_setpri() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_sigdump (
  CS_INT sig
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_sigdump(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_sigdump()\n");
  return (CS_FAIL);
} /* _srv_sigdump() */

/* ------------------------------------------------------------------------- */

SRV_SIGNAL_FUNC CS_PUBLIC
_srv_signal (
  CS_INT          sig,
  SRV_SIGNAL_FUNC funcp
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_signal(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_signal()\n");
  return (CS_FAIL);
} /* _srv_signal() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_sleep (
  CS_VOID *sleepevent,
  CS_CHAR *sleeplabel,
  CS_INT   sleepflags,
  CS_INT  *info,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_sleep(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_sleep()\n");
  return (CS_FAIL);
} /* _srv_sleep() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_spawn (
  SRV_PROC             **srvproc,
  CS_INT                 stacksize,
  SRV_SERVICETHREAD_FUNC funcp,
  CS_VOID               *argp,
  CS_INT                 priority
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_spawn(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_spawn()\n");
  return (CS_FAIL);
} /* _srv_spawn() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
_srv_symbol (
  CS_INT  type,
  CS_INT  symbol,
  CS_INT *len
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_symbol(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_symbol()\n");
  return (CS_FAIL);
} /* _srv_symbol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_tabcolname (
  SRV_PROC      *spp,
  CS_INT         colnum,
  CS_BROWSEDESC *bd
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_tabcolname(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_tabcolname()\n");
  return (CS_FAIL);
} /* _srv_tabcolname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_tabname (
  SRV_PROC *spp,
  CS_INT    tablenum,
  CS_CHAR  *tablename,
  CS_INT    namelen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_tabname(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_tabname()\n");
  return (CS_FAIL);
} /* _srv_tabname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_termproc (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_termproc(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_termproc()\n");
  return (CS_FAIL);
} /* _srv_termproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_text_info (
  SRV_PROC  *spp,
  CS_INT     cmd,
  CS_INT     item,
  CS_IODESC *iodesc
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_text_info(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_text_info()\n");
  return (CS_FAIL);
} /* _srv_text_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_thread_props (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    property,
  CS_VOID  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_thread_props(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_thread_props()\n");

#if 0
  SRV_T_APPLNAME
  SRV_T_BYTEORDER
  SRV_T_BULKTYPE
  SRV_T_BYTEORDER
  SRV_T_CHARTYPE
  SRV_T_CLIB
  SRV_T_CLIBVERS
  SRV_T_CLIENTLOGOUT
  SRV_T_CONVERTSHORT
  SRV_T_DUMPLOAD
  SRV_T_ENDPOINT
  SRV_T_EVENT
  SRV_T_EVENTDATA
  SRV_T_FLTTYPE
  SRV_T_GOTATTENTION
  SRV_T_HOSTNAME
  SRV_T_HOSTPROCID
  SRV_T_IODEAD
  SRV_T_LISTENADDR
  SRV_T_LOCALE
  SRV_T_LOCALID
  SRV_T_LOGINTYPE
  SRV_T_MACHINE
  SRV_T_MIGRATED
  SRV_T_MIGRATE_STATE
  SRV_T_NEGLOGIN
  SRV_T_NOTIFYCHARSET
  SRV_T_NOTIFYDB
  SRV_T_NOTIFYLANG
  SRV_T_NOTIFYPND
  SRV_T_NUMRMTPWDS
  SRV_T_PACKETSIZE
  SRV_T_PASSTHRU
  SRV_T_PRIORITY
  SRV_T_PWD
  SRV_T_REMOTEADDR
  SRV_T_RETPARMS
  SRV_T_RMTPWDS
  SRV_T_RMTSERVER
  SRV_T_ROWSENT
  SRV_T_SEC_CHANBIND
  SRV_T_SEC_CONFIDENTIALITY
  SRV_T_SEC_CREDTIMEOUT
  SRV_T_SEC_DATAORIGIN
  SRV_T_SEC_DELEGATION
  SRV_T_SEC_DELEGCRED
  SRV_T_SEC_DETECTREPLAY
  SRV_T_SEC_DETECTSEQ
  SRV_T_SEC_INTEGRITY
  SRV_T_SEC_MECHANISM
  SRV_T_SEC_MUTUALAUTH
  SRV_T_SEC_NETWORKAUTH
  SRV_T_SEC_SESSTIMEOUT
  SRV_T_SESSIONID
  SRV_T_SPID
  SRV_T_STACKLEFT
  SRV_T_TDSVERSION
  SRV_T_TYPE
  SRV_T_USER
  SRV_T_USERDATA
  SRV_T_USERVLANG
    SRV_T_USTATE
#endif

  return (CS_FAIL);
} /* _srv_thread_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_ucwakeup (
  SRV_PROC *srvproc,
  CS_INT    wakeflags
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_ucwakeup(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_ucwakeup()\n");
  return (CS_FAIL);
} /* _srv_ucwakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_unlockmutex (
  SRV_OBJID mutex_id
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_unlockmutex(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_unlockmutex()\n");
  return (CS_FAIL);
} /* _srv_unlockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_version (
  CS_CONTEXT *cp,
  CS_INT      version
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_version(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_version()\n");
  switch (version)
  {
#ifdef CS_VERSION_100
    case CS_VERSION_100:
#endif /* CS_VERSION_100 */
#ifdef CS_VERSION_110
    case CS_VERSION_110:
      {
#endif /* CS_VERSION_110 */
  }
  break;

  default:
    return (CS_FAIL);
}
return (CS_FAIL);
} /* _srv_version() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_wakeup (
  CS_VOID *sleepevent,
  CS_INT   wakeflags,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_wakeup(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_wakeup()\n");
  return (CS_FAIL);
} /* _srv_wakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_xferdata (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_xferdata(%p, %d, %d)\n", spp, cmd, type);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_xferdata()\n");
#if 0
  switch (type) {
    case SRV_RPCDATA: /* RPC parameter */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET:
            {
            }
            break;

          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_ROWDATA: /* Result row column */
      {
        switch (cmd) {
          case CS_SET:
            {
            }
            break;

          case CS_GET: /* fallthrough */
          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_CURDATA: /* Cursor parameter */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET: /* fallthrough */
          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_KEYDATA: /* Cursor key column */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET: /* fallthrough */
          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_ERRORDATA: /* Error message parameter */
      {
        switch (cmd) {
          case CS_SET:
            {
            }
            break;

          case CS_GET: /* fallthrough */
          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_DYNDATA: /* Dynamic SQL parameter */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET:
            {
            }
            break;

          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_NEGDATA: /* Negotiated login parameter */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET:
            {
            }
            break;

          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_MSGDATA: /* Message parameter */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET:
            {
            }
            break;

          default:
            return (CS_FAIL);
        }
      }
      break;

    case SRV_LANGDATA: /* Language parameter */
      {
        switch (cmd) {
          case CS_GET:
            {
            }
            break;

          case CS_SET: /* fallthrough */
          default:
            return (CS_FAIL);
        }
      }

    default:
      return (CS_FAIL);
  }
#endif
  return (CS_FAIL);
} /* _srv_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
_srv_yield (
  void
) {
  tdsdump_log(TDS_DBG_FUNC, "_srv_yield(%p, %p)\n", spp, row);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED _srv_yield()\n");
  return (CS_FAIL);
} /* _srv_yield() */

/* :vi set ts=2 et sw=2: */

