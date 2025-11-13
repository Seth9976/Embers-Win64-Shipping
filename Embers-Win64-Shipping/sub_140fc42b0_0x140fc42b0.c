// 函数: sub_140fc42b0
// 地址: 0x140fc42b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = 0
*arg1 = &data_142ef1f70
int32_t r12 = 0
int16_t* r14 = *arg4
int32_t rax = 0
int64_t var_78 = 0
int64_t var_70 = 0
int64_t rdi = -1

if (r14 != 0 && *r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx_1.d + 1)
        rax = var_70:4.d
        r12 = var_70.d
        r13 = var_78
    
    r12 += rbx_1.d + 1
    var_70.d = r12
    
    if (r12 s> rax)
        sub_140594770(&var_78)
        r12 = var_70.d
        r13 = var_78
    
    UnDecorator::getReferenceType(r13, r14, (rbx_1.d + 1) * 2)

int16_t* r14_1 = *arg3
int32_t rbx_3 = 0
int64_t r15_1 = 0
int64_t var_70_1 = 0
int32_t rax_1 = 0
var_78 = 0

if (r14_1 != 0 && *r14_1 != 0)
    do
        rdi += 1
    while (r14_1[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_78, rdi.d + 1)
        rax_1 = var_70_1:4.d
        rbx_3 = var_70_1.d
        r15_1 = var_78
    
    rbx_3 += rdi.d + 1
    var_70_1.d = rbx_3
    
    if (rbx_3 s> rax_1)
        sub_140594770(&var_78)
        rbx_3 = var_70_1.d
        r15_1 = var_78
    
    UnDecorator::getReferenceType(r15_1, r14_1, (rdi.d + 1) * 2)

void* rdx_6 = nullptr
void* var_58 = nullptr
int64_t rax_2 = *arg8

if (rax_2 != 0)
    void* rax_3 = arg8[2]
    void* rcx_7 = &arg8[4]
    
    if (rax_3 != 0)
        rcx_7 = rax_3
    
    (**rcx_7)(rcx_7, &var_58)
    rdx_6 = var_58

int32_t r14_2 = *arg7
arg8.w = *arg5
arg1[2] = *arg2
arg1[3] = 0
arg1[4].d = rbx_3

if (rbx_3 != 0)
    sub_1405a4c70(&arg1[3], rbx_3, 0)
    memcpy(arg1[3], r15_1, rbx_3 * 2)
    rdx_6 = var_58
else
    *(arg1 + 0x24) = rbx_3

arg1[5] = 0
arg1[6].d = r12

if (r12 != 0)
    sub_1405a4c70(&arg1[5], r12, 0)
    memcpy(arg1[5], r13, r12 * 2)
    rdx_6 = var_58
else
    *(arg1 + 0x34) = r12

arg1[7].w = arg8.w
*(arg1 + 0x3c) = *arg6
*(arg1 + 0x44) = r14_2
arg1[0xa] = rax_2
arg1[0xc] = 0
void var_48

if (rax_2 != 0)
    void* rcx_13 = &var_48
    
    if (rdx_6 != 0)
        rcx_13 = rdx_6
    
    (**rcx_13)(rcx_13, &arg1[0xc])
    rdx_6 = var_58

if (rax_2 != 0)
    void* rcx_14 = &var_48
    
    if (rdx_6 != 0)
        rcx_14 = rdx_6
    
    (*(*rcx_14 + 0x10))(rcx_14, rdx_6)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

if (r13 != 0)
    sub_140a74f90(r13)

return arg1
