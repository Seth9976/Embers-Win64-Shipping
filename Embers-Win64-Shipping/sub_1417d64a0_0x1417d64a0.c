// 函数: sub_1417d64a0
// 地址: 0x1417d64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return 0

result[1].d = 1
int32_t rdx = 0
*(result + 0xc) = 1
*result = &data_142fd1370
int32_t rcx = 0
int64_t var_18 = 0
int32_t var_10 = 0
int32_t var_c = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rcx = var_c
        rdx = var_10
    
    int32_t rax = rbx_1.d + 1 + rdx
    int32_t var_10_1 = rax
    
    if (rax s> rcx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg1, (rbx_1.d + 1) * 2)

result[2] = &data_142fcd2e8
__builtin_memset(&result[3], 0, 0x28)
result[2] = &data_142fcd300
sub_140597df0(&result[4], &var_18)
*(result + 0x1c)
*(result + 0x1c) = 1
result[3].d = 1
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
