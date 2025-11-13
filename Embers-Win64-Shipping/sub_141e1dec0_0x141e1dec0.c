// 函数: sub_141e1dec0
// 地址: 0x141e1dec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x70)

if (rax == 0)
    void* rdi_1 = *(arg1 + 0x40)
    
    if (rdi_1 != 0 && sub_140d3e110(rdi_1 + 0x30) != 0 && *(rdi_1 + 0x48) != 0 && *(rdi_1 + 8) s> 0
            && *(arg1 + 0x58) != 0 && *(arg1 + 0x50) == zx.d(*(arg1 + 0x60)))
        sub_141e10360(arg2 + 8, arg1 + 0x30)
        return sub_141a87b00(arg2 + 0x20, arg1 + 0x48)
    
    if (*(arg2 + 0x40) == 0)
        return sub_141e0ba30(arg2 + 8)
    
    return sub_141e47c50(arg2 + 8, arg3)

*(arg2 + 0x18) = rax + 0x4a0
int32_t rsi_1 = 0
int32_t rdx = 0
int32_t r15_1 = *(rax + 0x4a8)
*(arg2 + 0x10) = 0

if (r15_1 s> *(arg2 + 0x14))
    sub_141acba60(arg2 + 8, r15_1)
    rdx = *(arg2 + 0x10)

int32_t rax_2 = rdx + r15_1
*(arg2 + 0x10) = rax_2

if (rax_2 s> *(arg2 + 0x14))
    sub_141acb8e0(arg2 + 8, rdx)

void* rcx_2 = *(arg1 + 0x70)
int32_t rdx_2 = 0
char rax_3 = *(arg2 + 0x40)
void* var_68 = rcx_2
int64_t var_60 = 0
int32_t var_54_1 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x1b)
int32_t r15_2 = *(rcx_2 + 0x4a8)

if (r15_2 s> 0)
    int32_t var_58_1 = 0
    sub_141acba60(&var_60, r15_2)
    rdx_2 = var_58_1
    rsi_1 = var_54_1

int32_t rax_4 = r15_2 + rdx_2

if (rax_4 s> rsi_1)
    sub_141acb8e0(&var_60, rdx_2)

int256_t zmm1 = sub_141abd4c0(&var_48, rcx_2 + 0x4a0)
int64_t* rcx_6 = *(arg1 + 0x28)

if (rcx_6 == 0)
    int64_t* rcx_7 = &var_60
    
    if (rax_3 == 0)
        sub_141e0ba30(rcx_7)
    else
        sub_141e47c50(rcx_7, zmm1)
else
    (*(*rcx_6 + 0x18))(rcx_6, &var_68)

if (arg2 + 8 != &var_60)
    *(arg2 + 8) = var_60
    *(arg2 + 0x10) = rax_4
    *(arg2 + 0x14) = var_54_1
    *(arg2 + 0x18) = rcx_2 + 0x4a0

int64_t var_38
*(arg2 + 0x30) = var_38
int16_t var_30
*(arg2 + 0x38) = var_30
int32_t result = &var_48

if (arg2 + 0x20 != &var_48)
    *(arg2 + 0x20) = var_48
    int64_t var_40
    *(arg2 + 0x28) = var_40.d
    result = var_40:4.d
    *(arg2 + 0x2c) = result

*(arg2 + 0x3a) = 1
return result
