// 函数: sub_14279fab0
// 地址: 0x14279fab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint32_t zmm2[0x4] = data_143f889a0
int512_t zmm3
zmm3.o = zx.o(0)
float zmm0[0x4] = zmm2
int32_t var_98 = 0xffffffff
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f889b0)
zmm0[0].q = zx.o(0) u>> 0x40
float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
float var_88[0x4] = temp0_1
float var_58[0x4] = temp0_1
int32_t var_94 = 0
int128_t var_78 = zx.o(0)
uint32_t var_68[0x4] = temp0
int128_t var_48 = zx.o(0)
uint32_t var_38[0x4] = temp0
sub_140d3a3a0(&var_98, arg2)
int128_t var_88_1 = *(arg2 + 0x1c0)
int64_t rdi_1 = sx.q(arg1[0x10].d)
int128_t var_78_1 = *(arg2 + 0x1d0)
int128_t var_68_1 = *(arg2 + 0x1e0)
int32_t rax_2 = (rdi_1 + 1).d
int128_t var_58_1 = data_143dbb0c0
char r8
char var_90 = r8
int128_t var_48_1 = data_143dbb0d0
int128_t var_38_1 = data_143dbb0e0
arg1[0x10].d = rax_2

if (rax_2 s> *(arg1 + 0x84))
    sub_1405fdd60(&arg1[0xf])

int64_t rax_3 = arg1[0xf]
int128_t* rcx_2 = rdi_1 * 0x70
*(rcx_2 + rax_3) = var_98.o
*(rcx_2 + rax_3 + 0x10) = var_88_1
*(rcx_2 + rax_3 + 0x20) = var_78_1
*(rcx_2 + rax_3 + 0x30) = var_68_1
*(rcx_2 + rax_3 + 0x40) = var_58_1
*(rcx_2 + rax_3 + 0x50) = var_48_1
*(rcx_2 + rax_3 + 0x60) = var_38_1
(*(*arg1 + 0x288))(arg1, var_48_1, temp0, zmm3)
int128_t zmm1_1 = *(arg1 + 0xa0)
int128_t var_c8 = *(arg1 + 0x90)
int128_t var_a8 = *(arg1 + 0xb0)
int128_t var_b8 = zmm1_1
int64_t result = sub_1427a1740(&arg1[5], arg1, &var_c8)
__security_check_cookie(rax_1 ^ &var_e8)
return result
