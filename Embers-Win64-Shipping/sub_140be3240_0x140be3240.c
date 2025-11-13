// 函数: sub_140be3240
// 地址: 0x140be3240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = arg2
bool cond:0 = (*(arg3 + 0x28) & 2) == 0
int16_t var_28 = 0xffff
int64_t var_68 = arg4
int128_t var_98
__builtin_memset(&var_98, 0, 0x20)
int64_t var_70 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x30)
int64_t var_20 = 0
int64_t var_18 = 0
int64_t r9
int64_t var_78 = r9

if (cond:0)
    var_98:8.q = arg3
else
    var_98.q = arg3

(*(*arg1 + 0x10))(arg1, &var_98)
char result
*arg5 = result

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
