// 函数: sub_140af5d90
// 地址: 0x140af5d90
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
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> r10)
        sub_140594770(&var_38)
        rsi = var_38
    
    UnDecorator::getReferenceType(rsi, arg2, (rbx_1.d + 1) * 2)

int32_t arg_8
sub_140a452d0(arg1, &arg_8, &var_38)
int64_t rax_2 = sx.q(arg_8)
int64_t* result

if (rax_2.d == 0xffffffff)
    result = nullptr
else
    result = rax_2 * 0xb8 + *arg1

int64_t* rbx_3 = &result[2]

if (result == 0)
    rbx_3 = nullptr

if (rsi != 0)
    sub_140a74f90(rsi)

void* r8_4

if (rbx_3 != 0)
    void arg_10
    sub_14093f560(rbx_3, &arg_8, *sub_140b58260(&arg_10, arg3, 1))
    int64_t rax_5 = sx.q(arg_8)
    
    if (rax_5.d == 0xffffffff)
        result = nullptr
    else
        result = rax_5 * 0x30 + *rbx_3
    
    r8_4 = &result[1]
    
    if (result == 0)
        r8_4 = nullptr

if (rbx_3 == 0 || r8_4 == 0)
    result.b = 0
else
    int32_t rax_8 = *(r8_4 + 0x18)
    void* rdx_6 = r8_4 + 0x10
    int32_t rcx_7 = rax_8 - 1
    
    if (rax_8 == 0)
        rcx_7 = 0
    
    if (rcx_7 s<= 0)
        rdx_6 = r8_4
    
    sub_140597df0(arg4, rdx_6)
    result.b = 1

return result
