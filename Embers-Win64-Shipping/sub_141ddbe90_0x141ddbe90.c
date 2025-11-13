// 函数: sub_141ddbe90
// 地址: 0x141ddbe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x130)

if (rbx == 0)
    return 

if (rbx[0x2f].d s> 0)
    void* rdx = *(rbx[0x2e] + (sx.q(rbx[0x2f].d) << 3) - 8)
    *(rdx + 0x350) |= 2
    *(rdx + 0x10) = 3
    *(rdx + 0x74) = 0xffffffff
    return 

if (data_143a2d7b4 == 1 && (*(rbx + 0x14c) & 2) != 0)
    return 

char rax = (*(*rbx + 0x468))(rbx, 0, zx.q(arg2), 0)
*(rbx + 0x14c) &= 0xfd
*(rbx + 0x14c) |= (rax & 1) * 2
