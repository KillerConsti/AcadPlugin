

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for SimpleToolPalette.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SimpleToolPalette_i_h__
#define __SimpleToolPalette_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ISimpleTool_FWD_DEFINED__
#define __ISimpleTool_FWD_DEFINED__
typedef interface ISimpleTool ISimpleTool;

#endif 	/* __ISimpleTool_FWD_DEFINED__ */


#ifndef __SimpleTool_FWD_DEFINED__
#define __SimpleTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class SimpleTool SimpleTool;
#else
typedef struct SimpleTool SimpleTool;
#endif /* __cplusplus */

#endif 	/* __SimpleTool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISimpleTool_INTERFACE_DEFINED__
#define __ISimpleTool_INTERFACE_DEFINED__

/* interface ISimpleTool */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISimpleTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A66F831-FF1C-4F09-93BE-397EECB21BE7")
    ISimpleTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CmdName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CmdName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Flyout( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Flyout( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartX( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartX( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartY( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartY( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartZ( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartZ( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndX( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndX( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndY( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndY( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndZ( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndZ( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISimpleToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISimpleTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISimpleTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISimpleTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISimpleTool * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_CmdName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CmdName )( 
            ISimpleTool * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_CmdName)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CmdName )( 
            ISimpleTool * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_Flyout)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flyout )( 
            ISimpleTool * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_Flyout)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Flyout )( 
            ISimpleTool * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_StartX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartX )( 
            ISimpleTool * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_StartX)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartX )( 
            ISimpleTool * This,
            /* [in] */ DOUBLE newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_StartY)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartY )( 
            ISimpleTool * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_StartY)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartY )( 
            ISimpleTool * This,
            /* [in] */ DOUBLE newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_StartZ)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartZ )( 
            ISimpleTool * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_StartZ)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartZ )( 
            ISimpleTool * This,
            /* [in] */ DOUBLE newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_EndX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndX )( 
            ISimpleTool * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_EndX)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndX )( 
            ISimpleTool * This,
            /* [in] */ DOUBLE newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_EndY)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndY )( 
            ISimpleTool * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_EndY)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndY )( 
            ISimpleTool * This,
            /* [in] */ DOUBLE newVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, get_EndZ)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndZ )( 
            ISimpleTool * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(ISimpleTool, put_EndZ)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndZ )( 
            ISimpleTool * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } ISimpleToolVtbl;

    interface ISimpleTool
    {
        CONST_VTBL struct ISimpleToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISimpleTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISimpleTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISimpleTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISimpleTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISimpleTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISimpleTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISimpleTool_get_CmdName(This,pVal)	\
    ( (This)->lpVtbl -> get_CmdName(This,pVal) ) 

#define ISimpleTool_put_CmdName(This,newVal)	\
    ( (This)->lpVtbl -> put_CmdName(This,newVal) ) 

#define ISimpleTool_get_Flyout(This,pVal)	\
    ( (This)->lpVtbl -> get_Flyout(This,pVal) ) 

#define ISimpleTool_put_Flyout(This,newVal)	\
    ( (This)->lpVtbl -> put_Flyout(This,newVal) ) 

#define ISimpleTool_get_StartX(This,pVal)	\
    ( (This)->lpVtbl -> get_StartX(This,pVal) ) 

#define ISimpleTool_put_StartX(This,newVal)	\
    ( (This)->lpVtbl -> put_StartX(This,newVal) ) 

#define ISimpleTool_get_StartY(This,pVal)	\
    ( (This)->lpVtbl -> get_StartY(This,pVal) ) 

#define ISimpleTool_put_StartY(This,newVal)	\
    ( (This)->lpVtbl -> put_StartY(This,newVal) ) 

#define ISimpleTool_get_StartZ(This,pVal)	\
    ( (This)->lpVtbl -> get_StartZ(This,pVal) ) 

#define ISimpleTool_put_StartZ(This,newVal)	\
    ( (This)->lpVtbl -> put_StartZ(This,newVal) ) 

#define ISimpleTool_get_EndX(This,pVal)	\
    ( (This)->lpVtbl -> get_EndX(This,pVal) ) 

#define ISimpleTool_put_EndX(This,newVal)	\
    ( (This)->lpVtbl -> put_EndX(This,newVal) ) 

#define ISimpleTool_get_EndY(This,pVal)	\
    ( (This)->lpVtbl -> get_EndY(This,pVal) ) 

#define ISimpleTool_put_EndY(This,newVal)	\
    ( (This)->lpVtbl -> put_EndY(This,newVal) ) 

#define ISimpleTool_get_EndZ(This,pVal)	\
    ( (This)->lpVtbl -> get_EndZ(This,pVal) ) 

#define ISimpleTool_put_EndZ(This,newVal)	\
    ( (This)->lpVtbl -> put_EndZ(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISimpleTool_INTERFACE_DEFINED__ */



#ifndef __asdkSimpleToolPaletteLib_LIBRARY_DEFINED__
#define __asdkSimpleToolPaletteLib_LIBRARY_DEFINED__

/* library asdkSimpleToolPaletteLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_asdkSimpleToolPaletteLib;

EXTERN_C const CLSID CLSID_SimpleTool;

#ifdef __cplusplus

class DECLSPEC_UUID("722DCAC8-71E1-4F61-85EC-39981C65FC4A")
SimpleTool;
#endif
#endif /* __asdkSimpleToolPaletteLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


