// 函数: sub_142a977e0
// 地址: 0x142a977e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_142b100e0(arg1[0x3d], 0, 0)
sub_142b10100(arg1[0x3e])
sub_142aea9e0(&arg1[0x29], arg2, &arg_8)
sub_142a72570(&arg1[0x43], arg2)
int64_t* rcx_4 = arg1[0x42]

if (rcx_4 != &arg1[0x43] && rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

int64_t rax_2 = *arg1
arg1[0x42] = &arg1[0x43]
return (*(rax_2 + 0x48))(arg1)
