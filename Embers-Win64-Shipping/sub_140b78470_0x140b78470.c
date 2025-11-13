// 函数: sub_140b78470
// 地址: 0x140b78470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = rcx + 0x88
    int32_t i
    
    do
        int32_t j_5 = *(rdi_1 + 0x10)
        int64_t* rbx_1 = *(rdi_1 + 8)
        
        if (j_5 != 0)
            int32_t j
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[2]
                j = j_5
                j_5 -= 1
            while (j != 1)
            rbx_1 = *(rdi_1 + 8)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int32_t j_6 = *rdi_1
        int64_t* rbx_2 = *(rdi_1 - 8)
        
        if (j_6 != 0)
            int32_t j_1
            
            do
                int64_t rcx_3 = *rbx_2
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                rbx_2 = &rbx_2[2]
                j_1 = j_6
                j_6 -= 1
            while (j_1 != 1)
            rbx_2 = *(rdi_1 - 8)
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
        
        int32_t j_7 = *(rdi_1 - 0x10)
        int64_t* rbx_3 = *(rdi_1 - 0x18)
        
        if (j_7 != 0)
            int32_t j_2
            
            do
                int64_t rcx_5 = *rbx_3
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                rbx_3 = &rbx_3[2]
                j_2 = j_7
                j_7 -= 1
            while (j_2 != 1)
            rbx_3 = *(rdi_1 - 0x18)
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        int64_t rcx_7 = *(rdi_1 - 0x28)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rdi_1 - 0x38)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rdi_1 - 0x48)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = *(rdi_1 - 0x58)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int32_t j_8 = *(rdi_1 - 0x60)
        int64_t* rbx_4 = *(rdi_1 - 0x68)
        
        if (j_8 != 0)
            int32_t j_3
            
            do
                int64_t rcx_11 = *rbx_4
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                rbx_4 = &rbx_4[2]
                j_3 = j_8
                j_8 -= 1
            while (j_3 != 1)
            rbx_4 = *(rdi_1 - 0x68)
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        int32_t j_9 = *(rdi_1 - 0x70)
        int64_t* rbx_5 = *(rdi_1 - 0x78)
        
        if (j_9 != 0)
            int32_t j_4
            
            do
                int64_t rcx_13 = *rbx_5
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                rbx_5 = &rbx_5[2]
                j_4 = j_9
                j_9 -= 1
            while (j_4 != 1)
            rbx_5 = *(rdi_1 - 0x78)
        
        if (rbx_5 != 0)
            sub_140a74f90(rbx_5)
        
        rdi_1 += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
