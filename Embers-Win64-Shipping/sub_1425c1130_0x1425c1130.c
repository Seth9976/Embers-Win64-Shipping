// 函数: sub_1425c1130
// 地址: 0x1425c1130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int16_t* r13 = arg3
arg2[1] = 0
int64_t var_38
int64_t* rax = sub_1425bf990(arg1, &var_38, arg3)
int16_t* const r12 = &data_142d40450
int16_t* rsi

if (rax[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax

int16_t* var_48 = nullptr
int32_t rax_1 = 0
int32_t var_3c = 0
int16_t* rbp = nullptr
int32_t var_40 = 0
int32_t r14 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rsi[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        rax_1 = var_3c
        r14 = var_40
        rbp = var_48
    
    r14 += rdi_1.d + 1
    
    if (r14 s> rax_1)
        sub_140594770(&var_48)
        rbp = var_48
    
    UnDecorator::getReferenceType(rbp, rsi, (rdi_1.d + 1) * 2)

int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = *(arg1 + 8)
int16_t* rdx_4 = &data_142d40450

if (r14 != 0)
    rdx_4 = rbp

int16_t* const r8_2

if ((*(*rcx_4 + 0x70))(rcx_4, rdx_4) != 0)
    if (r14 != 0)
        r12 = rbp
    
    r8_2 = r12
    goto label_1425c1248

if (sub_1425c26f0(arg1, r13, 0) != 0)
    r8_2 = r13
label_1425c1248:
    int64_t* rcx_6 = *(arg1 + 8)
    int64_t* rax_6 = (*(*rcx_6 + 0xb8))(rcx_6, &var_38, r8_2)
    
    if (arg2 != rax_6)
        int64_t rcx_7 = *arg2
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        *arg2 = *rax_6
        *rax_6 = 0
        arg2[1].d = rax_6[1].d
        *(arg2 + 0xc) = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    int64_t rcx_9 = var_38
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (rbp != 0)
    sub_140a74f90(rbp)

return arg2
