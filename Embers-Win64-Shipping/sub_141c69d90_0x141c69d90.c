// 函数: sub_141c69d90
// 地址: 0x141c69d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx == 0)
    int64_t result
    result.b = 0
    return result

int64_t var_20 = 0
int64_t var_18 = 0
void var_38
void* rbx

if ((*(*rcx + 8))(rcx, *(arg2 + 0x288), zx.q(*(arg2 + 0x210)), &var_38) == 0)
    rbx.b = 0
else
    int32_t var_34
    int32_t var_2c
    *(arg1 + 0x48) = (divu.dp.q(0:(zx.q(var_2c)), zx.q(var_34) * 2)).d
    rbx.b = 1

if (var_20 != 0)
    sub_140a74f90(var_20)

return zx.q(rbx.b)
