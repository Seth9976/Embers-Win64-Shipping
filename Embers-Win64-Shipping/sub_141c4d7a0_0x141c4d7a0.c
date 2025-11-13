// 函数: sub_141c4d7a0
// 地址: 0x141c4d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[1], 0, 0x19)
arg1[5] = arg2
*arg1 = &data_143209958
arg1[6] = 0
arg1[7] = 0
arg1[8].d = arg4
float zmm0 = sub_142366f80(arg3)
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb].d = 0
*(arg1 + 0x44) = int.d(zmm0)
*(arg1 + 0x4c) = 0x10
*(arg1 + 0x5c) = 0
arg1[0xc].b = 0
int64_t rcx_1 = sx.q(*(arg3 + 0x204))
*(arg1 + 0xc) = rcx_1.d

if (arg4 != 2 && *(arg3 + 0x169) - 2 u<= 1)
    arg1[0xa] = *(arg3 + 0x278)
    uint64_t rax_3 = zx.q(*(arg3 + 0x274))
    arg1[0xb].d = rax_3.d
    arg1[9].d = (divu.dp.q(0:rax_3, rcx_1 * 2)).d
    *(arg3 + 0x278) = 0

return arg1
