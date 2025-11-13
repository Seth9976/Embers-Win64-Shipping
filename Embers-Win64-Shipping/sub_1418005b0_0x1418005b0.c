// 函数: sub_1418005b0
// 地址: 0x1418005b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*arg1 = 0
arg1[1] = 0
int32_t rcx = arg2[1].d
int32_t var_28 = 0x20003a
int16_t var_24 = 0
int32_t rax_2 = arg3[1].d
int32_t rdx = rax_2 - 1

if (rax_2 == 0)
    rdx = 0

int32_t rax_3 = rcx + 2

if (rcx == 0)
    rax_3 = 3

int32_t rdx_1 = rdx + rax_3

if (rdx_1 s> 0)
    sub_1405947f0(arg1, rdx_1)
    rcx = arg2[1].d

int32_t r8 = rcx - 1

if (rcx == 0)
    r8 = 0

sub_140a20ba0(arg1, *arg2, r8)
sub_140a20ba0(arg1, &var_28, 2)
int32_t rcx_4 = arg3[1].d
int32_t r8_1 = rcx_4 - 1

if (rcx_4 == 0)
    r8_1 = 0

sub_140a20ba0(arg1, *arg3, r8_1)
__security_check_cookie(rax_1 ^ &var_48)
return arg1
