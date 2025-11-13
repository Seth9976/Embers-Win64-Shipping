// 函数: sub_1420b41b0
// 地址: 0x1420b41b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rbp = u"false"

if (arg4 != 0)
    rbp = u"true"

int32_t rax = 0
int64_t var_38 = 0
int64_t r14 = 0
int32_t var_30 = 0
int32_t rdi = 0
int32_t var_2c = 0

if (*rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax = var_2c
        rdi = var_30
        r14 = var_38
    
    rdi += rbx_1.d + 1
    
    if (rdi s> rax)
        sub_140594770(&var_38)
        r14 = var_38
    
    UnDecorator::getReferenceType(r14, rbp, (rbx_1.d + 1) * 2)

*arg1 = 0
int32_t r8_2 = rdi - 1
arg1[1] = 0
int32_t rax_1 = arg3[1].d
int32_t r9 = arg2[1].d
int32_t rdx_3 = rax_1 - 1

if (rax_1 == 0)
    rdx_3 = 0

if (rdi == 0)
    r8_2 = 0

int32_t rax_2 = arg5[1].d
int32_t rcx_4 = rax_2 - 1 + r8_2

if (rax_2 == 0)
    rcx_4 = r8_2

int32_t rax_3 = rcx_4 + rdx_3
int32_t rdx_5 = r9 - 1 + rax_3

if (r9 == 0)
    rdx_5 = rax_3

if (rdx_5 != 0xffffffff)
    sub_1405947f0(arg1, rdx_5 + 1)

int32_t rax_4 = arg2[1].d
int32_t r8_3 = rax_4 - 1

if (rax_4 == 0)
    r8_3 = 0

sub_140a20ba0(arg1, *arg2, r8_3)
int32_t rax_5 = arg3[1].d
int32_t r8_4 = rax_5 - 1

if (rax_5 == 0)
    r8_4 = 0

sub_140a20ba0(arg1, *arg3, r8_4)
int32_t r8_5 = rdi - 1

if (rdi == 0)
    r8_5 = 0

sub_140a20ba0(arg1, r14, r8_5)
int32_t rax_6 = arg5[1].d
int32_t r8_6 = rax_6 - 1

if (rax_6 == 0)
    r8_6 = 0

sub_140a20ba0(arg1, *arg5, r8_6)

if (r14 != 0)
    sub_140a74f90(r14)

return arg1
