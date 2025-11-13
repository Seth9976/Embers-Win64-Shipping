// 函数: sub_142b28640
// 地址: 0x142b28640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t rcx = *(arg1 + 0x190)
    
    if (rcx != 1)
        int32_t result
        
        if (rcx == 2 && *(arg1 + 0x198) != *(arg1 + 0x194))
            result = sub_142a55dd0(*(arg1 + 0x188))
        else if (rcx s< 3 || *(arg1 + 0x198) == 0)
            sub_142b28c10(arg1)
            continue
        else
            result = sub_142a486d0(arg1 + 0x1a8, *(arg1 + 0x198) - 1)
        
        int32_t rcx_15
        rcx_15.b = result u> 0xffff
        *(arg1 + 0x198) -= rcx_15 + 1
        return result
    
    int64_t rax_1 = *(arg1 + 0x188)
    int32_t rax_2 = (*(rax_1 + 0x50))(rax_1)
    int64_t rsi_1 = sx.q(rax_2)
    
    if (rax_2 s< 0)
        *(arg1 + 0x190) = 2
        *(arg1 + 0x194) = 0
        return -1
    
    if (rsi_1.d s< 0x300)
        return rsi_1.d
    
    uint64_t rdx = zx.q(*((rsi_1 s>> 5) + 0x14367b600))
    
    if (rdx.d == 0 || not(test_bit(*((rdx << 2) + 0x14367c600), rsi_1.d & 0x1f)))
        return rsi_1.d
    
    int64_t rdi_1 = 0xffffffff
    
    if ((rsi_1.d & 0x1fff01) != 0xf01)
        int64_t rax_8 = *(arg1 + 0x188)
        rdi_1 = sx.q((*(rax_8 + 0x50))(rax_8))
        
        if (rdi_1.d s>= 0xc0)
            rdx = zx.q(*((rdi_1 s>> 5) + 0x14367be00))
        
        if (rdi_1.d s< 0xc0 || rdx.d == 0
                || not(test_bit(*((rdx << 2) + 0x14367c720), rdi_1.d & 0x1f)))
            if ((rsi_1.d & 0xfffffc00) == 0xdc00)
                if (rdi_1.d s< 0)
                    int64_t rax_19 = *(arg1 + 0x188)
                    rdi_1 = zx.q((*(rax_19 + 0x50))(rax_19))
                
                if ((rdi_1.d & 0xfffffc00) == 0xd800)
                    return ((rdi_1 - 0xd7f7).d << 0xa) + rsi_1.d
            
            if (rdi_1.d s< 0)
                return rsi_1.d
            
            int64_t rax_25 = *(arg1 + 0x188)
            (*(rax_25 + 0x48))(rax_25)
            return rsi_1.d
    
    int64_t rax_13 = *(arg1 + 0x188)
    (*(rax_13 + 0x48))(rax_13, rdx)
    
    if (rdi_1.d s>= 0)
        int64_t rax_14 = *(arg1 + 0x188)
        (*(rax_14 + 0x48))(rax_14)
    
    if (sub_142b28860(arg1, arg2) == 0)
        break

return -1
