// 函数: sub_141c2b720
// 地址: 0x141c2b720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)

if (rbx == 0)
    return 

uint64_t count = sx.q(*(rbx + 0x44)) << 2
*(rbx + 0x38) = 0
*(rbx + 0x40) = 0xffffffff
*(rbx + 0x28) = 0
*(rbx + 0x20) = 0
memset(rbx + 0x848, 0, count)
return memset(rbx + ((sx.q(*(rbx + 0x44)) + 0x212) << 2), 0xaa, sx.q(*(rbx + 4)) << 2) __tailcall
