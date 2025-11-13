// 函数: sub_142a964f0
// 地址: 0x142a964f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x42]

if (rcx != &arg1[0x43] && rcx != 0)
    (**rcx)(rcx, 1)

void* rcx_1 = arg1[0x3d]
arg1[0x42] = arg2
int32_t arg_8 = 0
sub_142b100e0(rcx_1, 0, 0)
sub_142b10100(arg1[0x3e])

if (arg2 == 0 || *(arg2 + 0x10) != 0)
    sub_142aeaaf0(&arg1[0x29], nullptr, 0, &arg_8)
else
    sub_142aea930(&arg1[0x29], arg2, &arg_8)

return (*(*arg1 + 0x48))(arg1)
