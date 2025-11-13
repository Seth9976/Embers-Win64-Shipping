// 函数: sub_1425c2c70
// 地址: 0x1425c2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
r14.b = 0
int64_t var_38
int64_t* rax = sub_1425bf990(arg1, &var_38, arg2)
int16_t* const r15 = &data_142d40450
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
int16_t* rdx_4 = &data_142d40450

if (rbp != 0)
    rdx_4 = rdi

if ((*(*rcx_4 + 0x70))(rcx_4, rdx_4) != 0)
    int64_t* rcx_5 = *(arg1 + 8)
    
    if (rbp != 0)
        r15 = rdi
    
    r14 = zx.q((*(*rcx_5 + 0x98))(rcx_5, r15, zx.q(arg3)))

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(r14.b)
