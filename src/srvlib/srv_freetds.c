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

CS_VOID * CS_PUBLIC
freetds_srv_alloc (
  CS_INT size
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_alloc(%d)\n",
    size);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_alloc()\n");
  return (CS_FAIL);
} /* srv_alloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_alt_bind (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       item,
  CS_DATAFMT  *lclfmtp,
  CS_BYTE     *varaddrp,
  CS_INT      *varlenp,
  CS_SMALLINT *indp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_alt_bind(%p, %d, %d, %p, %p, %p, %p)\n",
    spp, altid, item, lclfmtp, varaddrp, varlenp, indp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_alt_bind()\n");
  return (CS_FAIL);
} /* srv_alt_bind() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_alt_descfmt (
  SRV_PROC   *spp,
  CS_INT      altid,
  CS_INT      optype,
  CS_INT      operand,
  CS_INT      item,
  CS_DATAFMT *rmtfmtp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_alt_descfmt(%p, %d, %d, %d, %d, %p)\n",
    spp, altid, optype, operand, item, rmtfmtp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_alt_descfmt()\n");
  return (CS_FAIL);
} /* srv_alt_descfmt() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_alt_exist (
  SRV_PROC *spp,
  CS_INT    altid
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_alt_exist(%p, %d)\n",
    spp, altid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_alt_exist()\n");
  return (CS_FAIL);
} /* srv_alt_exist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_alt_header (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       numbylist,
  CS_SMALLINT *bylistarray
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_alt_header(%p, %d, %d, %p)\n",
    spp, altid, numbylist, bylistarray);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_alt_header()\n");
  return (CS_FAIL);
} /* srv_alt_header() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_alt_xferdata (
  SRV_PROC *spp,
  CS_INT    altid
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_alt_xferdata(%p, %d)\n",
    spp, altid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_alt_xferdata()\n");
  return (CS_FAIL);
} /* srv_alt_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_bind (
  SRV_PROC    *spp,
  CS_INT       cmd,
  CS_INT       type,
  CS_INT       item,
  CS_DATAFMT  *lclfmtp,
  CS_BYTE     *varaddrp,
  CS_INT      *varlenp,
  CS_SMALLINT *indp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_bind(%p, %d, %d, %d, %p, %p, %p, %p)\n",
    spp, cmd, type, item, lclfmtp, varaddrp, varlenp, indp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_bind()\n");
  return (CS_FAIL);
} /* srv_bind() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
freetds_srv_bmove (
  CS_VOID *from,
  CS_VOID *to,
  CS_INT   cnt
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_bmove(%p, %p, %d)\n",
    from, to, cnt);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_bmove()\n");
  return (CS_FAIL);
} /* srv_bmove() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
freetds_srv_bzero (
  CS_VOID *location,
  CS_INT   cnt
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_bzero(%p, %d)\n",
    location, cnt);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_bzero()\n");
  return (CS_FAIL);
} /* srv_bzero() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_callback (
  SRV_PROC         *srvproc,
  CS_INT            callback_type,
  SRV_CALLBACK_FUNC funcp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_callback(%p, %d, %p)\n",
    srvproc, callback_type, funcp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_callback()\n");
  return (CS_FAIL);
} /* srv_callback() */

/* ------------------------------------------------------------------------- */

