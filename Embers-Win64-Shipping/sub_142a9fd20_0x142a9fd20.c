// 函数: sub_142a9fd20
// 地址: 0x142a9fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *arg3

if (rbp == arg4)
    int64_t* r8_1 = *(arg1 + 0x20)
    char rax_1
    
    if (r8_1 == 0)
        void* rax_2 = *(arg1 + 0x50)
        
        if (rax_2 == 0)
            rax_1 = sub_142a9f8f0(arg1 - 8, 0xffff) & 1
        else
            rax_1 = sub_142a9f280(rax_2, 0xffff, r8_1)
    else
        rax_1 = (*(*r8_1 + 8))(r8_1, 0xffff)
    
    if (rax_1 == 0)
        return 0
    
    uint32_t rax_3 = zx.d(arg5)
    char temp0 = rax_3.b
    rax_3.b = neg.b(rax_3.b)
    return zx.q(sbb.d(rax_3, rax_3, temp0 != 0) + 2)

void* rax_7 = *(arg1 + 0x48)

if (rax_7 != 0 && *(rax_7 + 8) != 0)
    int16_t rax_9 = (*(*arg2 + 0x40))(arg2, zx.q(rbp))
    void* rcx_4 = *(arg1 + 0x48)
    int32_t rdi_1 = 0
    int32_t i = 0
    
    if (*(rcx_4 + 8) s> 0)
        do
            void* rax_10 = sub_142ae72d0(rcx_4, i)
            int32_t rdx_2
            
            if (rbp s>= arg4)
                int16_t rax_11 = *(rax_10 + 8)
                int32_t rax_13
                
                if (rax_11 s< 0)
                    rax_13 = *(rax_10 + 0xc)
                else
                    rax_13 = sx.d(rax_11) s>> 5
                
                rdx_2 = rax_13 - 1
            else
                rdx_2 = 0
            
            int16_t rcx_5 = *(rax_10 + 8)
            int32_t rax_15
            
            if (rcx_5 s< 0)
                rax_15 = *(rax_10 + 0xc)
            else
                rax_15 = sx.d(rcx_5) s>> 5
            
            int16_t rcx_7
            
            if (rdx_2 u>= rax_15)
                rcx_7 = -1
            else
                void* rcx_6 = rax_10 + 0xa
                
                if ((rcx_5.b & 2) == 0)
                    rcx_6 = *(rax_10 + 0x18)
                
                rcx_7 = *(rcx_6 + (sx.q(rdx_2) << 1))
            
            if (rbp s< arg4 && rcx_7 u> rax_9)
                break
            
            if (rcx_7 == rax_9)
                int32_t rax_17 = sub_142a9fba0(arg2, *arg3, arg4, rax_10)
                
                if (arg5 != 0)
                    int32_t rcx_10
                    
                    if (rbp s>= arg4)
                        rcx_10 = *arg3 - arg4
                    else
                        rcx_10 = arg4 - *arg3
                    
                    if (rax_17 == rcx_10)
                        return 1
                
                int16_t rax_18 = *(rax_10 + 8)
                int32_t rax_20
                
                if (rax_18 s< 0)
                    rax_20 = *(rax_10 + 0xc)
                else
                    rax_20 = sx.d(rax_18) s>> 5
                
                if (rax_17 == rax_20)
                    if (rax_17 s> rdi_1)
                        rdi_1 = rax_17
                    
                    if (rbp s< arg4 && rax_17 s< rdi_1)
                        break
            
            rcx_4 = *(arg1 + 0x48)
            i += 1
        while (i s< *(rcx_4 + 8))
        
        if (rdi_1 != 0)
            if (rbp s>= arg4)
                rdi_1 = neg.d(rdi_1)
            
            *arg3 += rdi_1
            return 2

return sub_142b135a0(arg1, arg2, arg3, arg4, arg5)
