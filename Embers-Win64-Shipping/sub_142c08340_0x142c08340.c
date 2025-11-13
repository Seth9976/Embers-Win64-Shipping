// 函数: sub_142c08340
// 地址: 0x142c08340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
void* r15 = arg1[3]
sub_142c08470(arg1)
void* result = *(*arg1 + 0x20)
int64_t r9 = *(result + 0x48)

if (r9 != 0)
    result = r9(arg2, r15, arg1[1])

int32_t i = 0

if (arg1[5].d u> 0)
    do
        int32_t* r10_3 = (zx.q(i) << 4) + arg1[4]
        int32_t rbp_1 = r10_3[2]
        
        if (rbp_1 != 0 || r10_3[3] != 0xffffffff)
            int32_t rdx_2 = *(r14 + 0x38)
            int32_t r8_2 = 0
            int32_t rdx_3 = rdx_2 - 1
            int32_t r11_1 = *r10_3
            int64_t rdi_1 = *(r14 + 0x40)
            void* rax_4
            char rcx_2
            
            if (rdx_2 - 1 s< 0)
            label_142c08401:
                rax_4 = nullptr
                rcx_2 = 0
            else
                uint64_t rcx_1
                
                while (true)
                    uint64_t rax_1 = zx.q((rdx_3 + r8_2) u>> 1)
                    rcx_1 = zx.q(rax_1.d)
                    int32_t r9_1 = *(rdi_1 + rax_1 * 0x24)
                    int32_t rax_3
                    
                    if (r11_1 u>= r9_1)
                        rax_3.b = r11_1 u> r9_1
                    
                    if (r11_1 u< r9_1 || rax_3 s< 0)
                        rdx_3 = (rcx_1 - 1).d
                    else
                        if (rax_3 s<= 0)
                            break
                        
                        r8_2 = (rcx_1 + 1).d
                    
                    if (r8_2 s> rdx_3)
                        goto label_142c08401
                
                rax_4 = rdi_1 + rcx_1 * 0x24
                
                if (rax_4 == 0)
                    rcx_2 = 0
                else
                    rcx_2 = (*(rax_4 + 0x14)).b
            
            int32_t r8_3
            
            if (rax_4 == 0)
                r8_3 = 0
            else
                r8_3 = *(rax_4 + 0x18)
            
            result = sub_142bf5880(r15, r10_3[1] << rcx_2, r8_3, rbp_1, r10_3[3])
        
        i += 1
    while (i u< arg1[5].d)

return result
