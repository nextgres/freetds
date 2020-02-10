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
srv_alloc (
  CS_INT size
) {
  return (freetds_srv_alloc(size));
} /* srv_alloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_bind (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       item,
  CS_DATAFMT  *lclfmtp,
  CS_BYTE     *varaddrp,
  CS_INT      *varlenp,
  CS_SMALLINT *indp
) {
  return (freetds_srv_alt_bind(spp, altid, item, lclfmtp, varaddrp, varlenp,
    indp));
} /* srv_alt_bind() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_descfmt (
  SRV_PROC   *spp,
  CS_INT      altid,
  CS_INT      optype,
  CS_INT      operand,
  CS_INT      item,
  CS_DATAFMT *rmtfmtp
) {
  return (freetds_srv_alt_descfmt(spp, altid, optype, operand, item, rmtfmtp));
} /* srv_alt_descfmt() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_exist (
  SRV_PROC *spp,
  CS_INT    altid
) {
  return (freetds_srv_alt_exist(spp, altid));
} /* srv_alt_exist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_header (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       numbylist,
  CS_SMALLINT *bylistarray
) {
  return (freetds_srv_alt_header(spp, altid, numbylist, bylistarray));
} /* srv_alt_header() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_xferdata (
  SRV_PROC *spp,
  CS_INT    altid
) {
  return (freetds_srv_alt_xferdata(spp, altid));
} /* srv_alt_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_bind (
  SRV_PROC    *spp,
  CS_INT       cmd,
  CS_INT       type,
  CS_INT       item,
  CS_DATAFMT  *lclfmtp,
  CS_BYTE     *varaddrp,
  CS_INT      *varlenp,
  CS_SMALLINT *indp
) {
  return (freetds_srv_bind(spp, cmd, type, item, lclfmtp, varaddrp, varlenp,
    indp));
} /* srv_bind() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
srv_bmove (
  CS_VOID *from,
  CS_VOID *to,
  CS_INT   cnt
) {
  return (freetds_srv_bmove(from, to, cnt));
} /* srv_bmove() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
srv_bzero (
  CS_VOID *location,
  CS_INT   cnt
) {
  return (freetds_srv_bzero(location, cnt));
} /* srv_bzero() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_callback (
  SRV_PROC         *srvproc,
  CS_INT            callback_type,
  SRV_CALLBACK_FUNC funcp
) {
  return (freetds_srv_callback(srvproc, callback_type, funcp));
} /* srv_callback() */

/* ------------------------------------------------------------------------- */

CS_BOOL CS_PUBLIC
srv_capability (
  CS_INT capability
) {
  return (freetds_srv_capability(capability));
} /* srv_capability() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_capability_info (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type,
  CS_INT    capability,
  CS_VOID  *val
) {
  return (freetds_srv_capability_info(spp, cmd, type, capability, val));
} /* srv_capability_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_charset_set (
  SRV_PROC *srvproc,
  CS_INT    charset
) {
  return (freetds_srv_charset_set(srvproc, charset));
} /* srv_charset_set() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_createmsgq (
  CS_CHAR   *mqname,
  CS_INT     mqlen,
  SRV_OBJID *mqid
) {
  return (freetds_srv_createmsgq(mqname, mqlen, mqid));
} /* srv_createmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_createmutex (
  CS_CHAR   *mutex_name,
  CS_INT     mutex_namelen,
  SRV_OBJID *mutex_id
) {
  return (freetds_srv_createmutex(mutex_name, mutex_namelen, mutex_id));
} /* srv_createmutex() */

/* ------------------------------------------------------------------------- */

SRV_PROC *CS_PUBLIC
srv_createproc (
  SRV_SERVER *server
) {
  return (freetds_srv_createproc(server));
} /* srv_createproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_cursor_props (
  SRV_PROC    *spp,
  CS_INT       cmd,
  SRV_CURDESC *cdp
) {
  return (freetds_srv_cursor_props(spp, cmd, cdp));
} /* srv_cursor_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_dbg_stack (
  SRV_PROC *srvproc,
  CS_INT depth,
  CS_RETCODE(CS_PUBLIC *funcp) (CS_CHAR *buf, CS_INT buflen)
) {
  return (freetds_srv_dbg_stack(srvproc, depth, funcp));
} /* srv_dbg_stack() */

