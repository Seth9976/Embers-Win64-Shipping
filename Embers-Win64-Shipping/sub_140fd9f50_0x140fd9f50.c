// 函数: sub_140fd9f50
// 地址: 0x140fd9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
__builtin_memset(&arg1[2], 0, 0x34)
*arg1 = &data_142ef57c0
arg1[9] = 0
arg1[0xa] = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    int32_t rdx = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&arg1[9], rdi_1.d + 1)
        rdx = arg1[0xa].d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    arg1[0xa].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x54))
        sub_140594770(&arg1[9])
    
    UnDecorator::getReferenceType(arg1[9], arg2, (rdi_1.d + 1) * 2)

arg1[0xb] = arg3
arg1[0xc] = 0
arg1[0xd] = 0
return arg1
