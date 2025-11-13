// 函数: sub_141afc370
// 地址: 0x141afc370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rsi_1 = rcx + 0x3c8
    int32_t i
    
    do
        int64_t j = 3
        void*** rbx_1 = rsi_1 + 0x1e0
        
        do
            rbx_1 = &rbx_1[-0x14]
            j -= 1
            sub_1405ae180(&rbx_1[9])
            int32_t k_3 = rbx_1[8].d
            void* rax_1 = rbx_1[7]
            
            if (k_3 != 0)
                char* rax_2 = rax_1 + 4
                int32_t k
                
                do
                    if (*rax_2 != 0)
                        *rax_2 = 0
                    
                    rax_2 = &rax_2[8]
                    k = k_3
                    k_3 -= 1
                while (k != 1)
                rax_1 = rbx_1[7]
            
            if (rax_1 != 0)
                sub_140a74f90(rax_1)
            
            int64_t rcx_3 = rbx_1[4]
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = rbx_1[2]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            *rbx_1 = &data_142d4bb80
        while (j != 0)
        
        int64_t j_1 = 3
        void* rbx_2 = rsi_1
        
        do
            rbx_2 -= 0xa0
            j_1 -= 1
            sub_1405ae180(rbx_2 + 0x48)
            int32_t k_4 = *(rbx_2 + 0x40)
            void* rax_3 = *(rbx_2 + 0x38)
            
            if (k_4 != 0)
                char* rax_4 = rax_3 + 4
                int32_t k_1
                
                do
                    if (*rax_4 != 0)
                        *rax_4 = 0
                    
                    rax_4 = &rax_4[8]
                    k_1 = k_4
                    k_4 -= 1
                while (k_1 != 1)
                rax_3 = *(rbx_2 + 0x38)
            
            if (rax_3 != 0)
                sub_140a74f90(rax_3)
            
            int64_t rcx_7 = *(rbx_2 + 0x20)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *(rbx_2 + 0x10)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *rbx_2 = &data_142d4bb80
        while (j_1 != 0)
        
        int64_t j_2 = 3
        void* rbx_3 = rsi_1 - 0x1e0
        
        do
            rbx_3 -= 0xa0
            j_2 -= 1
            sub_1405ae180(rbx_3 + 0x48)
            int32_t k_5 = *(rbx_3 + 0x40)
            void* rax = *(rbx_3 + 0x38)
            
            if (k_5 != 0)
                char* rax_5 = rax + 4
                int32_t k_2
                
                do
                    if (*rax_5 != 0)
                        *rax_5 = 0
                    
                    rax_5 = &rax_5[8]
                    k_2 = k_5
                    k_5 -= 1
                while (k_2 != 1)
                rax = *(rbx_3 + 0x38)
            
            if (rax != 0)
                sub_140a74f90(rax)
            
            int64_t rcx_11 = *(rbx_3 + 0x20)
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            int64_t rcx_12 = *(rbx_3 + 0x10)
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            *rbx_3 = &data_142d4bb80
        while (j_2 != 0)
        
        rsi_1 += 0x5a8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
