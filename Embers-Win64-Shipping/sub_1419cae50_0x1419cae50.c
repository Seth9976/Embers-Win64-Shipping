// 函数: sub_1419cae50
// 地址: 0x1419cae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_10 = rbx
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
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_28, rbx.d)
        r8 = var_1c
        rdx = var_20
        rsi = var_28
    
    int32_t rax_1 = rdx + rbx.d
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_28)
        rsi = var_28
    
    UnDecorator::getReferenceType(rsi, arg2, rbx.d * 2)

int32_t arg_8
sub_1408f1b50(arg1, &arg_8, &var_28)
int64_t rax_2 = sx.q(arg_8)
int64_t rcx_6

if (rax_2.d == 0xffffffff)
    rcx_6 = 0
else
    rcx_6 = (rax_2 << 5) + *arg1

int64_t rax_3 = rcx_6 + 0x10

if (rcx_6 == 0)
    rax_3 = 0

rbx.b = rax_3 != 0

if (rsi != 0)
    sub_140a74f90(rsi)

return zx.q(rbx.b)
