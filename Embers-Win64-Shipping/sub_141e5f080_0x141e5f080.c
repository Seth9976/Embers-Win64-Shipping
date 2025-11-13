// 函数: sub_141e5f080
// 地址: 0x141e5f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    return 0

int32_t rdi = 0
void* rbx = *(*(arg1 + 0x10) + (sx.q(arg2) << 3))

if ((*(rbx + 0x18) != 0 || arg4 != 0) && arg3 != 0)
    rdi = sub_140bc7f20(rbx + 8)
    sub_140bc7fd0(rbx + 8, arg3, 1)

return zx.q(rdi)
