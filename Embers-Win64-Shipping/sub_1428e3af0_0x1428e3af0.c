// 函数: sub_1428e3af0
// 地址: 0x1428e3af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
void* rdx = *arg1
int32_t rax = *(rdx + 4)

if (rax != *(r8 + 4))
    return zx.q(rax - *(r8 + 4))

return zx.q(*(rdx + 8) - *(r8 + 8))
