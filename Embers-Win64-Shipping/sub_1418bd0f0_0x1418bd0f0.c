// 函数: sub_1418bd0f0
// 地址: 0x1418bd0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x7d4)
int64_t var_18
sub_140a2e390(&var_18, u".%x.%x", zx.q(*(arg2 + 0x7d0)))

if (sub_140a236f0(arg3, &var_18, 1) == 0)
    int32_t var_10
    int32_t r8_1 = var_10 - 1
    
    if (var_10 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg3, var_18, r8_1)

int64_t rcx_3 = var_18
*arg1 = 0
*arg1 = *arg3
*arg3 = 0
arg1[1].d = arg3[1].d
*(arg1 + 0xc) = *(arg3 + 0xc)
arg3[1] = 0

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg3

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg1
