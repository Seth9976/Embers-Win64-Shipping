// 函数: sub_140931920
// 地址: 0x140931920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int64_t var_48 = 0
int32_t rdx = 0
int32_t var_40 = 0
int32_t var_3c = 0
int64_t rbx = -1
int64_t r15 = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        r9 = var_3c
        rdx = var_40
        r15 = var_48
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_48)
        r15 = var_48
    
    UnDecorator::getReferenceType(r15, arg2, (rdi_1.d + 1) * 2)

int64_t* rdi_3 = *(arg1 + 8)
int32_t arg_8
sub_14062d6e0(rdi_3, &arg_8, &var_48)
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

if (result == 0 || rcx_5 == 0 || *(rcx_5 + 8) != 2)
    rdi_3.b = 0
else
    rdi_3.b = 1

if (r15 != 0)
    result = sub_140a74f90(r15)

if (rdi_3.b != 0)
    var_48 = 0
    int32_t rcx_7 = 0
    int32_t var_3c_1 = 0
    int32_t var_40_2 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rbx += 1
        while (arg2[rbx] != 0)
        
        if (rbx.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx.d + 1)
            rcx_7 = var_3c_1
            r14 = var_40_2
        
        int32_t rax_4 = rbx.d + 1 + r14
        int32_t var_40_3 = rax_4
        
        if (rax_4 s> rcx_7)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, arg2, (rbx.d + 1) * 2)
    
    int64_t var_38
    wchar16** rax_5 = sub_140b75430(*(arg1 + 8), &var_38, &var_48)
    wchar16* rcx_12
    
    if (rax_5[1].d == 0)
        rcx_12 = &data_142d40450
    else
        rcx_12 = *rax_5
    
    result = sub_140b247f0(rcx_12, arg3)
    int64_t rcx_13 = var_38
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = var_48
    
    if (rcx_14 != 0)
        return sub_140a74f90(rcx_14)

return result
