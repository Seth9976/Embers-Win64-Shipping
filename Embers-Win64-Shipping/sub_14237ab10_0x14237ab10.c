// 函数: sub_14237ab10
// 地址: 0x14237ab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
void*** rax = sub_1405978f0(0x60, arg1)

if (rax != 0)
    *rax = &data_142e768f8
    rax[2] = *arg2
    rax[4] = arg2[2]
    arg2[2] = 0
    *(rax + 0x30) = *(arg2 + 0x20)
    *(rax + 0x40) = *(arg2 + 0x30)
    
    if (rax[2] != 0)
        *arg2 = 0
    
    rax[0xb] = sub_140a387b0()
    *rax = &data_142e76950

return arg1
