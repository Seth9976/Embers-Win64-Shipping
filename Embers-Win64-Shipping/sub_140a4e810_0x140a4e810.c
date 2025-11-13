// 函数: sub_140a4e810
// 地址: 0x140a4e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
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
        rdx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_10.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_18)
    
    memcpy(var_18, arg3, (rbx_1.d + 1) * 2)

int64_t result = (**arg1)(arg1, arg2, &var_18, arg4, arg5)
int64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

sub_140a74f90(rcx_4)
return result
