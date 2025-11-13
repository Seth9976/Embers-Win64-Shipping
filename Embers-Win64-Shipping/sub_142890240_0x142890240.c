// 函数: sub_142890240
// 地址: 0x142890240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t rdx_1 = temp0_1 & 0x3f
    int32_t rax_3 = temp1_1 + rdx_1
    int32_t r8_2 = rax_3 s>> 6
    
    if (arg1[1].d s> r8_2)
        return zx.q((*(*arg1 + (sx.q(r8_2) << 3)) u>> ((rax_3.b & 0x3f) - rdx_1.b)).d) & 1

return 0
