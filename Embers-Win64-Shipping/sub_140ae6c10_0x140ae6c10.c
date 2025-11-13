// 函数: sub_140ae6c10
// 地址: 0x140ae6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    int32_t rdx = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(arg1, rdi_1.d + 1)
        rdx = arg1[1].d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, arg2, (rdi_1.d + 1) * 2)

arg1[2] = 0
arg1[3] = 0
sub_140aef990(arg1)
return arg1
