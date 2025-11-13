// 函数: sub_142b2bb80
// 地址: 0x142b2bb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_3

while (true)
    int32_t rcx = *(arg1 + 0x198)
    
    if (rcx == 1)
        int32_t rax_1 = *(arg1 + 0x190)
        
        if (rax_1 != 0)
            int64_t rcx_1 = *(arg1 + 0x188)
            rax_3 = zx.d(*(sx.q(rax_1 - 1) + rcx_1))
            
            if (rax_3.b s>= 0)
                *(arg1 + 0x190) -= 1
                break
            
            *(arg1 + 0x190) = rax_1 - 1
            uint32_t rdi_1 = zx.d(*(sx.q(rax_1 - 1) + rcx_1))
            
            if (rdi_1.b s< 0)
                rdi_1 = sub_142a9be90(rcx_1, 0, arg1 + 0x190, rdi_1, 0xfd)
            
            uint32_t rcx_2
            
            if (rdi_1 s> 0xffff)
                rcx_2 = zx.d((rdi_1 s>> 0xa).w - 0x2840)
            else
                rcx_2 = rdi_1
            
            if (rcx_2 s< 0x300)
                return rdi_1
            
            uint64_t rdx_1 = zx.q(*((sx.q(rcx_2) s>> 5) + 0x14367b600))
            
            if (rdx_1.d == 0 || not(test_bit(*((rdx_1 << 2) + 0x14367c600), rcx_2 & 0x1f)))
                return rdi_1
            
            if ((rdi_1 & 0x1fff01) != 0xf01)
                if (*(arg1 + 0x190) == 0)
                    return rdi_1
                
                if (sub_142b2be40(arg1) == 0)
                    return rdi_1
            
            int32_t rax_14
            
            if (rdi_1 u<= 0x7f)
                rax_14 = 1
            else if (rdi_1 u<= 0x7ff)
                rax_14 = 2
            else if (rdi_1 u> 0xd7ff)
                rax_14 = 0
                
                if (rdi_1 - 0xe000 u<= 0x101fff)
                    rax_14.b = rdi_1 u> 0xffff
                    rax_14 += 3
            else
                rax_14 = 3
            
            *(arg1 + 0x190) += rax_14
            
            if (sub_142b2bee0(arg1, arg2) != 0)
                continue
        
        return -1
    
    if (rcx == 2 && *(arg1 + 0x190) != *(arg1 + 0x19c))
        int64_t rcx_8 = *(arg1 + 0x188)
        *(arg1 + 0x190) -= 1
        rax_3 = zx.d(*(sx.q(*(arg1 + 0x190)) + rcx_8))
        
        if (rax_3.b s< 0)
            return sub_142a9be90(rcx_8, 0, arg1 + 0x190, rax_3, 0xfd)
        
        break
    
    if (rcx s>= 3 && *(arg1 + 0x190) != 0)
        rax_3 = sub_142a486d0(arg1 + 0x1b0, *(arg1 + 0x190) - 1)
        int32_t rbp
        rbp.b = rax_3 u> 0xffff
        *(arg1 + 0x190) -= rbp + 1
        break
    
    if (rcx != 0)
        if (rcx != 2)
            int32_t rax_20 = *(arg1 + 0x19c)
            *(arg1 + 0x190) = rax_20
            *(arg1 + 0x1a0) = rax_20
        
        *(arg1 + 0x198) = 1
    else
        *(arg1 + 0x1a0) = *(arg1 + 0x190)
        int32_t rcx_6
        rcx_6.b = *(arg1 + 0x190) != *(arg1 + 0x19c)
        *(arg1 + 0x198) = rcx_6 + 1

return rax_3
