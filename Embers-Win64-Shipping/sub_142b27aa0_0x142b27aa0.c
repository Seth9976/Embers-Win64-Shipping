// 函数: sub_142b27aa0
// 地址: 0x142b27aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t rsi_1 = arg2

while (true)
    int32_t rcx = *(arg1 + 0x190)
    int64_t rdi_1
    
    if (rcx == 0)
        int64_t rax_1 = *(arg1 + 0x188)
        int32_t rax = (*(rax_1 + 0x48))(rax_1)
        rdi_1 = sx.q(rax)
        
        if (rax s>= 0)
            if (rdi_1.d s>= 0xc0)
                uint64_t rdx = zx.q(*((rdi_1 s>> 5) + 0x14367be00))
                
                if (rdx.d != 0 && test_bit(*((rdx << 2) + 0x14367c720), rdi_1.d & 0x1f))
                    if ((rdi_1.d & 0x1fff01) == 0xf01)
                    label_142b27b84:
                        int64_t rax_11 = *(arg1 + 0x188)
                        (*(rax_11 + 0x50))(rax_11, rdx)
                        
                        if (sub_142b28350(arg1, arg3).b == 0)
                            break
                        
                        continue
                    else
                        int64_t rax_7 = *(arg1 + 0x188)
                        int32_t rax_8 = (*(rax_7 + 0x40))(rax_7)
                        
                        if (rax_8 s>= 0x300)
                            rdx = zx.q(*((sx.q(rax_8) s>> 5) + 0x14367b600))
                            
                            if (rdx.d != 0 && test_bit(*((rdx << 2) + 0x14367c600), rax_8 & 0x1f))
                                goto label_142b27b84
            
            if ((rdi_1.d & 0xfffffc00) == 0xd800)
                int64_t rax_21 = *(arg1 + 0x188)
                rax = (*(rax_21 + 0x48))(rax_21)
                
                if ((rax & 0xfffffc00) == 0xdc00)
                    rdi_1 = zx.q(((rdi_1.d - 0xd7f7) << 0xa) + rax)
                else if (rax s>= 0)
                    int64_t rax_22 = *(arg1 + 0x188)
                    (*(rax_22 + 0x50))(rax_22)
    else
        int32_t rax_23
        
        if (rcx != 2 || *(arg1 + 0x198) == *(arg1 + 0x19c))
            int32_t rax_15
            
            if (rcx s>= 3)
                int16_t rax_13 = *(arg1 + 0x1b0)
                
                if (rax_13 s< 0)
                    rax_15 = *(arg1 + 0x1b4)
                else
                    rax_15 = sx.d(rax_13) s>> 5
            
            if (rcx s>= 3 && *(arg1 + 0x198) != rax_15)
                rax_23 = sub_142a486d0(arg1 + 0x1a8, *(arg1 + 0x198))
                goto label_142b27ccd
            
            if (rcx != 1)
                if (rcx != 2)
                    if (rcx == 4)
                        int64_t rax_18 = *(arg1 + 0x188)
                        (*(rax_18 + 0x28))(rax_18, zx.q(*(arg1 + 0x19c) - *(arg1 + 0x194)), 
                            zx.q(rcx - 3))
                    
                    *(arg1 + 0x194) = *(arg1 + 0x19c)
                
                *(arg1 + 0x190) = 0
                continue
            else
                int64_t rax_16 = *(arg1 + 0x188)
                int32_t rax_17 = (*(rax_16 + 0x20))(rax_16, zx.q(rcx))
                bool cond:0_1 = rax_17 == *(arg1 + 0x19c)
                int32_t rcx_11 = 2
                *(arg1 + 0x198) = rax_17
                
                if (cond:0_1)
                    rcx_11 = 0
                
                *(arg1 + 0x194) = rax_17
                *(arg1 + 0x190) = rcx_11
                continue
        else
            rax_23 = sub_142a55d60(*(arg1 + 0x188))
        label_142b27ccd:
            rdi_1 = zx.q(rax_23)
            int32_t rax_24
            rax_24.b = rdi_1.d u> 0xffff
            *(arg1 + 0x198) += rax_24 + 1
    
    if (rdi_1.d s< 0)
        break
    
    rsi_1 -= 1
    
    if (rsi_1 s<= 0)
        break