/* ------------------------------------------------------------------------- */

int CS_PUBLIC
srv_dbg_stop (
  void
) {
  return (freetds_srv_dbg_stop());
} /* srv_dbg_stop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_dbg_switch (
  CS_INT spid
) {
  return (freetds_srv_dbg_switch(spid));
} /* srv_dbg_switch() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_define_event (
  SRV_SERVER *ssp,
  CS_INT      type,
  CS_CHAR    *namep,
  CS_INT      namelen
) {
  return (freetds_srv_define_event(ssp, type, namep, namelen));
} /* srv_define_event() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_deletemsgq (
  CS_CHAR  *name,
  CS_INT    length,
  SRV_OBJID id
) {
  return (freetds_srv_deletemsgq(name, length, id));
} /* srv_deletemsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_deletemutex (
  CS_CHAR  *mutex_name,
  CS_INT    mutex_namelen,
  SRV_OBJID mutex_id
) {
  return (freetds_srv_deletemutex(mutex_name, mutex_namelen, mutex_id));
} /* srv_deletemutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_descfmt (
  SRV_PROC   *spp,
  CS_INT      cmd,
  CS_INT      type,
  CS_INT      item,
  CS_DATAFMT *rmtfmtp
) {
  return (freetds_srv_descfmt(spp, cmd, type, item, rmtfmtp));
} /* srv_descfmt() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_dropproc (
  SRV_PROC *srvproc
) {
  return (freetds_srv_dropproc(srvproc));
} /* srv_dropproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_dynamic (
  SRV_PROC *srvproc,
  CS_INT    cmd,
  CS_INT    item,
  CS_VOID  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  return (freetds_srv_dynamic(srvproc, cmd, item, buf, buflen, outlen));
} /* srv_dynamic() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_envchange (
  SRV_PROC *spp,
  CS_INT    type,
  CS_CHAR  *oldvalp,
  CS_INT    oldvallen,
  CS_CHAR  *newvalp,
  CS_INT    newvallen
) {
  return (freetds_srv_envchange(spp, type, oldvalp, oldvallen, newvalp,
    newvallen));
} /* srv_envchange() */

/* ------------------------------------------------------------------------- */

SRV_ERRHANDLE_FUNC CS_PUBLIC
srv_errhandle (
  SRV_ERRHANDLE_FUNC errhp
) {
  return (freetds_srv_errhandle(errhp));
} /* srv_errhandle() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_event (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  return (freetds_srv_event(srvproc, event, data));
} /* srv_event() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_event_deferred (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  return (freetds_srv_event_deferred(srvproc, event, data));
} /* srv_event_deferred() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_free (
  CS_VOID *mp
) {
  return (freetds_srv_free(mp));
} /* srv_free() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_get_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  return (freetds_srv_get_text(spp, buf, buflen, outlen));
} /* srv_get_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_getloginfo (
  SRV_PROC    *srvproc,
  CS_LOGINFO **loginfo
) {
  return (freetds_srv_getloginfo(srvproc, loginfo));
} /* srv_getloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_getmsgq (
  SRV_OBJID mqid,
  CS_VOID **msgp,
  CS_INT    flags,
  CS_INT   *info
) {
  return (freetds_srv_getmsgq(mqid, msgp, flags, info));
} /* srv_getmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_getobjid (
  CS_INT     obj_type,
  CS_CHAR   *obj_name,
  CS_INT     obj_namelen,
  SRV_OBJID *obj_id,
  CS_INT    *info
) {
  return (freetds_srv_getobjid(obj_type, obj_name, obj_namelen, obj_id, info));
} /* srv_getobjid() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_getobjname (
  CS_INT    obj_type,
  SRV_OBJID obj_id,
  CS_CHAR  *obj_name,
  CS_INT   *obj_namelen,
  CS_INT   *info
) {
  return (freetds_srv_getobjname(obj_type, obj_id, obj_name, obj_namelen,
    info));
} /* srv_getobjname() */

/* ------------------------------------------------------------------------- */

