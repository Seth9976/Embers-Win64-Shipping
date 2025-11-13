// 函数: sub_141820dc0
// 地址: 0x141820dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142fe5500
arg1[2] = 0
arg1[3] = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    int32_t rdx = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&arg1[2], rdi_1.d + 1)
        rdx = arg1[3].d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    arg1[3].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x1c))
        sub_140594770(&arg1[2])
    
    UnDecorator::getReferenceType(arg1[2], arg3, (rdi_1.d + 1) * 2)

arg1[4].d = arg4
int64_t rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = 0
else
    __builtin_memset(rax_2, 0, 0x18)

arg1[7] = rax_2
arg1[6] = rax_2
int64_t rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = 0
else
    __builtin_memset(rax_3, 0, 0x18)

arg1[9] = rax_3
arg1[8] = rax_3
int32_t rax_4 = arg1[3].d

if (rax_4 != 0 && rax_4 - 1 s> 0 && sub_140a32ae0(&arg1[2], &data_142d404c4, 1) == 0)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 2)
    int32_t rbp_1 = var_20_1 + 2
    
    if (rbp_1 s> 0)
        sub_140594770(&var_28)
    
    int64_t rdi_3 = var_28
    UnDecorator::getReferenceType(rdi_3, &data_142d404c4, 4)
    
    if (rbp_1 != 0 && rbp_1 != 1)
        if (arg1[3].d != 0)
            sub_140ab3a50(&arg1[2], rdi_3, rbp_1 - 1, 0)
        else
            sub_140a20ba0(&arg1[2], rdi_3, rbp_1 - 1)
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)

return arg1
