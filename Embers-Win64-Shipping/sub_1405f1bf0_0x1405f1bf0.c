// 函数: sub_1405f1bf0
// 地址: 0x1405f1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (arg4 == 0 || arg2 == 0)
    return 0x80070057

void*** punkObject_2 = j_sub_140a82f30(0x20)
void*** punkObject = punkObject_2
void*** punkObject_3 = punkObject_2

if (punkObject_2 == 0)
    punkObject = nullptr
else
    *punkObject = &data_142d5fc68
    punkObject[1] = 0
    punkObject[2] = arg2
    punkObject[3].d = arg3
    *(punkObject + 0x1c) = 0

void*** punkObject_1 = punkObject

if (punkObject != 0)
    (*punkObject)[1](punkObject)

HRESULT rdi_1

if (punkObject != 0)
    struct IMFAsyncResult arg_20 = 0
    HRESULT rax_1 = MFCreateAsyncResult(punkObject, arg4, arg5, &arg_20)
    rdi_1 = rax_1
    
    if (rax_1 s>= 0)
        *(arg1 + 8) = 1
        rdi_1 = MFPutWorkItem(1, arg1 - 8, arg_20)
        struct IMFAsyncResult rcx_2 = arg_20
        (*(*rcx_2 + 0x10))(rcx_2)
else
    rdi_1 = E_OUTOFMEMORY

if (punkObject != 0)
    void** rdx_2 = *punkObject
    rdx_2[2](punkObject, rdx_2)

return zx.q(rdi_1)
