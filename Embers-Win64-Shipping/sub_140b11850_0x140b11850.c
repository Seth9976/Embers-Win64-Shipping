// 函数: sub_140b11850
// 地址: 0x140b11850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38
int64_t* rax = sub_140b26eb0(&var_38)
int64_t rbx = -1
int64_t rdi = -1

do
    rdi += 1
while (arg3[rdi] != 0)

int32_t rcx_1

if (rax[1].d == 0)
    rcx_1 = 2

if (rax[1].d != 0 || (rdi + 1).d == 0)
    rcx_1 = 1

int16_t* rsi = nullptr
int16_t* var_28 = *rax
*rax = 0
int32_t rax_3 = rax[1].d
int32_t rax_4 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_2 = rax_3 + rcx_1 + rdi.d

if (rdx_2 s> rax_4)
    sub_1405947f0(&var_28, rdx_2)

sub_140a2cf70(&var_28, arg3, rdi.d)
int16_t* rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140a306e0(&var_28, &(*U"{}[\nt")[3], &data_142d5a024, 0)
int16_t* rax_5 = sub_140a4fcd0()
var_38 = nullptr
int32_t var_30 = 0
int32_t rax_6 = 0
int32_t var_2c = 0
int32_t r14_1 = 0

if (rax_5 != 0 && *rax_5 != 0)
    do
        rbx += 1
    while (rax_5[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx.d + 1)
        rax_6 = var_2c
        r14_1 = var_30
        rsi = var_38
    
    r14_1 += rbx.d + 1
    
    if (r14_1 s> rax_6)
        sub_140594770(&var_38)
        rsi = var_38
    
    UnDecorator::getReferenceType(rsi, rax_5, (rbx.d + 1) * 2)

sub_140596d10(arg1, arg2)
int16_t* const rdx_8 = &data_142d40450
int16_t* const r8_4 = &data_142d40450

if (r14_1 != 0)
    r8_4 = rsi

if (rax_3 != 0)
    rdx_8 = var_28

sub_140a306e0(arg1, rdx_8, r8_4, 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int16_t* rcx_12 = var_28

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return arg1
