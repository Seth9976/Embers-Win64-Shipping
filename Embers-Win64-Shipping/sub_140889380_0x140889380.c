// 函数: sub_140889380
// 地址: 0x140889380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int16_t* var_38
sub_140a2e390(&var_38, u"%d", arg3)
int16_t* const rdi = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rdi = var_38

int32_t r14 = 0
int64_t var_48 = 0
int32_t rax = 0
int32_t var_3c = 0
int64_t r13 = 0
int32_t var_40 = 0
int32_t r12 = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rax = var_3c
        r12 = var_40
        r13 = var_48
    
    r12 += rbx_1.d + 1
    
    if (r12 s> rax)
        sub_140594770(&var_48)
        r13 = var_48
    
    UnDecorator::getReferenceType(r13, rdi, (rbx_1.d + 1) * 2)

int16_t* var_58 = nullptr
int16_t* rsi = nullptr
int64_t* var_50 = nullptr
int32_t rdi_1 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (arg2[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_3.d + 1)
        r14 = var_50:4.d
        rdi_1 = var_50.d
        rsi = var_58
    
    rdi_1 += rbx_3.d + 1
    var_50.d = rdi_1
    
    if (rdi_1 s> r14)
        sub_140594770(&var_58)
        r14 = var_50:4.d
        rdi_1 = var_50.d
        rsi = var_58
    
    UnDecorator::getReferenceType(rsi, arg2, (rbx_3.d + 1) * 2)

int64_t* r15_1 = arg_8
sub_1405d1820(r15_1, &var_58)
int16_t* const rdx_7 = rsi
*var_50 = rsi
var_50[1].d = rdi_1
*(var_50 + 0xc) = r14
var_50[2] = r13
var_50[3].d = r12
*(var_50 + 0x1c) = var_3c
var_50[4].d = 0xffffffff
int32_t rax_2 = var_50[1].d

if (rax_2 == 0)
    rdx_7 = &data_142d40450

int32_t rcx_8 = rax_2 - 1

if (rax_2 == 0)
    rcx_8 = 0

int32_t* result =
    sub_1405d2a60(r15_1, &arg_8, sub_1405969c0(rcx_8, rdx_7), var_50, var_58.d, nullptr)
int16_t* rcx_11 = var_38

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