CS_BOOL CS_PUBLIC
freetds_srv_capability (
  CS_INT capability
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_capability(%d)\n",
    capability);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_capability()\n");
  return (CS_FAIL);
} /* srv_capability() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_capability_info (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type,
  CS_INT    capability,
  CS_VOID  *val
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_capability_info(%p, %d, %d, %d, %p)\n",
    spp, cmd, type, capability, val);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_capability_info()\n");
  return (CS_FAIL);
} /* srv_capability_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_charset_set (
  SRV_PROC *srvproc,
  CS_INT    charset
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_charset_set(%p, %d)\n",
    srvproc, charset);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_charset_set()\n");
  return (CS_FAIL);
} /* srv_charset_set() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_createmsgq (
  CS_CHAR   *mqname,
  CS_INT     mqlen,
  SRV_OBJID *mqid
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_createmsgq(%s, %d, %p)\n",
    mqname, mqlen, mqid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_createmsgq()\n");
  return (CS_FAIL);
} /* srv_createmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_createmutex (
  CS_CHAR   *mutex_name,
  CS_INT     mutex_namelen,
  SRV_OBJID *mutex_id
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_createmutex(%s, %d, %p)\n",
    mutex_name, mutex_namelen, mutex_id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_createmutex()\n");
  return (CS_FAIL);
} /* srv_createmutex() */

/* ------------------------------------------------------------------------- */

SRV_PROC *CS_PUBLIC
freetds_srv_createproc (
  SRV_SERVER *server
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_createproc(%p)\n",
    server);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_createproc()\n");
  return (CS_FAIL);
} /* srv_createproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_cursor_props (
  SRV_PROC    *spp,
  CS_INT       cmd,
  SRV_CURDESC *cdp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_cursor_props(%p, %d, %p)\n",
    spp, cmd, cdp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_cursor_props()\n");
  return (CS_FAIL);
} /* srv_cursor_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_dbg_stack (
  SRV_PROC *srvproc,
  CS_INT depth,
  CS_RETCODE(CS_PUBLIC *funcp) (CS_CHAR *buf, CS_INT buflen)
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_dbg_stack(%p, %d, %p)\n",
    srvproc, depth, funcp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_dbg_stack()\n");
  return (CS_FAIL);
} /* srv_dbg_stack() */

/* ------------------------------------------------------------------------- */

int CS_PUBLIC
freetds_srv_dbg_stop (
  void
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_dbg_stop()\n");
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_dbg_stop()\n");
  return (CS_FAIL);
} /* srv_dbg_stop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_dbg_switch (
  CS_INT spid
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_dbg_switch(%d)\n",
    spid);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_dbg_switch()\n");
  return (CS_FAIL);
} /* srv_dbg_switch() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_define_event (
  SRV_SERVER *ssp,
  CS_INT      type,
  CS_CHAR    *namep,
  CS_INT      namelen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_define_event(%p, %d, %s, %d)\n",
    ssp, type, namep, namelen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_define_event()\n");
  return (CS_FAIL);
} /* srv_define_event() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_deletemsgq (
  CS_CHAR  *name,
  CS_INT    length,
  SRV_OBJID id
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_deletemsgq(%s, %d, %p)\n",
    name, length, id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_deletemsgq()\n");
  return (CS_FAIL);
} /* srv_deletemsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_deletemutex (
  CS_CHAR  *mutex_name,
  CS_INT    mutex_namelen,
  SRV_OBJID mutex_id
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_deletemutex(%s, %d, %p)\n",
    mutex_name, mutex_namelen, mutex_id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_deletemutex()\n");
  return (CS_FAIL);
} /* srv_deletemutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_descfmt (
  SRV_PROC   *spp,
  CS_INT      cmd,
  CS_INT      type,
  CS_INT      item,
  CS_DATAFMT *rmtfmtp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_descfmt(%p, %d, %d, %d, %p)\n",
    spp, cmd, type, item, rmtfmtp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_descfmt()\n");
  return (CS_FAIL);
} /* srv_descfmt() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_dropproc (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_dropproc(%p)\n",
    srvproc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_dropproc()\n");
  return (CS_FAIL);
} /* srv_dropproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_dynamic (
  SRV_PROC *srvproc,
  CS_INT    cmd,
  CS_INT    item,
  CS_VOID  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_dynamic(%p, %d, %d, %p, %d, %p)\n",
    srvproc, cmd, item, buf, buflen, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_dynamic()\n");
  return (CS_FAIL);
} /* srv_dynamic() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_envchange (
  SRV_PROC *spp,
  CS_INT    type,
  CS_CHAR  *oldvalp,
  CS_INT    oldvallen,
  CS_CHAR  *newvalp,
  CS_INT    newvallen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_envchange(%p, %d, %s, %d, %s, %d)\n",
    spp, type, oldvalp, oldvallen, newvalp, newvallen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_envchange()\n");
  return (CS_FAIL);
} /* srv_envchange() */

