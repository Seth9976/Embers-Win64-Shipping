// 函数: sub_142361d20
// 地址: 0x142361d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cdba30(arg1)
EnterCriticalSection(arg1 + 0x1a8)
int32_t rsi = *(arg1 + 0x1d8)
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    int64_t r14_1 = sx.q(rsi_1) << 3
    int64_t r15_1 = r14_1
    int32_t temp1_1
    
    do
        int64_t* rcx_1 = *(r14_1 + *(arg1 + 0x1d0))
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x18))(rcx_1, arg1)
            int32_t rdx_2 = *(arg1 + 0x1d8)
            int32_t rax_6 = rdx_2 - rsi_1 - 1
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                int64_t rcx_2 = *(arg1 + 0x1d0)
                memcpy(rcx_2 + r15_1, rcx_2 + (sx.q(rdx_2 - rax_6) << 3), rax_6 << 3)
                rdx_2 = *(arg1 + 0x1d8)
            
            *(arg1 + 0x1d8) = rdx_2 - 1
        
        r15_1 -= 8
        r14_1 -= 8
        temp1_1 = rsi_1
        rsi_1 -= 1
    while (temp1_1 - 1 s>= 0)

sub_141e584b0(arg1)
int64_t* rax_10 = sub_1405f7040(sub_141f88540())
int64_t r8_3 = *rax_10
int64_t result = (*(r8_3 + 0xa0))(rax_10, arg1, r8_3)

if (arg1 == -0x1a8)
    return result

return LeaveCriticalSection(arg1 + 0x1a8) __tailcall
