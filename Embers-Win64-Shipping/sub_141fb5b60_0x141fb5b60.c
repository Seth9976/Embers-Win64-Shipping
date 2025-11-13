// 函数: sub_141fb5b60
// 地址: 0x141fb5b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
sub_140d3a3a0(&arg_18, arg2)
void* rdi = *(arg1 + 0x150)
int32_t arg_8
sub_141f87aa0(rdi + 0x50, &arg_8, arg_18)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rcx_2 = *(rdi + 0x50) + rax * 0x14
    
    if (rcx_2 != 0)
        int64_t rcx_3 = sx.q(*(rcx_2 + 8))
        
        if (rcx_3.d != 0)
            int32_t* r8_6
            
            if (*(arg1 + 0xa10) == *(arg1 + 0xa3c))
                r8_6 = nullptr
            else
                void* r9_1 = arg1 + 0xa40
                void* rdx_2 = *(r9_1 + 8)
                
                if (rdx_2 != 0)
                    r9_1 = rdx_2
                
                int32_t rax_3 = *(r9_1 + (((sx.q(*(arg1 + 0xa50)) - 1) & rcx_3) << 2))
                
                if (rax_3 == 0xffffffff)
                    r8_6 = nullptr
                else
                    while (true)
                        r8_6 = (sx.q(rax_3) << 5) + *(arg1 + 0xa08)
                        
                        if (*r8_6 == rcx_3.d)
                            break
                        
                        rax_3 = r8_6[6]
                        
                        if (rax_3 == 0xffffffff)
                            return 0
                    
                    if (rax_3 == 0xffffffff)
                        r8_6 = nullptr
            
            if (r8_6 == 0)
                return nullptr
            
            return &r8_6[2]

return 0
