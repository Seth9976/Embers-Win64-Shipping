// 函数: sub_1425c2580
// 地址: 0x1425c2580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15
r15.b = 0
int64_t var_38
int64_t* rax = sub_1425bf990(arg1, &var_38, arg3)
int16_t* const r14 = &data_142d40450
int16_t* rsi

if (rax[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax

int16_t* rdi = nullptr
int16_t* var_48 = nullptr
int32_t rax_1 = 0
int32_t var_3c = 0
int32_t rbp = 0
int32_t var_40 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rax_1 = var_3c
        rbp = var_40
        rdi = var_48
    
    rbp += rbx_1.d + 1
    
    if (rbp s> rax_1)
        sub_140594770(&var_48)
        rdi = var_48
    
    UnDecorator::getReferenceType(rdi, rsi, (rbx_1.d + 1) * 2)

int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = *(arg1 + 8)
int16_t* const rdx_4 = &data_142d40450

if (rbp != 0)
    rdx_4 = rdi

if ((*(*rcx_4 + 0x70))(rcx_4, rdx_4) != 0)
    int16_t* const rbx_3 = &data_142d40450
    
    if (rbp != 0)
        rbx_3 = rdi
    
    int16_t** rax_4 = sub_1425bf990(arg1, &var_38, arg2)
    
    if (rax_4[1].d != 0)
        r14 = *rax_4
    
    int64_t* rcx_6 = *(arg1 + 8)
    char rax_6 = (*(*rcx_6 + 0x90))(rcx_6, r14, rbx_3)
    int64_t rcx_7 = var_38
    r15 = zx.q(rax_6)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(r15.b)
