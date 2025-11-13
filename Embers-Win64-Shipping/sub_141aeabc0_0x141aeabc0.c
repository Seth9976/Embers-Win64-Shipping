// 函数: sub_141aeabc0
// 地址: 0x141aeabc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_b0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_b0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_b0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rcx_1 = rax_2

void var_a0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

void* rax_4 = *(arg2 + 0x38)
void* rcx_3 = &var_a0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rcx_3 = rax_4

void var_90

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_90, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r13 = &var_90
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r13 = rax_6

void var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_80, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int128_t* rax_8 = *(arg2 + 0x38)
int128_t* r12 = &var_80
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r12 = rax_8

void var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t rax_10 = *(arg2 + 0x38)
char r15 = &var_70
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    r15 = rax_10.b

void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_12 = *(arg2 + 0x38)
void* r14 = &var_60
*(arg2 + 0x38) = 0

if (rax_12 != 0)
    r14 = rax_12

void var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_50, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

void* rax_14 = *(arg2 + 0x38)
void* rsi = &var_50
int32_t arg_20 = 0

if (rax_14 != 0)
    rsi = rax_14

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:7 = arg_20 != 0
int32_t var_c4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_c4, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c4)

int32_t var_c8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_c8, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t rax_18 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_18 != 0
int32_t var_d0 = var_c8
int32_t var_d8 = var_c4
bool var_e0 = cond:7
void* var_e8 = rsi
void* var_f0 = r14
*(arg2 + 0x20) = rdi + rax_18
return sub_141ac7970(rcx_1, rcx_3, r13, r12, r15)
