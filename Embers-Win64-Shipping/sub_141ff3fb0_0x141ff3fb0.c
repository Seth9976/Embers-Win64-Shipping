// 函数: sub_141ff3fb0
// 地址: 0x141ff3fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
int64_t var_18 = 0
int64_t var_10 = 0
int32_t r8 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        r8 = var_10:4.d
        rcx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rcx
    var_10.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg3, (rbx_1.d + 1) * 2)

sub_140aae2f0(arg1, &var_18)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[3].b = arg2
*(arg1 + 0x19) &= 0xfe
return arg1
