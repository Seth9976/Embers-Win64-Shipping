// 函数: sub_142412000
// 地址: 0x142412000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1[3]
int16_t* var_58
sub_140b63b70(&arg_8, &var_58)
int16_t* const r15 = &data_142d40450
int16_t* const r14 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    r14 = var_58

int64_t rdi = 0
int64_t var_88 = 0
int32_t rdx_1 = 0
int32_t var_80 = 0
int32_t rcx_1 = 0
int32_t var_7c = 0

if (r14 != 0 && *r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_88, rbx_1.d + 1)
        rcx_1 = var_7c
        rdx_1 = var_80
    
    int32_t rax_1 = rbx_1.d + 1 + rdx_1
    int32_t var_80_1 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, r14, (rbx_1.d + 1) * 2)

int16_t* var_78
sub_140d21e10(sub_140d21d80(arg1), &var_78, 0)
sub_140be0c40()

if (sub_140a32a50(&var_78, &data_143e1ad70, 0) != 0)
    sub_140be0c40()
    sub_140a2fba0(&var_78, &data_143e1ad70, 0)

int64_t var_48
sub_140baa460(&var_48, &var_78)
int32_t r14_1 = 1
sub_140a2f8e0(&var_78, &var_48, 1)
int32_t var_70
int32_t rcx_12

if (var_70 == 0)
    rcx_12 = 0
else
    r15 = var_78
    rcx_12 = var_70 - 1

int64_t var_98
sub_140a2e390(&var_98, u"%u", zx.q(sub_1405969c0(rcx_12, r15)))
int64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int16_t* rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

void* var_38
void** rax_7 = sub_140d32080(&var_38, &var_88, 0, (*(*arg1 + 0x2c0))(arg1))
int32_t rax_8 = rax_7[1].d
int32_t rax_11
int32_t var_90

if (rax_8 s> 1)
    int32_t rbx_4
    
    if (var_90 == 0)
        rbx_4 = 0
    else
        rbx_4 = var_90 - 1
    
    if (rax_8 != 0 || rbx_4 == 0)
        r14_1 = 0
    
    void* rax_12 = *rax_7
    *rax_7 = nullptr
    int32_t rcx_18 = *(rax_7 + 0xc)
    void* var_68 = rax_12
    int32_t rax_13 = rax_7[1].d
    rax_7[1] = 0
    int32_t rdx_11 = rax_13 + r14_1 + rbx_4
    
    if (rdx_11 s> rcx_18)
        sub_1405947f0(&var_68, rdx_11)
    
    sub_140a20ba0(&var_68, var_98, rbx_4)
    rdi = var_98
    *arg2 = var_68
    arg2[1].d = rax_13
    rax_11 = rcx_18
else
    *arg2 = var_98
    arg2[1].d = var_90
    int32_t var_8c
    rax_11 = var_8c
    var_90.q = 0
    var_98 = 0
void* rcx_21 = var_38
*(arg2 + 0xc) = rax_11

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)
    rdi = var_98

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rcx_23 = var_88

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int16_t* rcx_24 = var_58

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

return arg2
