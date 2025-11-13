// 函数: sub_142a49810
// 地址: 0x142a49810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
int32_t rsi = arg2

if (arg3 s> 1)
    int32_t rbp_1 = 0
    
    if (sub_142a487e0(arg1, 0xffffffff, 0xffffffff, 1, 0, 0) != 0)
        int16_t rcx = *(arg1 + 8)
        int32_t rax_3
        
        if (rcx s< 0)
            rax_3 = *(arg1 + 0xc)
        else
            rax_3 = sx.d(rcx) s>> 5
        
        if (rsi s>= 0)
            if (rsi s> rax_3)
                rsi = rax_3
            
            rbp_1 = rsi
        
        if (rdi s>= 0)
            int32_t rax_4 = rax_3 - rbp_1
            
            if (rdi s> rax_4)
                rdi = rax_4
            
            if (rdi s> 1)
                void* rcx_1 = arg1 + 0xa
                
                if ((rcx.b & 2) == 0)
                    rcx_1 = *(arg1 + 0x18)
                
                int64_t rsi_1 = sx.q(rbp_1) * 2
                void* r9_1 = rsi_1 + rcx_1
                int64_t rdi_1 = sx.q(rdi) * 2
                void* r10_2 = r9_1 - 2 + rdi_1
                char r11_1 = 0
                
                do
                    uint32_t r8 = zx.d(*r9_1)
                    uint32_t rdx = zx.d(*r10_2)
                    *r9_1 = rdx.w
                    r9_1 += 2
                    *r10_2 = r8.w
                    rcx_1.b = (r8 & 0xfffffc00) == 0xd800
                    int32_t rax_10
                    rax_10.b = (rdx & 0xfffffc00) == 0xd800
                    r10_2 -= 2
                    rcx_1.b |= rax_10.b
                    r11_1 |= rcx_1.b
                while (r9_1 u< r10_2)
                
                int32_t rax_12
                rax_12.b = (zx.d(*r9_1) & 0xfffffc00) == 0xd800
                rax_12.b |= r11_1
                
                if (rax_12.b != 0)
                    void* rax_13 = arg1 + 0xa
                    
                    if ((*(arg1 + 8) & 2) == 0)
                        rax_13 = *(arg1 + 0x18)
                    
                    void* i = rax_13 + rsi_1
                    
                    for (void* r10_4 = i - 2 + rdi_1; i u< r10_4; i += 2)
                        uint32_t rdx_1 = zx.d(*i)
                        
                        if ((rdx_1 & 0xfffffc00) == 0xdc00)
                            uint32_t r9_2 = zx.d(*(i + 2))
                            void* i_1 = i + 2
                            
                            if ((r9_2 & 0xfffffc00) == 0xd800)
                                *i = r9_2.w
                                i = i_1
                                *i_1 = rdx_1.w

return arg1
