// 函数: sub_140d9fc00
// 地址: 0x140d9fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg1
int64_t* rbx = r14
void* rsi_2 = &r14[sx.q(arg1[1].d) * 8]

if (r14 != rsi_2)
    char rbp_1 = arg2[7].b
    
    do
        if (rbx[7].b == rbp_1)
            char rax_1 = *(rbx + 0x34)
            
            if (rax_1 == *(arg2 + 0x34))
                char rax_2
                
                if (rax_1 != 0)
                    rax_2 = sub_140d96830(&rbx[2], &arg2[2])
                
                if (rax_1 == 0 || rax_2 != 0)
                    int32_t r11_1 = rbx[1].d
                    
                    if (r11_1 == arg2[1].d)
                        int32_t* r10_1 = *arg2
                        
                        if (r11_1 == 0)
                            return zx.q(((rbx - r14) s>> 6).d)
                        
                        void* rdx_1 = &r10_1[5]
                        void* rcx_2 = *rbx + 0x14
                        
                        while (true)
                            char r8_1 = *(rdx_1 + 0xc)
                            char r9_1 = *(rcx_2 + 0xc)
                            
                            if (((r8_1 ^ r9_1) & 1) != 0)
                                break
                            
                            if (((r8_1 ^ r9_1) & 2) != 0)
                                break
                            
                            if (((r8_1 ^ r9_1) & 4) != 0)
                                break
                            
                            if (*r10_1 f!= *(rcx_2 - 0x14))
                                break
                            
                            if (*(rdx_1 - 0x10) f!= *(rcx_2 - 0x10))
                                break
                            
                            if (*(rdx_1 - 0xc) f!= *(rcx_2 - 0xc))
                                break
                            
                            if (*(rdx_1 - 8) f!= *(rcx_2 - 8))
                                break
                            
                            if (*(rdx_1 - 4) f!= *(rcx_2 - 4))
                                break
                            
                            if (*rdx_1 f!= *rcx_2)
                                break
                            
                            if (*(rdx_1 + 4) f!= *(rcx_2 + 4))
                                break
                            
                            if (*(rdx_1 + 8) f!= *(rcx_2 + 8))
                                break
                            
                            r10_1 = &r10_1[9]
                            rdx_1 += 0x24
                            rcx_2 += 0x24
                            int32_t temp0_1 = r11_1
                            r11_1 -= 1
                            
                            if (temp0_1 == 1)
                                return zx.q(((rbx - r14) s>> 6).d)
        
        rbx = &rbx[8]
    while (rbx != rsi_2)

return 0xffffffff
