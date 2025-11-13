// 函数: sub_142bf3590
// 地址: 0x142bf3590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
void* r10 = *(rcx + 0x40)
int64_t var_18 = *(r10 + 0x70)
int64_t r8 = sx.q((*(r10 + 0x180))(arg2, *(rcx + 0x48)))
void* rax_2 = *(arg1 + 0x10)

if (rax_2 != 0)
    int64_t rdx_1 = sx.q(*(rax_2 + 0x24))
    int64_t rax_3 = sx.q(*(arg1 + 0x24))
    
    if (rdx_1.d != rax_3.d)
        return divs.dp.q(sx.o(rax_3 * r8), rdx_1)

return zx.q(r8.d)
