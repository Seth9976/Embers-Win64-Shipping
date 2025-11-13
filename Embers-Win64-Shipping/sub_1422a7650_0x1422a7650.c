// 函数: sub_1422a7650
// 地址: 0x1422a7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
int16_t* var_38
sub_140a2e390(&var_38, u"%u", r8)
int16_t* const rdi = &data_142d40450
int32_t rdx = 0
int64_t var_48 = 0
int32_t var_30

if (var_30 != 0)
    rdi = var_38

int32_t rcx_1 = 0
int32_t var_40 = 0
int32_t var_3c = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rcx_1 = var_3c
        rdx = var_40
    
    int32_t rax_4 = rbx_1.d + 1 + rdx
    int32_t var_40_1 = rax_4
    
    if (rax_4 s> rcx_1)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, rdi, (rbx_1.d + 1) * 2)

int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0x14)
int32_t rax_5 = var_50 + 0x14
var_50 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"HAS_SKY_BENT_NORMAL", 0x28)
int64_t* var_28 = &var_58
int64_t* var_20 = &var_48
void arg_8
int32_t* result = sub_140caa010(arg2 + 0x2a8, &arg_8, &var_28, nullptr)
int64_t rcx_9 = var_58

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int16_t* rcx_11 = var_38

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
