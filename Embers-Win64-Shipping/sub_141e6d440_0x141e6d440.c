// 函数: sub_141e6d440
// 地址: 0x141e6d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
*arg2 = **arg1
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0
*(arg2 + 8) = *rbx
int32_t rax_2 = rbx[1].d
*rbx = 0
arg2[4] = rax_2
rbx[1].d = 0

if (&arg2[6] != &rbx[2])
    int64_t rcx_1 = *(arg2 + 0x18)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg2 + 0x18) = rbx[2]
    rbx[2] = 0
    arg2[8] = rbx[3].d
    arg2[9] = *(rbx + 0x1c)
    rbx[3] = 0

arg2[0xa].b = rbx[4].b
rbx[4].b = 0
*(arg2 + 0x29) = *(rbx + 0x21)
int64_t rax_8 = rbx[5]
*(rbx + 0x21) = 0
*(arg2 + 0x30) = rax_8
rbx[5] = 0
return arg2
