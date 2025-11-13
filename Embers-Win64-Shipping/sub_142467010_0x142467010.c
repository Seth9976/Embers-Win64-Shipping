// 函数: sub_142467010
// 地址: 0x142467010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
int64_t* r13 = arg2

if (arg4 != 0)
    int32_t* r14_1 = arg3 + 0x28
    int32_t i
    
    do
        int64_t* rbp_1 = r13
        r13 = &r13[9]
        *rbp_1 = *(r14_1 - 0x28)
        
        if (&rbp_1[1] != &r14_1[-8])
            int32_t j_3 = rbp_1[2].d
            
            if (j_3 != 0)
                void* rbx_2 = rbp_1[1] + 0x50
                int32_t j
                
                do
                    int64_t rcx = *(rbx_2 + 0x20)
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    int64_t rcx_2 = *(rbx_2 - 0x28)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    rbx_2 -= -0x80
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r14_1[-6]
            int64_t* rdi_1 = *(r14_1 - 0x20)
            int32_t r8 = *(rbp_1 + 0x14)
            rbp_1[2].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_141add040(&rbp_1[1], j_2, r8)
                int64_t* rbx_3 = rbp_1[1]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        sub_142464920(rbx_3, rdi_1)
                        rbx_3 -= -0x80
                        rdi_1 -= -0x80
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rbp_1 + 0x14) = j_2
            
            i_1 = i_2
        
        rbp_1[3] = *(r14_1 - 0x10)
        sub_140d12020()
        void* rax_4
        bool rcx_5
        
        if (*(r14_1 - 8) == 0)
            rcx_5 = true
            rax_4 = nullptr
        else
            bool cond:1_1 = sub_140d3e110(r14_1) == 0
            rax_4 = *(r14_1 - 8)
            rcx_5 = cond:1_1
        
        if (rcx_5 != 0 && r14_1[4] != 0)
            rax_4 = sub_140cd0630(&r14_1[-2], nullptr, 0)
            
            if (rax_4 == 0 || (data_143e1c4a8 & *(*(rax_4 + 8) + 0x10)) == 0)
                rax_4 = *(r14_1 - 8)
                
                if (rax_4 != 0)
                    *r14_1 = 0xffffffff
                    rax_4 = nullptr
                    r14_1[1] = 0
                    *(r14_1 - 8) = 0
            else
                *(r14_1 - 8) = rax_4
        
        rbp_1[4] = rax_4
        rbp_1[5] = *r14_1
        sub_140780c40(&rbp_1[6], &r14_1[2])
        char rax_6 = r14_1[6].b
        r14_1 = &r14_1[0x12]
        i = i_1
        i_1 -= 1
        rbp_1[8].b = rax_6
        i_2 = i_1
    while (i != 1)

return 1
