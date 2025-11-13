// 函数: sub_1405a6790
// 地址: 0x1405a6790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
*arg2 = **arg1
arg2[0x19] = 0

if (*(rbx + 0xc0) == 0)
    memmove(&arg2[1], rbx, 0xc0)

int64_t rcx_2 = arg2[0x19]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg2[0x19] = *(rbx + 0xc0)
*(rbx + 0xc0) = 0
arg2[0x1a].d = *(rbx + 0xc8)
*(arg2 + 0xd4) = *(rbx + 0xcc)
*(rbx + 0xc8) = 0
*(rbx + 0xcc) = 8
arg2[0x23] = 0

if (*(rbx + 0x110) == 0)
    memmove(&arg2[0x1b], rbx + 0xd0, 0x40)

int64_t rcx_4 = arg2[0x23]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[0x23] = *(rbx + 0x110)
*(rbx + 0x110) = 0
arg2[0x24].d = *(rbx + 0x118)
*(arg2 + 0x124) = *(rbx + 0x11c)
*(rbx + 0x118) = 0
*(rbx + 0x11c) = 8
arg2[0x25] = 0
arg2[0x25] = *(rbx + 0x120)
*(rbx + 0x120) = 0
arg2[0x26].d = *(rbx + 0x128)
*(arg2 + 0x134) = *(rbx + 0x12c)
*(rbx + 0x128) = 0
arg2[0x27] = *(rbx + 0x130)
return arg2
