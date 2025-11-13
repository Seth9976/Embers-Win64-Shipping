// 函数: sub_142453890
// 地址: 0x142453890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_80, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

uint32_t zmm3[0x4] = data_143f5ed80
bool cond:0 = var_88 != 0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f5ed90)
zmm3[0].q = zx.o(0) u>> 0x40
int64_t rbp
rbp.b = cond:0
float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_58 = zx.o(0)
uint32_t var_48[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rsi)[0x4] = &var_68
void* const var_78 = nullptr

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdx_8 = var_80
int64_t rdi
rdi.b = rax_7 != 0
void* const rax_8 = var_78
*(arg2 + 0x20) = rdi + rax_7
int64_t* result = sub_141db9b80(arg1, rdx_8, rbp.b, rsi, rax_8)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_b8)
return result
