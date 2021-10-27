/*** Autogenerated by WIDL 6.12 from include/tlbref.idl - Do not edit ***/

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

#ifndef __tlbref_h__
#define __tlbref_h__

/* Forward declarations */

#ifndef __ITypeLibResolver_FWD_DEFINED__
#define __ITypeLibResolver_FWD_DEFINED__
typedef interface ITypeLibResolver ITypeLibResolver;
#ifdef __cplusplus
interface ITypeLibResolver;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * ITypeLibResolver interface
 */
#ifndef __ITypeLibResolver_INTERFACE_DEFINED__
#define __ITypeLibResolver_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITypeLibResolver, 0x8f026edb, 0x785e, 0x4470, 0xa8,0xe1, 0xb4,0xe8,0x4e,0x9d,0x17,0x79);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("8f026edb-785e-4470-a8e1-b4e84e9d1779")
ITypeLibResolver : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ResolveTypeLib(
        BSTR bstrSimpleName,
        GUID tlbid,
        LCID lcid,
        USHORT wMajorVersion,
        USHORT wMinorVersion,
        SYSKIND syskind,
        BSTR *pbstrResolvedTlbName) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITypeLibResolver, 0x8f026edb, 0x785e, 0x4470, 0xa8,0xe1, 0xb4,0xe8,0x4e,0x9d,0x17,0x79)
#endif
#else
typedef struct ITypeLibResolverVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeLibResolver *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeLibResolver *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeLibResolver *This);

    /*** ITypeLibResolver methods ***/
    HRESULT (STDMETHODCALLTYPE *ResolveTypeLib)(
        ITypeLibResolver *This,
        BSTR bstrSimpleName,
        GUID tlbid,
        LCID lcid,
        USHORT wMajorVersion,
        USHORT wMinorVersion,
        SYSKIND syskind,
        BSTR *pbstrResolvedTlbName);

    END_INTERFACE
} ITypeLibResolverVtbl;

interface ITypeLibResolver {
    CONST_VTBL ITypeLibResolverVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITypeLibResolver_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITypeLibResolver_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITypeLibResolver_Release(This) (This)->lpVtbl->Release(This)
/*** ITypeLibResolver methods ***/
#define ITypeLibResolver_ResolveTypeLib(This,bstrSimpleName,tlbid,lcid,wMajorVersion,wMinorVersion,syskind,pbstrResolvedTlbName) (This)->lpVtbl->ResolveTypeLib(This,bstrSimpleName,tlbid,lcid,wMajorVersion,wMinorVersion,syskind,pbstrResolvedTlbName)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITypeLibResolver_QueryInterface(ITypeLibResolver* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITypeLibResolver_AddRef(ITypeLibResolver* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITypeLibResolver_Release(ITypeLibResolver* This) {
    return This->lpVtbl->Release(This);
}
/*** ITypeLibResolver methods ***/
static FORCEINLINE HRESULT ITypeLibResolver_ResolveTypeLib(ITypeLibResolver* This,BSTR bstrSimpleName,GUID tlbid,LCID lcid,USHORT wMajorVersion,USHORT wMinorVersion,SYSKIND syskind,BSTR *pbstrResolvedTlbName) {
    return This->lpVtbl->ResolveTypeLib(This,bstrSimpleName,tlbid,lcid,wMajorVersion,wMinorVersion,syskind,pbstrResolvedTlbName);
}
#endif
#endif

#endif


#endif  /* __ITypeLibResolver_INTERFACE_DEFINED__ */

STDAPI LoadTypeLibWithResolver (LPCOLESTR szFile, REGKIND regkind, ITypeLibResolver *pTlbResolver, ITypeLib **pptlib);
STDAPI GetTypeLibInfo (LPWSTR szFile, GUID *pTypeLibID, LCID *pTypeLibLCID, SYSKIND *pTypeLibPlatform, USHORT *pTypeLibMajorVer, USHORT *pTypeLibMinorVer);
#endif
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __tlbref_h__ */
