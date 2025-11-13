// 函数: sub_141d03150
// 地址: 0x141d03150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
void* arg_20 = nullptr

if (sub_141d02260(arg1, arg3, &arg_20, nullptr) != 0)
    *arg2 = *(arg_20 + 0x138)
    return arg2

int32_t rdx_1 = 0
int64_t var_28 = 0
int32_t rcx_1 = 0
int64_t var_20 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1.d + 1)
        rcx_1 = var_20:4.d
        rdx_1 = var_20.d
    
    int32_t rax_3 = rdi_1.d + 1 + rdx_1
    var_20.d = rax_3
    
    if (rax_3 s> rcx_1)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, arg3, (rdi_1.d + 1) * 2)

char rax_4 = sub_141d06c80(arg1, &var_28)
int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (rax_4 != 0)
    int64_t* rcx_7 = *(arg1 + 8)
    rbx = *(*(*rcx_7 + 0xb0))(rcx_7, &arg_20, arg3)

*arg2 = rbx
return arg2
