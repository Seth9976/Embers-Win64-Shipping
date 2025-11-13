// 函数: sub_1409062e0
// 地址: 0x1409062e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)

if (rbx_1.d s>= *(arg1 + 0x60))
    return 

int64_t rbp_2 = rbx_1 * 2
int64_t* rcx = *(*(arg1 + 0x58) + (rbp_2 << 3) + 8)

if (rcx != 0)
    int32_t rax_2 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_2 == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

int32_t rcx_2 = *(arg1 + 0x60)
int32_t rax_5 = rcx_2 - rbx_1.d

if (rax_5 != 1)
    int64_t r9_1 = *(arg1 + 0x58)
    memmove(r9_1 + (rbp_2 << 3), (sx.q((rbx_1 + 1).d) << 4) + r9_1, (rax_5 - 1) << 4)
    rcx_2 = *(arg1 + 0x60)

*(arg1 + 0x60) = rcx_2 - 1
sub_1405a5010(arg1 + 0x58)
int32_t rax = *(arg1 + 0x68)

if (rbx_1.d s<= rax)
    *(arg1 + 0x68) = rax - 1
