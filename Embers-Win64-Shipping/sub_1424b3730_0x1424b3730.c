// 函数: sub_1424b3730
// 地址: 0x1424b3730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_50 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_70, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int32_t var_74 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_74, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_5 = *(arg2 + 0x38)
void* r14 = &var_38
int32_t var_78 = 0

if (rax_5 != 0)
    r14 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_18, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

void* var_58 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_58, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_48 = 0
int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_48, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_11 = *(arg2 + 0x38)
int64_t* rsi = &var_48
int32_t* var_60 = nullptr

if (rax_11 != 0)
    rsi = rax_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_60, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_68, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

char arg_10 = 0
int64_t rdx_23

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    rdx_23 = sub_140d30490(arg2, &arg_10, r8_23)
else
    rdx_23 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_15 = *(arg2 + 0x20)
int32_t zmm1 = arg_20
int128_t zmm2 = var_74
int64_t rdi
rdi.b = rax_15 != 0
int64_t* rcx_12 = var_50
uint32_t rax_16 = zx.d(arg_10)
int64_t rax_17 = var_68
int32_t* rax_18 = var_60
void* rax_19 = var_58
int32_t var_a8 = arg_18
int32_t zmm0 = var_78
*(arg2 + 0x20) = rdi + rax_15
char result = sub_14201d7e0(rcx_12, rdx_23, zmm2, r14, zmm0, zmm1, var_a8, rax_19, rsi, rax_18, 
    rax_17, rax_16)
int64_t rcx_13 = var_48
*arg3 = result

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
