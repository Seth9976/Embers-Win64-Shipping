// 函数: sub_14151d980
// 地址: 0x14151d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x48)
uint64_t r9 = zx.q(arg3)

if (*(result + (r9 << 1)) == 0xffff)
    return result

int32_t r10_2 = (zx.d(*(*(arg1 + 0x70) + (r9 << 3) + 7)) & 0xf) + (arg2 << 4)
*(*(arg1 + 0x40) + (r9 << 2)) = r10_2
int16_t rdx_1 = *(*(arg1 + 0x48) + (r9 << 1))

if (rdx_1 != 0 && r10_2 u< *(*(arg1 + 0x40)
        + (zx.q(*(*(arg1 + 0x38) + (zx.q(((zx.d(rdx_1) - 1) s>> 1).w) << 1))) << 2)))
    return sub_14151c590(arg1 + 0x28, rdx_1) __tailcall

return sub_141505070(arg1 + 0x28, rdx_1) __tailcall
