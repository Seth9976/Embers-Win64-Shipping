// 函数: sub_1410b3e70
// 地址: 0x1410b3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rdx = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t r8 = 0
int32_t var_3c = 0
int64_t rbx = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        r8 = var_3c
        rdx = var_40
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, arg3, (rdi_1.d + 1) * 2)

int32_t rcx_4 = 0
int32_t var_4c = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (arg2 != 0 && *arg2 != 0)
    do
        rbx += 1
    while (arg2[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx.d + 1)
        rcx_4 = var_4c
        rsi = var_50
    
    int32_t rax_2 = rsi + rbx.d + 1
    int32_t var_50_1 = rax_2
    
    if (rax_2 s> rcx_4)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg2, (rbx.d + 1) * 2)

int64_t* var_38 = &var_58
int64_t* var_30 = &var_48
void arg_8
int32_t* result = sub_140caa010(arg1 + 0x2a8, &arg_8, &var_38, nullptr)
int64_t rcx_8 = var_58

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_48

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
