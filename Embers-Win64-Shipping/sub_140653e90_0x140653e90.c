// 函数: sub_140653e90
// 地址: 0x140653e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi = var_38
int64_t rdi
rdi.b = arg_10 != 0
int64_t var_28 = 0
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_20 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_28, var_30, 0)
    memcpy(var_28, rsi, var_30 * 2)
else
    int32_t var_1c_1 = 0

int64_t result = sub_14063a4b0(arg_20, &var_28, rdi.b)
int64_t rcx_8 = var_38

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
