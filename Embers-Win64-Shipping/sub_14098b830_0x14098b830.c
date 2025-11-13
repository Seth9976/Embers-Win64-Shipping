// 函数: sub_14098b830
// 地址: 0x14098b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return 0

int32_t rbp = 0
int64_t r12 = 0
result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e3bc28
int32_t rax = 0
int32_t var_1c = 0
int64_t var_28 = 0
int32_t var_20 = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg1[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1.d + 1)
        rax = var_1c
        rbp = var_20
        r12 = var_28
    
    rbp += rdi_1.d + 1
    
    if (rbp s> rax)
        sub_140594770(&var_28)
        r12 = var_28
    
    UnDecorator::getReferenceType(r12, arg1, (rdi_1.d + 1) * 2)

result[2] = &data_142e3b5c8
__builtin_memset(&result[3], 0, 0x28)
result[2] = &data_142e3b638

if (&result[6] != &var_28)
    int32_t r8_3 = *(result + 0x3c)
    result[7].d = rbp
    
    if (rbp != 0 || r8_3 != 0)
        sub_1405a4c70(&result[6], rbp, r8_3)
        memcpy(result[6], r12, rbp * 2)
    else
        *(result + 0x3c) = 0

*(result + 0x1c)
*(result + 0x1c) = 1
result[3].d = 1
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
