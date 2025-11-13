// 函数: sub_142b28160
// 地址: 0x142b28160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t rcx = *(arg1 + 0x190)
    
    if (rcx != 0)
        int32_t result
        
        if (rcx != 2 || *(arg1 + 0x198) == *(arg1 + 0x19c))
            int32_t rax_15
            
            if (rcx s>= 3)
                int16_t rax_13 = *(arg1 + 0x1b0)
                
                if (rax_13 s< 0)
                    rax_15 = *(arg1 + 0x1b4)
                else
                    rax_15 = sx.d(rax_13) s>> 5
            
            if (rcx s>= 3 && *(arg1 + 0x198) != rax_15)
                result = sub_142a486d0(arg1 + 0x1a8, *(arg1 + 0x198))
            else
                sub_142b28ca0(arg1)
                continue
        else
            result = sub_142a55d60(*(arg1 + 0x188))
        
        int32_t rcx_19
        rcx_19.b = result u> 0xffff
        *(arg1 + 0x198) += rcx_19 + 1
        return result
    
    int64_t rax_1 = *(arg1 + 0x188)
    int32_t rax_2 = (*(rax_1 + 0x48))(rax_1)
    int64_t rdi_1 = sx.q(rax_2)
    
    if (rax_2 s< 0)
        return rdi_1.d
    
    if (rdi_1.d s< 0xc0)
    label_142b282aa:
        
        if ((rdi_1.d & 0xfffffc00) != 0xd800)
            return rdi_1.d
        
        int64_t rax_18 = *(arg1 + 0x188)
        int32_t rax_19 = (*(rax_18 + 0x48))(rax_18)
        
        if ((rax_19 & 0xfffffc00) == 0xdc00)
            return ((rdi_1 - 0xd7f7).d << 0xa) + rax_19
        
        if (rax_19 s>= 0)
            int64_t rax_22 = *(arg1 + 0x188)
            (*(rax_22 + 0x50))(rax_22)
        
        return rdi_1.d
    
    uint64_t rdx = zx.q(*((rdi_1 s>> 5) + 0x14367be00))
    
    if (rdx.d == 0 || not(test_bit(*((rdx << 2) + 0x14367c720), rdi_1.d & 0x1f)))
        goto label_142b282aa
    
    if ((rdi_1.d & 0x1fff01) != 0xf01)
        int64_t rax_6 = *(arg1 + 0x188)
        int32_t rax_7 = (*(rax_6 + 0x40))(rax_6)
        
        if (rax_7 s< 0x300)
            goto label_142b282aa
        
        rdx = zx.q(*((sx.q(rax_7) s>> 5) + 0x14367b600))
        
        if (rdx.d == 0 || not(test_bit(*((rdx << 2) + 0x14367c600), rax_7 & 0x1f)))
            goto label_142b282aa
    
    int64_t rax_10 = *(arg1 + 0x188)
    (*(rax_10 + 0x50))(rax_10, rdx)
    
    if (sub_142b28350(arg1, arg2) == 0)
        break

return -1
