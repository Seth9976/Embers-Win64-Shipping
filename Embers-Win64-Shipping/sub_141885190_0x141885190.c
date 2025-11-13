// 函数: sub_141885190
// 地址: 0x141885190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x78)
int64_t i = (*(*rcx + 0x10))(rcx)

if (i == 0)
    EnterCriticalSection(arg1 + 0x1c0)
    int64_t r14_1 = sx.q(*(arg1 + 0x1f0))
    int32_t rax_1 = (r14_1 + 1).d
    *(arg1 + 0x1f0) = rax_1
    
    if (rax_1 s> *(arg1 + 0x1f4))
        sub_1405a4f90(arg1 + 0x1e8)
    
    *(*(arg1 + 0x1e8) + r14_1 * 0x10) = *arg2
    
    if (arg1 != -0x1c0)
        LeaveCriticalSection(arg1 + 0x1c0)
    
    int64_t* rcx_6 = *(arg1 + 0x78)
    i = (*(*rcx_6 + 0x10))(rcx_6, arg2)
    int64_t i_1 = i
    
    while (i == 0)
        bool z_1
        
        if (0 == *(arg1 + 0x144))
            *(arg1 + 0x144) = 0
            z_1 = true
        else
            *(arg1 + 0x144)
            z_1 = false
        
        if (not(z_1))
            return i_1
        
        int64_t* rcx_7 = *(arg1 + 0x70)
        int512_t zmm1
        zmm1.o = 0x3c23d70a
        (*(*rcx_7 + 0x10))(rcx_7, zmm1)
        int64_t* rcx_8 = *(arg1 + 0x78)
        i = (*(*rcx_8 + 0x10))(rcx_8, arg2)
        i_1 = i

return i
