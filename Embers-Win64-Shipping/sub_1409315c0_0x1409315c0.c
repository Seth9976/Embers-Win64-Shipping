// 函数: sub_1409315c0
// 地址: 0x1409315c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t var_2c = 0
int64_t rbx = -1
int64_t r15 = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rdi_1.d + 1)
        r9 = var_2c
        rdx = var_30
        r15 = var_38
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_38)
        r15 = var_38
    
    UnDecorator::getReferenceType(r15, arg2, (rdi_1.d + 1) * 2)

int64_t* rdi_3 = *(arg1 + 8)
int32_t arg_8
sub_14062d6e0(rdi_3, &arg_8, &var_38)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *rdi_3 + rax_2 * 0x28

int64_t* result = rcx_4 + 0x10

if (rcx_4 == 0)
    result = nullptr

void* rcx_5

if (result != 0)
    rcx_5 = *result

if (result == 0 || rcx_5 == 0 || *(rcx_5 + 8) != 3)
    rdi_3.b = 0
else
    rdi_3.b = 1

if (r15 != 0)
    result = sub_140a74f90(r15)

if (rdi_3.b != 0)
    var_38 = 0
    int32_t rcx_7 = 0
    int32_t var_2c_1 = 0
    int32_t var_30_2 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rbx += 1
        while (arg2[rbx] != 0)
        
        if (rbx.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx.d + 1)
            rcx_7 = var_2c_1
            r14 = var_30_2
        
        int32_t rax_4 = rbx.d + 1 + r14
        int32_t var_30_3 = rax_4
        
        if (rax_4 s> rcx_7)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, arg2, (rbx.d + 1) * 2)
    
    double zmm0_1
    result, zmm0_1 = sub_140b75280(*(arg1 + 8), &var_38)
    int64_t rcx_12 = var_38
    *arg3 = fconvert.s(zmm0_1)
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)

return result
