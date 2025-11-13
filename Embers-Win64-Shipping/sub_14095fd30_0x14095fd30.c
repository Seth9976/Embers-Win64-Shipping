// 函数: sub_14095fd30
// 地址: 0x14095fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* rax = sub_140d3c6e0(&arg_18)

if (rax == 0 || *(rax + 0x134) u<= 1 || *(rax + 0x58) == 0)
    return (*(*arg1 + 0x640))(arg1)

char rcx_1 = *arg2

if (rcx_1 == 1)
    return sub_142141fa0(rax, &arg2[0x28])

int16_t* rax_2 = sub_140968270(rcx_1)
int64_t rsi = 0
int64_t var_18 = 0
int32_t rdx_1 = 0
int32_t var_10 = 0
int32_t rcx_3 = 0
int32_t var_c = 0

if (rax_2 != 0 && *rax_2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax_2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rcx_3 = var_c
        rdx_1 = var_10
        rsi = var_18
    
    int32_t rax_3 = rdx_1 + rbx_1.d + 1
    int32_t var_10_1 = rax_3
    
    if (rax_3 s> rcx_3)
        sub_140594770(&var_18)
        rsi = var_18
    
    UnDecorator::getReferenceType(rsi, rax_2, (rbx_1.d + 1) * 2)

int64_t result = (*(*arg1 + 0x640))(arg1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
