// 函数: sub_1405add40
// 地址: 0x1405add40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    char* rbx_1 = rcx + 0x28
    int32_t i
    
    do
        char rax_1 = rbx_1[0x28]
        
        if ((rax_1 & 1) != 0)
            void* rcx_1 = &rbx_1[8]
            
            if ((rax_1 & 2) == 0)
                rcx_1 = *(rbx_1 + 8)
            
            rbx_1[0x28] = rax_1 & 0xfe
            (**rcx_1)(rcx_1, 0)
            
            if ((rbx_1[0x28] & 2) == 0)
                sub_140a74f90(*(rbx_1 + 8))
        
        char rax = *rbx_1
        
        if ((rax & 1) != 0)
            void* rcx_3 = &rbx_1[-0x20]
            
            if ((rax & 2) == 0)
                rcx_3 = *(rbx_1 - 0x20)
            
            *rbx_1 = rax & 0xfe
            (**rcx_3)(rcx_3, 0)
            
            if ((*rbx_1 & 2) == 0)
                sub_140a74f90(*(rbx_1 - 0x20))
        
        rbx_1 = &rbx_1[0x58]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
