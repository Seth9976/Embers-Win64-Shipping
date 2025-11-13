// 函数: sub_1421026d0
// 地址: 0x1421026d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_48
sub_140a2e390(&var_48, u"%u", zx.q(arg3))
int16_t* const r15 = &data_142d40450
int32_t var_40

if (var_40 != 0)
    r15 = var_48

int32_t rsi = 0
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int32_t rcx_1 = 0
int32_t var_4c = 0
int64_t rbx = -1

if (r15 != 0 && *r15 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r15[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi_1.d + 1)
        rcx_1 = var_4c
        rdx = var_50
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    int32_t var_50_1 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, r15, (rdi_1.d + 1) * 2)

int32_t rcx_6 = 0
int32_t var_5c = 0
int64_t var_68 = 0
int32_t var_60 = 0

if (arg2 != 0 && *arg2 != 0)
    do
        rbx += 1
    while (arg2[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx.d + 1)
        rcx_6 = var_5c
        rsi = var_60
    
    int32_t rax_2 = rbx.d + 1 + rsi
    int32_t var_60_1 = rax_2
    
    if (rax_2 s> rcx_6)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, arg2, (rbx.d + 1) * 2)

int64_t* var_38 = &var_68
int64_t* var_30 = &var_58
void arg_18
int32_t* result = sub_140caa010(arg1 + 0x2a8, &arg_18, &var_38, nullptr)
int64_t rcx_10 = var_68

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_58

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int16_t* rcx_12 = var_48

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
