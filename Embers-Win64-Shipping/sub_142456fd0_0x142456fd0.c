// 函数: sub_142456fd0
// 地址: 0x142456fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint32_t zmm3[0x4] = data_143f5ed80
int128_t var_68 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f5ed90)
zmm3[0].q = zx.o(0) u>> 0x40
float var_78[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_58[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* rbp)[0x4] = &var_78
int32_t var_118 = 0

if (rax_3 != 0)
    rbp = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_118, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_118)

int64_t r14
r14.b = var_118 != 0
void var_108
memset(&var_108, 0, 0x88)
int32_t var_100 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_108, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_108)

int128_t* rax_6 = *(arg2 + 0x38)
int128_t* rsi = &var_108
int32_t var_114 = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_114, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_114)

bool cond:3 = var_114 != 0
int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
char result = sub_141dcf310(arg1, rbp, r14.b, rsi, cond:3)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_148)
return result
