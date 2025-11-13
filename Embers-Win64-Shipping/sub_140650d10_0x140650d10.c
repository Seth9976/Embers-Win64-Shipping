// 函数: sub_140650d10
// 地址: 0x140650d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_28
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rbp = &arg_10
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

int32_t arg_20 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r8_6 = &arg_20

if (rax_6 != 0)
    r8_6 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
int64_t result = sub_140635160(rsi, rbp, r8_6)
int64_t rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
