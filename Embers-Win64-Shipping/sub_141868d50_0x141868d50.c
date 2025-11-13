// 函数: sub_141868d50
// 地址: 0x141868d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xb0)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x98)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x88)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*(arg1 + 0x80) = 0
int64_t rcx_3 = *(arg1 + 0x78)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_14059ad90(arg1 + 0x38, 0)
int64_t rcx_5 = *(arg1 + 0x58)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x38)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t result = sub_141865be0(arg1 + 0x28)
int64_t rcx_8 = *(arg1 + 0x18)

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 8)

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
