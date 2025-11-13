// 函数: sub_1408891d0
// 地址: 0x1408891d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t r12 = 0
int64_t var_38 = 0
int32_t rax = 0
int32_t var_2c = 0
int32_t var_30 = 0
int64_t r13 = 0
int32_t rsi = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax = var_2c
        rsi = var_30
        r13 = var_38
    
    rsi += rbx_1.d + 1
    
    if (rsi s> rax)
        sub_140594770(&var_38)
        r13 = var_38
    
    UnDecorator::getReferenceType(r13, arg3, (rbx_1.d + 1) * 2)

int16_t* var_48 = nullptr
int16_t* r15 = nullptr
int64_t* var_40 = nullptr
int32_t rdi_1 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (arg2[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_3.d + 1)
        r12 = var_40:4.d
        rdi_1 = var_40.d
        r15 = var_48
    
    rdi_1 += rbx_3.d + 1
    var_40.d = rdi_1
    
    if (rdi_1 s> r12)
        sub_140594770(&var_48)
        r12 = var_40:4.d
        rdi_1 = var_40.d
        r15 = var_48
    
    UnDecorator::getReferenceType(r15, arg2, (rbx_3.d + 1) * 2)

int64_t* r14_1 = arg_8
sub_1405d1820(r14_1, &var_48)
int16_t* const rdx_7 = r15
*var_40 = r15
var_40[1].d = rdi_1
*(var_40 + 0xc) = r12
var_40[2] = r13
var_40[3].d = rsi
*(var_40 + 0x1c) = var_2c
var_40[4].d = 0xffffffff
int32_t rax_2 = var_40[1].d

if (rax_2 == 0)
    rdx_7 = &data_142d40450

int32_t rcx_7 = rax_2 - 1

if (rax_2 == 0)
    rcx_7 = 0

return sub_1405d2a60(r14_1, &arg_8, sub_1405969c0(rcx_7, rdx_7), var_40, var_48.d, nullptr)
