// 函数: sub_1425c0ba0
// 地址: 0x1425c0ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int32_t rdx = 0
int64_t var_78 = 0
int32_t var_70 = 0
int32_t r8 = 0
int32_t var_6c = 0
int64_t rbx = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rdi_1.d + 1)
        r8 = var_6c
        rdx = var_70
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    int32_t var_70_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, arg3, (rdi_1.d + 1) * 2)

int64_t var_68
int64_t* rax_2 = sub_140b187e0(&var_68, &var_78)
int64_t var_50 = arg2
void** const var_58 = &data_143443618
int64_t var_48
sub_140596d10(&var_48, rax_2)
int64_t rcx_5 = var_68
char r9
char var_38 = r9
char var_37 = arg4

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_78

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

var_78 = 0
int32_t rcx_7 = 0
int32_t var_6c_1 = 0
int32_t var_70_2 = 0

if (arg3 != 0 && *arg3 != 0)
    do
        rbx += 1
    while (arg3[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx.d + 1)
        rcx_7 = var_6c_1
        r14 = var_70_2
    
    int32_t rax_4 = r14 + rbx.d + 1
    int32_t var_70_3 = rax_4
    
    if (rax_4 s> rcx_7)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, arg3, (rbx.d + 1) * 2)

int64_t* rax_5 = sub_140b1a660(&var_68, &var_78)
int16_t* const rdx_9

if (rax_5[1].d == 0)
    rdx_9 = &data_142d40450
else
    rdx_9 = *rax_5

int64_t* rcx_12 = *(arg1 + 8)
int64_t result = (*(*rcx_12 + 0x100))(rcx_12, rdx_9, &var_58)
int64_t rcx_13 = var_68

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_78

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_48

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
