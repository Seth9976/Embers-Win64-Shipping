// 函数: sub_141f25460
// 地址: 0x141f25460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg2.d
arg2 = *data_143f3ae10

if (not(arg2.d f> 9.99999994e-09f))
    arg2 = zx.o(0)

arg1[0x42].b &= 0xfe
float zmm0 = arg2.d
arg1[0x42].b |= arg4
arg2.d = arg2.d f* arg3
zmm0 = zmm0 * zmm3
*(arg1 + 0x204) = arg2.d
arg2.d = arg2.d f+ zmm0
arg1[0x40].d = zmm0
sub_141f259b0(arg1, arg2)

if (arg1[0x44] == 0)
    return sub_141ee8490(arg1) __tailcall

void* rax_1 = arg1[0x15]

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

jump(*(**(rax_1 + 0x1b0) + 0xa0))
