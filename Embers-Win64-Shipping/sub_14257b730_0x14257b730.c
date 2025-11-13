// 函数: sub_14257b730
// 地址: 0x14257b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_158, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_158)

uint128_t var_118

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_118, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_118)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_168 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_168, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_168)

bool cond:3 = var_168 != 0
int32_t var_164 = 0
int64_t r13
r13.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_164, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_164)

bool cond:4 = var_164 != 0
*(arg2 + 0x38) = 0
int64_t r12
r12.b = cond:4
void var_148

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_148, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_148)

void* rax_7 = *(arg2 + 0x38)
void* r14 = &var_148
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r14 = rax_7

void var_138

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_138, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

void* rax_9 = *(arg2 + 0x38)
void* rsi = &var_138
int64_t var_160 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_160, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_160)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* r15 = &var_160

if (rax_11 != 0)
    r15 = rax_11

void var_d8
memset(&var_d8, 0, 0x88)
int32_t var_d0 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_d8, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void* rax_13 = *(arg2 + 0x38)
void* rcx_10 = &var_d8
uint128_t var_f8 = var_118
uint128_t zmm0 = zx.o(var_158)

if (rax_13 != 0)
    rcx_10 = rax_13

int64_t var_108
int64_t var_e8 = var_108
int64_t rax_14 = *(arg2 + 0x20)
void* var_170 = rcx_10
int64_t* var_178 = r15
int64_t rdi
rdi.b = rax_14 != 0
void* var_180 = rsi
int32_t var_100
int32_t var_e0 = var_100
void* var_188 = r14
char var_190 = r12.b
int32_t var_150
int32_t var_120 = var_150
*(arg2 + 0x20) = rdi + rax_14
uint64_t var_128 = zmm0.q
char var_198 = r13.b
char result = sub_1422a6c10(arg1, &var_128, &var_f8, cond:2)
*arg3 = result
return result
