// 函数: sub_141ccba20
// 地址: 0x141ccba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_38
__builtin_memset(&var_38, 0, 0x20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_38
int32_t arg_10 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_6[4]
    sub_140d30490(arg2, &arg_10, r8_6)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
int64_t rax_5 = *(arg2 + 0x20)
int64_t rcx_3 = arg_18
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
char result = sub_141cc45f0(rcx_3, rsi, cond:1)
*arg3 = result
int64_t var_28

if (var_28 != 0)
    result = sub_140a74f90(var_28)

int64_t rcx_5 = var_38

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
