// 函数: sub_141e46b90
// 地址: 0x141e46b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x38)
int32_t* result = sub_1409d9b90(arg1 + 0xa0)

if (rbp != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x98) s> 0)
        int64_t r14_1 = 0
        
        do
            int32_t* rdi_2 = *(arg1 + 0x90) + r14_1
            int32_t rcx_1
            rcx_1.b = sub_140b5b8a0(*rdi_2, 0) == 0
            
            if ((rdi_2[1] != 0 | rcx_1.b) == 0)
            label_141e46c90:
                result = sub_141e3c6b0(arg1 + 0x80, i)
                i -= 1
                r14_1 -= 8
            else
                int64_t rbx_1 = *rdi_2
                
                if (*(rbp + 0xf0) == *(rbp + 0x11c))
                    goto label_141e46c90
                
                int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                void* r8_1 = rbp + 0x120
                void* rcx_3 = *(r8_1 + 8)
                
                if (rcx_3 != 0)
                    r8_1 = rcx_3
                
                int32_t rax_5 = *(r8_1 + (((sx.q(*(rbp + 0x130)) - 1) & sx.q(rax_3)) << 2))
                
                if (rax_5 == 0xffffffff)
                    goto label_141e46c90
                
                int64_t r8_2 = *(rbp + 0xe8)
                int64_t rcx_4
                
                while (true)
                    rcx_4 = sx.q(rax_5)
                    int64_t rdx_4 = rcx_4 * 5
                    
                    if (*(r8_2 + (rdx_4 << 2)) == rbx_1)
                        break
                    
                    rax_5 = *(r8_2 + (rdx_4 << 2) + 0xc)
                    
                    if (rax_5 == 0xffffffff)
                        goto label_141e46c90
                
                if (rax_5 == 0xffffffff)
                    goto label_141e46c90
                
                void* rax_7 = r8_2 + rcx_4 * 0x14
                
                if (rax_7 == 0 || rax_7 == -8)
                    goto label_141e46c90
                
                int32_t rbx_2 = *(rax_7 + 8)
                
                if (rbx_2 == 0xffffffff)
                    goto label_141e46c90
                
                int32_t var_48
                sub_140b33170(arg1 + 0xa0, &var_48)
                int64_t rax_9 = *rdi_2
                int64_t* var_40
                var_40[1].d = rbx_2
                *var_40 = rax_9
                *(var_40 + 0xc) = 0xffffffff
                void arg_8
                result = sub_140a6fff0(arg1 + 0xa0, &arg_8, 
                    (rax_9 u>> 0x20).d + sub_140b5ead0(rax_9.d), var_40, var_48, nullptr)
            
            i += 1
            r14_1 += 8
        while (i s< *(arg1 + 0x98))

return result
