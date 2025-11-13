// 函数: sub_140a0bc50
// 地址: 0x140a0bc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

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
int64_t* r15 = &var_40
int64_t var_50 = 0
int64_t var_48 = 0

if (rax_4 != 0)
    r15 = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* r14 = &var_50
int64_t var_60 = 0
int64_t var_58 = 0

if (rax_6 != 0)
    r14 = rax_6

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_60, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* rsi = &var_60
uint64_t var_70 = 0
int64_t var_68 = 0

if (rax_8 != 0)
    rsi = rax_8

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_70, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

uint64_t* rax_10 = *(arg2 + 0x38)
uint64_t* r12 = &var_70
int32_t arg_10 = (zx.o(0)).d

if (rax_10 != 0)
    r12 = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_12 = *(arg2 + 0x20)
int32_t zmm0_1 = arg_10
int32_t rdx_14 = arg_20
int32_t rcx_7 = var_78
int64_t rdi
rdi.b = rax_12 != 0
*(arg2 + 0x20) = rdi + rax_12
int64_t result = sub_140a008f0(rcx_7, rdx_14, r15, r14, rsi, r12, zmm0_1)
uint64_t rcx_8 = var_70

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_60

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_50

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_40

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
