// 函数: sub_142359110
// 地址: 0x142359110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd7d40(arg1)
EnterCriticalSection(arg1 + 0x1a8)
int32_t rsi = *(arg1 + 0x1d8)
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    int64_t r14_1 = sx.q(rsi_1) << 3
    int64_t r15_1 = r14_1
    int32_t temp1_1
    
    do
        int64_t* rcx_1 = *(r14_1 + *(arg1 + 0x1d0))
        
        if (rcx_1 != 0 && (*(*rcx_1 + 8))(rcx_1, arg1) != 0)
            int32_t rdx_2 = *(arg1 + 0x1d8)
            int32_t rax_7 = rdx_2 - rsi_1 - 1
            
            if (rax_7 s>= 1)
                rax_7 = 1
            
            if (rax_7 != 0)
                int64_t rcx_2 = *(arg1 + 0x1d0)
                memcpy(rcx_2 + r15_1, rcx_2 + (sx.q(rdx_2 - rax_7) << 3), rax_7 << 3)
                rdx_2 = *(arg1 + 0x1d8)
            
            *(arg1 + 0x1d8) = rdx_2 - 1
        
        r15_1 -= 8
        r14_1 -= 8
        temp1_1 = rsi_1
        rsi_1 -= 1
    while (temp1_1 - 1 s>= 0)

if (arg1 != -0x1a8)
    LeaveCriticalSection(arg1 + 0x1a8)

void var_48
sub_141f7bed0(arg1 + 0x238, sub_141f79600(&var_48))
return sub_141f7baf0(&var_48)
