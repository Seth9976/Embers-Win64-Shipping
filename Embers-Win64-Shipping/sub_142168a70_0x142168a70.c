// 函数: sub_142168a70
// 地址: 0x142168a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

void* rax_1 = sub_140bdf2e0()
void* rdx = *(arg2 + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    rdx = arg2

return zx.q(sub_140bdcf70(*(*(arg1 + 0x148) + 0x160), rdx)[6])
