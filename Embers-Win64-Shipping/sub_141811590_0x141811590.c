// 函数: sub_141811590
// 地址: 0x141811590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x100)
int64_t rdx = sx.q(*(arg1 + 0xf8))
int64_t* result

if ((*(*(arg1 + 0xf0) + rdx * 0x30 - 8) & 2) == 0)
    int32_t rax_15 = (rdx + 1).d
    *(arg1 + 0xf8) = rax_15
    
    if (rax_15 s> *(arg1 + 0xfc))
        sub_1405c4f50(arg1 + 0xf0)
    
    void* rdi_6 = rdx * 0x30 + *(arg1 + 0xf0)
    __builtin_memset(rdi_6, 0, 0x18)
    *(rdi_6 + 0x10) = *arg2
    *arg2 = 0
    *(rdi_6 + 0x18) = arg2[1].d
    *(rdi_6 + 0x1c) = *(arg2 + 0xc)
    arg2[1] = 0
    result = sub_140b29d90(rdi_6 + 0x20)
    *(rdi_6 + 0x28) &= 0xfffffffe
    *(rdi_6 + 0x28) |= 2
else
    int64_t var_28 = *arg2
    *arg2 = 0
    int32_t var_20_1 = arg2[1].d
    int32_t var_1c_1 = *(arg2 + 0xc)
    arg2[1] = 0
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int64_t var_18
    sub_140b29d90(&var_18)
    int32_t var_10
    int32_t rax_6 = (var_10 & 0xfffffffe) | 2
    int64_t* rdi_3 = *(arg1 + 0xf0) - 0x30 + sx.q(*(arg1 + 0xf8)) * 0x30
    
    if (rdi_3 != &var_38)
        int64_t rcx_6 = *rdi_3
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *rdi_3 = var_38
        var_38 = 0
        rdi_3[1].d = var_30_1.d
        *(rdi_3 + 0xc) = var_30_1:4.d
        int64_t var_30_2 = 0
    
    sub_14180c530(&rdi_3[2], &var_28)
    rdi_3[4] = var_18
    rdi_3[5].d ^= (rax_6 ^ rdi_3[5].d) & 1
    rdi_3[5].d ^= (rdi_3[5].d ^ rax_6) & 2
    result = sub_14180c130(&var_28)
    int64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)

if (arg1 == -0x100)
    return result

return LeaveCriticalSection(arg1 + 0x100) __tailcall
