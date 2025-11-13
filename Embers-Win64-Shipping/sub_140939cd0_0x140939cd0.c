// 函数: sub_140939cd0
// 地址: 0x140939cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int16_t* var_28 = nullptr
int32_t rax = 0
int32_t var_1c = 0
int32_t var_20 = 0
int16_t* rsi = nullptr
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
        rsi = var_28
    
    rdi += rbx_1.d + 1
    
    if (rdi s> rax)
        sub_140594770(&var_28)
        rsi = var_28
    
    UnDecorator::getReferenceType(rsi, arg2, (rbx_1.d + 1) * 2)

void* rbx_3 = *(arg1 + 8)
int32_t rcx_3 = *(rbx_3 + 0x20)

if (((rcx_3 - 2) & 0xfffffff5) != 0 || rcx_3 == 0xa)
    int64_t* rcx_4 = *(rbx_3 + 8)
    int16_t arg_8 = 0x2c
    (*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)

int64_t* rcx_5 = *(rbx_3 + 8)
int16_t* const rdx_4

if (rdi == 0)
    rdx_4 = &data_142d40450
else
    r14 = rdi - 1
    rdx_4 = rsi

int64_t result = (*(*rcx_5 + 0x150))(rcx_5, rdx_4, sx.q(r14) * 2)
*(rbx_3 + 0x20) = 7

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
