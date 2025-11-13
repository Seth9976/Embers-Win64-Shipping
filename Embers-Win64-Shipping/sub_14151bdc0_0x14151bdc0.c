// 函数: sub_14151bdc0
// 地址: 0x14151bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
int64_t rax_3 = (r8 u>> 0x21 ^ r8) * -0xae502812aa7333
int64_t rdx_3 = (rax_3 u>> 0x21 ^ rax_3) * -0x3b314601e57a13ad
uint64_t r15 = zx.q((rdx_3 u>> 0x21).w) ^ zx.q(rdx_3.w)
int32_t rbx = *(*(arg1 + 0x10) + ((zx.q(r15.d) & zx.q(*(arg1 + 4))) << 2))
uint64_t rax_7

if (rbx != 0xffffffff)
    int64_t rsi_1
    
    while (true)
        rsi_1 = sx.q(rbx)
        
        if (*(*(arg1 + 0x20) + (rsi_1 << 3)) == r8)
            break
        
        rbx = *(*(arg1 + 0x18) + (zx.q(rbx) << 2))
        
        if (rbx == 0xffffffff)
            int64_t rax_8
            rax_8.b = 0
            return rax_8
    
    int64_t rax_9 = *(arg1 + 0x30)
    rax_7 = zx.q(*(rax_9 + (rsi_1 << 1)))
    
    if (rax_7.w == 1)
        int64_t rbp = sx.q(*(arg1 + 0x48))
        int32_t rax_10 = (rbp + 1).d
        *(arg1 + 0x48) = rax_10
        
        if (rax_10 s> *(arg1 + 0x4c))
            sub_1405a4cf0(arg1 + 0x40)
        
        *(*(arg1 + 0x40) + (rbp << 2)) = rbx
        
        if (rbx u< *(arg1 + 8))
            uint64_t rcx_6 = r15 & zx.q(*(arg1 + 4))
            int64_t rax_13 = *(arg1 + 0x10)
            uint64_t rax_14 = zx.q(*(rax_13 + (rcx_6 << 2)))
            
            if (rax_14.d == rbx)
                *(rax_13 + (rcx_6 << 2)) = *(*(arg1 + 0x18) + (zx.q(rbx) << 2))
            else if (rax_14.d != 0xffffffff)
                int64_t r8_1 = *(arg1 + 0x18)
                
                do
                    uint64_t rdx_7 = rax_14 << 2
                    rax_14 = zx.q(*(rdx_7 + r8_1))
                    
                    if (rax_14.d == rbx)
                        *(rdx_7 + r8_1) = *(r8_1 + (zx.q(rbx) << 2))
                        break
                while (rax_14.d != 0xffffffff)
        
        *(*(arg1 + 0x30) + (rsi_1 << 1)) = 0
        *(*(arg1 + 0x20) + (rsi_1 << 3)) = 0
        int64_t rax_18
        rax_18.b = 1
        return rax_18
    
    rax_7.w -= 1
    *(rax_9 + (rsi_1 << 1)) = rax_7.w

rax_7.b = 0
return rax_7
