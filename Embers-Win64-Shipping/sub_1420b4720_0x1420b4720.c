// 函数: sub_1420b4720
// 地址: 0x1420b4720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4[1]
int32_t var_28 = arg4[2]
int64_t var_18
sub_140a2e390(&var_18, u"X=%d Y=%d Z=%d", zx.q(*arg4))
*arg1 = 0
arg1[1] = 0
int32_t rax_1 = arg3[1].d
int32_t r9_1 = arg2[1].d
int32_t r8_1 = rax_1 - 1

if (rax_1 == 0)
    r8_1 = 0

int32_t var_10
int32_t rdx_1

if (var_10 == 0)
    rdx_1 = 0
else
    rdx_1 = var_10 - 1

int32_t rax_2 = arg5[1].d
int32_t rcx_2 = rax_2 - 1 + rdx_1

if (rax_2 == 0)
    rcx_2 = rdx_1

int32_t rax_3 = rcx_2 + r8_1
int32_t rdx_3 = r9_1 - 1 + rax_3

if (r9_1 == 0)
    rdx_3 = rax_3

if (rdx_3 != 0xffffffff)
    sub_1405947f0(arg1, rdx_3 + 1)

int32_t rax_4 = arg2[1].d
int32_t r8_2 = rax_4 - 1

if (rax_4 == 0)
    r8_2 = 0

sub_140a20ba0(arg1, *arg2, r8_2)
int32_t rax_5 = arg3[1].d
int32_t r8_3 = rax_5 - 1

if (rax_5 == 0)
    r8_3 = 0

sub_140a20ba0(arg1, *arg3, r8_3)
int32_t r8_5

if (var_10 == 0)
    r8_5 = 0
else
    r8_5 = var_10 - 1

sub_140a20ba0(arg1, var_18, r8_5)
int32_t rax_6 = arg5[1].d
int32_t r8_6 = rax_6 - 1

if (rax_6 == 0)
    r8_6 = 0

sub_140a20ba0(arg1, *arg5, r8_6)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
