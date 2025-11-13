// 函数: sub_140b3ddc0
// 地址: 0x140b3ddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t r8 = 0
int32_t rdx = 0
int64_t var_40 = 0
int64_t rdi = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        r8 = var_40:4.d
        rdx = var_40.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_40.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, arg3, (rbx_1.d + 1) * 2)

int64_t var_38
int64_t* rax_2 = sub_140a35790(&var_48, &var_38)
int16_t* const r15 = &data_142d40450
int16_t* rbx_3

if (rax_2[1].d == 0)
    rbx_3 = &data_142d40450
else
    rbx_3 = *rax_2

int64_t r14_1 = 0
int32_t rdx_4 = 0
int32_t rcx_4 = 0
int64_t var_58 = 0
int64_t var_50 = 0

if (rbx_3 != 0 && *rbx_3 != 0)
    do
        rdi += 1
    while (rbx_3[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi.d + 1)
        rcx_4 = var_50:4.d
        rdx_4 = var_50.d
        r14_1 = var_58
    
    int32_t rax_3 = rdi.d + 1 + rdx_4
    var_50.d = rax_3
    
    if (rax_3 s> rcx_4)
        sub_140594770(&var_58)
        r14_1 = var_58
    
    UnDecorator::getReferenceType(r14_1, rbx_3, (rdi.d + 1) * 2)

int32_t arg_8
sub_14062d6e0(arg1 + 0x20, &arg_8, &var_58)
int64_t rax_4 = sx.q(arg_8)
void* const rcx_9

if (rax_4.d == 0xffffffff)
    rcx_9 = nullptr
else
    rcx_9 = *(arg1 + 0x20) + rax_4 * 0x28

int64_t* rbx_4 = rcx_9 + 0x10

if (rcx_9 == 0)
    rbx_4 = nullptr

if (r14_1 != 0)
    sub_140a74f90(r14_1)

int64_t rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (rbx_4 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int32_t rdi_2 = rbx_4[1].d
    int64_t rbx_5 = *rbx_4
    var_58 = 0
    var_50.d = rdi_2
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_58, rdi_2, 0)
        memcpy(var_58, rbx_5, rdi_2 * 2)
    else
        var_50:4.d = 0
    
    if (arg4[1].d != 0)
        r15 = *arg4
    
    sub_140b20770(&var_58, r15)
    *arg2 = var_58
    arg2[1].d = var_50.d
    *(arg2 + 0xc) = var_50:4.d

return arg2
