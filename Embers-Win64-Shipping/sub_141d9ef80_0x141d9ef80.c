// 函数: sub_141d9ef80
// 地址: 0x141d9ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140b1d530(arg3) == 0)
    sub_140596d10(arg2, arg3)
    return arg2

int16_t* const r14 = &data_142d40450
uint64_t r12

if (arg3[1].d == 0)
    r12 = &data_142d40450
else
    r12 = *arg3

int32_t rdi_1 = *(arg1 + 0x3b8)
int64_t r15_1 = *(arg1 + 0x3b0)
int16_t* rsi = nullptr
int16_t* var_58 = nullptr
int16_t* rax_1

if (rdi_1 != 0)
    sub_1405a4c70(&var_58, rdi_1, 0)
    rsi = var_58
    memcpy(rsi, r15_1, rdi_1 * 2)
    rax_1 = rsi
else
    rax_1 = nullptr

uint64_t var_40 = r12
uint64_t var_68 = 0

if (rdi_1 != 0)
    r14 = rax_1

int64_t var_60 = 0
int16_t* const var_48 = r14
sub_140b0f5f0(&var_68, &var_48, 2)
int64_t var_38
int64_t* rax_2 = sub_141d157d0(&var_38)
int32_t r8_2 = var_60.d

if (r8_2 s> 1)
    int32_t rax_3 = rax_2[1].d
    int32_t r14_1 = rax_3 - 1
    
    if (rax_3 == 0)
        r14_1 = 0
    
    int32_t rcx_8
    
    if (r8_2 == 0)
        rcx_8 = r8_2 + 1
    
    if (r8_2 != 0 || r14_1 == 0)
        rcx_8 = 0
    
    var_58 = var_68
    int32_t rdx_4 = rcx_8 + r14_1 + r8_2
    int32_t rax_5 = var_60:4.d
    var_68 = 0
    int64_t var_60_1 = 0
    
    if (rdx_4 s> rax_5)
        sub_1405947f0(&var_58, rdx_4)
    
    sub_140a20ba0(&var_58, *rax_2, r14_1)
    *arg2 = var_58
    arg2[1].d = r8_2
    *(arg2 + 0xc) = rax_5
else
    *arg2 = 0
    *arg2 = *rax_2
    *rax_2 = 0
    arg2[1].d = rax_2[1].d
    *(arg2 + 0xc) = *(rax_2 + 0xc)
    rax_2[1] = 0

uint64_t rcx_11 = var_68

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
