// 函数: sub_142bf30a0
// 地址: 0x142bf30a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t entry_r8
int32_t arg_18 = entry_r8
void* rax = *(arg1 + 0x40)
int64_t r10 = *(rax + 0x160)

if (r10 != sub_142bf3280)
    int32_t arg_8
    r10(arg1, *(arg1 + 0x48), 1, &arg_18, 0, &arg_8, 0, *(rax + 0x50))
    return zx.q(arg_8)

void* rcx_1 = *(arg1 + 0x10)
void* rax_3 = *(rcx_1 + 0x40)
int512_t entry_zmm2
int64_t r8 = sx.q((*(rax_3 + 0x150))(arg2, *(rcx_1 + 0x48), entry_zmm2, *(rax_3 + 0x40)))
void* rax_5 = *(arg1 + 0x10)

if (rax_5 != 0)
    int64_t rdx_2 = sx.q(*(rax_5 + 0x24))
    int64_t rcx_2 = sx.q(*(arg1 + 0x24))
    
    if (rdx_2.d != rcx_2.d)
        return divs.dp.q(sx.o(rcx_2 * r8), rdx_2)

return zx.q(r8.d)
