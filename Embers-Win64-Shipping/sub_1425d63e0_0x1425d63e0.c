// 函数: sub_1425d63e0
// 地址: 0x1425d63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
sub_1425d7140(arg1, &var_98)
uint32_t zmm3[0x4] = data_143f70990
int32_t rax = *arg3
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f709a0)
zmm3[0].q = zx.o(0) u>> 0x40
float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int32_t* var_90
*var_90 = rax
__builtin_memset(&var_90[4], 0, 0x20)
*(var_90 + 0x30) = temp0_1
int32_t rax_1 = var_98
*(var_90 + 0x60) = temp0_1
*(var_90 + 0x40) = zx.o(0)
*(var_90 + 0x70) = zx.o(0)
*(var_90 + 0x50) = temp0
*(var_90 + 0x80) = temp0
var_90[0x24] = 0xffffffff
int32_t arg_8
sub_1425d99d0(arg1, &arg_8, arg2, var_90, rax_1, nullptr)
return *arg1 + 0x10 + sx.q(arg_8) * 0xa0
