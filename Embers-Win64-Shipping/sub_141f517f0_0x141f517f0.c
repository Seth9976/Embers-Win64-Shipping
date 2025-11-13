// 函数: sub_141f517f0
// 地址: 0x141f517f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
            *(rbx + 0x10) = 0
        
        void*** rdi_1 = *(rbx + 0x18)
        
        if (rdi_1 != 0)
            sub_1422b5540(rdi_1)
            j_sub_140a74f90(rdi_1)
            *(rbx + 0x18) = 0
        
        if (*(rbx + 0x20) != 0)
            *(rbx + 0x20) = 0
        
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
