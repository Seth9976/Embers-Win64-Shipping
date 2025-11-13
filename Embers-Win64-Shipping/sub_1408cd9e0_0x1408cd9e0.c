// 函数: sub_1408cd9e0
// 地址: 0x1408cd9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d == 0)
    return 

char rax_1 = sub_140a35630(*arg2)

if (rax_1 == 0 && data_143983bb0 != 0 && arg3 != 0)
    int32_t arg_10
    sub_140865c40(&data_143983bc0, &arg_10, arg3)
    int64_t rcx_1 = sx.q(arg_10)
    
    if (rcx_1.d != 0xffffffff)
        void* rbx_1 = data_143983bc0 + rcx_1 * 0x18
        
        if (rbx_1 != 0)
            void* rbx_2 = *(rbx_1 + 8)
            
            if (rbx_2 != 0)
                sub_1408d37b0(rbx_2)
                int64_t* i = *(rbx_2 + 0x38)
                
                for (void* r15_1 = &i[sx.q(*(rbx_2 + 0x40))]; i != r15_1; i = &i[1])
                    void* rbp_1 = *i
                    int32_t j_2 = *(rbp_1 + 0xc0)
                    
                    if (j_2 != 0)
                        int64_t* rbx_4 = *(rbp_1 + 0xb8) + 0x20
                        int32_t j
                        
                        do
                            int64_t rcx_4 = *rbx_4
                            
                            if (rcx_4 != 0)
                                sub_140a74f90(rcx_4)
                            
                            rbx_4 = &rbx_4[7]
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    
                    *(rbp_1 + 0xc0) = 0
                    
                    if (*(rbp_1 + 0xc4) != 0)
                        sub_1408cf3a0(rbp_1 + 0xb8, 0)
                    
                    int32_t j_3 = *(rbp_1 + 0xd0)
                    
                    if (j_3 != 0)
                        int64_t* rbx_6 = *(rbp_1 + 0xc8) + 0x20
                        int32_t j_1
                        
                        do
                            int64_t rcx_6 = *rbx_6
                            
                            if (rcx_6 != 0)
                                sub_140a74f90(rcx_6)
                            
                            rbx_6 = &rbx_6[6]
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                    
                    *(rbp_1 + 0xd0) = 0
                    
                    if (*(rbp_1 + 0xd4) != 0)
                        sub_1405a5220(rbp_1 + 0xc8, 0)

data_143983bb0 = zx.d(rax_1)
