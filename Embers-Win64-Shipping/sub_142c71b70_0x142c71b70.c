// 函数: sub_142c71b70
// 地址: 0x142c71b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
void* rbx = arg1 + result * 0x28
void* rcx = *(rbx + 0x2d8)

if (rcx != 0)
    sub_142850b10(rcx)
    sub_1428507d0(*(rbx + 0x2d8))
    result = sub_14284f4d0(*(rbx + 0x2d8))
    *(rbx + 0x2d8) = 0

void* rcx_3 = *(rbx + 0x2d0)

if (rcx_3 != 0)
    result = sub_14284e030(rcx_3)
    *(rbx + 0x2d0) = 0

void* rcx_4 = *(rbx + 0x328)

if (rcx_4 != 0)
    sub_142850b10(rcx_4)
    sub_1428507d0(*(rbx + 0x328))
    result = sub_14284f4d0(*(rbx + 0x328))
    *(rbx + 0x328) = 0

void* rcx_7 = *(rbx + 0x320)

if (rcx_7 != 0)
    result = sub_14284e030(rcx_7)
    *(rbx + 0x320) = 0

return result
