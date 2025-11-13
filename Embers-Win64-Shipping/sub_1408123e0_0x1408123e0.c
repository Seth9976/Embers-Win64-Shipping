// 函数: sub_1408123e0
// 地址: 0x1408123e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t rax = 0
int32_t var_1c = 0
int32_t var_20 = 0
int64_t rbp = 0
int32_t rsi = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1.d + 1)
        rax = var_1c
        rsi = var_20
        rbp = var_28
    
    rsi += rdi_1.d + 1
    
    if (rsi s> rax)
        sub_140594770(&var_28)
        rbp = var_28
    
    UnDecorator::getReferenceType(rbp, arg3, (rdi_1.d + 1) * 2)

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_142dd8c10
arg1[2].d = arg2
arg1[3] = 0
arg1[4].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[3], rsi, 0)
    memcpy(arg1[3], rbp, rsi * 2)
else
    __builtin_memset(arg1 + 0x24, 0, 0x18)

if (rbp != 0)
    sub_140a74f90(rbp)

*arg1 = &data_142dd8c90

if (sub_140a80f40() == 0)
    sub_141997e80(arg1)
else
    (*arg1)[5](arg1)

return arg1
