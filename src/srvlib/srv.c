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
  void *mem = malloc((size_t) size);

  if (NULL != mem) {
    return ((CS_VOID *) mem);
  } else {
    return ((CS_VOID *) NULL);
  }
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
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_alt_descfmt() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_exist (
  SRV_PROC *spp,
  CS_INT    altid
) {
  return (CS_FAIL);
} /* srv_alt_exist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_header (
  SRV_PROC    *spp,
  CS_INT       altid,
  CS_INT       numbylist,
  CS_SMALLINT *bylistarray
) {
  return (CS_FAIL);
} /* srv_alt_header() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_alt_xferdata (
  SRV_PROC *spp,
  CS_INT    altid
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_bind() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
srv_bmove (
  CS_VOID *from,
  CS_VOID *to,
  CS_INT   cnt
) {
  ASSERT(from);
  ASSERT(to);
  ASSERT(cnt >= 0);

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
} /* srv_bmove() */

/* ------------------------------------------------------------------------- */

CS_VOID CS_PUBLIC
srv_bzero (
  CS_VOID *location,
  CS_INT   cnt
) {
  ASSERT(location);
  ASSERT(cnt >= 0);

  memset((void *) location, 0, (size_t) cnt);
} /* srv_bzero() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_callback (
  SRV_PROC         *srvproc,
  CS_INT            callback_type,
  SRV_CALLBACK_FUNC funcp
) {
  return (CS_FAIL);
} /* srv_callback() */

/* ------------------------------------------------------------------------- */

CS_BOOL CS_PUBLIC
srv_capability (
  CS_INT capability
) {
  switch (capability)
  {
    case SRV_C_DEBUG:
    case SRV_C_EXIT:
    case SRV_C_RESUME:
    case SRV_C_PREEMPT:
    case SRV_C_SELECT:
    case SRV_C_SUSPEND:
    case SRV_C_TIMESLICE:
#ifdef SRV_POLL
    case SRV_POLL:
      {
#endif /* SRV_POLL */
      return (CS_TRUE);
  }

  default:
    return (CS_FALSE);
}
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
  return (CS_FAIL);
} /* srv_capability_info() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_charset_set (
  SRV_PROC *srvproc,
  CS_INT    charset
) {
  return (CS_FAIL);
} /* srv_charset_set() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_createmsgq (
  CS_CHAR   *mqname,
  CS_INT     mqlen,
  SRV_OBJID *mqid
) {
  return (CS_FAIL);
} /* srv_createmsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_createmutex (
  CS_CHAR   *mutex_name,
  CS_INT     mutex_namelen,
  SRV_OBJID *mutex_id
) {
  return (CS_FAIL);
} /* srv_createmutex() */

/* ------------------------------------------------------------------------- */

SRV_PROC *CS_PUBLIC
srv_createproc (
  SRV_SERVER *server
) {
  return (CS_FAIL);
} /* srv_createproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_cursor_props (
  SRV_PROC    *spp,
  CS_INT       cmd,
  SRV_CURDESC *cdp
) {
  return (CS_FAIL);
} /* srv_cursor_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_dbg_stack (
  SRV_PROC *srvproc,
  CS_INT depth,
  CS_RETCODE(CS_PUBLIC *funcp) (CS_CHAR *buf, CS_INT buflen)
) {
  return (CS_FAIL);
} /* srv_dbg_stack() */

/* ------------------------------------------------------------------------- */

int CS_PUBLIC
srv_dbg_stop (
  void
) {
  return (CS_FAIL);
} /* srv_dbg_stop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_dbg_switch (
  CS_INT spid
) {
  return (CS_FAIL);
} /* srv_dbg_switch() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_define_event (
  SRV_SERVER *ssp,
  CS_INT      type,
  CS_CHAR    *namep,
  CS_INT      namelen
) {
  return (CS_FAIL);
} /* srv_define_event() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_deletemsgq (
  CS_CHAR  *name,
  CS_INT    length,
  SRV_OBJID id
) {
  return (CS_FAIL);
} /* srv_deletemsgq() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_deletemutex (
  CS_CHAR  *mutex_name,
  CS_INT    mutex_namelen,
  SRV_OBJID mutex_id
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_descfmt() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_dropproc (
  SRV_PROC *srvproc
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_envchange() */

/* ------------------------------------------------------------------------- */

SRV_ERRHANDLE_FUNC CS_PUBLIC
srv_errhandle (
  SRV_ERRHANDLE_FUNC errhp
) {
  return (CS_FAIL);
} /* srv_errhandle() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_event (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  return (CS_FAIL);
} /* srv_event() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_event_deferred (
  SRV_PROC *srvproc,
  CS_INT    event,
  CS_VOID  *data
) {
  return (CS_FAIL);
} /* srv_event_deferred() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_free (
  CS_VOID *mp
) {
  if (NULL != mp) {
    free(mp);
    return (CS_SUCCEED);
  } else {
    return (CS_FAIL);
  }
} /* srv_free() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_get_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen,
  CS_INT   *outlen
) {
  return (CS_FAIL);
} /* srv_get_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_getloginfo (
  SRV_PROC    *srvproc,
  CS_LOGINFO **loginfo
) {
  return (CS_FAIL);
} /* srv_getloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_getmsgq (
  SRV_OBJID mqid,
  CS_VOID **msgp,
  CS_INT    flags,
  CS_INT   *info
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_getobjname() */

