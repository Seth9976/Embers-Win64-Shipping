// 函数: sub_14185ef50
// 地址: 0x14185ef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = arg2[2]
arg1[4] = 0

if (arg1[2] != 0)
    void* rax_3 = arg2[4]
    void* rcx = &arg2[6]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx)

arg1[0xa].b = arg2[0xa].b
return arg1
