// 函数: sub_141fca460
// 地址: 0x141fca460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
*(arg1 + 0x58) = 0

if (rax != 0)
    void* r15_1 = *(rax + 8)
    
    if (r15_1 != 0)
        int32_t rax_1 = *(r15_1 + 0x438)
        int64_t rbp_1 = sx.q(rax_1 - 1)
        
        if (rax_1 - 1 s>= 0)
            int64_t r14_2 = rbp_1 << 5
            int64_t temp1_1
            
            do
                int64_t rax_3 = *(r15_1 + 0x430)
                int64_t* i_3 = *(r14_2 + rax_3)
                *(r14_2 + rax_3) = 0
                
                if (i_3 != 0)
                    int64_t* i
                    
                    do
                        int64_t* rbx_1 = i_3[2]
                        i = *i_3
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp6_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        j_sub_140a74f90(i_3)
                        i_3 = i
                    while (i != 0)
                
                r14_2 -= 0x20
                temp1_1 = rbp_1
                rbp_1 -= 1
            while (temp1_1 - 1 s>= 0)
        
        int32_t i_2 = *(r15_1 + 0x438)
        
        if (i_2 != 0)
            int64_t* rdi_2 = *(r15_1 + 0x430) + 0x10
            int32_t i_1
            
            do
                int64_t* rbx_2 = *rdi_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp5_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_2 = &rdi_2[4]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        *(r15_1 + 0x438) = 0
        
        if (*(r15_1 + 0x43c) != 0)
            sub_1405a51b0(r15_1 + 0x430, 0)

int64_t result = sub_141fb0410(arg1 + 0x78, 0)
int64_t* rcx_7 = *(arg1 + 0x60)

if (rcx_7 != 0)
    result = (**rcx_7)(rcx_7, 1)
    *(arg1 + 0x60) = 0

return result
