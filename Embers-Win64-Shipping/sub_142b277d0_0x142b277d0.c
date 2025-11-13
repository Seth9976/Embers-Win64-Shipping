// 函数: sub_142b277d0
// 地址: 0x142b277d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t r14_1 = arg2

while (true)
    int32_t rcx = *(arg1 + 0x190)
    int64_t rsi_1
    
    if (rcx == 1)
        int64_t rax_1 = *(arg1 + 0x188)
        uint64_t rax = (*(rax_1 + 0x50))(rax_1)
        rsi_1 = sx.q(rax.d)
        
        if (rax.d s< 0)
            *(arg1 + 0x194) = 0
            *(arg1 + 0x190) = 2
            break
        
        if (rsi_1.d s>= 0x300)
            uint64_t rdx = zx.q(*((rsi_1 s>> 5) + 0x14367b600))
            
            if (rdx.d != 0 && test_bit(*((rdx << 2) + 0x14367c600), rsi_1.d & 0x1f))
                int64_t rdi_1 = 0xffffffff
                uint64_t rax_7
                
                if ((rsi_1.d & 0x1fff01) != 0xf01)
                    int64_t rax_5 = *(arg1 + 0x188)
                    rdi_1 = sx.q((*(rax_5 + 0x50))(rax_5))
                    
                    if (rdi_1.d s>= 0xc0)
                        rax_7 = zx.q(*((rdi_1 s>> 5) + 0x14367be00))
                
                if ((rsi_1.d & 0x1fff01) != 0xf01 && (rdi_1.d s< 0xc0 || rax_7.d == 0
                        || not(test_bit(*((rax_7 << 2) + 0x14367c720), rdi_1.d & 0x1f))))
                    if ((rsi_1.d & 0xfffffc00) == 0xdc00 && rdi_1.d s< 0)
                        int64_t rax_17 = *(arg1 + 0x188)
                        rdi_1 = zx.q((*(rax_17 + 0x50))(rax_17))
                    
                    if ((rsi_1.d & 0xfffffc00) == 0xdc00 && (rdi_1.d & 0xfffffc00) == 0xd800)
                        rsi_1 = zx.q(rsi_1.d + ((rdi_1 - 0xd7f7).d << 0xa))
                    else if (rdi_1.d s>= 0)
                        int64_t rax_21 = *(arg1 + 0x188)
                        (*(rax_21 + 0x48))(rax_21)
                else
                    int64_t rax_9 = *(arg1 + 0x188)
                    (*(rax_9 + 0x48))(rax_9)
                    
                    if (rdi_1.d s>= 0)
                        int64_t rax_10 = *(arg1 + 0x188)
                        (*(rax_10 + 0x48))(rax_10)
                    
                    if (sub_142b28860(arg1, arg3).b == 0)
                        break
                    
                    continue
    else
        int32_t rax_22
        
        if (rcx != 2 || *(arg1 + 0x198) == *(arg1 + 0x194))
            if (rcx s>= 3 && *(arg1 + 0x198) != 0)
                rax_22 = sub_142a486d0(arg1 + 0x1a8, *(arg1 + 0x198) - 1)
                goto label_142b27a06
            
            if (rcx != 0)
                if (rcx != 2)
                    if (rcx == 3)
                        int64_t rax_14 = *(arg1 + 0x188)
                        (*(rax_14 + 0x28))(rax_14, zx.q(*(arg1 + 0x194) - *(arg1 + 0x19c)), 
                            zx.q(rcx - 2))
                    
                    *(arg1 + 0x19c) = *(arg1 + 0x194)
                
                *(arg1 + 0x190) = 1
                continue
            else
                int64_t rax_12 = *(arg1 + 0x188)
                int32_t rax_13 = (*(rax_12 + 0x20))(rax_12, zx.q(rcx + 1))
                *(arg1 + 0x198) = rax_13
                bool cond:0_1 = rax_13 != *(arg1 + 0x194)
                *(arg1 + 0x19c) = rax_13
                int32_t rcx_13
                rcx_13.b = cond:0_1
                *(arg1 + 0x190) = rcx_13 + 1
                continue
        else
            rax_22 = sub_142a55dd0(*(arg1 + 0x188))
        label_142b27a06:
            rsi_1 = zx.q(rax_22)
            int32_t rax_23
            rax_23.b = rsi_1.d u> 0xffff
            *(arg1 + 0x198) -= rax_23 + 1
    
    if (rsi_1.d s< 0)
        break
    
    r14_1 -= 1
    
    if (r14_1 s<= 0)
        break
