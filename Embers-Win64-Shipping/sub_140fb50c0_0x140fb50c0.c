// 函数: sub_140fb50c0
// 地址: 0x140fb50c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
char* rax = sub_140ae16d0(arg1 + 0x3c8, &arg_8, 1)
rax[1]
uint32_t var_20 = zx.d(rax[3])
uint32_t var_28 = zx.d(*rax)
int64_t var_18
sub_140a2e390(&var_18, u"%02X%02X%02X%02X", zx.q(rax[2]))
sub_140aae2f0(arg2, &var_18)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
