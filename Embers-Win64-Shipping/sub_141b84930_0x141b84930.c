// 函数: sub_141b84930
// 地址: 0x141b84930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xc0)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0xa8)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae080(arg1 + 0x58)
*(arg1 + 0x50) = 0
int64_t rcx_3 = *(arg1 + 0x48)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = sub_1407ece30(arg1 + 8, 0)
int64_t rcx_5 = *(arg1 + 0x28)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 8)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6) __tailcall
