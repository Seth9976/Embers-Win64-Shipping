// 函数: sub_1417f8360
// 地址: 0x1417f8360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* var_80 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_80, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_90, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

uint32_t zmm3[0x4] = data_143ef9910
bool cond:0 = var_98 != 0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143ef9920)
zmm3[0].q = zx.o(0) u>> 0x40
int64_t r14
r14.b = cond:0
float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_58 = zx.o(0)
uint32_t var_48[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_7)[0x4] = *(arg2 + 0x38)
float (* rsi)[0x4] = &var_68

if (rax_7 != 0)
    rsi = rax_7

void var_78
sub_1405d5290(&var_78)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_78, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* rcx_7 = &var_78
int64_t r8_12 = var_90
int64_t rdx_12 = var_88

if (rax_9 != 0)
    rcx_7 = rax_9

int64_t rax_10 = *(arg2 + 0x20)
void* rcx_8 = var_80
int64_t rdi
rdi.b = rax_10 != 0
*(arg2 + 0x20) = rdi + rax_10
int64_t* result = sub_1417ebfd0(rcx_8, rdx_12, r8_12, r14.b, rsi, rcx_7)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_c8)
return result
