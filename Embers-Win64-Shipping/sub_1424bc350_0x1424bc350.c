// 函数: sub_1424bc350
// 地址: 0x1424bc350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

uint32_t zmm3[0x4] = data_143f640d0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f640e0)
zmm3[0].q = zx.o(0) u>> 0x40
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_48 = zx.o(0)
uint32_t var_38[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

float (* rax_4)[0x4] = *(arg2 + 0x38)
float (* r8_4)[0x4] = &var_58
int64_t rdx_4 = var_68

if (rax_4 != 0)
    r8_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t result = (*(*arg1 + 0x638))(arg1, rdx_4, r8_4)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_88)
return result
