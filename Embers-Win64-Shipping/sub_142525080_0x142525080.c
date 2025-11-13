// 函数: sub_142525080
// 地址: 0x142525080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* var_50 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

uint32_t zmm3[0x4] = data_143f67580
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f67590)
zmm3[0].q = zx.o(0) u>> 0x40
float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_38 = zx.o(0)
uint32_t var_28[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* r8_6)[0x4] = &var_48
int64_t rdx_6 = var_58
void* rcx_3 = var_50

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
int64_t result = sub_1420d3e70(rcx_3, rdx_6, r8_6)
__security_check_cookie(rax_1 ^ &var_78)
return result
