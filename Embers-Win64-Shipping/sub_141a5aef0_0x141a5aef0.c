// 函数: sub_141a5aef0
// 地址: 0x141a5aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *arg2
int128_t zmm0 = *(arg1 + 0x90)
void* r12 = &r11[sx.q(arg2[1].d)]

if (r11 != r12)
    int32_t r14_1 = zmm0:0xc.d
    char rdi_1 = zmm0:8.b
    int32_t rbp_1 = zmm0:4.d
    char rsi_1 = zmm0.b
    
    do
        void* result = *r11
        
        if (arg1 != result && *(result + 0xa8) == *(arg1 + 0xa8) + arg3)
            zmm0 = *(result + 0x90)
            
            if (rsi_1 == 2 || rdi_1 == 2)
            label_141a5af9d:
                uint64_t rcx = zmm0.q
                int64_t rdx = zmm0:8.q
                int64_t rax
                
                if (rcx.b == 2 || rdx.b == 2)
                label_141a5afe2:
                    
                    if (rdi_1 == 2 || rcx.b == 2)
                        rax.b = 1
                    else
                        rax.b = 0
                    
                    char r10
                    
                    if (rsi_1 == 2 || rdx.b == 2)
                        r10 = 1
                    else
                        r10 = 0
                    
                    bool r9 = true
                    bool r8_2 = true
                    
                    if (rax.b == 0)
                        uint32_t rax_3 = (rcx u>> 0x20).d
                        r9 = r14_1 s> rax_3
                        rax_3.b = r14_1 s>= rax_3
                        
                        if (rdi_1 != 1 || rcx.b != 1)
                            rcx.b = 0
                        else
                            rcx = 1
                        
                        if (rcx.b != 0)
                            r9 = rax_3.b
                    
                    if (r10 == 0)
                        uint32_t rax_5 = (rdx u>> 0x20).d
                        r8_2 = rbp_1 s< rax_5
                        rax_5.b = rbp_1 s<= rax_5
                        
                        if (rsi_1 != 1 || rdx.b != rsi_1)
                            rcx.b = 0
                        else
                            rcx = zx.q(rsi_1)
                        
                        if (rcx.b != 0)
                            r8_2 = rax_5.b
                    
                    if (r9 != 0 && r8_2 != 0)
                        return result
                else
                    rax = rcx u>> 0x20
                    uint32_t r8_1 = (rdx u>> 0x20).d
                    
                    if (rax.d s<= r8_1)
                        if (rax.d != r8_1)
                            goto label_141a5afe2
                        
                        if (rcx.b != 0 && rdx.b != 0)
                            goto label_141a5afe2
            else if (rbp_1 s<= r14_1)
                if (rbp_1 != r14_1)
                    goto label_141a5af9d
                
                if (rsi_1 != 0 && rdi_1 != 0)
                    goto label_141a5af9d
        
        r11 = &r11[1]
    while (r11 != r12)

return nullptr
