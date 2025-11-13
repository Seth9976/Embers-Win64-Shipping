// 函数: sub_141b3cf60
// 地址: 0x141b3cf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_2 = arg1[1].d
    
    if (i_2 != 0)
        void* rsi_1 = *arg1 + 0x3c8
        int32_t i
        
        do
            int64_t j = 3
            void*** rbx_1 = rsi_1 + 0x1e0
            
            do
                rbx_1 = &rbx_1[-0x14]
                j -= 1
                sub_1405ae180(&rbx_1[9])
                int32_t k_3 = rbx_1[8].d
                void* rax_2 = rbx_1[7]
                
                if (k_3 != 0)
                    char* rax_3 = rax_2 + 4
                    int32_t k
                    
                    do
                        if (*rax_3 != 0)
                            *rax_3 = 0
                        
                        rax_3 = &rax_3[8]
                        k = k_3
                        k_3 -= 1
                    while (k != 1)
                    rax_2 = rbx_1[7]
                
                if (rax_2 != 0)
                    sub_140a74f90(rax_2)
                
                int64_t rcx_2 = rbx_1[4]
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                int64_t rcx_3 = rbx_1[2]
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                *rbx_1 = &data_142d4bb80
            while (j != 0)
            
            int64_t j_1 = 3
            void* rbx_2 = rsi_1
            
            do
                rbx_2 -= 0xa0
                j_1 -= 1
                sub_1405ae180(rbx_2 + 0x48)
                int32_t k_4 = *(rbx_2 + 0x40)
                void* rax_4 = *(rbx_2 + 0x38)
                
                if (k_4 != 0)
                    char* rax_5 = rax_4 + 4
                    int32_t k_1
                    
                    do
                        if (*rax_5 != 0)
                            *rax_5 = 0
                        
                        rax_5 = &rax_5[8]
                        k_1 = k_4
                        k_4 -= 1
                    while (k_1 != 1)
                    rax_4 = *(rbx_2 + 0x38)
                
                if (rax_4 != 0)
                    sub_140a74f90(rax_4)
                
                int64_t rcx_6 = *(rbx_2 + 0x20)
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                int64_t rcx_7 = *(rbx_2 + 0x10)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                *rbx_2 = &data_142d4bb80
            while (j_1 != 0)
            
            int64_t j_2 = 3
            void* rbx_3 = rsi_1 - 0x1e0
            
            do
                rbx_3 -= 0xa0
                j_2 -= 1
                sub_1405ae180(rbx_3 + 0x48)
                int32_t k_5 = *(rbx_3 + 0x40)
                void* rax_6 = *(rbx_3 + 0x38)
                
                if (k_5 != 0)
                    char* rax_7 = rax_6 + 4
                    int32_t k_2
                    
                    do
                        if (*rax_7 != 0)
                            *rax_7 = 0
                        
                        rax_7 = &rax_7[8]
                        k_2 = k_5
                        k_5 -= 1
                    while (k_2 != 1)
                    rax_6 = *(rbx_3 + 0x38)
                
                if (rax_6 != 0)
                    sub_140a74f90(rax_6)
                
                int64_t rcx_10 = *(rbx_3 + 0x20)
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int64_t rcx_11 = *(rbx_3 + 0x10)
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                *rbx_3 = &data_142d4bb80
            while (j_2 != 0)
            
            rsi_1 += 0x5a8
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    int64_t* rbx_4 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_141b302f0(arg1, i_3, r8_1)
        int64_t* rdi_1 = *arg1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                sub_141af84e0(rdi_1, rbx_4)
                rdi_1 = &rdi_1[0xb5]
                rbx_4 = &rbx_4[0xb5]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_3

return arg1
