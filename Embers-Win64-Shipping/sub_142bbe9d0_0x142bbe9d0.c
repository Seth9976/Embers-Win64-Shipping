// 函数: sub_142bbe9d0
// 地址: 0x142bbe9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x25).d)

int32_t r9 = arg4 | 3
int64_t* r10 = nullptr

if (arg2 != 0)
    r9 = arg4

if ((r9.b & 1) == 0)
    r10 = arg2

if (r10 != 0 && *arg2 != *(arg1 + 8))
    return 0x23

return sub_142bc1620(arg1, r10, arg3, r9, arg5) __tailcall