/* ------------------------------------------------------------------------- */

SRV_EVENTHANDLE_FUNC CS_PUBLIC
srv_handle (
  SRV_SERVER          *unused,
  CS_INT               event,
  SRV_EVENTHANDLE_FUNC eventhp
) {
  return (CS_FAIL);
} /* srv_handle() */

/* ------------------------------------------------------------------------- */

SRV_SERVER *CS_PUBLIC
srv_init (
  SRV_CONFIG *scp,
  CS_CHAR    *servername,
  CS_INT      namelen
) {
  ASSERT(scp);
  ASSERT(servername);
  ASSERT(namelen >= 0);
  return (CS_FAIL);
} /* srv_init() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_langcpy (
  SRV_PROC *srvproc,
  CS_INT    start,
  CS_INT    numbytes,
  CS_CHAR  *dest
) {
  return (CS_FAIL);
} /* srv_langcpy() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_langlen (
  SRV_PROC *srvproc
) {
  return (CS_FAIL);
} /* srv_langlen() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_langptr (
  SRV_PROC *srvproc,
  CS_INT    n
) {
  return (CS_FAIL);
} /* srv_langptr() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_lockmutex (
  SRV_OBJID mutex_id,
  CS_INT    flags,
  CS_INT   *info
) {
  return (CS_FAIL);
} /* srv_lockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_log (
  SRV_SERVER *server,
  CS_BOOL     dateflag,
  CS_CHAR    *msg,
  CS_INT      msglen
) {
  return (CS_FAIL);
} /* srv_log() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_mask (
  CS_INT          cmd,
  SRV_MASK_ARRAY *mp,
  CS_INT          bit,
  CS_BOOL        *info
) {
  return (CS_FAIL);
} /* srv_mask() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_msg (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT   *msgid,
  CS_INT   *status
) {
  return (CS_FAIL);
} /* srv_msg() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_negotiate (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  return (CS_FAIL);
} /* srv_negotiate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_numparams (
  SRV_PROC *spp,
  CS_INT   *numparams
) {
  return (CS_FAIL);
} /* srv_numparams() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_offset (
  SRV_PROC *spp,
  CS_INT    offtype,
  CS_INT    offvalue
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_options() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_orderby (
  SRV_PROC *spp,
  CS_INT    numcols,
  CS_INT   *collist
) {
  return (CS_FAIL);
} /* srv_orderby() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_poll (
  SRV_POLLFD *fdp,
  CS_INT      nfds,
  CS_INT      waitflag
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_putmsgq (
  SRV_OBJID mqid,
  CS_VOID  *msgp,
  CS_INT    flags
) {
  return (CS_FAIL);
} /* srv_putmsgq() */

/* ------------------------------------------------------------------------- */

CS_VOID *CS_PUBLIC
srv_realloc (
  CS_VOID *ptr,
  CS_INT   size
) {
  return (CS_FAIL);
} /* srv_realloc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_recvpassthru (
  SRV_PROC *srvproc,
  CS_BYTE **recv_bufp,
  CS_INT   *info
) {
  return (CS_FAIL);
} /* srv_recvpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regcreate (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  return (CS_FAIL);
} /* srv_regcreate() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regdefine (
  SRV_PROC            *srvproc,
  CS_CHAR             *name,
  CS_INT               namelen,
  SRV_EVENTHANDLE_FUNC handler
) {
  return (CS_FAIL);
} /* srv_regdefine() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regdrop (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  return (CS_FAIL);
} /* srv_regdrop() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regexec (
  SRV_PROC *srvproc,
  CS_INT   *info
) {
  return (CS_FAIL);
} /* srv_regexec() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_reginit (
  SRV_PROC *srvproc,
  CS_CHAR  *name,
  CS_INT    namelen,
  CS_INT    options
) {
  return (CS_FAIL);
} /* srv_reginit() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_reglist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  return (CS_FAIL);
} /* srv_reglist() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_reglistfree (
  SRV_PROC     *srvproc,
  SRV_PROCLIST *proc_list
) {
  return (CS_FAIL);
} /* srv_reglistfree() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regnowatch (
  SRV_PROC *srvproc,
  CS_CHAR  *proc_name,
  CS_INT    namelen,
  CS_INT   *info
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_regwatch() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_regwatchlist (
  SRV_PROC      *srvproc,
  SRV_PROCLIST **proc_list
) {
  return (CS_FAIL);
} /* srv_regwatchlist() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_rpcdb (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  return (CS_FAIL);
} /* srv_rpcdb() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_rpcname (
  SRV_PROC *srvproc,
  CS_INT   *len
) {
  return (CS_FAIL);
} /* srv_rpcname() */

