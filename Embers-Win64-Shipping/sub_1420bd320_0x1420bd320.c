// 函数: sub_1420bd320
// 地址: 0x1420bd320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_140d3c6e0(arg1 + 8) == 0)
    int64_t rcx_9 = *arg2
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    result.b = 0
else
    void var_38
    int64_t* rax = sub_140596d10(&var_38, arg2)
    int64_t rax_1 = sub_140d3c6e0(arg1 + 8)
    uint128_t zmm0_1 = *(arg1 + 0x10)
    void var_28
    int64_t* rax_2 = sub_140596d10(&var_28, rax)
    zmm0_1.q(sx.q(_mm_bsrli_si128(zmm0_1, 8).d) + rax_1, rax_2, zx.q(arg3), zx.q(arg4), zmm0_1)
    int64_t rcx_7 = *rax
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *arg2
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    result.b = 1

return result
