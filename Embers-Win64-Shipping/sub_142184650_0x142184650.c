// 函数: sub_142184650
// 地址: 0x142184650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (rbx == 0)
    return 

*(rbx + 0x158) = 0

if (*(rbx + 0x15c) s<= 0xffffffff)
    sub_1405dadb0(rbx + 0x150, 0)

int64_t rsi_1 = sx.q(arg1[1].d)
int64_t rdi_1 = sx.q(*(rbx + 0x158))
int32_t rax_1 = (rdi_1 + rsi_1).d
*(rbx + 0x158) = rax_1

if (rax_1 s> *(rbx + 0x15c))
    sub_1405a4cf0(rbx + 0x150)

memset(*(rbx + 0x150) + (rdi_1 << 2), 0, rsi_1 << 2)
