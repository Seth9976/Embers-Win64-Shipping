// 函数: sub_141ae9ca0
// 地址: 0x141ae9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_128 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_128, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_128)

int64_t* var_110 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_110, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_110)

int64_t var_118 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_118, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_118)

int64_t var_120 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_120, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_120)

char var_138 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_138, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

int64_t var_108

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_108, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_108)

int64_t var_f8
__builtin_memset(&var_f8, 0, 0x14)
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x14)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_f8, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f8)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* rsi = &var_f8
int32_t var_12c = 0

if (rax_9 != 0)
    rsi = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_12c, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_12c)

int32_t var_130 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_130, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_130)

int32_t var_134 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_134, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_134)

char var_137 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_137, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_137)

void** var_b8
sub_141f7a080(&var_b8)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &var_b8, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

void*** rax_15 = *(arg2 + 0x38)
void*** rdx_24 = &var_b8
int32_t zmm1 = var_130
uint32_t rcx_13 = zx.d(var_138)

if (rax_15 != 0)
    rdx_24 = rax_15

int64_t rax_16 = *(arg2 + 0x20)
int64_t r9 = var_120
int64_t r8_24 = var_118
int64_t rdi
rdi.b = rax_16 != 0
int64_t* rdx_25 = var_110
int32_t var_100
int32_t var_c0 = var_100
char rax_18 = var_137
int32_t rax_19 = var_12c
int64_t var_c8 = var_108
float var_150 = var_134[0]
float zmm0[0x4] = var_128
int128_t* var_170 = &var_c8
*(arg2 + 0x20) = rdi + rax_16
*arg3 = sub_141ac6cd0(zmm0, rdx_25, r8_24, r9, rcx_13, var_170, rsi, rax_19, zmm1, var_150, rax_18, 
    rdx_24)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

var_b8 = &data_142d6a040
int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

void var_b0
void* result = sub_1405ae180(&var_b0)
int64_t rcx_17 = var_e0

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = var_f8

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

__security_check_cookie(rax_1 ^ &var_198)
return result
