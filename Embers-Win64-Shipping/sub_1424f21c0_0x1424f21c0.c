// 函数: sub_1424f21c0
// 地址: 0x1424f21c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_2 = *(arg2 + 0x38)
void* r15 = &var_78
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r15 = rax_2

void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_4 = *(arg2 + 0x38)
void* r14 = &var_68

if (rax_4 != 0)
    r14 = rax_4

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

*(arg2 + 0x38) = 0
int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* rsi = &arg_10
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    rsi = rax_8

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_58, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

uint64_t* rax_10 = *(arg2 + 0x38)
uint64_t* r8_12 = &var_58
int64_t var_48 = var_98

if (rax_10 != 0)
    r8_12 = rax_10

int64_t var_38 = var_88
int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
int32_t var_90
int32_t var_40 = var_90
int32_t var_80
int32_t var_30 = var_80
*(arg2 + 0x20) = rdi + rax_11
char result = sub_1420cb1f0(r15, r14, &var_38, &var_48, rsi, r8_12)
*arg3 = result
return result
