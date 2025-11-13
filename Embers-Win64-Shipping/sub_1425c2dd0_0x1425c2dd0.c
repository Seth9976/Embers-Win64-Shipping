// 函数: sub_1425c2dd0
// 地址: 0x1425c2dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t* rax = sub_1425bf990(arg1, &var_38, arg2)
int16_t* const r15 = &data_142d40450
int16_t* rbp

if (rax[1].d == 0)
    rbp = &data_142d40450
else
    rbp = *rax

int16_t* rsi = nullptr
int16_t* var_48 = nullptr
int32_t rax_1 = 0
int32_t var_3c = 0
int32_t r14 = 0
int32_t var_40 = 0

if (rbp != 0 && *rbp != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rbp[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        rax_1 = var_3c
        r14 = var_40
        rsi = var_48
    
    r14 += rdi_1.d + 1
    
    if (r14 s> rax_1)
        sub_140594770(&var_48)
        rsi = var_48
    
    UnDecorator::getReferenceType(rsi, rbp, (rdi_1.d + 1) * 2)

int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = *(arg1 + 8)
int16_t* rdx_4 = &data_142d40450

if (r14 != 0)
    rdx_4 = rsi

char result
int64_t* rcx_6

if ((*(*rcx_4 + 0x70))(rcx_4, rdx_4) == 0)
    result = sub_1425c26f0(arg1, arg2, 0)
    
    if (result != 0)
        rcx_6 = *(arg1 + 8)
        result = (*(*rcx_6 + 0xa8))(rcx_6, arg2, arg3)
else
    if (r14 != 0)
        r15 = rsi
    
    rcx_6 = *(arg1 + 8)
    result = (*(*rcx_6 + 0xa8))(rcx_6, r15, arg3)

if (rsi == 0)
    return result

return sub_140a74f90(rsi) __tailcall
