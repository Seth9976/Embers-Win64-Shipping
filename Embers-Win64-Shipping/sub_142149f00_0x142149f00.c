// 函数: sub_142149f00
// 地址: 0x142149f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x30)
int64_t result = sx.q(*(rdi + 0x40))

if (result.d s<= 0)
label_142149f51:
    result.b = 0
else
    int64_t* rdi_1 = *(rdi + 0x38)
    int64_t result_1 = result
    result = 0
    
    while (true)
        if (*rdi_1 == arg2)
            void* const rcx_3
            
            if (*(arg1 + 0x48) == *(arg1 + 0x74))
            label_142149fd0:
                rcx_3 = nullptr
            else
                int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
                void* r8 = arg1 + 0x78
                void* rcx_1 = *(r8 + 8)
                
                if (rcx_1 != 0)
                    r8 = rcx_1
                
                int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x88)) - 1) & sx.q(rax_2)) << 2))
                
                if (rax_4 == 0xffffffff)
                label_142149fd0_1:
                    rcx_3 = nullptr
                else
                    int64_t r8_1 = *(arg1 + 0x40)
                    
                    while (true)
                        int64_t rdx_3 = sx.q(rax_4) * 5
                        rcx_3 = r8_1 + (rdx_3 << 2)
                        
                        if (*(r8_1 + (rdx_3 << 2)) == arg2)
                            break
                        
                        rax_4 = *(rcx_3 + 0xc)
                        
                        if (rax_4 == 0xffffffff)
                            goto label_142149fd0_2
                    
                    if (rax_4 == 0xffffffff)
                    label_142149fd0_2:
                        rcx_3 = nullptr
            
            result = rcx_3 + 8
            
            if (rcx_3 == 0)
                result = 0
            
            if (result == 0)
                result.b = 1
                *arg3 = rdi_1[3].d
            else
                int32_t zmm0 = *result
                result.b = 1
                *arg3 = zmm0
            
            break
        
        result += 1
        rdi_1 += 0x1c
        
        if (result s>= result_1)
            goto label_142149f51

return result
