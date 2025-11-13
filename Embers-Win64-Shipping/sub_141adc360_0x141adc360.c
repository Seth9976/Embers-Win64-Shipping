// 函数: sub_141adc360
// 地址: 0x141adc360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r13 = arg2

if (arg4 != 0)
    void* r14_1 = arg3 + 0xe0
    int32_t i
    
    do
        void* rsi_1 = r13
        r13 += 0x108
        sub_141adb020(rsi_1, r14_1 - 0xe0)
        *(rsi_1 + 0xc8) = *(r14_1 - 0x18)
        
        if (rsi_1 + 0xd8 != r14_1 - 8)
            int64_t rdi_1 = sx.q(*r14_1)
            int64_t rbp_1 = *(r14_1 - 8)
            int32_t r8 = *(rsi_1 + 0xe4)
            *(rsi_1 + 0xe0) = rdi_1.d
            
            if (rdi_1.d != 0 || r8 != 0)
                sub_1405c4b20(rsi_1 + 0xd8, rdi_1.d, r8)
                memcpy(*(rsi_1 + 0xd8), rbp_1, rdi_1.d * 0x1c)
            else
                *(rsi_1 + 0xe4) = 0
        
        sub_140627690(rsi_1 + 0xe8, r14_1 + 8)
        
        if (rsi_1 + 0xf8 != r14_1 + 0x18)
            int32_t j_3 = *(rsi_1 + 0x100)
            
            if (j_3 != 0)
                int64_t* rbx_3 = *(rsi_1 + 0xf8) + 8
                int32_t j
                
                do
                    int64_t* rcx_4 = *rbx_3
                    
                    if (rcx_4 != 0)
                        (**rcx_4)(rcx_4, 1)
                        *rbx_3 = 0
                    
                    rbx_3 -= -0x80
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = *(r14_1 + 0x20)
            void* rdi_2 = *(r14_1 + 0x18)
            int32_t r8_2 = *(rsi_1 + 0x104)
            *(rsi_1 + 0x100) = j_2
            
            if (j_2 != 0 || r8_2 != 0)
                sub_141add040(rsi_1 + 0xf8, j_2, r8_2)
                char* rbx_4 = *(rsi_1 + 0xf8)
                
                if (j_2 != 0)
                    int32_t* rdi_3 = rdi_2 + 0x10
                    int32_t j_1
                    
                    do
                        *(rbx_4 + 8) = 0
                        *rbx_4 = rdi_3[-4].b
                        void* rdx_5 = *(rdi_3 - 8)
                        
                        if (rdx_5 != 0)
                            char rax_5 = rdi_3[-4].b
                            
                            if (rax_5 == 0)
                                sub_141a864e0(rbx_4, rdx_5)
                            else if (rax_5 == 1)
                                sub_141a86430(rbx_4, rdx_5)
                        
                        *(rbx_4 + 0x10) = *rdi_3
                        rbx_4[0x14] = rdi_3[1].b
                        *(rbx_4 + 0x20) = *(rdi_3 + 0x10)
                        *(rbx_4 + 0x30) = *(rdi_3 + 0x20)
                        *(rbx_4 + 0x40) = *(rdi_3 + 0x30)
                        *(rbx_4 + 0x50) = *(rdi_3 + 0x40)
                        *(rbx_4 + 0x60) = *(rdi_3 + 0x50)
                        int128_t zmm0_2 = *(rdi_3 + 0x60)
                        rdi_3 -= -0x80
                        *(rbx_4 + 0x70) = zmm0_2
                        rbx_4 -= -0x80
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rsi_1 + 0x104) = 0
        
        r14_1 += 0x108
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
