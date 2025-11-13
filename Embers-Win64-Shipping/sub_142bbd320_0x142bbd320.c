// 函数: sub_142bbd320
// 地址: 0x142bbd320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x3e8)

if (rbx == 0)
    return 0

int32_t rdx = *(rbx + 0x664)

if (rdx == 0xffff)
    return 6

if (arg2 != 0)
    if (*(rbx + 0x10f8) == 0)
        *(rbx + 0x10f8) = sub_142bc0630(rbx, rdx)
    
    *arg2 = *(rbx + 0x10f8)

if (arg3 != 0)
    if (*(rbx + 0x1100) == 0)
        *(rbx + 0x1100) = sub_142bc0630(rbx, zx.q(*(rbx + 0x668)))
    
    *arg3 = *(rbx + 0x1100)

if (arg4 != 0)
    *arg4 = *(rbx + 0x66c)

return 0