/* ------------------------------------------------------------------------- */

CS_SMALLINT CS_PUBLIC
srv_rpcnumber (
  SRV_PROC *srvproc
) {
  return (CS_FAIL);
} /* srv_rpcnumber() */

/* ------------------------------------------------------------------------- */

CS_INT CS_PUBLIC
srv_rpcoptions (
  SRV_PROC *srvproc
) {
  return (CS_FAIL);
} /* srv_rpcoptions() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_rpcowner (
  SRV_PROC *spp,
  CS_INT   *lenp
) {
  return (CS_FAIL);
} /* srv_rpcowner() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_run (
  SRV_SERVER *unused
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_select() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_send_text (
  SRV_PROC *spp,
  CS_BYTE  *buf,
  CS_INT    buflen
) {
  return (CS_FAIL);
} /* srv_send_text() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_senddone (
  SRV_PROC *srvproc,
  CS_INT    status,
  CS_INT    transtate,
  CS_INT    count
) {
  ASSERT(srvproc);

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
} /* srv_senddone() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sendinfo (
  SRV_PROC     *spp,
  CS_SERVERMSG *errmsg,
  CS_INT        tran_state
) {
  return (CS_FAIL);
} /* srv_sendinfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sendpassthru (
  SRV_PROC *srvproc,
  CS_BYTE  *send_bufp,
  CS_INT   *info
) {
  return (CS_FAIL);
} /* srv_sendpassthru() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sendstatus (
  SRV_PROC *srvproc,
  CS_INT    value
) {
  return (CS_FAIL);
} /* srv_sendstatus() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_setcontrol (
  SRV_PROC *spp,
  CS_INT    colnum,
  CS_BYTE  *ctrlinfo,
  CS_INT    ctrllen
) {
  return (CS_FAIL);
} /* srv_setcontrol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_setloginfo (
  SRV_PROC   *srvproc,
  CS_LOGINFO *loginfo
) {
  return (CS_FAIL);
} /* srv_setloginfo() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_setpri (
  SRV_PROC *srvproc,
  CS_INT    mode,
  CS_INT    priority
) {
  return (CS_FAIL);
} /* srv_setpri() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_sigdump (
  CS_INT sig
) {
  return (CS_FAIL);
} /* srv_sigdump() */

/* ------------------------------------------------------------------------- */

SRV_SIGNAL_FUNC CS_PUBLIC
srv_signal (
  CS_INT          sig,
  SRV_SIGNAL_FUNC funcp
) {
  return (CS_FAIL);
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
  return (CS_FAIL);
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
  return (CS_FAIL);
} /* srv_spawn() */

/* ------------------------------------------------------------------------- */

CS_CHAR *CS_PUBLIC
srv_symbol (
  CS_INT  type,
  CS_INT  symbol,
  CS_INT *len
) {
  return (CS_FAIL);
} /* srv_symbol() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_tabcolname (
  SRV_PROC      *spp,
  CS_INT         colnum,
  CS_BROWSEDESC *bd
) {
  return (CS_FAIL);
} /* srv_tabcolname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_tabname (
  SRV_PROC *spp,
  CS_INT    tablenum,
  CS_CHAR  *tablename,
  CS_INT    namelen
) {
  return (CS_FAIL);
} /* srv_tabname() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_termproc (
  SRV_PROC *srvproc
) {
  return (CS_FAIL);
} /* srv_termproc() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_text_info (
  SRV_PROC  *spp,
  CS_INT     cmd,
  CS_INT     item,
  CS_IODESC *iodesc
) {
  return (CS_FAIL);
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
} /* srv_thread_props() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_ucwakeup (
  SRV_PROC *srvproc,
  CS_INT    wakeflags
) {
  return (CS_FAIL);
} /* srv_ucwakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_unlockmutex (
  SRV_OBJID mutex_id
) {
  return (CS_FAIL);
} /* srv_unlockmutex() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_version (
  CS_CONTEXT *cp,
  CS_INT      version
) {
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
} /* srv_version() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_wakeup (
  CS_VOID *sleepevent,
  CS_INT   wakeflags,
  CS_VOID *reserved1,
  CS_VOID *reserved2
) {
  return (CS_FAIL);
} /* srv_wakeup() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_xferdata (
  SRV_PROC *spp,
  CS_INT    cmd,
  CS_INT    type
) {
  switch (type)
  {
    case SRV_RPCDATA: /* RPC parameter */
      {
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
        switch (cmd)
        {
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
  return (CS_FAIL);
} /* srv_xferdata() */

/* ------------------------------------------------------------------------- */

CS_RETCODE CS_PUBLIC
srv_yield (
  void
) {
  return (CS_FAIL);
} /* srv_yield() */

/* :vi set ts=2 et sw=2: */

