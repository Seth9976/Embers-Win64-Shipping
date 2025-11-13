// 函数: sub_142021140
// 地址: 0x142021140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int16_t* const rbp = &data_142d40450
int16_t* rsi

if (rax == 0)
    rsi = &data_142d40450
else
    rsi = *arg3

int32_t r15 = 0
int32_t rdi = rax - 1
int16_t* var_68 = nullptr
int32_t rbx = 0

if (rax == 0)
    rdi = 0

int32_t var_60 = 0
int16_t* r12 = nullptr

if (rdi s> 0x3e8)
    rdi = 0x3e8

int32_t rax_1 = 0
int32_t var_5c = 0

if (rsi != 0 && *rsi != 0 && rdi s> 0)
    if (rdi + 1 s> 0)
        sub_1405947f0(&var_68, rdi + 1)
        rax_1 = var_5c
        rbx = var_60
        r12 = var_68
    
    rbx += rdi + 1
    
    if (rbx s> rax_1)
        sub_140594770(&var_68)
        r12 = var_68
    
    UnDecorator::getReferenceType(r12, rsi, rdi * 2)
    r12[sx.q(rbx) - 1] = 0

int64_t rdi_1 = arg1[7]
int64_t var_38 = arg1[8]
int16_t* const rsi_1 = &data_142d40450
int64_t rax_4 = *arg1

if (rbx != 0)
    rsi_1 = r12

void** const var_58 = &data_14328a9d8
int16_t* var_48 = nullptr
int32_t var_40 = 0
int16_t var_50 = 0
(*(rdi_1 + 8))(&arg1[7], (*(rax_4 + 0x150))(arg1), rsi_1, &var_58)
int16_t* rcx_5 = var_48

if (var_40 != 0)
    rbp = rcx_5

*arg2 = 0
arg2[1] = 0

if (rbp != 0 && *rbp != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rbp[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_2.d + 1)
        r15 = arg2[1].d
    
    int32_t rax_6 = rbx_2.d + 1 + r15
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rbp, (rbx_2.d + 1) * 2)
    rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (r12 != 0)
    sub_140a74f90(r12)

return arg2
