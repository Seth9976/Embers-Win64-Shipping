// 函数: sub_141f12430
// 地址: 0x141f12430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f3aed0(arg1, arg2)
int64_t r8 = *(arg1 + 0xe8)

if (r8 != 0)
    int32_t arg_8
    sub_140865c40(arg2, &arg_8, r8)
    int64_t rax = sx.q(arg_8)
    int64_t rcx_1
    
    if (rax.d == 0xffffffff)
        rcx_1 = 0
    else
        rcx_1 = *arg2 + rax * 0x18
    
    result = rcx_1 + 8
    
    if (rcx_1 == 0)
        result = 0
    
    if (result != 0)
        result = *result
        *(arg1 + 0xe8) = result

return result
