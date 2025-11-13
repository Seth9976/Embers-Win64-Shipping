// 函数: sub_1425c29e0
// 地址: 0x1425c29e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_1425bf990(arg1, &var_28, arg2)
int16_t* const r15 = &data_142d40450
int16_t* rsi

if (rax[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax

int16_t* rdi = nullptr
int16_t* var_38 = nullptr
int32_t rax_1 = 0
int32_t var_2c = 0
int32_t rbp = 0
int32_t var_30 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax_1 = var_2c
        rbp = var_30
        rdi = var_38
    
    rbp += rbx_1.d + 1
    
    if (rbp s> rax_1)
        sub_140594770(&var_38)
        rdi = var_38
    
    UnDecorator::getReferenceType(rdi, rsi, (rbx_1.d + 1) * 2)

int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

char rax_2 = sub_1425c26f0(arg1, arg2, 0)
char rax_4

if (rax_2 != 0)
    int64_t* rcx_5 = *(arg1 + 8)
    int16_t* rdx_5 = &data_142d40450
    
    if (rbp != 0)
        rdx_5 = rdi
    
    rax_4 = (*(*rcx_5 + 0x70))(rcx_5, rdx_5)

int16_t* const rdx_6

if (rax_2 == 0 || rax_4 != 0)
    if (rbp != 0)
        r15 = rdi
    
    rdx_6 = r15
else
    rdx_6 = arg2

int64_t* rcx_6 = *(arg1 + 8)
int64_t result = (*(*rcx_6 + 0x128))(rcx_6, rdx_6)

if (rdi != 0)
    sub_140a74f90(rdi)

return result
