// 函数: sub_14197a1b0
// 地址: 0x14197a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_13 = *arg1
int16_t rdx = *rax_13

if (rdx == 0x3d && rax_13[1] == rdx)
    *arg1 = &rax_13[2]
    return 1

if (rdx == 0x21 && rax_13[1] == 0x3d)
    *arg1 = &rax_13[2]
    return 2

if (rdx == 0x3e)
    *arg1 = &rax_13[1]
    
    if (rax_13[1] != 0x3d)
        return 3
    
    *arg1 = &rax_13[2]
    return 4

if (rdx != 0x3c)
    return 0

*arg1 = &rax_13[1]

if (rax_13[1] != 0x3d)
    return 5

*arg1 = &rax_13[2]
return 6
