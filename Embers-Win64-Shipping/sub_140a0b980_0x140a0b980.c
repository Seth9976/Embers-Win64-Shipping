// 函数: sub_140a0b980
// 地址: 0x140a0b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = 0
int64_t var_18 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_20
int32_t var_24 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_24, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
int32_t r9 = arg_20
int32_t r8_10 = var_28
int32_t rdx_10 = var_24
int64_t rdi
rdi.b = rax_7 != 0
int32_t rax_8 = arg_10
*(arg2 + 0x20) = rdi + rax_7
int64_t result = sub_140a000c0(rsi, rdx_10, r8_10, r9, rax_8)
int64_t rcx_6 = var_20

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
