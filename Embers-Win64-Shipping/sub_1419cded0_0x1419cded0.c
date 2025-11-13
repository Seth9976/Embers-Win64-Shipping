// 函数: sub_1419cded0
// 地址: 0x1419cded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t var_2c = 0
int64_t rsi = 0
int32_t r10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r10 = var_2c
        rdx = var_30
        rsi = var_38
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> r10)
        sub_140594770(&var_38)
        rsi = var_38
    
    UnDecorator::getReferenceType(rsi, arg2, (rbx_1.d + 1) * 2)

int32_t result_1
sub_1408f1b50(arg1, &result_1, &var_38)
int64_t result = sx.q(result_1)
void* const rcx_6

if (result.d == 0xffffffff)
    rcx_6 = nullptr
else
    rcx_6 = (result << 5) + *arg1

int16_t* rbx_3 = rcx_6 + 0x10

if (rcx_6 == 0)
    rbx_3 = nullptr

if (rsi != 0)
    sub_140a74f90(rsi)

if (rbx_3 == 0)
    result.b = 0
else
    *arg3 = *rbx_3
    *arg4 = rbx_3[1]
    *arg5 = rbx_3[2]
    result.b = 1
    *(rbx_3 + 7) = 1

return result