SRV_EVENTHANDLE_FUNC CS_PUBLIC
srv_handle (
  SRV_SERVER          *unused,
  CS_INT               event,
  SRV_EVENTHANDLE_FUNC eventhp
) {
  return (freetds_srv_handle(unused, event, eventhp));
} /* srv_handle() */

/* ------------------------------------------------------------------------- */

SRV_SERVER *CS_PUBLIC
srv_init (
  SRV_CONFIG *scp,
  CS_CHAR    *servername,
  CS_INT      namelen
) {
  return (freetds_srv_init(scp, servername, namelen));

  ASSERT(scp);
  ASSERT(servername);
  ASSERT(namelen >= 0);
} /* srv_init() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_langcpy (
  SRV_PROC *srvproc,
  CS_INT    start,
  CS_INT    numbytes,
  CS_CHAR  *dest
) {
  return (freetds_srv_langcpy(srvproc, start, numbytes, dest));
} /* srv_langcpy() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_langlen (
  SRV_PROC *srvproc
) {
  return (freetds_srv_langlen(srvproc));
} /* srv_langlen() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_langptr (
  SRV_PROC *srvproc,
  CS_INT    n
) {
  return (freetds_srv_langptr(srvproc, n));
} /* srv_langptr() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_lockmutex (
  SRV_OBJID mutex_id,
  CS_INT    flags,
  CS_INT   *info
) {
  return (freetds_srv_lockmutex(mutex_id, flags, info));
} /* srv_lockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_log (
  SRV_SERVER *server,
  CS_BOOL     dateflag,
  CS_CHAR    *msg,
  CS_INT      msglen
) {
  return (freetds_srv_log(server, dateflag, msg, msglen));
} /* srv_log() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_mask (
  CS_INT          cmd,
  SRV_MASK_ARRAY *mp,
  CS_INT          bit,
  CS_BOOL        *info
) {
  return (freetds_srv_mask(cmd, mp, bit, info));
} /* srv_mask() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_msg (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT   *msgid,
  CS_INT   *status
) {
  return (freetds_srv_msg(spp, cmd, msgid, status));
} /* srv_msg() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_negotiate (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  return (freetds_srv_negotiate(spp, cmd, type));
} /* srv_negotiate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_numparams (
  SRV_PROC *spp,
  CS_INT   *numparams
) {
  return (freetds_srv_numparams(spp, numparams));
} /* srv_numparams() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_offset (
  SRV_PROC *spp,
  CS_INT    offtype,
  CS_INT    offvalue
) {
  return (freetds_srv_offset(spp, offtype, offvalue));
} /* srv_offset() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_options (
  SRV_PROC *srvproc,
  CS_INT    cmd,
  CS_INT   *optcmd,
  CS_INT   *option,
  CS_VOID  *buf,
  CS_INT    bufsize,
  CS_INT   *outlen
) {
  return (freetds_srv_options(srvproc, cmd, optcmd, option, buf, bufsize,
    outlen));
} /* srv_options() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_orderby (
  SRV_PROC *spp,
  CS_INT    numcols,
  CS_INT   *collist
) {
  return (freetds_srv_orderby(spp, numcols, collist));
} /* srv_orderby() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_poll (
  SRV_POLLFD *fdp,
  CS_INT      nfds,
  CS_INT      waitflag
) {
  return (freetds_srv_poll(fdp, nfds, waitflag));
} /* srv_poll() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_props (
  CS_CONTEXT *contextp,
  CS_INT      cmd,
  CS_INT      property,
  CS_VOID    *buf,
  CS_INT      buflen,
  CS_INT     *outlen
) {
  return (freetds_srv_props(contextp, cmd, property, buf, buflen, outlen));
} /* srv_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_putmsgq (
  SRV_OBJID mqid,
  CS_VOID  *msgp,
  CS_INT    flags
) {
  return (freetds_srv_putmsgq(mqid, msgp, flags));
} /* srv_putmsgq() */

/* ------------------------------------------------------------------------- */

