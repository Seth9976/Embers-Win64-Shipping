// 函数: sub_1405ea0e0
// 地址: 0x1405ea0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t* arg_10

if (arg3 == 0 || *arg3 == 0)
    arg_10 = arg1
    *arg1 = 0
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0
    return arg1

int64_t rbx = -1

do
    rbx += 1
while (arg3[rbx] != 0)

int32_t r9_1

if (arg2[1].d == 0)
    r9_1 = 1

if (arg2[1].d != 0 || rbx.d == 0)
    r9_1 = 0

int64_t var_20
arg_10 = &var_20
var_20 = *arg2
*arg2 = 0
int32_t rax_1 = arg2[1].d
int32_t rcx = *(arg2 + 0xc)
arg2[1] = 0
int32_t rdx_1 = rax_1 + r9_1 + rbx.d

if (rdx_1 s> rcx)
    sub_1405947f0(&var_20, rdx_1)

sub_140a20ba0(&var_20, arg3, rbx.d)
arg_10 = arg1
*arg1 = var_20
arg1[1].d = rax_1
*(arg1 + 0xc) = rcx
return arg1
