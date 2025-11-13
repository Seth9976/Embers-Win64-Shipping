// 函数: sub_1425198b0
// 地址: 0x1425198b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* var_a0 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

uint32_t zmm3[0x4] = data_143f67580
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f67590)
zmm3[0].q = zx.o(0) u>> 0x40
float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_58 = zx.o(0)
uint32_t var_48[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_4)[0x4] = *(arg2 + 0x38)
float (* r15)[0x4] = &var_68
int64_t var_78 = 0
int64_t var_70 = 0

if (rax_4 != 0)
    r15 = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* r14 = &var_78
void* var_a8 = nullptr

if (rax_6 != 0)
    r14 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t var_88 = 0
int64_t var_80 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* rsi = &var_88
uint64_t var_98 = 0
int64_t var_90 = 0

if (rax_9 != 0)
    rsi = rax_9

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_98, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

uint64_t* rax_11 = *(arg2 + 0x38)
uint64_t* rcx_6 = &var_98
void* r9 = var_a8

if (rax_11 != 0)
    rcx_6 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
int64_t* rcx_7 = var_a0
int64_t rdi
rdi.b = rax_12 != 0
*(arg2 + 0x20) = rdi + rax_12
char result = sub_1420b6510(rcx_7, r15, r14, r9, rsi, rcx_6)
uint64_t rcx_8 = var_98
*arg3 = result

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_88

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_78

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_d8)
return result
