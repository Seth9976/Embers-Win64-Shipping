// 函数: sub_142221660
// 地址: 0x142221660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg2)
int32_t rcx = arg1[0x45].d
int32_t result = rcx u>> 3 & 1

if (result == r9.d && arg3 == 0)
    return result

arg1[0x45].d = (r9 << 3).d | (rcx & 0xfffffff7)
(*(*arg1 + 0x688))(arg1)
int64_t rdx
rdx.b = 1
return sub_141df03d0(arg1, rdx) __tailcall
