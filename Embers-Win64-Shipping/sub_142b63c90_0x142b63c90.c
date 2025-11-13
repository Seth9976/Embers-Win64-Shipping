// 函数: sub_142b63c90
// 地址: 0x142b63c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 0

int16_t rdx = *(arg1 + 8)
int32_t rax_2

if (rdx s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rdx) s>> 5

if (rax_2 - 4 u<= 1)
    int32_t rax_5
    
    if (rdx s< 0)
        rax_5 = *(arg1 + 0xc)
    else
        rax_5 = sx.d(rdx) s>> 5
    
    if (rax_2 - 3 u< rax_5)
        void* r8_1 = arg1 + 0xa
        int16_t r9_1 = rdx & 2
        
        if (r9_1 == 0)
            r8_1 = *(arg1 + 0x18)
        
        if (*(r8_1 + (sx.q(rax_2 - 3) << 1)) == 0x3a)
            int32_t rax_8
            
            if (rdx s< 0)
                rax_8 = *(arg1 + 0xc)
            else
                rax_8 = sx.d(rdx) s>> 5
            
            if (rax_2 - 2 u< rax_8)
                void* r8_2 = arg1 + 0xa
                
                if (r9_1 == 0)
                    r8_2 = *(arg1 + 0x18)
                
                if (*(r8_2 + (sx.q(rax_2 - 2) << 1)) == 0x30)
                    int32_t rax_11
                    
                    if (rdx s< 0)
                        rax_11 = *(arg1 + 0xc)
                    else
                        rax_11 = sx.d(rdx) s>> 5
                    
                    if (rax_2 - 1 u< rax_11)
                        void* r8_3 = arg1 + 0xa
                        
                        if (r9_1 == 0)
                            r8_3 = *(arg1 + 0x18)
                        
                        if (*(r8_3 + (sx.q(rax_2 - 1) << 1)) == 0x30)
                            int32_t rax_14
                            
                            if (rdx s< 0)
                                rax_14 = *(arg1 + 0xc)
                            else
                                rax_14 = sx.d(rdx) s>> 5
                            
                            int16_t rbx_3 = -1
                            int16_t r8_4
                            
                            if (rax_14 == 0)
                                r8_4 = -1
                            else
                                void* rax_15 = arg1 + 0xa
                                
                                if (r9_1 == 0)
                                    rax_15 = *(arg1 + 0x18)
                                
                                r8_4 = *rax_15
                            
                            uint64_t r8_6 = zx.q(zx.d(r8_4) - 0x30)
                            
                            if (r8_6.d u<= 9)
                                if (rax_2 != 5)
                                    return zx.q(r8_6.d)
                                
                                int32_t rax_17
                                
                                if (rdx s< 0)
                                    rax_17 = *(arg1 + 0xc)
                                else
                                    rax_17 = sx.d(rdx) s>> 5
                                
                                if (rax_17 u> 1)
                                    void* rcx
                                    
                                    if (r9_1 == 0)
                                        rcx = *(arg1 + 0x18)
                                    else
                                        rcx = arg1 + 0xa
                                    
                                    rbx_3 = *(rcx + 2)
                                
                                if (zx.d(rbx_3) - 0x30 u<= 9)
                                    r8_6 = zx.q(zx.d(rbx_3) - 0x30 + ((r8_6 * 5).d << 1))
                                    
                                    if (r8_6.d s<= 0x18)
                                        return zx.q(r8_6.d)

*arg2 = 3
return 0
