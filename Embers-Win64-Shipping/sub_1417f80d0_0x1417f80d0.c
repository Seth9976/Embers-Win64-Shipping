// 函数: sub_1417f80d0
// 地址: 0x1417f80d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_a0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int32_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

uint32_t zmm3[0x4] = data_143ef9910
bool cond:0 = var_a8 != 0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143ef9920)
zmm3[0].q = zx.o(0) u>> 0x40
int64_t r15
r15.b = cond:0
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
float (* r14)[0x4] = &var_68

if (rax_7 != 0)
    r14 = rax_7

void var_80
sub_1405d5290(&var_80)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_80, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* rsi = &var_80
int64_t* var_90 = nullptr
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_90, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int64_t** rax_11 = *(arg2 + 0x38)
int64_t** rcx_8 = &var_90
int64_t r8_14 = var_a0
int64_t rdx_14 = var_98

if (rax_11 != 0)
    rcx_8 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
void* rcx_9 = var_88
int64_t rdi
rdi.b = rax_12 != 0
*(arg2 + 0x20) = rdi + rax_12
void* result = sub_1417ebe50(rcx_9, rdx_14, r8_14, r15.b, r14, rsi, rcx_8)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_e8)
return result
