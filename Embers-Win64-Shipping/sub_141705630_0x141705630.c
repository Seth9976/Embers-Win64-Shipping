// 函数: sub_141705630
// 地址: 0x141705630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        void* rcx_5 = *(rbp + 8)
        void* rdi_1 = rbp
        int32_t j_1 = *(rbp + 0x10)
        
        if (rcx_5 != 0)
            rdi_1 = rcx_5
        
        if (j_1 != 0)
            int32_t j
            
            do
                void* rbx_1 = *rdi_1
                
                if (rbx_1 != 0)
                    int64_t rcx = *(rbx_1 + 0x78)
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    int64_t rcx_1 = *(rbx_1 + 0x68)
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    int64_t rcx_2 = *(rbx_1 + 0x58)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    int64_t rcx_3 = *(rbx_1 + 0x48)
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    j_sub_140a74f90(rbx_1)
                
                rdi_1 += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_5 = *(rbp + 8)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbp += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbp = *arg1

if (rbp == 0)
    return 

return sub_140a74f90(rbp) __tailcall
