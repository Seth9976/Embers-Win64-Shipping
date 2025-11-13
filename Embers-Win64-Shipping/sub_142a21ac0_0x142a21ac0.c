// 函数: sub_142a21ac0
// 地址: 0x142a21ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_10 = 2
int128_t* result = sub_1403bbeb0(arg1, zx.q(arg4), *(arg6 + 8), *(arg6 + 0x10), *(arg6 + 0x18))

if (arg2 == 0)
    return result

uint64_t rdx_1 = zx.q(arg5)
int64_t rcx = sx.q((rdx_1 << 2).d)
var_10.q = rcx + arg3
return sub_1403abde0(rcx + arg2, rdx_1.d, *(arg6 + 8), *(arg6 + 0x10), *(arg6 + 0x18), 2)
