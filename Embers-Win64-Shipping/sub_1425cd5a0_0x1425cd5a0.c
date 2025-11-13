// 函数: sub_1425cd5a0
// 地址: 0x1425cd5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1425cbdc0(arg2 + 0x310)
sub_1425cbc90(arg2 + 0x1d0)
sub_1425cbbe0(arg2 + 0x1c0)
int64_t rcx_3 = *(arg2 + 0x1b0)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg2 + 0x180)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg2 + 0x170)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t result = sub_140746680(arg2 + 0xe0)
int64_t rcx_7 = *(arg2 + 0xc8)

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg2 + 0xb0)

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg2 + 0x98)

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg2 + 0x60)

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10) __tailcall
