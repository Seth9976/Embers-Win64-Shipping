// 函数: sub_141ed40e0
// 地址: 0x141ed40e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            char rax_1 = rcx[0x11].b
            
            if ((rax_1 & 2) == 0 && (rax_1 & 1) != 0)
                (*(*rcx + 0x2d0))(rcx, 0)
                sub_141efe1c0(*rbx, rbx[1])
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

void var_58
sub_141efdf70(sub_14077e140(&var_58, &arg1[2]))
arg1[0xb].d = 0
int64_t rcx_5 = arg1[0xa]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5410(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
sub_14059a8e0(&arg1[4], 0)
int64_t rcx_8 = arg1[6]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[2]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return sub_141ed3f70(arg1) __tailcall
