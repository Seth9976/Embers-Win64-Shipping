// 函数: sub_140fee460
// 地址: 0x140fee460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = (data_1439c7a34).b
int128_t var_58 = zx.o(0)
int128_t var_44 = data_143dbb1e0
int32_t var_48 = 1
int32_t var_34 = (1 << rcx) - 1
char var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
char var_90 = 0
char var_98 = 0
void*** rax_3 =
    sub_140fd0da0(arg1, arg5, arg6, 1, 0, 0, (*(arg3 + 0x3c)).b, arg4, 1, *(arg3 + 0x40), &var_58)
char var_88
var_88.q = arg7
var_90.d = arg6
var_98.d = arg5
(*(*arg1 + 0x728))(arg1, rax_3, arg3, zx.q(arg4), 0, 0, var_88)
*arg2 = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1

return arg2
