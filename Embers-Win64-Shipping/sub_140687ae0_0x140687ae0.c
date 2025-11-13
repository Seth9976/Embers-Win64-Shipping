// 函数: sub_140687ae0
// 地址: 0x140687ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg2[2]
int64_t rdx = arg2[3]

if (rcx u>= rdx)
    sub_14058b730(arg2, 1, 0, arg3)
else
    arg2[2] = rcx + 1
    int64_t* rax_2 = arg2
    
    if (rdx u>= 0x10)
        rax_2 = *arg2
    
    *(rax_2 + rcx) = arg3
    *(rax_2 + rcx + 1) = 0

arg1[1].q = 0
*(arg1 + 0x18) = 0
*arg1 = *arg2
arg1[1] = *(arg2 + 0x10)
arg2[2] = 0
*arg2 = 0
arg2[3] = 0xf
return arg1
