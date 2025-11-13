// 函数: sub_141fbfc50
// 地址: 0x141fbfc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2[1].d)

if (result.d s> 0)
    void* i = *arg2
    void* rsi_3 = (result << 5) + i
    void* i_1 = i
    
    for (; i != rsi_3; i += 0x20)
        if (*(arg1 + 0xe28) == 0)
            sub_141fbfbd0(arg1, *i, *(i + 8))
        else
            int64_t rax = sx.q(*(i + 0x18))
            
            if (rax.d == 0)
                sub_141fbfbd0(arg1, *i, *(i + 8))
            else
                int32_t rcx = (rax - 1).d
                
                if (rcx s< 0 || rcx s>= *(arg1 + 0xe18))
                    sub_141fbfbd0(arg1, *i, *(i + 8))
                else
                    int64_t rax_2 = *(arg1 + 0xd60)
                    int64_t rdx = sx.q(*(*(arg1 + 0xe10) + (rax << 2) - 4)) * 3
                    bool cond:0_1 = *(rax_2 + (rdx << 3) + 0x14) == 0
                    *(rax_2 + (rdx << 3) + 0x15) = 1
                    
                    if (not(cond:0_1))
                        sub_141fbfbd0(arg1, *i, *(i + 8))
    
    result = zx.q(*(i_1 + (result << 5) - 0x10))
    *(arg1 + 0xe20) = result.d

return result
