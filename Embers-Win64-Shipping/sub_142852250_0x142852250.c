// 函数: sub_142852250
// 地址: 0x142852250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t r8 = *(arg1 + 0x90)
void* rdx = &arg1[0x98]

if (r8 u< 4)
    int32_t arg_8 = 0
    memcpy(&arg_8, rdx, r8.d)
    rdx = &arg_8

return zx.q(((zx.d(*(rdx + 3)) << 8 | zx.d(*(rdx + 2))) << 8 | zx.d(*(rdx + 1))) << 8) | zx.q(*rdx)
