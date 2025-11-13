// 函数: sub_14093c610
// 地址: 0x14093c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0
int64_t rdi = 0
int32_t rbp = 0
int32_t r15 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r15 = var_20:4.d
        rbp = var_20.d
        rdi = var_28
    
    rbp += rbx_1.d + 1
    var_20.d = rbp
    
    if (rbp s> r15)
        sub_140594770(&var_28)
        r15 = var_20:4.d
        rbp = var_20.d
        rdi = var_28
    
    UnDecorator::getReferenceType(rdi, arg2, (rbx_1.d + 1) * 2)

*arg1 = 0
__builtin_memset(&arg1[8], 0, 0x20)
sub_140a96170(&arg1[0x28])
arg1[0x40] = 0x11

if (&arg1[0x18] != &var_28)
    int64_t rcx_4 = *(arg1 + 0x18)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(arg1 + 0x18) = rdi
    rdi = 0
    *(arg1 + 0x20) = rbp
    *(arg1 + 0x24) = r15

sub_140597df0(&arg1[8], &arg1[0x18])
arg1[0x40] = 0x11

if (rdi != 0)
    sub_140a74f90(rdi)

return arg1
