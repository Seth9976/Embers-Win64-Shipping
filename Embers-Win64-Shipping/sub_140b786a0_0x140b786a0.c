// 函数: sub_140b786a0
// 地址: 0x140b786a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = r14 + 0x50
    int32_t i
    
    do
        int32_t j_3 = *(rdi_1 + 0x50)
        int64_t* rbx_1 = *(rdi_1 + 0x48)
        
        if (j_3 != 0)
            int32_t j
            
            do
                int64_t rcx = *rbx_1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                rbx_1 = &rbx_1[2]
                j = j_3
                j_3 -= 1
            while (j != 1)
            rbx_1 = *(rdi_1 + 0x48)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int64_t rcx_2 = *(rdi_1 + 0x38)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rdi_1 + 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rdi_1 + 0x18)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rdi_1 + 8)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int32_t j_4 = *rdi_1
        int64_t* rbx_2 = *(rdi_1 - 8)
        
        if (j_4 != 0)
            int32_t j_1
            
            do
                int64_t rcx_6 = *rbx_2
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_2 = &rbx_2[2]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            rbx_2 = *(rdi_1 - 8)
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
        
        int32_t j_5 = *(rdi_1 - 0x10)
        int64_t* rbx_3 = *(rdi_1 - 0x18)
        
        if (j_5 != 0)
            int32_t j_2
            
            do
                int64_t rcx_8 = *rbx_3
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                rbx_3 = &rbx_3[2]
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
            rbx_3 = *(rdi_1 - 0x18)
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        int64_t rcx_10 = *(rdi_1 - 0x28)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *(rdi_1 - 0x38)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *r14
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        r14 += 0xa8
        rdi_1 += 0xa8
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14 = *arg1

if (r14 == 0)
    return 

return sub_140a74f90(r14) __tailcall
