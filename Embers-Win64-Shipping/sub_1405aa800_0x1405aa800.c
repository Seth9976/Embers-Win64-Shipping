// 函数: sub_1405aa800
// 地址: 0x1405aa800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
*arg1 = &data_142d491c8
sub_140d1a380(arg2)
int32_t rcx_1 = 0
int64_t var_18 = 0
int32_t rdx = 0
int64_t var_10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rdx = var_10:4.d
        rcx_1 = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rcx_1
    var_10.d = rax_1
    
    if (rax_1 s> rdx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

rdx.b = 1
sub_140d304e0(&var_18, rdx.b)
void* rax_2 = sub_1405a90a0(&var_18, arg3)
arg1[2] = rax_2

if (rax_2 == 0)
    sub_140d1fc00()

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
