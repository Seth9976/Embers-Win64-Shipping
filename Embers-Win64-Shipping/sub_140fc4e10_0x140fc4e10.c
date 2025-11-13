// 函数: sub_140fc4e10
// 地址: 0x140fc4e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
int32_t temp0 = *(rdx + 0x11c)
*(rdx + 0x11c) = 1
*(arg1 + 0x10) -= 1
int64_t* rcx = *(arg1 + 0x18)

if (rcx == 0)
    return zx.q(temp0)

jump(*(*rcx + 0x10))
