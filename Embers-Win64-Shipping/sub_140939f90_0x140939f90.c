// 函数: sub_140939f90
// 地址: 0x140939f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IModuleInterface::VTable** result = arg1
*arg1 = &data_142e21f60
sub_1405ae000(&arg1[0x35])
result[0x34].d = 0
int64_t rcx_1 = result[0x33]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405df330(&result[0x2b])
sub_1405ae200(&result[0x21])
result[0x20].d = 0
int64_t rcx_4 = result[0x1f]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1405b8bd0(&result[0x17], 0)
int64_t rcx_6 = result[0x1b]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = result[0x17]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1405ae080(&result[0xd])
result[0xc].d = 0
int64_t rcx_9 = result[0xb]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_1405df330(&result[3])
*result = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(result)

return result
