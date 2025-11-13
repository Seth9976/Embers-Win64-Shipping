// 函数: sub_140afed60
// 地址: 0x140afed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t var_18 = 0
int32_t rdx = 0
int32_t rcx = 0
int32_t var_10 = 0
int32_t var_c = 0
uint64_t rbx = -1

if (arg1 != 0 && *arg1 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg1[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rdi_1.d + 1)
        rcx = var_c
        rdx = var_10
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_10_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg1, (rdi_1.d + 1) * 2)

char result = sub_140b16090(&var_18)
int64_t rcx_5 = var_18
char result_1 = result

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

if (result_1 == 0)
    return result

var_18 = 0
int32_t rcx_6 = 0
int32_t var_c_1 = 0
int32_t var_10_2 = 0

if (arg2 != 0 && *arg2 != 0)
    do
        rbx += 1
    while (arg2[rbx] != 0)
    
    rbx = zx.q(rbx.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_18, rbx.d)
        rcx_6 = var_c_1
        rbp = var_10_2
    
    int32_t rax_2 = rbx.d + rbp
    int32_t var_10_3 = rax_2
    
    if (rax_2 s> rcx_6)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, rbx.d * 2)

char rax_3 = sub_140b16090(&var_18)
int64_t rcx_11 = var_18
rbx.b = rax_3 == 0

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (rbx.b == 0)
    return sub_140aeb920(arg2, arg1, arg2)

sub_140a464c0()
int64_t r9_1
r9_1.b = 1
return (*(data_14399ea08 + 0x40))(&data_14399ea08, arg2, arg1, r9_1, 0, 0, 0)