/* ------------------------------------------------------------------------- */

SRV_ERRHANDLE_FUNC CS_PUBLIC
freetds_srv_errhandle (
  SRV_ERRHANDLE_FUNC errhp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_errhandle(%p)\n",
    errhp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_errhandle()\n");
  return (CS_FAIL);
} /* srv_errhandle() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_event (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_event(%p, %d, %p)\n",
    srvproc, event, data);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_event()\n");
  return (CS_FAIL);
} /* srv_event() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_event_deferred (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_event_deferred(%p, %d, %p)\n",
    srvproc, event, data);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_event_deferred()\n");
  return (CS_FAIL);
} /* srv_event_deferred() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_free (
  CS_VOID *mp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_free(%p)\n",
    mp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_free()\n");
  return (CS_FAIL);
} /* srv_free() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_get_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_get_text(%p, %p, %d, %p)\n",
    spp, buf, buflen, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_get_text()\n");
  return (CS_FAIL);
} /* srv_get_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_getloginfo (
  SRV_PROC    *srvproc,
  CS_LOGINFO **loginfo
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_getloginfo(%p, %p, %p, %p)\n",
    srvproc, loginfo);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_getloginfo()\n");
  return (CS_FAIL);
} /* srv_getloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_getmsgq (
  SRV_OBJID mqid,
  CS_VOID **msgp,
  CS_INT    flags,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_getmsgq(%p, %p, %d, %p)\n",
    mqid, msgp, flags, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_getmsgq()\n");
  return (CS_FAIL);
} /* srv_getmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_getobjid (
  CS_INT     obj_type,
  CS_CHAR   *obj_name,
  CS_INT     obj_namelen,
  SRV_OBJID *obj_id,
  CS_INT    *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_getobjid(%d, %p, %d, %p, %p)\n",
    obj_type, obj_name, obj_namelen, obj_id, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_getobjid()\n");
  return (CS_FAIL);
} /* srv_getobjid() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_getobjname (
  CS_INT    obj_type,
  SRV_OBJID obj_id,
  CS_CHAR  *obj_name,
  CS_INT   *obj_namelen,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_getobjname(%d, %p, %s, %p, %p)\n",
    obj_type, obj_id, obj_name, obj_namelen, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_getobjname()\n");
  return (CS_FAIL);
} /* srv_getobjname() */

/* ------------------------------------------------------------------------- */

SRV_EVENTHANDLE_FUNC CS_PUBLIC
freetds_srv_handle (
  SRV_SERVER          *unused,
  CS_INT               event,
  SRV_EVENTHANDLE_FUNC eventhp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_handle(%p, %d, %p)\n",
    unused, event, eventhp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_handle()\n");
  return (CS_FAIL);
} /* srv_handle() */

/* ------------------------------------------------------------------------- */

