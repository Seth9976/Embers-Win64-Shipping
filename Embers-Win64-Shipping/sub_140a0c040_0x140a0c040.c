// 函数: sub_140a0c040
// 地址: 0x140a0c040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_40 = 0
int64_t var_38 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_40, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* r14 = &var_40
int64_t var_50 = 0
int64_t var_48 = 0

if (rax_4 != 0)
    r14 = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rsi = &var_50
int64_t var_60 = 0
int64_t var_58 = 0

if (rax_6 != 0)
    rsi = rax_6

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_60, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

uint64_t rax_8 = *(arg2 + 0x38)
uint64_t r15 = &var_60
int32_t arg_10 = (zx.o(0)).d

if (rax_8 != 0)
    r15 = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_10 = *(arg2 + 0x20)
int32_t zmm0_1 = arg_10
int32_t rdx_12 = arg_20
int32_t rcx_6 = var_68
int64_t rdi
rdi.b = rax_10 != 0
*(arg2 + 0x20) = rdi + rax_10
int64_t result = sub_140a01090(rcx_6, rdx_12, r14, rsi, r15, zmm0_1)
int64_t rcx_7 = var_60

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_50

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_40

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
