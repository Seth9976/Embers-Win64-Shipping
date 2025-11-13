// 函数: sub_1420bab90
// 地址: 0x1420bab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x50)
int64_t r10 = sx.q(arg2)
int32_t rax_1 = r8 - r10.d

if (rax_1 != 1)
    memmove(r10 * 0x2c + *(arg1 + 0x48), sx.q((r10 + 1).d) * 0x2c + *(arg1 + 0x48), 
        (rax_1 - 1) * 0x2c)
    r8 = *(arg1 + 0x50)

*(arg1 + 0x50) = r8 - 1
sub_141febab0(arg1 + 0x48)
return sub_141f55fe0(arg1 + 0x48, *(arg1 + 0x60), 1) __tailcall
