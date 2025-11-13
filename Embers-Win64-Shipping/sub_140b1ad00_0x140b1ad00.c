// 函数: sub_140b1ad00
// 地址: 0x140b1ad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b17d90()

if (*(rax + 0x103) != 0)
    return rax + 0xe8

int16_t* rax_1 = sub_140a4fcd0()
int16_t* r12 = nullptr
int32_t rax_2 = 0
int16_t* var_28 = nullptr
int32_t r14 = 0
int64_t var_20 = 0
int64_t rdi = -1

if (rax_1 != 0 && *rax_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax_2 = var_20:4.d
        r14 = var_20.d
        r12 = var_28
    
    r14 += rbx_1.d + 1
    var_20.d = r14
    
    if (r14 s> rax_2)
        sub_140594770(&var_28)
        r14 = var_20.d
        r12 = var_28
    
    UnDecorator::getReferenceType(r12, rax_1, (rbx_1.d + 1) * 2)

sub_140b65060()
int16_t* rbp_1 = nullptr
int32_t r15 = 0
var_28 = nullptr
int32_t rax_3 = 0
int64_t var_20_1 = 0

if (data_143e189c0 != 0)
    do
        rdi += 1
    while ((&data_143e189c0)[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi.d + 1)
        rax_3 = var_20_1:4.d
        r15 = var_20_1.d
        rbp_1 = var_28
    
    r15 += rdi.d + 1
    var_20_1.d = r15
    
    if (r15 s> rax_3)
        sub_140594770(&var_28)
        r15 = var_20_1.d
        rbp_1 = var_28
    
    UnDecorator::getReferenceType(rbp_1, &data_143e189c0, (rdi.d + 1) * 2)

if (rax + 0xe8 != &var_28)
    int32_t r8_5 = *(rax + 0xf4)
    *(rax + 0xf0) = r14
    
    if (r14 != 0 || r8_5 != 0)
        sub_1405a4c70(rax + 0xe8, r14, r8_5)
        memcpy(*(rax + 0xe8), r12, r14 * 2)
    else
        *(rax + 0xf4) = r14

int16_t* rdx_8 = &data_142d40450

if (r15 != 0)
    rdx_8 = rbp_1

sub_140b20770(rax + 0xe8, rdx_8)
int32_t rax_4 = *(rax + 0xf0)

if (
        rax_4 != 0 && rax_4 - 1 s> 0 && sub_140a237d0(rax + 0xe8, &data_142d5a024, 0) == 0
            && sub_140a237d0(rax + 0xe8, &(*{}[\nt")[3], 
        0) == 0)
    sub_140a20ba0(rax + 0xe8, &data_142d5a024, 1)

*(rax + 0x103) = 1

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

if (r12 != 0)
    sub_140a74f90(r12)

return rax + 0xe8
