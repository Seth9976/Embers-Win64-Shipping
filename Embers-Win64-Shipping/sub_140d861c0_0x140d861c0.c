// 函数: sub_140d861c0
// 地址: 0x140d861c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*arg4 = 0

if (*(arg1 + 0x30) s<= 0)
    return 0

int32_t rax = 0
int128_t* rsi = arg3
int64_t rdi = 0

while (rax u< arg2)
    char* rcx = *(arg1 + 0x28)
    
    if (rcx[rdi] != 0)
        *rsi = **(rcx + rdi + 8)
        VariantCopy(zx.q(*arg4) * 0x30 + 0x18 + arg3, *(arg1 + 0x28) + ((sx.q(rbx) * 5 + 2) << 3))
        rsi[1].d = 0
        rax = *arg4
    
    rax += 1
    rbx += 1
    rdi += 0x28
    *arg4 = rax
    rsi = &rsi[3]
    
    if (rbx s>= *(arg1 + 0x30))
        break

return 0
