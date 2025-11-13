// 函数: sub_142b27ef0
// 地址: 0x142b27ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t rcx = *(arg1 + 0x190)
    
    if (rcx == 0)
        int64_t rax_1 = *(arg1 + 0x188)
        int32_t rax_2 = (*(rax_1 + 0x48))(rax_1)
        int64_t rdx = sx.q(rax_2)
        *arg2 = rdx.d
        
        if (rax_2 s>= 0)
            if (rdx.d s< 0xc0)
                break
            
            uint64_t r8 = zx.q(*((rdx s>> 5) + 0x14367be00))
            
            if (r8.d == 0)
                break
            
            if (not(test_bit(*((r8 << 2) + 0x14367c720), rdx.d & 0x1f)))
                break
            
            uint64_t rdx_1 = zx.q(rdx.d) & 0x1fff01
            
            if (rdx_1.d != 0xf01)
                int64_t rax_6 = *(arg1 + 0x188)
                int64_t rcx_5 = sx.q((*(rax_6 + 0x40))(rax_6, rdx_1))
                
                if (rcx_5.d s< 0x300)
                    break
                
                rdx_1 = zx.q(*((rcx_5 s>> 5) + 0x14367b600))
                
                if (rdx_1.d == 0)
                    break
                
                if (not(test_bit(*((rdx_1 << 2) + 0x14367c600), rcx_5.d & 0x1f)))
                    break
            
            int64_t rax_11 = *(arg1 + 0x188)
            (*(rax_11 + 0x50))(rax_11, rdx_1)
            
            if (sub_142b28350(arg1, arg3) != 0)
                continue
            else
                *arg2 = 0xffffffff
        
        return 0xc0
    
    if (rcx == 2 && *(arg1 + 0x198) != *(arg1 + 0x19c))
        int64_t rax_17 = *(arg1 + 0x188)
        *arg2 = (*(rax_17 + 0x48))(rax_17)
        *(arg1 + 0x198) += 1
        break
    
    if (rcx s>= 3)
        int16_t rax_14 = *(arg1 + 0x1b0)
        int32_t rax_16
        
        if (rax_14 s< 0)
            rax_16 = *(arg1 + 0x1b4)
        else
            rax_16 = sx.d(rax_14) s>> 5
        
        if (*(arg1 + 0x198) != rax_16)
            int64_t rdx_3 = sx.q(*(arg1 + 0x198))
            *(arg1 + 0x198) = (rdx_3 + 1).d
            int16_t rcx_11 = *(arg1 + 0x1b0)
            int32_t rax_21
            
            if (rcx_11 s< 0)
                rax_21 = *(arg1 + 0x1b4)
            else
                rax_21 = sx.d(rcx_11) s>> 5
            
            int16_t rcx_13
            
            if (rdx_3.d u>= rax_21)
                rcx_13 = -1
            else
                void* rcx_12 = arg1 + 0x1b2
                
                if ((rcx_11.b & 2) == 0)
                    rcx_12 = *(arg1 + 0x1c0)
                
                rcx_13 = *(rcx_12 + (rdx_3 << 1))
            
            *arg2 = zx.d(rcx_13)
            break
    
    sub_142b28ca0(arg1)

int64_t* r9_1 = *(arg1 + 8)
int64_t r8_1 = sx.q(*arg2)
return zx.q(*(r9_1[2] + (zx.q((r8_1.d & 0x1f) + (zx.d(*(*r9_1 + (r8_1 s>> 5 << 1))) << 2)) << 2)))
