// 函数: sub_140aeb920
// 地址: 0x140aeb920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_188
sub_140ae6a10(&var_188)
int64_t var_1a8 = 0
int32_t rdx = 0
int32_t var_1a0 = 0
int32_t rcx_1 = 0
int32_t var_19c = 0
int64_t rbx = -1

if (arg1 != 0 && *arg1 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg1[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_1a8, rdi_1.d + 1)
        rcx_1 = var_19c
        rdx = var_1a0
    
    int32_t rax_2 = rdi_1.d + 1 + rdx
    int32_t var_1a0_1 = rax_2
    
    if (rax_2 s> rcx_1)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, arg1, (rdi_1.d + 1) * 2)

sub_140afcd00(&var_188, &var_1a8)
int64_t rcx_6 = var_1a8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

var_1a8 = 0
int32_t rdx_4 = 0
int32_t var_1a0_2 = 0
int32_t rcx_7 = 0
int32_t var_19c_1 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_3 = -1
    
    do
        rdi_3 += 1
    while (arg2[rdi_3] != 0)
    
    if (rdi_3.d + 1 s> 0)
        sub_1405947f0(&var_1a8, rdi_3.d + 1)
        rcx_7 = var_19c_1
        rdx_4 = var_1a0_2
    
    int32_t rax_3 = rdi_3.d + 1 + rdx_4
    int32_t var_1a0_3 = rax_3
    
    if (rax_3 s> rcx_7)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, arg2, (rdi_3.d + 1) * 2)

sub_140aeb680(&var_188, &var_1a8)
int64_t rcx_12 = var_1a8

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

var_1a8 = 0
int32_t rdx_8 = 0
int32_t var_1a0_4 = 0
int32_t rcx_13 = 0
int32_t var_19c_2 = 0

if (arg3 != 0 && *arg3 != 0)
    do
        rbx += 1
    while (arg3[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_1a8, rbx.d + 1)
        rcx_13 = var_19c_2
        rdx_8 = var_1a0_4
    
    int32_t rax_4 = rbx.d + 1 + rdx_8
    int32_t var_1a0_5 = rax_4
    
    if (rax_4 s> rcx_13)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, arg3, (rbx.d + 1) * 2)

int64_t var_198 = 0
int64_t var_190 = 0
sub_140b030b0(&var_188, &var_1a8, 0, &var_198)
int64_t rcx_18 = var_198

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = var_1a8

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t result = sub_140ae7280(&var_188)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