CS_VOID *CS_PUBLIC
srv_realloc (
  CS_VOID *ptr,
  CS_INT   size
) {
  return (freetds_srv_realloc(ptr, size));
} /* srv_realloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_recvpassthru (
  SRV_PROC *srvproc,
  CS_BYTE **recv_bufp,
  CS_INT   *info
) {
  return (freetds_srv_recvpassthru(srvproc, recv_bufp, info));
} /* srv_recvpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regcreate (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  return (freetds_srv_regcreate(srvproc, info));
} /* srv_regcreate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regdefine (
  SRV_PROC            *srvproc,
  CS_CHAR             *name,
  CS_INT               namelen,
  SRV_EVENTHANDLE_FUNC handler
) {
  return (freetds_srv_regdefine(srvproc, name, namelen, handler));
} /* srv_regdefine() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regdrop (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  return (freetds_srv_regdrop(srvproc, proc_name, namelen, info));
} /* srv_regdrop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regexec (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  return (freetds_srv_regexec(srvproc, info));
} /* srv_regexec() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_reginit (
  SRV_PROC *srvproc,
  CS_CHAR  *name,
  CS_INT    namelen,
  CS_INT    options
) {
  return (freetds_srv_reginit(srvproc, name, namelen, options));
} /* srv_reginit() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_reglist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  return (freetds_srv_reglist(srvproc, proc_list));
} /* srv_reglist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_reglistfree (
  SRV_PROC     *srvproc,
  SRV_PROCLIST *proc_list
) {
  return (freetds_srv_reglistfree(srvproc, proc_list));
} /* srv_reglistfree() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regnowatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  return (freetds_srv_regnowatch(srvproc, proc_name, namelen, info));
} /* srv_regnowatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regparam (
  SRV_PROC *srvproc,
  CS_CHAR  *paramname,
  CS_INT    namelen,
  CS_INT    type,
  CS_INT    datalen,
  CS_BYTE  *value
) {
  return (freetds_srv_regparam(srvproc, paramname, namelen, type, datalen,
    value));
} /* srv_regparam() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regwatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT    options,
  CS_INT   *info
) {
  return (freetds_srv_regwatch(srvproc, proc_name, namelen, options, info));
} /* srv_regwatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regwatchlist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  return (freetds_srv_regwatchlist(srvproc, proc_list));
} /* srv_regwatchlist() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_rpcdb (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  return (freetds_srv_rpcdb(srvproc, len));
} /* srv_rpcdb() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_rpcname (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  return (freetds_srv_rpcname(srvproc, len));
} /* srv_rpcname() */

/* ------------------------------------------------------------------------- */

CS_SMALLINT CS_PUBLIC
srv_rpcnumber (
  SRV_PROC *srvproc
) {
  return (freetds_srv_rpcnumber(srvproc));
} /* srv_rpcnumber() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_rpcoptions (
  SRV_PROC *srvproc
) {
  return (freetds_srv_rpcoptions(srvproc));
} /* srv_rpcoptions() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_rpcowner (
  SRV_PROC *spp,
  CS_INT   *lenp
) {
  return (freetds_srv_rpcowner(spp, lenp));
} /* srv_rpcowner() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_run (
  SRV_SERVER *unused
) {
  return (freetds_srv_run(unused));
} /* srv_run() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_select (
  CS_INT          nfds,
  SRV_MASK_ARRAY *readmask,
  SRV_MASK_ARRAY *writemask,
  SRV_MASK_ARRAY *exceptmask,
  CS_INT          waitflag
) {
  return (freetds_srv_select(nfds, readmask, writemask, exceptmask, waitflag));
} /* srv_select() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_send_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen
) {
  return (freetds_srv_send_text(spp, buf, buflen));
} /* srv_send_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_senddone (
  SRV_PROC *srvproc,
  CS_INT    status,
  CS_INT    transtate,
  CS_INT    count
) {
  return (freetds_srv_senddone(srvproc, status, transtate, count));
} /* srv_senddone() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sendinfo (
  SRV_PROC     *spp,
  CS_SERVERMSG *errmsg,
  CS_INT        tran_state
) {
  return (freetds_srv_sendinfo(spp, errmsg, tran_state));
} /* srv_sendinfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sendpassthru (
  SRV_PROC *srvproc,
  CS_BYTE  *send_bufp,
  CS_INT   *info
) {
  return (freetds_srv_sendpassthru(srvproc, send_bufp, info));
} /* srv_sendpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sendstatus (
  SRV_PROC *srvproc,
  CS_INT    value
) {
  return (freetds_srv_sendstatus(srvproc, value));
} /* srv_sendstatus() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_setcontrol (
  SRV_PROC *spp,
  CS_INT    colnum,
  CS_BYTE  *ctrlinfo,
  CS_INT    ctrllen
) {
  return (freetds_srv_setcontrol(spp, colnum, ctrlinfo, ctrllen));
} /* srv_setcontrol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_setloginfo (
  SRV_PROC   *srvproc,
  CS_LOGINFO *loginfo
) {
  return (freetds_srv_setloginfo(srvproc, loginfo));
} /* srv_setloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_setpri (
  SRV_PROC *srvproc,
  CS_INT    mode,
  CS_INT    priority
) {
  return (freetds_srv_setpri(srvproc, mode, priority));
} /* srv_setpri() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sigdump (
  CS_INT sig
) {
  return (freetds_srv_sigdump(sig));
} /* srv_sigdump() */

