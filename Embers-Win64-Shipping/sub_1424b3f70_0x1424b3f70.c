// 函数: sub_1424b3f70
// 地址: 0x1424b3f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* var_60 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
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
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rsi)[0x4] = &var_58
int32_t var_78 = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:1 = var_78 != 0
int64_t var_70 = 0
int64_t rbp
rbp.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t rax_8 = *(arg2 + 0x20)
int64_t* rdx_10 = var_68
int64_t* rcx_5 = var_60
int64_t rdi
rdi.b = rax_8 != 0
int64_t var_88 = var_70
*(arg2 + 0x20) = rdi + rax_8
int64_t result = sub_14201eb30(rcx_5, rdx_10, rsi, zx.q(rbp.b))
*arg3 = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
