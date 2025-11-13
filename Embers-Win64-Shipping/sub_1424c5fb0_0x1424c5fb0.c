// 函数: sub_1424c5fb0
// 地址: 0x1424c5fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = 0
int32_t var_90 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x30)
void var_58
sub_140d3a3a0(&var_58, nullptr)
char var_50 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r13 = &var_98
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r13 = rax_2

void var_b0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_b0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

void* rax_4 = *(arg2 + 0x38)
void* r12 = &var_b0
int32_t var_b4 = 0

if (rax_4 != 0)
    r12 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b4, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b4)

int32_t var_b8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_b8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

*(arg2 + 0x38) = 0
void var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_a8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

void* rax_8 = *(arg2 + 0x38)
void* r15 = &var_a8
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r15 = rax_8

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_48, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float (* rax_10)[0x4] = *(arg2 + 0x38)
float (* r14)[0x4] = &var_48
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    r14 = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

uint64_t rax_12 = *(arg2 + 0x38)
uint64_t rsi = &arg_10
float arg_20 = 0f
*(arg2 + 0x38) = 0

if (rax_12 != 0)
    rsi = rax_12

int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    r9 = sub_140d30490(arg2, &arg_20, r8_15)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

float* rax_14 = *(arg2 + 0x38)
float* r8_16 = &arg_20
int512_t zmm3
zmm3.o = var_b8

if (rax_14 != 0)
    r8_16 = rax_14

int64_t rax_15 = *(arg2 + 0x20)
int32_t r8_17 = var_b4
int64_t rdi
rdi.b = rax_15 != 0
*(arg2 + 0x20) = rdi + rax_15
int64_t result = j_sub_1420c7220(r13, r12, r8_17, r9, r15, r14, rsi, r8_16)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_12 = var_88

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