SRV_SERVER *CS_PUBLIC
freetds_srv_init (
  SRV_CONFIG *scp,
  CS_CHAR    *servername,
  CS_INT      namelen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_init(%p, %s, %d)\n",
    scp, servername, namelen);

  assert(scp);
  assert(servername);
  assert(namelen >= 0);

  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_init()\n");
  return (CS_FAIL);
} /* srv_init() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_langcpy (
  SRV_PROC *srvproc,
  CS_INT    start,
  CS_INT    numbytes,
  CS_CHAR  *dest
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_langcpy(%p, %d, %d, %p)\n",
    srvproc, start, numbytes, dest);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_langcpy()\n");
  return (CS_FAIL);
} /* srv_langcpy() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_langlen (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_langlen(%p)\n",
    srvproc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_langlen()\n");
  return (CS_FAIL);
} /* srv_langlen() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
freetds_srv_langptr (
  SRV_PROC *srvproc,
  CS_INT    n
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_langptr(%p, %d)\n",
    srvproc, n);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_langptr()\n");
  return (CS_FAIL);
} /* srv_langptr() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_lockmutex (
  SRV_OBJID mutex_id,
  CS_INT    flags,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_lockmutex(%p, %d, %p)\n",
    mutex_id, flags, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_lockmutex()\n");
  return (CS_FAIL);
} /* srv_lockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_log (
  SRV_SERVER *server,
  CS_BOOL     dateflag,
  CS_CHAR    *msg,
  CS_INT      msglen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_log(%p, %d, %s, %d)\n",
    server, dateflag, msg, msglen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_log()\n");
  return (CS_FAIL);
} /* srv_log() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_mask (
  CS_INT          cmd,
  SRV_MASK_ARRAY *mp,
  CS_INT          bit,
  CS_BOOL        *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_mask(%d, %p, %d, %p)\n",
    cmd, mp, bit, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_mask()\n");
  return (CS_FAIL);
} /* srv_mask() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_msg (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT   *msgid,
  CS_INT   *status
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_msg(%p, %d, %p, %p)\n",
    spp, cmd, msgid, status);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_msg()\n");
  return (CS_FAIL);
} /* srv_msg() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_negotiate (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_negotiate(%p, %d, %d)\n",
    spp, cmd, type);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_negotiate()\n");
  return (CS_FAIL);
} /* srv_negotiate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_numparams (
  SRV_PROC *spp,
  CS_INT   *numparams
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_numparams(%p, %p)\n",
    spp, numparams);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_numparams()\n");
  return (CS_FAIL);
} /* srv_numparams() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_offset (
  SRV_PROC *spp,
  CS_INT    offtype,
  CS_INT    offvalue
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_offset(%p, %d, %d)\n",
    spp, offtype, offvalue);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_offset()\n");
  return (CS_FAIL);
} /* srv_offset() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_options (
  SRV_PROC *srvproc,
  CS_INT    cmd,
  CS_INT   *optcmd,
  CS_INT   *option,
  CS_VOID  *buf,
  CS_INT    bufsize,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_options(%p, %d, %p, %p, %p, %d, %p)\n",
    srvproc, cmd, optcmd, option, buf, bufsize, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_options()\n");
  return (CS_FAIL);
} /* srv_options() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_orderby (
  SRV_PROC *spp,
  CS_INT    numcols,
  CS_INT   *collist
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_orderby(%p, %d, %p)\n",
    spp, numcols, collist);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_orderby()\n");
  return (CS_FAIL);
} /* srv_orderby() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_poll (
  SRV_POLLFD *fdp,
  CS_INT      nfds,
  CS_INT      waitflag
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_poll(%p, %d, %d)\n",
    fdp, nfds, waitflag);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_poll()\n");
  return (CS_FAIL);
} /* srv_poll() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_props (
  CS_CONTEXT *contextp,
  CS_INT      cmd,
  CS_INT      property,
  CS_VOID    *buf,
  CS_INT      buflen,
  CS_INT     *outlen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_props(%p, %d, %d, %p, %d, %p)\n",
    contextp, cmd, property, buf, buflen, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_props()\n");
  return (CS_FAIL);
} /* srv_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_putmsgq (
  SRV_OBJID mqid,
  CS_VOID  *msgp,
  CS_INT    flags
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_putmsgq(%p, %p, %d)\n",
    mqid, msgp, flags);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_putmsgq()\n");
  return (CS_FAIL);
} /* srv_putmsgq() */

/* ------------------------------------------------------------------------- */

