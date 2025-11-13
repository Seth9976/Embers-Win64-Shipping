// 函数: sub_140931190
// 地址: 0x140931190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_18 = 0
int32_t r9 = 0
int64_t var_10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        r9 = var_10:4.d
        rdx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_10.d = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

int64_t result = sub_140668ff0(*(arg1 + 8), &var_18, *arg3)
int64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
