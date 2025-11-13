// 函数: sub_140ad9570
// 地址: 0x140ad9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = arg3
int32_t rdx = 0
int64_t var_18 = 0
int32_t r8 = 0
int64_t var_10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        r8 = var_10:4.d
        rdx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_10.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

sub_140acb490(arg1 + 8, &var_18, &result_1)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rdi_1 = sx.q(*(arg1 + 0x60))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x60) = rax_2

if (rax_2 s> *(arg1 + 0x64))
    sub_1405a4d70(arg1 + 0x58)

int64_t result = result_1
*(*(arg1 + 0x58) + (rdi_1 << 3)) = result
*arg4 += 1
return result
