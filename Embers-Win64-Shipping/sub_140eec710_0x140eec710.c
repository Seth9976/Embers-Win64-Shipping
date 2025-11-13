// 函数: sub_140eec710
// 地址: 0x140eec710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x20) s<= 0)
    return 

void* r12_1 = nullptr

do
    int64_t rax = *(arg1 + 0x18)
    
    if (*(r12_1 + rax + 0x50) != 0)
        int32_t j_1 = *(r12_1 + rax + 0x50)
        void* r14_1 = r12_1 + rax
        
        if (j_1 != 0)
            int64_t* rdi_2 = *(r14_1 + 0x48) + 0x18
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
        
        *(r14_1 + 0x50) = 0
        
        if (*(r14_1 + 0x54) != 0)
            sub_1405a51b0(r14_1 + 0x48, 0)
        
        *(arg1 + 0x88) |= 1
    
    i += 1
    r12_1 += 0x70
while (i s< *(arg1 + 0x20))
