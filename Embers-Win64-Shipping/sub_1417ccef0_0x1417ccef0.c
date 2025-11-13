// 函数: sub_1417ccef0
// 地址: 0x1417ccef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)
int32_t rax_1 = (*(*rcx + 0x60))(rcx)
uint64_t rdx

if (rax_1 == 1)
    if (arg2 s< 0)
        return 2
    
    int64_t* rcx_2 = *(arg1 + 0x48)
    char rax_7 = (*(*rcx_2 + 0xd0))(rcx_2)
    int32_t rax_9
    
    if (rax_7 != 0)
        int64_t* rcx_3 = *(arg1 + 0x48)
        rax_9 = (*(*rcx_3 + 0xc8))(rcx_3, 0)
    
    if (rax_7 != 0 && arg2 s>= rax_9)
        return 2
    
    rdx = 0
else
    if (rax_1 != 2)
        return 8
    
    if (arg2 s< 0)
        return 2
    
    int64_t* rcx_1 = *(arg1 + 0x48)
    
    if (arg2 s>= (*(*rcx_1 + 0xf0))(rcx_1))
        return 2
    
    rdx = zx.q(arg2)

int64_t* rcx_4 = *(arg1 + 0x48)
*(arg1 + 0x48) = (*(*rcx_4 + 0x100))(rcx_4, rdx)
int64_t rax_12 = sx.q(*(arg1 + 4))

if (rax_12.d s< 0x10)
    *(arg1 + (rax_12 << 2) + 8) = arg2
    *(arg1 + 4) += 1

*arg1 = 1
return 0
