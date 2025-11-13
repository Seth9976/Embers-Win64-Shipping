// 函数: sub_14257c190
// 地址: 0x14257c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_130, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_130)

int64_t var_140

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_140, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_140)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_150 = (zx.o(0)).d

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_150, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_150)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = arg_20 != 0
int32_t var_158 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_158, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_158)

bool cond:4 = var_158 != 0
int32_t var_154 = 0
int64_t r13
r13.b = cond:4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_154, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_154)

bool cond:5 = var_154 != 0
*(arg2 + 0x38) = 0
int64_t r12
r12.b = cond:5
void var_120

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_120, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_120)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* r14 = &var_120
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r14 = rax_8

void var_110

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_110, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_110)

void* rax_10 = *(arg2 + 0x38)
void* rsi = &var_110
int64_t var_148 = 0
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    rsi = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_148, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_148)

int64_t* rax_12 = *(arg2 + 0x38)
int64_t* r15 = &var_148

if (rax_12 != 0)
    r15 = rax_12

void var_d8
memset(&var_d8, 0, 0x88)
int32_t var_d0 = 0x3f800000
*(arg2 + 0x38) = 0
char r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    r9 = sub_140d30490(arg2, &var_d8, r8_19)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void* rax_14 = *(arg2 + 0x38)
void* rcx_11 = &var_d8
int512_t zmm3
zmm3.o = var_150
int64_t var_f8 = var_140

if (rax_14 != 0)
    rcx_11 = rax_14

int64_t var_e8 = var_130
int64_t rax_15 = *(arg2 + 0x20)
void* var_168 = rcx_11
int64_t* var_170 = r15
int64_t rdi
rdi.b = rax_15 != 0
int32_t var_138
int32_t var_f0 = var_138
int32_t var_128
int32_t var_e0 = var_128
*(arg2 + 0x20) = rdi + rax_15
char result = sub_1422a6f20(arg1, &var_e8, &var_f8, r9, cond:3, r13.b, r12.b, r14, rsi)
*arg3 = result
return result