CS_VOID *CS_PUBLIC
freetds_srv_realloc (
  CS_VOID *ptr,
  CS_INT   size
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_realloc(%p, %d)\n",
    ptr, size);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_realloc()\n");
  return (CS_FAIL);
} /* srv_realloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_recvpassthru (
  SRV_PROC *srvproc,
  CS_BYTE **recv_bufp,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_recvpassthru(%p, %p, %p)\n",
    srvproc, recv_bufp, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_recvpassthru()\n");
  return (CS_FAIL);
} /* srv_recvpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regcreate (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regcreate(%p, %p)\n",
    srvproc, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regcreate()\n");
  return (CS_FAIL);
} /* srv_regcreate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regdefine (
  SRV_PROC            *srvproc,
  CS_CHAR             *name,
  CS_INT               namelen,
  SRV_EVENTHANDLE_FUNC handler
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regdefine(%p, %s, %d, %p)\n",
    srvproc, name, namelen, handler);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regdefine()\n");
  return (CS_FAIL);
} /* srv_regdefine() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regdrop (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regdrop(%p, %s, %d, %p)\n",
    srvproc, proc_name, namelen, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regdrop()\n");
  return (CS_FAIL);
} /* srv_regdrop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regexec (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regexec(%p, %p)\n",
    srvproc, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regexec()\n");
  return (CS_FAIL);
} /* srv_regexec() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_reginit (
  SRV_PROC *srvproc,
  CS_CHAR  *name,
  CS_INT    namelen,
  CS_INT    options
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_reginit(%p, %s, %d, %d)\n",
    srvproc, name, namelen, options);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_reginit()\n");
  return (CS_FAIL);
} /* srv_reginit() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_reglist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_reglist(%p, %p)\n",
    srvproc, proc_list);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_reglist()\n");
  return (CS_FAIL);
} /* srv_reglist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_reglistfree (
  SRV_PROC     *srvproc,
  SRV_PROCLIST *proc_list
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_reglistfree(%p, %p)\n",
    srvproc, proc_list);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_reglistfree()\n");
  return (CS_FAIL);
} /* srv_reglistfree() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regnowatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regnowatch(%p, %s, %d, %p)\n",
    srvproc, proc_name, namelen, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regnowatch()\n");
  return (CS_FAIL);
} /* srv_regnowatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regparam (
  SRV_PROC *srvproc,
  CS_CHAR  *paramname,
  CS_INT    namelen,
  CS_INT    type,
  CS_INT    datalen,
  CS_BYTE  *value
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regparam(%p, %s, %d, %d, %d, %p)\n",
    srvproc, paramname, namelen, type, datalen, value);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regparam()\n");
  return (CS_FAIL);
} /* srv_regparam() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regwatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT    options,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regwatch(%p, %s, %d, %d, %p)\n",
    srvproc, proc_name, namelen, options, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regwatch()\n");
  return (CS_FAIL);
} /* srv_regwatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_regwatchlist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_regwatchlist(%p, %p)\n",
    srvproc, proc_list);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_regwatchlist()\n");
  return (CS_FAIL);
} /* srv_regwatchlist() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
freetds_srv_rpcdb (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_rpcdb(%p, %p)\n",
    srvproc, len);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_rpcdb()\n");
  return (CS_FAIL);
} /* srv_rpcdb() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
freetds_srv_rpcname (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_rpcname(%p, %p)\n",
    srvproc, len);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_rpcname()\n");
  return (CS_FAIL);
} /* srv_rpcname() */

/* ------------------------------------------------------------------------- */

