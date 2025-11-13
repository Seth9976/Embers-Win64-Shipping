// 函数: sub_141afc660
// 地址: 0x141afc660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        char rax = rbx[8].b
        
        if ((rax & 1) != 0)
            rax &= 0xfe
            rbx[8].b = rax
            
            if ((rax & 2) == 0)
                sub_140a74f90(*rbx)
        
        rbx = &rbx[9]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx != 0)
    sub_140a74f90(rbx)
