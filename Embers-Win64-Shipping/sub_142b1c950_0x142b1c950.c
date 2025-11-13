// 函数: sub_142b1c950
// 地址: 0x142b1c950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int32_t rax = arg5

if (rax s< 0 && arg3 != 0)
    rax = ((arg3 - arg2) s>> 1).d

if ((*(arg4 + 8) & 1) == 0)
    *(arg4 + 8) &= 0x1f
else
    *(arg4 + 8) = 2

void* var_48 = arg1
int64_t var_38 = (zx.o(0)).q
int64_t var_28 = 0
int32_t var_20 = 0
char var_1c = 0
char result = sub_142b1e9d0(&var_48, rax, arg6)

if (result != 0)
    result = sub_142b1c660(arg1, arg2, arg3, &var_48, arg6)

if (var_38 == 0)
    return result

return sub_142a4a600(arg4, ((var_28 - var_38) s>> 1).d)
