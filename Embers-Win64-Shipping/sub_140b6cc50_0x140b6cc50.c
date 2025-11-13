// 函数: sub_140b6cc50
// 地址: 0x140b6cc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0x10de)
    sub_140596d10(arg2, arg1 + 0x28)
    return arg2

int32_t rax = *(arg1 + 0x30)
int32_t rcx = rax - 1

if (rax == 0)
    rcx = 0

int16_t* const r8

if (rax == 0)
    r8 = &data_142d40450
else
    r8 = *(arg1 + 0x28)

int32_t rax_1 = rcx
int64_t var_28 = 0

if (rcx s> 6)
    rax_1 = 6

int32_t rdx_1 = 0
int32_t var_20 = 0
int16_t* rdi = &r8[sx.q(rcx) - sx.q(rax_1)]
int32_t rcx_3 = 0
int32_t var_1c = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rcx_3 = var_1c
        rdx_1 = var_20
    
    int32_t rax_3 = rbx_1.d + 1 + rdx_1
    var_20 = rax_3
    
    if (rax_3 s> rcx_3)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, rdi, (rbx_1.d + 1) * 2)

int64_t var_18
int64_t* rax_4 = sub_140a300d0(&var_28, &var_18, &data_142d404c4, &data_142d40450, 1)

if (&var_28 != rax_4)
    int64_t rcx_8 = var_28
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    var_28 = *rax_4
    *rax_4 = 0
    var_20 = rax_4[1].d
    var_1c = *(rax_4 + 0xc)
    rax_4[1] = 0

int64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 2)
int32_t rdi_1 = var_10 + 2

if (rdi_1 s> 0)
    sub_140594770(&var_18)

int64_t rbx_4 = var_18
UnDecorator::getReferenceType(rbx_4, &data_142d404c4, 4)

if (rdi_1 != 0 && rdi_1 != 1)
    int64_t* rcx_14 = &var_28
    
    if (var_20 != 0)
        sub_140ab3a50(rcx_14, rbx_4, rdi_1 - 1, 3)
    else
        sub_140a20ba0(rcx_14, rbx_4, rdi_1 - 1)

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

*arg2 = var_28
arg2[1].d = var_20
*(arg2 + 0xc) = var_1c
return arg2
