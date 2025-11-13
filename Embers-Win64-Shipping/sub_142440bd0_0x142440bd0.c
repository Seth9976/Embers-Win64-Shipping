// 函数: sub_142440bd0
// 地址: 0x142440bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r13 = arg2
void arg_8
int64_t result = sub_140d3a3a0(&arg_8, arg2)
int32_t rdi = *(arg1 + 0x1c0)

if (rdi != 0)
    int32_t i = 0
    int32_t r15_1 = 0
    result = sub_14077a170(*(arg1 + 0x1b8), &arg_8)
    int64_t rsi
    rsi.b = result.b == 0
    
    do
        int64_t i_2 = sx.q(i)
        
        for (i += 1; i s< rdi; i += 1)
            result = sub_14077a170(*(arg1 + 0x1b8) + (sx.q(i) << 3), &arg_8)
            int32_t rcx_4
            rcx_4.b = result.b == 0
            
            if (zx.d(rsi.b) != rcx_4)
                break
        
        int32_t rbp_3 = i - i_2.d
        
        if (rsi.b != 0)
            if (r15_1 != i_2.d)
                int64_t rcx_5 = *(arg1 + 0x1b8)
                result = memmove(rcx_5 + (sx.q(r15_1) << 3), rcx_5 + (i_2 << 3), rbp_3 << 3)
            
            r15_1 += rbp_3
        
        rsi.b ^= 1
    while (i s< rdi)
    
    *(arg1 + 0x1c0) = r15_1
    
    if (rdi - r15_1 s> 0 && r13 != 0)
        void* rax_2 = sub_14256a090()
        void* rdx_3 = *(r13 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            int64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_2 + 0x30)
                void* rax_3 = sub_14256a090()
                void* rdx_4 = *(r13 + 0x10)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    r13 = nullptr
                
                result = sub_140d3a3a0(&arg_8, r13)
                int32_t rdi_2 = *(arg1 + 0x1d0)
                
                if (rdi_2 != 0)
                    int32_t r15_2 = 0
                    int32_t i_1 = 0
                    result = sub_14077a170(*(arg1 + 0x1c8), &arg_8)
                    rsi.b = result.b == 0
                    
                    do
                        int64_t i_3 = sx.q(i_1)
                        
                        for (i_1 += 1; i_1 s< rdi_2; i_1 += 1)
                            result = sub_14077a170(*(arg1 + 0x1c8) + (sx.q(i_1) << 3), &arg_8)
                            int32_t rcx_12
                            rcx_12.b = result.b == 0
                            
                            if (zx.d(rsi.b) != rcx_12)
                                break
                        
                        int32_t rbp_6 = i_1 - i_3.d
                        
                        if (rsi.b != 0)
                            if (r15_2 != i_3.d)
                                int64_t rcx_13 = *(arg1 + 0x1c8)
                                result = memmove(rcx_13 + (sx.q(r15_2) << 3), rcx_13 + (i_3 << 3), 
                                    rbp_6 << 3)
                            
                            r15_2 += rbp_6
                        
                        rsi.b ^= 1
                    while (i_1 s< rdi_2)
                    
                    *(arg1 + 0x1d0) = r15_2

return result
