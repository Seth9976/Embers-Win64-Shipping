// 函数: sub_1420767c0
// 地址: 0x1420767c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143283728
arg1[1] = *arg2
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
uint128_t zmm0 = data_14399f5c0
arg1[7].d = 0
*arg1 = &data_14328aa28
*(arg1 + 0x28) = zmm0
*(arg1 + 0x3c) = 0x3f800000
arg1[8].d &= 0xfffffffc
*(arg1 + 0x44) &= 0xfffffffe
__builtin_memset(&arg1[9], 0, 0x20)
*(arg1 + 0x68) = data_14399f5e0
arg1[0xf] = data_143dbb1f0
zmm0 = zx.o(data_143dbb1f0)
arg1[0x11].w = 0
*(arg1 + 0x8a) = 0
arg1[0x10] = zmm0.q
zmm0 = data_14399f5e0
*(arg1 + 0x9c) = 1
*(arg1 + 0x8c) = zmm0
sub_1423faad0(&arg1[0x15], arg2, &data_143dbb1f0, arg5)
*(arg1 + 0x28) = *arg5
arg1[0x14].d = 0x3f800000
*(arg1 + 0xa4) = 0x3f800000
*(arg1 + 0x14) = 2
*arg1 = &data_14328aa70
arg1[0x26] = *arg3
void* rax_1 = arg3[1]
arg1[0x27] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[0x28].d = arg3[2].d
arg1[0x29] = arg4
arg1[0x34].b = 0
*(arg1 + 0x14) = 2
return arg1
