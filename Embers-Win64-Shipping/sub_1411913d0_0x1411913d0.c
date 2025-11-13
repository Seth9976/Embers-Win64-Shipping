// 函数: sub_1411913d0
// 地址: 0x1411913d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
void* rax = *(rdx + 0x68)

if (rax != 0)
    rdx = rax

return zx.q(*(*(rdx + 0x28) + 0x120))
