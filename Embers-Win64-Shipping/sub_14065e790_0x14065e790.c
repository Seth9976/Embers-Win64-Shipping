// 函数: sub_14065e790
// 地址: 0x14065e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rsi = var_28
int64_t var_18 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_10 = var_20

if (var_20 != 0)
    sub_1405a4c70(&var_18, var_20, 0)
    memcpy(var_18, rsi, var_20 * 2)
else
    int32_t var_c_1 = 0

uint64_t result = sub_14063ac50(arg1, &var_18)
int64_t rcx_6 = var_28

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
