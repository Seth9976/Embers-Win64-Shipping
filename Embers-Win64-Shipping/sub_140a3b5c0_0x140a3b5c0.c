// 函数: sub_140a3b5c0
// 地址: 0x140a3b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5ee30
int32_t rcx = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&arg1[1], rbx_1.d + 1)
        rcx = arg1[2].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    arg1[2].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x14))
        sub_140594770(&arg1[1])
    
    memcpy(arg1[1], arg2, (rbx_1.d + 1) * 2)

arg1[3].d = arg3
return arg1
