// 函数: sub_142393c50
// 地址: 0x142393c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x280))
uint64_t r15 = *(arg1 + 0x278)
int64_t r13 = r15 + (result << 2)

if (r15 != r13)
    while (true)
        int64_t rdi_1 = sx.q(*r15)
        int32_t arg_8 = rdi_1.d
        
        while (rdi_1.d s>= 0)
            if (rdi_1.d s< *(arg1 + 0x18))
                result = *(arg1 + 0x10)
                int64_t* rsi_1 = rdi_1 * 0xd8
                
                if (*(rsi_1 + result) == 0)
                    int64_t rcx = *(rsi_1 + result + 0xc8)
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    int32_t rcx_3 = *(arg1 + 0x18)
                    int32_t rax_2 = rcx_3 - rdi_1.d - 1
                    
                    if (rax_2 s>= 1)
                        rax_2 = 1
                    
                    if (rax_2 != 0)
                        void* r9_1 = *(arg1 + 0x10)
                        memcpy(r9_1 + rsi_1, sx.q(rcx_3 - rax_2) * 0xd8 + r9_1, rax_2 * 0xd8)
                        rcx_3 = *(arg1 + 0x18)
                    
                    *(arg1 + 0x18) = rcx_3 - 1
                    result = sub_142396c80(arg1 + 0x10)
                    continue
            
            if (rdi_1.d s< 0)
                break
            
            if (rdi_1.d s< *(arg1 + 0x18))
                void* r14_1 = *(rdi_1 * 0xd8 + *(arg1 + 0x10))
                result = zx.q(*(arg1 + 0x2e0))
                
                if (result.d != *(arg1 + 0x30c))
                    void* rax_6 = *(arg1 + 0x318)
                    void* r11_1 = arg1 + 0x310
                    int32_t r10_1 = 0
                    int64_t r9_2 = sx.q(*(r14_1 + 0x34))
                    int64_t rsi_3 = sx.q(*(arg1 + 0x320)) - 1
                    
                    if (rax_6 != 0)
                        r11_1 = rax_6
                    
                    result = r9_2 & rsi_3
                    int32_t i = *(r11_1 + (result << 2))
                    
                    if (i != 0xffffffff)
                        int64_t r8_2 = *(arg1 + 0x2d8)
                        
                        do
                            int64_t i_1 = sx.q(i)
                            result = i_1 * 3
                            
                            if (*(r8_2 + (result << 2)) == r9_2.d)
                                int64_t rax_8 = i_1 * 3
                                int64_t rax_10 = sx.q(*(r8_2 + (rax_8 << 2) + 8)) & rsi_3
                                void* rcx_6 = r11_1 + (rax_10 << 2)
                                int32_t j = *(r11_1 + (rax_10 << 2))
                                
                                while (j != 0xffffffff)
                                    if (j == i)
                                        *rcx_6 = *(r8_2 + (rax_8 << 2) + 4)
                                        break
                                    
                                    int64_t j_1 = sx.q(j)
                                    j = *(r8_2 + ((j_1 * 3 + 1) << 2))
                                    rcx_6 = r8_2 + ((j_1 * 3 + 1) << 2)
                                
                                result = sub_14090a460(arg1 + 0x2d8, i, 1)
                                r10_1 = 1
                                break
                            
                            i = *(r8_2 + (result << 2) + 4)
                        while (i != 0xffffffff)
                    
                    void arg_10
                    
                    if (r10_1 != 0)
                        result = sub_14077a5e0(arg1 + 0x2d8, &arg_10, &arg_8, nullptr)
                
                *(r14_1 + 0x34) = rdi_1.d
            
            break
        
        r15 += 4
        
        if (r15 == r13)
            break

bool cond:0 = *(arg1 + 0x284) == 0
*(arg1 + 0x280) = 0

if (cond:0)
    return result

return sub_1405dadb0(arg1 + 0x278, 0) __tailcall
