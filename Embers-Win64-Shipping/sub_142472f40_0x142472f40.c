// 函数: sub_142472f40
// 地址: 0x142472f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_18 = 0
int64_t var_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_18
int64_t var_28 = 0
int64_t var_20 = 0

if (rax_3 != 0)
    rsi = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_6 = &var_28
int64_t rcx_3 = arg_10

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
void* result = sub_141e54d10(rcx_3, rsi, r8_6)
int64_t rcx_4 = var_28
*arg3 = result

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
