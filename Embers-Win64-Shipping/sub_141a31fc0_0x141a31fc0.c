// 函数: sub_141a31fc0
// 地址: 0x141a31fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x80
    int32_t i
    
    do
        char rax = rbx_1[8].b
        
        if ((rax & 1) != 0)
            int64_t* rcx_1 = rbx_1
            
            if ((rax & 2) == 0)
                rcx_1 = *rbx_1
            
            rbx_1[8].b = rax & 0xfe
            (**rcx_1)(rcx_1, 0)
            
            if ((rbx_1[8].b & 2) == 0)
                sub_140a74f90(*rbx_1)
        
        int64_t rcx_3 = rbx_1[-4]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[0x19]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
