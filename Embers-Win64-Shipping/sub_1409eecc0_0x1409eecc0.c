// 函数: sub_1409eecc0
// 地址: 0x1409eecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = 0
int64_t var_38 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r14 = &var_40
int32_t var_68 = 0

if (rax_2 != 0)
    r14 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_50 = 0
int64_t var_48 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_50, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* rsi = &var_50
uint64_t var_60 = 0
int64_t var_58 = 0

if (rax_7 != 0)
    rsi = rax_7

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

uint64_t* rax_9 = *(arg2 + 0x38)
uint64_t* rcx_6 = &var_60
uint128_t zmm3 = arg_20
uint128_t zmm2 = var_68

if (rax_9 != 0)
    rcx_6 = rax_9

int64_t rax_10 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_10 != 0
char rax_11 = arg_10
*(arg2 + 0x20) = rdi + rax_10
int64_t* result = sub_1409cb140(arg1, r14, zmm2, zmm3, rax_11, rsi, rcx_6)
uint64_t rcx_8 = var_60

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_50

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_40

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
