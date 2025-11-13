// 函数: sub_14087f760
// 地址: 0x14087f760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x70) = 0
int64_t rcx = *(arg2 + 0x68)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405b8bd0(arg2 + 0x28, 0)
int64_t rcx_2 = *(arg2 + 0x48)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg2 + 0x28)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = sub_14087e220(arg2 + 0x18)
int64_t rcx_5 = *(arg2 + 8)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
