// 函数: sub_141d3ecd0
// 地址: 0x141d3ecd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = *(arg1 + 0x5c8)
int32_t result = (*(*(r12 + 0xb0) + 0x48))(r12 + 0xb0)

if (result != 0)
    int32_t rdi_1 = 0
    result = (*(*(r12 + 0x188) + 0x48))(r12 + 0x188)
    
    if (result s> 0)
        int64_t rbp_1 = 0
        int64_t* r14_1 = nullptr
        int32_t* r15_1 = nullptr
        
        do
            int64_t* rbx_1 = *(r14_1 + *(arg1 + 0x208))
            
            if (rbx_1 != 0)
                int32_t rcx_2 = *(r15_1 + *(r12 + 0x190))
                void* rcx_3
                int64_t rdx_1
                
                if (rcx_2 == 4)
                    rcx_3 = *rbx_1
                    rdx_1 = sx.q(rbx_1[1].d)
                    char r8_1 = *(rdx_1 + *(rcx_3 + 0x398))
                    
                    if (r8_1 - 2 u<= 1
                            && not(1.1920929e-07f f>= *(*(rcx_3 + 0x2c0) + (rdx_1 << 2))))
                        sub_14177fa60(rcx_3, rdx_1, 4)
                        
                        if (*(arg1 + 0xbc) == 0)
                            int64_t* r8_2 = *(r12 + 0x1d8)
                            int64_t rdx_2 = sx.q(rbx_1[1].d) * 3
                            int64_t rcx_4 = *(*rbx_1 + 0x1b8)
                            *(rcx_4 + (rdx_2 << 2)) = *(r8_2 + rbp_1)
                            *(rcx_4 + (rdx_2 << 2) + 8) = *(r8_2 + rbp_1 + 8)
                            int64_t* r8_3 = *(r12 + 0x1c0)
                            int64_t rdx_3 = sx.q(rbx_1[1].d) * 3
                            int64_t rcx_5 = *(*rbx_1 + 0x1d0)
                            *(rcx_5 + (rdx_3 << 2)) = *(r8_3 + rbp_1)
                            *(rcx_5 + (rdx_3 << 2) + 8) = *(r8_3 + rbp_1 + 8)
                    else if (r8_1 == 1)
                        sub_14177fa60(rcx_3, rdx_1, 4)
                else if (rcx_2 == 2)
                    rdx_1 = sx.q(rbx_1[1].d)
                    rcx_3 = *rbx_1
                    
                    if (*(rdx_1 + *(rcx_3 + 0x398)) == 4
                            && not(1.1920929e-07f f>= *(*(rcx_3 + 0x2c0) + (rdx_1 << 2))))
                        sub_14177fa60(rcx_3, rdx_1, 2)
                else if (rcx_2 == 3)
                    rdx_1 = sx.q(rbx_1[1].d)
                    rcx_3 = *rbx_1
                    
                    if (*(rdx_1 + *(rcx_3 + 0x398)) == 4
                            && not(1.1920929e-07f f>= *(*(rcx_3 + 0x2c0) + (rdx_1 << 2))))
                        sub_14177fa60(rcx_3, rdx_1, 3)
                else if (rcx_2 == 1)
                    rdx_1 = sx.q(rbx_1[1].d)
                    rcx_3 = *rbx_1
                    
                    if (*(rdx_1 + *(rcx_3 + 0x398)) == 4)
                        sub_14177fa60(rcx_3, rdx_1, 1)
            
            rdi_1 += 1
            r14_1 = &r14_1[1]
            r15_1 = &r15_1[1]
            rbp_1 += 0xc
            result = (*(*(r12 + 0x188) + 0x48))(r12 + 0x188)
        while (rdi_1 s< result)

return result
