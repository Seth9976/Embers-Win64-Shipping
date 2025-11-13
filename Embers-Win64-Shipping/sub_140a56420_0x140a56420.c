// 函数: sub_140a56420
// 地址: 0x140a56420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e60498
arg1[1] = arg2
int32_t rcx = 0
arg1[2] = 0
arg1[3] = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&arg1[2], rbx_1.d + 1)
        rcx = arg1[3].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    arg1[3].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x1c))
        sub_140594770(&arg1[2])
    
    UnDecorator::getReferenceType(arg1[2], arg3, (rbx_1.d + 1) * 2)

return arg1
