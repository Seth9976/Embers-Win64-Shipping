// 函数: sub_1420b4c90
// 地址: 0x1420b4c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

_mm_cvtps_pd(arg4:4.d)
int64_t var_28
sub_140a2e390(&var_28, u"X=%3.3f Y=%3.3f", _mm_cvtps_pd(arg4.d))
*arg1 = 0
arg1[1] = 0
int32_t rax = arg3[1].d
int32_t r9_1 = arg2[1].d
int32_t r8_1 = rax - 1

if (rax == 0)
    r8_1 = 0

int32_t var_20
int32_t rdx_1

if (var_20 == 0)
    rdx_1 = 0
else
    rdx_1 = var_20 - 1

int32_t rax_1 = arg5[1].d
int32_t rcx_2 = rax_1 - 1 + rdx_1

if (rax_1 == 0)
    rcx_2 = rdx_1

int32_t rax_2 = rcx_2 + r8_1
int32_t rdx_3 = r9_1 - 1 + rax_2

if (r9_1 == 0)
    rdx_3 = rax_2

if (rdx_3 != 0xffffffff)
    sub_1405947f0(arg1, rdx_3 + 1)

int32_t rax_3 = arg2[1].d
int32_t r8_2 = rax_3 - 1

if (rax_3 == 0)
    r8_2 = 0

sub_140a20ba0(arg1, *arg2, r8_2)
int32_t rax_4 = arg3[1].d
int32_t r8_3 = rax_4 - 1

if (rax_4 == 0)
    r8_3 = 0

sub_140a20ba0(arg1, *arg3, r8_3)
int32_t r8_5

if (var_20 == 0)
    r8_5 = 0
else
    r8_5 = var_20 - 1

sub_140a20ba0(arg1, var_28, r8_5)
int32_t rax_5 = arg5[1].d
int32_t r8_6 = rax_5 - 1

if (rax_5 == 0)
    r8_6 = 0

sub_140a20ba0(arg1, *arg5, r8_6)
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
