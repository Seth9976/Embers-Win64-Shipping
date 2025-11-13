// 函数: sub_1425eed60
// 地址: 0x1425eed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0
struct IMFSample ppIMFSample = 0

if (MFCreateSample(&ppIMFSample) s>= 0)
    int32_t rax_1 = *(arg1 + 0xb8)
    uint32_t cbMaxLength = *(arg1 + 0xb4)
    int64_t* ppBuffer = nullptr
    uint32_t cbAligment = rax_1 - 1
    
    if (rax_1 u<= 1)
        cbAligment = 0
    
    HRESULT rax_2
    int512_t zmm0_1
    rax_2, zmm0_1 = MFCreateAlignedMemoryBuffer(cbMaxLength, cbAligment, &ppBuffer)
    int64_t* ppBuffer_1
    
    if (rax_2 s< 0)
        ppBuffer_1 = ppBuffer
    label_1425eeddd:
        *arg2 = 2
        *(arg2 + 8) = 0
        
        if (ppBuffer_1 != 0)
            (*(*ppBuffer_1 + 0x10))(ppBuffer_1)
        
        goto label_1425eedf2
    
    struct IMFSample ppIMFSample_2 = ppIMFSample
    int32_t rax_4 = (*(*ppIMFSample_2 + 0x150))(ppIMFSample_2, ppBuffer)
    ppBuffer_1 = ppBuffer
    
    if (rax_4 s< 0)
        goto label_1425eeddd
    
    if (ppBuffer_1 != 0)
        (*(*ppBuffer_1 + 0x10))(ppBuffer_1)
    
    struct IMFSample ppIMFSample_1 = ppIMFSample
    int64_t* rcx_1 = *(arg1 + 0x88)
    zmm0_1.o = zx.o(0)
    int64_t var_48 = 0
    int128_t var_38_1 = zx.o(0)
    struct IMFSample ppIMFSample_5 = ppIMFSample_1
    int32_t arg_8 = 0
    int32_t rax_10 = (*(*rcx_1 + 0xc8))(zmm0_1, 0, 1, &var_48, &arg_8)
    int64_t* rbx_1 = var_38_1:8.q
    
    if (rbx_1 != 0)
        int64_t rdx_1 = *rbx_1
        (*(rdx_1 + 8))(rbx_1, rdx_1)
    
    struct IMFSample ppIMFSample_4 = ppIMFSample
    
    if (rax_10 == 0xc00d6d72 || ppIMFSample_4 == 0)
    label_1425eeedd:
        *arg2 = 2
        *(arg2 + 8) = 0
        
        if (rbx_1 != 0)
        label_1425eeef2:
            (*(*rbx_1 + 0x10))(rbx_1)
        label_1425eeef5:
            ppIMFSample_4 = ppIMFSample
        
        if (ppIMFSample_4 != 0)
            (*(*ppIMFSample_4 + 0x10))(ppIMFSample_4)
    else
        if (rax_10 == 0xc00d6d61)
            if (sub_1425f19a0(arg1) != 0)
                sub_1425eed60(arg1, arg2)
                
                if (rbx_1 == 0)
                    goto label_1425eeef5
                
                goto label_1425eeef2
            
            *arg2 = 2
            *(arg2 + 8) = 0
            
            if (rbx_1 == 0)
                goto label_1425eeef5
            
            goto label_1425eeef2
        
        if (rax_10 s< 0)
            goto label_1425eeedd
        
        *arg2 = 0
        *(arg2 + 8) = ppIMFSample_4
        ppIMFSample = 0
        
        if (rbx_1 != 0)
            goto label_1425eeef2
else
    *arg2 = 2
    *(arg2 + 8) = 0
label_1425eedf2:
    struct IMFSample ppIMFSample_3 = ppIMFSample
    
    if (ppIMFSample_3 != 0)
        (*(*ppIMFSample_3 + 0x10))(ppIMFSample_3)

return arg2
