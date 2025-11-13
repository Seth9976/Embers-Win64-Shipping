// 函数: sub_142b2a2a0
// 地址: 0x142b2a2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t rbp_1 = arg2

while (true)
    int32_t rcx_5 = *(arg1 + 0x198)
    uint32_t rdi_1
    
    if (rcx_5 == 1)
        uint64_t rax = zx.q(*(arg1 + 0x190))
        
        if (rax.d == 0)
            break
        
        int64_t rcx = *(arg1 + 0x188)
        int32_t rdx = (rax - 1).d
        rdi_1 = zx.d(*(sx.q(rdx) + rcx))
        
        if (rdi_1.b s>= 0)
            *(arg1 + 0x190) -= 1
        else
            *(arg1 + 0x190) = rdx
            rdi_1 = zx.d(*(sx.q(rdx) + rcx))
            
            if (rdi_1.b s< 0)
                rdi_1 = sub_142a9be90(rcx, 0, arg1 + 0x190, rdi_1, 0xfd).d
            
            uint32_t rcx_1
            
            if (rdi_1 s> 0xffff)
                rax.w = (rdi_1 s>> 0xa).w - 0x2840
                rcx_1 = zx.d(rax.w)
            else
                rcx_1 = rdi_1
            
            if (rcx_1 s>= 0x300)
                uint64_t rdx_1 = zx.q(*((sx.q(rcx_1) s>> 5) + 0x14367b600))
                
                if (rdx_1.d != 0 && test_bit(*((rdx_1 << 2) + 0x14367c600), rcx_1 & 0x1f))
                    if ((rdi_1 & 0x1fff01) == 0xf01)
                    label_142b2a3b6:
                        int32_t rax_4
                        
                        if (rdi_1 u<= 0x7f)
                            rax_4 = 1
                        else if (rdi_1 u<= 0x7ff)
                            rax_4 = 2
                        else if (rdi_1 u<= 0xd7ff)
                            rax_4 = 3
                        else if (rdi_1 - 0xe000 u> 0x101fff)
                            rax_4 = 0
                        else
                            int32_t rax_6
                            rax_6.b = rdi_1 u> 0xffff
                            rax_4 = rax_6 + 3
                        
                        *(arg1 + 0x190) += rax_4
                        
                        if (sub_142b2bee0(arg1, arg3).b == 0)
                            break
                        
                        continue
                    else if (*(arg1 + 0x190) != 0 && sub_142b2be40(arg1).b != 0)
                        goto label_142b2a3b6
    else if (rcx_5 == 2 && *(arg1 + 0x190) != *(arg1 + 0x19c))
        int64_t rcx_7 = *(arg1 + 0x188)
        *(arg1 + 0x190) -= 1
        rdi_1 = zx.d(*(sx.q(*(arg1 + 0x190)) + rcx_7))
        
        if (rdi_1.b s< 0)
            rdi_1 = sub_142a9be90(rcx_7, 0, arg1 + 0x190, rdi_1, 0xfd).d
    else if (rcx_5 s>= 3 && *(arg1 + 0x190) != 0)
        rdi_1 = sub_142a486d0(arg1 + 0x1b0, *(arg1 + 0x190) - 1)
        int32_t rax_12
        rax_12.b = rdi_1 u> 0xffff
        *(arg1 + 0x190) -= rax_12 + 1
    else if (rcx_5 != 0)
        if (rcx_5 != 2)
            int32_t rax_10 = *(arg1 + 0x19c)
            *(arg1 + 0x190) = rax_10
            *(arg1 + 0x1a0) = rax_10
        
        *(arg1 + 0x198) = 1
        continue
    else
        *(arg1 + 0x1a0) = *(arg1 + 0x190)
        rcx_5.b = *(arg1 + 0x190) != *(arg1 + 0x19c)
        *(arg1 + 0x198) = rcx_5 + 1
        continue
    
    if (rdi_1 s< 0)
        break
    
    rbp_1 -= 1
    
    if (rbp_1 s<= 0)
        break
