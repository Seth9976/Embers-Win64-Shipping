// 函数: sub_141e90b40
// 地址: 0x141e90b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143257798
float zmm1[0x4] = data_143f3a0a0
*(arg1 + 0xe0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0xd0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0xf0) = __andps_xmmxud_memxud(data_143f3a0a0, data_143f3a0b0)
*(arg1 + 0x3c) |= 3
arg1[0xa].d = 0x3f800000
arg1[0xb].d = 0x3f800000
arg1[0xf].b = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"InterpGroupInst0", 1)
int64_t* rax_1 = sub_1424cd3c0()
arg1[6] = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
return arg1
