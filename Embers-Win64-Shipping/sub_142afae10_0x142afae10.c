// 函数: sub_142afae10
// 地址: 0x142afae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi_2 = (zx.q(arg2) << 0xa) + arg1
int32_t rax = *(rdi_2 + 0x284)

if (rax s>= 0 || (rax & 0xf00000) == 0x700000)
    int32_t rax_2 = *(rdi_2 + 0x104)
    
    if (rax_2 s>= 0 || (rax_2 & 0xf00000) == 0x700000)
        int64_t rbx = 0
        int64_t rcx = 0
        int32_t rax_4
        
        while (true)
            int32_t rax_3 = *(rdi_2 + (rcx << 2))
            
            if (rax_3 s< 0 && (rax_3 & 0xf00000) != 0x700000)
                break
            
            rcx += 1
            
            if (rcx s> 0xff)
                while (true)
                    rax_4 = *(rdi_2 + (rbx << 2))
                    
                    if (rax_4 s>= 0 && sub_142afae10(arg1, zx.q((rax_4 u>> 0x18).b)).b != 0)
                        break
                    
                    rbx += 1
                    
                    if (rbx s> 0xff)
                        rax_4.b = 0
                        return rax_4
                
                break
        
        rax_4.b = 1
        return rax_4

int32_t rax_1
rax_1.b = 1
return rax_1
