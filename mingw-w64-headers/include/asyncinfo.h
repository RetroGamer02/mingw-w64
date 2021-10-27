/*** Autogenerated by WIDL 6.12 from include/asyncinfo.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __asyncinfo_h__
#define __asyncinfo_h__

/* Forward declarations */

#ifndef __IAsyncInfo_FWD_DEFINED__
#define __IAsyncInfo_FWD_DEFINED__
typedef interface IAsyncInfo IAsyncInfo;
#ifdef __cplusplus
namespace ABI {
    interface IAsyncInfo;
}
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum AsyncStatus {
    Started = 0,
    Completed = 1,
    Canceled = 2,
    Error = 3
} AsyncStatus;
/*****************************************************************************
 * IAsyncInfo interface
 */
#ifndef __IAsyncInfo_INTERFACE_DEFINED__
#define __IAsyncInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAsyncInfo, 0x00000036, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000036-0000-0000-c000-000000000046")
IAsyncInfo : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE get_Id(
        UINT32 *id) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Status(
        AsyncStatus *status) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
        HRESULT *error_code) = 0;

    virtual HRESULT STDMETHODCALLTYPE Cancel(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAsyncInfo, 0x00000036, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IAsyncInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAsyncInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAsyncInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAsyncInfo *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        IAsyncInfo *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        IAsyncInfo *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        IAsyncInfo *This,
        TrustLevel *trustLevel);

    /*** IAsyncInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Id)(
        IAsyncInfo *This,
        UINT32 *id);

    HRESULT (STDMETHODCALLTYPE *get_Status)(
        IAsyncInfo *This,
        AsyncStatus *status);

    HRESULT (STDMETHODCALLTYPE *get_ErrorCode)(
        IAsyncInfo *This,
        HRESULT *error_code);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IAsyncInfo *This);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IAsyncInfo *This);

    END_INTERFACE
} IAsyncInfoVtbl;

interface IAsyncInfo {
    CONST_VTBL IAsyncInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAsyncInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAsyncInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAsyncInfo_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define IAsyncInfo_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define IAsyncInfo_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define IAsyncInfo_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IAsyncInfo methods ***/
#define IAsyncInfo_get_Id(This,id) (This)->lpVtbl->get_Id(This,id)
#define IAsyncInfo_get_Status(This,status) (This)->lpVtbl->get_Status(This,status)
#define IAsyncInfo_get_ErrorCode(This,error_code) (This)->lpVtbl->get_ErrorCode(This,error_code)
#define IAsyncInfo_Cancel(This) (This)->lpVtbl->Cancel(This)
#define IAsyncInfo_Close(This) (This)->lpVtbl->Close(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAsyncInfo_QueryInterface(IAsyncInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAsyncInfo_AddRef(IAsyncInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAsyncInfo_Release(IAsyncInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT IAsyncInfo_GetIids(IAsyncInfo* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT IAsyncInfo_GetRuntimeClassName(IAsyncInfo* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT IAsyncInfo_GetTrustLevel(IAsyncInfo* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IAsyncInfo methods ***/
static FORCEINLINE HRESULT IAsyncInfo_get_Id(IAsyncInfo* This,UINT32 *id) {
    return This->lpVtbl->get_Id(This,id);
}
static FORCEINLINE HRESULT IAsyncInfo_get_Status(IAsyncInfo* This,AsyncStatus *status) {
    return This->lpVtbl->get_Status(This,status);
}
static FORCEINLINE HRESULT IAsyncInfo_get_ErrorCode(IAsyncInfo* This,HRESULT *error_code) {
    return This->lpVtbl->get_ErrorCode(This,error_code);
}
static FORCEINLINE HRESULT IAsyncInfo_Cancel(IAsyncInfo* This) {
    return This->lpVtbl->Cancel(This);
}
static FORCEINLINE HRESULT IAsyncInfo_Close(IAsyncInfo* This) {
    return This->lpVtbl->Close(This);
}
#endif
#endif

#endif

#endif  /* __IAsyncInfo_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __asyncinfo_h__ */
