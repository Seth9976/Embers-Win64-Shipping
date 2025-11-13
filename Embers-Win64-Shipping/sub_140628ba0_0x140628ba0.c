// 函数: sub_140628ba0
// 地址: 0x140628ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t rax = arg2[1].d
int32_t r8 = rax - 1

if (rax == 0)
    r8 = 0

sub_140a20ba0(arg1, *arg2, r8)
int32_t rax_1 = arg3[1].d
int32_t r8_1 = rax_1 - 1

if (rax_1 == 0)
    r8_1 = 0

sub_140a20ba0(arg1, *arg3, r8_1)
int64_t rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg1
