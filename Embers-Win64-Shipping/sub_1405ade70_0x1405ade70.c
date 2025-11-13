// 函数: sub_1405ade70
// 地址: 0x1405ade70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        char rax = rbx[0x10].b
        
        if ((rax & 1) != 0)
            int64_t* rcx = rbx
            
            if ((rax & 2) == 0)
                rcx = *rbx
            
            rbx[0x10].b = rax & 0xfe
            (**rcx)(rcx, 0)
            
            if ((rbx[0x10].b & 2) == 0)
                sub_140a74f90(*rbx)
        
        rbx = &rbx[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx != 0)
    sub_140a74f90(rbx)
