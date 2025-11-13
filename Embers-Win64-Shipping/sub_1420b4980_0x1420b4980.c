// 函数: sub_1420b4980
// 地址: 0x1420b4980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_48
int64_t var_38
int64_t* rax_1
int32_t rbx

if (arg4 == 0)
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 5)
    int32_t rax_2 = var_40_1 + 5
    var_40_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"None", 0xa)
    rax_1 = &var_48
    rbx = 2
else
    arg_8.q = *(arg4 + 0x18)
    sub_140b63b70(&arg_8, &var_38)
    rax_1 = &var_38
    rbx = 1

int64_t rsi = *rax_1
*rax_1 = 0
int32_t rbp = rax_1[1].d
rax_1[1] = 0

if ((rbx.b & 2) != 0)
    int64_t rcx_4 = var_48
    rbx &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rbx.b & 1) != 0)
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int32_t rdx_2 = rbp - 1
*arg1 = 0
arg1[1] = 0
int32_t r8 = arg3[1].d

if (rbp == 0)
    rdx_2 = 0

int32_t rax_3 = arg5[1].d
int32_t r9 = arg2[1].d
int32_t rcx_7 = rax_3 - 1 + rdx_2
int32_t rax_4 = r8 - 1

if (rax_3 == 0)
    rcx_7 = rdx_2

if (r8 == 0)
    rax_4 = 0

int32_t rcx_8 = rcx_7 + rax_4
int32_t rdx_4 = r9 - 1 + rcx_8

if (r9 == 0)
    rdx_4 = rcx_8

if (rdx_4 != 0xffffffff)
    sub_1405947f0(arg1, rdx_4 + 1)

int32_t rax_5 = arg2[1].d
int32_t r8_1 = rax_5 - 1

if (rax_5 == 0)
    r8_1 = 0

sub_140a20ba0(arg1, *arg2, r8_1)
int32_t rax_6 = arg3[1].d
int32_t r8_2 = rax_6 - 1

if (rax_6 == 0)
    r8_2 = 0

sub_140a20ba0(arg1, *arg3, r8_2)
int32_t r8_3 = rbp - 1

if (rbp == 0)
    r8_3 = 0

sub_140a20ba0(arg1, rsi, r8_3)
int32_t rax_7 = arg5[1].d
int32_t r8_4 = rax_7 - 1

if (rax_7 == 0)
    r8_4 = 0

sub_140a20ba0(arg1, *arg5, r8_4)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
