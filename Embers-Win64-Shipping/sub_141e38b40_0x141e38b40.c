// 函数: sub_141e38b40
// 地址: 0x141e38b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb4) = 0
*(arg1 + 0xb0) = 0
sub_141e47360(arg1)
*(arg1 + 0xa8) = 0
int64_t rcx = *(arg1 + 0xa0)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141e3d2b0(arg1 + 0x60, 0)
int64_t rcx_2 = *(arg1 + 0x80)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x60)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_1405ae080(arg1 + 0x10) __tailcall