CS_SMALLINT CS_PUBLIC
freetds_srv_rpcnumber (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_rpcnumber(%p)\n",
    srvproc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_rpcnumber()\n");
  return (CS_FAIL);
} /* srv_rpcnumber() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_rpcoptions (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_rpcoptions(%p)\n",
    srvproc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_rpcoptions()\n");
  return (CS_FAIL);
} /* srv_rpcoptions() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
freetds_srv_rpcowner (
  SRV_PROC *spp,
  CS_INT   *lenp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_rpcowner(%p, %p)\n",
    spp, lenp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_rpcowner()\n");
  return (CS_FAIL);
} /* srv_rpcowner() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_run (
  SRV_SERVER *unused
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_run(%p)\n",
    unused);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_run()\n");
  return (CS_FAIL);
} /* srv_run() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
freetds_srv_select (
  CS_INT          nfds,
  SRV_MASK_ARRAY *readmask,
  SRV_MASK_ARRAY *writemask,
  SRV_MASK_ARRAY *exceptmask,
  CS_INT          waitflag
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_select(%d, %p, %p, %p, %d)\n",
    nfds, readmask, writemask, exceptmask, waitflag);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_select()\n");
  return (CS_FAIL);
} /* srv_select() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_send_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_send_text(%p, %p, %d)\n",
    spp, buf, buflen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_send_text()\n");
  return (CS_FAIL);
} /* srv_send_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_senddone (
  SRV_PROC *srvproc,
  CS_INT    status,
  CS_INT    transtate,
  CS_INT    count
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_senddone(%p, %d, %d, %d)\n",
    srvproc, status, transtate, count);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_senddone()\n");
  return (CS_FAIL);
} /* srv_senddone() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_sendinfo (
  SRV_PROC     *spp,
  CS_SERVERMSG *errmsg,
  CS_INT        tran_state
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_sendinfo(%p, %p, %d)\n",
    spp, errmsg, tran_state);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_sendinfo()\n");
  return (CS_FAIL);
} /* srv_sendinfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_sendpassthru (
  SRV_PROC *srvproc,
  CS_BYTE  *send_bufp,
  CS_INT   *info
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_sendpassthru(%p, %p, %p, %p)\n",
    srvproc, send_bufp, info);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_sendpassthru()\n");
  return (CS_FAIL);
} /* srv_sendpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_sendstatus (
  SRV_PROC *srvproc,
  CS_INT    value
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_sendstatus(%p, %p, %p, %p)\n",
    srvproc, value);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_sendstatus()\n");
  return (CS_FAIL);
} /* srv_sendstatus() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_setcontrol (
  SRV_PROC *spp,
  CS_INT    colnum,
  CS_BYTE  *ctrlinfo,
  CS_INT    ctrllen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_setcontrol(%p, %p, %p, %p)\n",
    spp,
    colnum, ctrlinfo, ctrllen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_setcontrol()\n");
  return (CS_FAIL);
} /* srv_setcontrol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_setloginfo (
  SRV_PROC   *srvproc,
  CS_LOGINFO *loginfo
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_setloginfo(%p, %p, %p, %p)\n",
    srvproc, loginfo);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_setloginfo()\n");
  return (CS_FAIL);
} /* srv_setloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_setpri (
  SRV_PROC *srvproc,
  CS_INT    mode,
  CS_INT    priority
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_setpri(%p, %p, %p, %p)\n",
    srvproc,
    mode, priority);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_setpri()\n");
  return (CS_FAIL);
} /* srv_setpri() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_sigdump (
  CS_INT sig
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_sigdump(%p, %p, %p, %p)\n",
    sig);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_sigdump()\n");
  return (CS_FAIL);
} /* srv_sigdump() */

/* ------------------------------------------------------------------------- */

