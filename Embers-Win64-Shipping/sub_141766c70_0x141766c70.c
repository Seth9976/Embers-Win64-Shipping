// 函数: sub_141766c70
// 地址: 0x141766c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*arg2 != 0)
    int64_t rbx_1 = 0
    int64_t rsi_1 = *(arg1 + 0x40)
    int64_t rdi_1 = sx.q(*(arg1 + 0x48))
    uint64_t r14_1 = 0
    uint64_t var_38 = 0
    int32_t var_30_1 = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a00(&var_38, rdi_1.d, 0)
        r14_1 = var_38
        memcpy(r14_1, rsi_1, (rdi_1 << 3).d)
        rdi_1 = zx.q(var_30_1)
    
    result = sx.q(rdi_1.d)
    uint64_t rdi_2 = r14_1
    int64_t rcx_2 = r14_1 + (result << 3)
    uint64_t rsi_5 = (rcx_2 - r14_1 + 7) u>> 3
    
    if (r14_1 u> rcx_2)
        rsi_5 = 0
    
    if (rsi_5 != 0)
        do
            void* rax = *(arg2 + 0x10)
            void* rcx_3 = arg2 + 0x20
            int32_t* r15_1 = *rdi_2
            int32_t* arg_10 = r15_1
            
            if (rax != 0)
                rcx_3 = rax
            
            result = (*arg2)((*(*rcx_3 + 8))(rcx_3), &arg_10)
            
            if (result.d == 2)
                result = sub_14177dbe0(arg1, r15_1)
            
            rdi_2 += 8
            rbx_1 += 1
        while (rbx_1 != rsi_5)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
