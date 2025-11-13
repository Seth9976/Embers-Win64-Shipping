// 函数: sub_1425ed8b0
// 地址: 0x1425ed8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0
struct IMFSample ppIMFSample = 0

if (MFCreateSample(&ppIMFSample) s>= 0)
    uint32_t cbMaxLength_1 = *(arg1 + 0xa4)
    struct IMFMediaBuffer ppBuffer = 0
    uint32_t cbMaxLength = arg4
    
    if (cbMaxLength_1 s>= arg4)
        cbMaxLength = cbMaxLength_1
    
    int32_t rax_1 = *(arg1 + 0xac)
    uint32_t cbAligment = rax_1 - 1
    
    if (rax_1 u<= 1)
        cbAligment = 0
    
    HRESULT rax_2 = MFCreateAlignedMemoryBuffer(cbMaxLength, cbAligment, &ppBuffer)
    struct IMFMediaBuffer ppBuffer_1 = ppBuffer
    
    if (rax_2 s< 0)
        goto label_1425ed930
    
    int64_t var_30 = 0
    
    if ((*(*ppBuffer_1 + 0x18))(ppBuffer_1, &var_30, 0, 0) s< 0)
        ppBuffer_1 = ppBuffer
        *arg2 = 2
        *(arg2 + 8) = 0
        
        if (ppBuffer_1 == 0)
            goto label_1425eda0f
        
    label_1425eda0c:
        (*(*ppBuffer_1 + 0x10))(ppBuffer_1)
        goto label_1425eda0f
    
    memcpy(var_30, arg3, arg4)
    struct IMFMediaBuffer ppBuffer_2 = ppBuffer
    int32_t rax_6 = (*(*ppBuffer_2 + 0x20))(ppBuffer_2)
    ppBuffer_1 = ppBuffer
    
    if (rax_6 s< 0)
        goto label_1425ed930
    
    if ((*(*ppBuffer_1 + 0x30))(ppBuffer_1, zx.q(arg4)) s< 0)
        ppBuffer_1 = ppBuffer
    label_1425ed930:
        *arg2 = 2
        *(arg2 + 8) = 0
        
        if (ppBuffer_1 == 0)
            goto label_1425eda0f
        
        goto label_1425eda0c
    
    struct IMFSample ppIMFSample_1 = ppIMFSample
    
    if ((*(*ppIMFSample_1 + 0x150))(ppIMFSample_1, ppBuffer) s< 0)
        ppBuffer_1 = ppBuffer
        goto label_1425ed930
    
    struct IMFSample ppIMFSample_2 = ppIMFSample
    (*(*ppIMFSample_2 + 0x120))(ppIMFSample_2, arg5)
    struct IMFSample ppIMFSample_3 = ppIMFSample
    (*(*ppIMFSample_3 + 0x130))(ppIMFSample_3, arg6)
    ppBuffer_1 = ppBuffer
    *arg2 = var_28
    *(arg2 + 8) = ppIMFSample
    ppIMFSample = 0
    
    if (ppBuffer_1 != 0)
        goto label_1425eda0c
else
    *arg2 = 2
    *(arg2 + 8) = 0
label_1425eda0f:
    struct IMFSample ppIMFSample_4 = ppIMFSample
    
    if (ppIMFSample_4 != 0)
        (*(*ppIMFSample_4 + 0x10))(ppIMFSample_4)

return arg2
