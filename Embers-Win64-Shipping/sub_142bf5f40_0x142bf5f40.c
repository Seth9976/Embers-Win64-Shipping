// 函数: sub_142bf5f40
// 地址: 0x142bf5f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_3 =
    sub_142c09180(*(arg1 + 0x18), arg2 + 0x38, arg3, arg4, *(arg1 + 0x38), *(arg1 + 0x34), arg5)
int64_t var_28
var_28.d = arg4
int32_t rax_4 = sub_142c09500(rax_3, arg1, arg2, arg3.d)
sub_142c09480(rax_3)

if (rax_4 != 0)
    *(arg2 + 0x34) = 2

return zx.q(rax_4)
