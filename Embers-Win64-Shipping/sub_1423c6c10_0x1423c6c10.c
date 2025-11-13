// 函数: sub_1423c6c10
// 地址: 0x1423c6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = *(arg1 + 0x20)

if (result == 0 || (*result & 1) == 0)
    if (arg2 != 0)
        Concurrency::details::_CancellationTokenRegistration::_GetToken(arg2)
        result = *(arg1 + 0x20)
    
    if (result == 0)
        char* rax = j_sub_140a82f30(zx.q((&result[0x30]).d))
        
        if (rax == 0)
            rax = nullptr
        else
            *rax &= 0xfc
            *(rax + 1) = 0
            *(rax + 4) = 0
            __builtin_memset(&rax[0x10], 0, 0x14)
            *(rax + 0x28) = 0
            *(rax + 0x24) = 0xbf800000
        
        int64_t rcx_2 = *(arg1 + 0x20)
        
        if (rcx_2 != rax)
            *(arg1 + 0x20) = rax
            j_sub_140a74f90(rcx_2)
    
    sub_1423c0390()
    void* rdi_1 = *(arg2 + 0x138)
    void* arg_18
    int64_t* r8_1 = &arg_18
    arg_18 = arg1
    int32_t arg_8
    int32_t* rdx_1 = &arg_8
    
    if (*(arg1 + 0xb) != 1)
        sub_1423b8450(rdi_1 + 0x60, rdx_1, r8_1, nullptr)
    else
        sub_1423b8450(rdi_1 + 8, rdx_1, r8_1, nullptr)
        
        if (*(rdi_1 + 0x128) != 0)
            sub_1423b8450(rdi_1 + 0xc0, &arg_8, &arg_18, nullptr)
    
    *(*(arg1 + 0x20) + 0x28) = rdi_1
    result = *(arg1 + 0x20)
    *result |= 1

return result
