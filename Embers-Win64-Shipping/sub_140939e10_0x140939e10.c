// 函数: sub_140939e10
// 地址: 0x140939e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int16_t* var_28 = nullptr
int32_t rax = 0
int32_t var_1c = 0
int32_t var_20 = 0
int16_t* rbp = nullptr
int32_t rdi = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax = var_1c
        rdi = var_20
        rbp = var_28
    
    rdi += rbx_1.d + 1
    
    if (rdi s> rax)
        sub_140594770(&var_28)
        rbp = var_28
    
    UnDecorator::getReferenceType(rbp, arg2, (rbx_1.d + 1) * 2)

void* rbx_3 = *(arg1 + 8)
int32_t rax_1 = *(rbx_3 + 0x20)
int32_t rcx_3 = rax_1
int16_t arg_8

if (rax_1 != 2 && rax_1 != 4 && rax_1 != 0xc)
    int64_t* rcx_4 = *(rbx_3 + 8)
    arg_8 = 0x2c
    (*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)
    rcx_3 = *(rbx_3 + 0x20)

if (rcx_3 - 9 u<= 1 || rcx_3 == 4)
    int64_t* rcx_7 = *(rbx_3 + 8)
    arg_8 = 0x20
    (*(*rcx_7 + 0x150))(rcx_7, &arg_8, 2)
else
    sub_14067f880(*(rbx_3 + 8))
    sub_14067fc50(*(rbx_3 + 8), *(rbx_3 + 0x24))

int64_t* rcx_8 = *(rbx_3 + 8)
int16_t* const rdx_6

if (rdi == 0)
    rdx_6 = &data_142d40450
else
    r14 = rdi - 1
    rdx_6 = rbp

int64_t result = (*(*rcx_8 + 0x150))(rcx_8, rdx_6, sx.q(r14) * 2)
*(rbx_3 + 0x20) = 7

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
