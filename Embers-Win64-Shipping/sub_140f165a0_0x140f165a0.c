// 函数: sub_140f165a0
// 地址: 0x140f165a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
void* rbx = arg2
int32_t i = 0

if (*(arg1 + 0x20) s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t rax = *(arg1 + 0x18)
        
        if (*(rax + r13_1 + 0x50) != 0)
            int32_t j_1 = *(rax + r13_1 + 0x50)
            void* r15_1 = rax + r13_1
            
            if (j_1 != 0)
                int64_t* rdi_2 = *(r15_1 + 0x48) + 0x18
                int32_t j
                
                do
                    int64_t* rbx_1 = *rdi_2
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rdi_2 = &rdi_2[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            *(r15_1 + 0x50) = 0
            
            if (*(r15_1 + 0x54) != 0)
                sub_1405a51b0(r15_1 + 0x48, 0)
            
            *(arg1 + 0x88) |= 1
        
        i += 1
        r13_1 += 0x70
    while (i s< *(arg1 + 0x20))
    
    rbx = arg2

if (*(rbx + 8) s<= 0)
    return 

do
    sub_140ee8240(arg1, (sx.q(i_1) << 5) + *rbx)
    i_1 += 1
while (i_1 s< *(rbx + 8))
