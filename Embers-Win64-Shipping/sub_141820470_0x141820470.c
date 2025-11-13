// 函数: sub_141820470
// 地址: 0x141820470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[2].d = 0xa
*(arg1 + 0x14) = 0x28
arg1[3].d = 0x40a00000
*(arg1 + 0x1c) = 1
int32_t i_1 = arg2[1].d
int64_t* rbx = *arg2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg2

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
