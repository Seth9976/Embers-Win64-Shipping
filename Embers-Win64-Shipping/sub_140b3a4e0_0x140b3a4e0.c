// 函数: sub_140b3a4e0
// 地址: 0x140b3a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t rdx = 0
int32_t var_20 = 0
int32_t var_1c = 0
int64_t rsi = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r8 = var_1c
        rdx = var_20
        rsi = var_28
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_28)
        rsi = var_28
    
    UnDecorator::getReferenceType(rsi, arg2, (rbx_1.d + 1) * 2)

int32_t arg_8
sub_140b3a5e0(arg1, &arg_8, &var_28)
int64_t rax_2 = sx.q(arg_8)
int64_t rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = 0
else
    rax_4 = rax_2 * 0x848 + *arg1

int64_t result = rax_4 + 0x10

if (rax_4 == 0)
    result = 0

if (rsi != 0)
    sub_140a74f90(rsi)

return result
