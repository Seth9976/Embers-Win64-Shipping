// 函数: sub_14064fe10
// 地址: 0x14064fe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_b8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_b8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t var_c8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_c8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t var_d8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_d8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

*(arg2 + 0x38) = 0
void var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_a8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

void* rax_6 = *(arg2 + 0x38)
void* rsi = &var_a8
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

void var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_98, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_8 = *(arg2 + 0x38)
void* r14 = &var_98
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r14 = rax_8

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* rcx_7 = &arg_10
uint64_t var_88 = var_d8

if (rax_10 != 0)
    rcx_7 = rax_10

uint64_t var_78 = var_c8
int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
uint64_t var_68 = var_b8
uint128_t zmm0_1 = var_58
int32_t var_d0
int32_t var_80 = var_d0
int32_t var_c0
int32_t var_70 = var_c0
int32_t var_b0
int32_t var_60 = var_b0
int32_t var_40
int32_t var_20 = var_40
*(arg2 + 0x20) = rdi + rax_11
uint128_t var_38 = zmm0_1
int64_t var_48
int64_t var_28 = var_48
char result = sub_140634260(&var_38, &var_68, &var_78, &var_88, rsi, r14, rcx_7)
*arg3 = result
return result
