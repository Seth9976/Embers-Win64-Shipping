// 函数: sub_140a0ca20
// 地址: 0x140a0ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_28 = 0
int64_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* r12 = &var_28
int64_t var_38 = 0
int64_t var_30 = 0

if (rax_3 != 0)
    r12 = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r15 = &var_38
int64_t var_48 = 0
int64_t var_40 = 0

if (rax_5 != 0)
    r15 = rax_5

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r14 = &var_48
int64_t var_58 = 0
int64_t var_50 = 0

if (rax_7 != 0)
    r14 = rax_7

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_9 = *(arg2 + 0x38)
int64_t* rsi = &var_58
uint64_t var_68 = 0
int64_t var_60 = 0

if (rax_9 != 0)
    rsi = rax_9

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_68, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

uint64_t* rax_11 = *(arg2 + 0x38)
uint64_t* rcx_6 = &var_68
int64_t var_78 = var_88

if (rax_11 != 0)
    rcx_6 = rax_11

int64_t rax_12 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_12 != 0
*(arg2 + 0x20) = rdi + rax_12
int32_t var_80
int32_t var_70 = var_80
void* result = sub_140a02560(&var_78, r12, r15, r14, rsi, rcx_6)
uint64_t rcx_8 = var_68

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_58

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_28

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
