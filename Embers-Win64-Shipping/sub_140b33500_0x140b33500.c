// 函数: sub_140b33500
// 地址: 0x140b33500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg6)
int64_t rax_3
int64_t rdx_4
rdx_4:rax_3 = muls.dp.q(-0x5c28f5c28f5c28f5, r8_2)
int64_t rdx_6 = (rdx_4 + r8_2) s>> 6
int64_t result = (rdx_6 u>> 0x3f) + rdx_6
    + (((sx.q(arg3) + sx.q(arg2) * 0x18) * 0x3c + sx.q(arg4)) * 0x3c + sx.q(arg5)) * 0x989680
*arg1 = result
return result
