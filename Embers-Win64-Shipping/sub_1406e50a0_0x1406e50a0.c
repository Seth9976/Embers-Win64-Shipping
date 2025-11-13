// 函数: sub_1406e50a0
// 地址: 0x1406e50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rsi = var_38
int64_t var_28 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_20 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_28, var_30, 0)
    memcpy(var_28, rsi, var_30 * 2)
else
    int32_t var_1c_1 = 0

int64_t var_18
int64_t* result = sub_140597df0(arg3, sub_1406e3be0(&var_18, &var_28))
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_38

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