SRV_SIGNAL_FUNC CS_PUBLIC
freetds_srv_signal (
  CS_INT          sig,
  SRV_SIGNAL_FUNC funcp
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_signal(%p, %p, %p, %p)\n",
    sig,
    funcp);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_signal()\n");
  return (CS_FAIL);
} /* srv_signal() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_sleep (
  CS_VOID *sleepevent,
  CS_CHAR *sleeplabel,
  CS_INT   sleepflags,
  CS_INT  *info,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_sleep(%p, %p, %p, %p)\n",
    sleepevent,
    sleeplabel, sleepflags, info, reserved1, reserved2);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_sleep()\n");
  return (CS_FAIL);
} /* srv_sleep() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_spawn (
  SRV_PROC             **srvproc,
  CS_INT                 stacksize,
  SRV_SERVICETHREAD_FUNC funcp,
  CS_VOID               *argp,
  CS_INT                 priority
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_spawn(%p, %p, %p, %p)\n",
    srvproc,
    stacksize, funcp, argp, priority);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_spawn()\n");
  return (CS_FAIL);
} /* srv_spawn() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
freetds_srv_symbol (
  CS_INT  type,
  CS_INT  symbol,
  CS_INT *len
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_symbol(%p, %p, %p, %p)\n",
    type,
    symbol, len);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_symbol()\n");
  return (CS_FAIL);
} /* srv_symbol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_tabcolname (
  SRV_PROC      *spp,
  CS_INT         colnum,
  CS_BROWSEDESC *bd
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_tabcolname(%p, %p, %p, %p)\n",
    spp,
    colnum, bd);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_tabcolname()\n");
  return (CS_FAIL);
} /* srv_tabcolname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_tabname (
  SRV_PROC *spp,
  CS_INT    tablenum,
  CS_CHAR  *tablename,
  CS_INT    namelen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_tabname(%p, %p, %p, %p)\n",
    spp,
    tablenum, tablename, namelen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_tabname()\n");
  return (CS_FAIL);
} /* srv_tabname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_termproc (
  SRV_PROC *srvproc
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_termproc(%p, %p, %p, %p)\n",
    srvproc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_termproc()\n");
  return (CS_FAIL);
} /* srv_termproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_text_info (
  SRV_PROC  *spp,
  CS_INT     cmd,
  CS_INT     item,
  CS_IODESC *iodesc
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_text_info(%p, %p, %p, %p)\n",
    spp,
    cmd, item, iodesc);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_text_info()\n");
  return (CS_FAIL);
} /* srv_text_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_thread_props (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    property,
  CS_VOID  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_thread_props(%p, %d, %d, %p, %d, %p)\n",
    spp, cmd, property, buf, buflen, outlen);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_thread_props()\n");
  return (CS_FAIL);
} /* srv_thread_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_ucwakeup (
  SRV_PROC *srvproc,
  CS_INT    wakeflags
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_ucwakeup(%p, %d)\n",
    srvproc,
    wakeflags);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_ucwakeup()\n");
  return (CS_FAIL);
} /* srv_ucwakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_unlockmutex (
  SRV_OBJID mutex_id
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_unlockmutex(%p)\n",
    mutex_id);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_unlockmutex()\n");
  return (CS_FAIL);
} /* srv_unlockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_version (
  CS_CONTEXT *cp,
  CS_INT      version
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_version(%p, %d)\n",
    cp, version);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_version()\n");
  return (CS_FAIL);
} /* srv_version() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_wakeup (
  CS_VOID *sleepevent,
  CS_INT   wakeflags,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_wakeup(%p, %d, %p, %p)\n",
    sleepevent,
    wakeflags, reserved1, reserved2);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_wakeup()\n");
  return (CS_FAIL);
} /* srv_wakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_xferdata (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_xferdata(%p, %d, %d)\n",
    spp, cmd, type);
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_xferdata()\n");
  return (CS_FAIL);
} /* srv_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
freetds_srv_yield (
  void
) {
  tdsdump_log(TDS_DBG_FUNC,
    "freetds_srv_yield()\n");
  tdsdump_log(TDS_DBG_FUNC, "UNIMPLEMENTED freetds_srv_yield()\n");
  return (CS_FAIL);
} /* srv_yield() */

/* :vi set ts=2 et sw=2: */

