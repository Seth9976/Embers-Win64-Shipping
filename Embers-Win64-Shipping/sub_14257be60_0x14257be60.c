// 函数: sub_14257be60
// 地址: 0x14257be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_120, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_120)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_130 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_130, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_130)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_138 = 0
bool arg_10 = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_138, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

bool cond:3 = var_138 != 0
int32_t var_134 = 0
int64_t r13
r13.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_134, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_134)

bool cond:4 = var_134 != 0
*(arg2 + 0x38) = 0
int64_t r12
r12.b = cond:4
void var_110

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_110, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_110)

void* rax_7 = *(arg2 + 0x38)
void* r14 = &var_110
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r14 = rax_7

void var_100

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_100, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_100)

void* rax_9 = *(arg2 + 0x38)
void* rsi = &var_100
int64_t var_128 = 0
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_128, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_128)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* r15 = &var_128

if (rax_11 != 0)
    r15 = rax_11

void var_d8
memset(&var_d8, 0, 0x88)
int32_t var_d0 = 0x3f800000
*(arg2 + 0x38) = 0
char r8_17

if (*(arg2 + 0x20) == 0)
    int64_t* r8_18 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_18[4]
    r8_17 = sub_140d30490(arg2, &var_d8, r8_18)
else
    r8_17 = sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void* rax_13 = *(arg2 + 0x38)
void* rcx_10 = &var_d8
int512_t zmm2
zmm2.o = var_130

if (rax_13 != 0)
    rcx_10 = rax_13

int64_t var_e8 = var_120
int64_t rax_14 = *(arg2 + 0x20)
void* var_140 = rcx_10
int64_t* var_148 = r15
int64_t rdi
rdi.b = rax_14 != 0
void* var_150 = rsi
void* var_158 = r14
char var_160 = r12.b
*(arg2 + 0x20) = rdi + rax_14
int32_t var_118
int32_t var_e0 = var_118
char var_168 = r13.b
char result = sub_1422a6ec0(arg1, &var_e8, r8_17)
*arg3 = result
return result
