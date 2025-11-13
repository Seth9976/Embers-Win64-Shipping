// 函数: sub_140a991f0
// 地址: 0x140a991f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa0) = 0
int64_t rcx = *(arg1 + 0x98)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140aa8f70(arg1 + 0x58, 0)
int64_t rcx_2 = *(arg1 + 0x78)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x58)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg1 + 0x50) = 0
int64_t rcx_4 = *(arg1 + 0x48)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t result = sub_140aa94a0(arg1 + 8, 0)
int64_t rcx_6 = *(arg1 + 0x28)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 8)

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
