// 函数: sub_141ed3f70
// 地址: 0x141ed3f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            char rax = rcx[0x11].b
            
            if ((rax & 2) == 0 && (rax & 1) != 0)
                (*(*rcx + 0x2d0))(rcx, 0)
                sub_141efe1c0(*rbx, rbx[1])
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx != 0)
    sub_140a74f90(rbx)