/* ------------------------------------------------------------------------- */

SRV_SIGNAL_FUNC CS_PUBLIC
srv_signal (
  CS_INT          sig,
  SRV_SIGNAL_FUNC funcp
) {
  return (freetds_srv_signal(sig, funcp));
} /* srv_signal() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sleep (
  CS_VOID *sleepevent,
  CS_CHAR *sleeplabel,
  CS_INT   sleepflags,
  CS_INT  *info,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  return (freetds_srv_sleep(sleepevent, sleeplabel, sleepflags, info,
    reserved1, reserved2));
} /* srv_sleep() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_spawn (
  SRV_PROC             **srvproc,
  CS_INT                 stacksize,
  SRV_SERVICETHREAD_FUNC funcp,
  CS_VOID               *argp,
  CS_INT                 priority
) {
  return (freetds_srv_spawn(srvproc, stacksize, funcp, argp, priority));
} /* srv_spawn() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_symbol (
  CS_INT  type,
  CS_INT  symbol,
  CS_INT *len
) {
  return (freetds_srv_symbol(type, symbol, len));
} /* srv_symbol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_tabcolname (
  SRV_PROC      *spp,
  CS_INT         colnum,
  CS_BROWSEDESC *bd
) {
  return (freetds_srv_tabcolname(spp, colnum, bd));
} /* srv_tabcolname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_tabname (
  SRV_PROC *spp,
  CS_INT    tablenum,
  CS_CHAR  *tablename,
  CS_INT    namelen
) {
  return (freetds_srv_tabname(spp, tablenum, tablename, namelen));
} /* srv_tabname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_termproc (
  SRV_PROC *srvproc
) {
  return (freetds_srv_termproc(srvproc));
} /* srv_termproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_text_info (
  SRV_PROC  *spp,
  CS_INT     cmd,
  CS_INT     item,
  CS_IODESC *iodesc
) {
  return (freetds_srv_text_info(spp, cmd, item, iodesc));
} /* srv_text_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_thread_props (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    property,
  CS_VOID  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  return (freetds_srv_thread_props(spp, cmd, property, buf, buflen, outlen));
} /* srv_thread_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_ucwakeup (
  SRV_PROC *srvproc,
  CS_INT    wakeflags
) {
  return (freetds_srv_ucwakeup(srvproc, wakeflags));
} /* srv_ucwakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_unlockmutex (
  SRV_OBJID mutex_id
) {
  return (freetds_srv_unlockmutex(mutex_id));
} /* srv_unlockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_version (
  CS_CONTEXT *cp,
  CS_INT      version
) {
  return (freetds_srv_version(cp, version));
} /* srv_version() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_wakeup (
  CS_VOID *sleepevent,
  CS_INT   wakeflags,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  return (freetds_srv_wakeup(sleepevent, wakeflags, reserved1, reserved2));
} /* srv_wakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_xferdata (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  return (freetds_srv_xferdata(spp, cmd, type));
} /* srv_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_yield (
  void
) {
  return (freetds_srv_yield());
} /* srv_yield() */

/* :vi set ts=2 et sw=2: */

