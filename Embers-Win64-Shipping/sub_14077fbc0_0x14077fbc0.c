// 函数: sub_14077fbc0
// 地址: 0x14077fbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc0) = 0
int64_t rcx = *(arg1 + 0xb8)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x80) = 0

if (*(arg1 + 0x84) != 0)
    sub_140638cc0(arg1 + 0x78, 0)

*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0
sub_14059a8e0(arg1 + 0x88, 0)
int64_t rcx_3 = *(arg1 + 0x98)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x78)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg1 + 0x70) = 0
int64_t rcx_5 = *(arg1 + 0x68)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    sub_140638cc0(arg1 + 0x28, 0)

*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x5c) = 0
void* result = sub_14059a8e0(arg1 + 0x38, 0)
int64_t rcx_8 = *(arg1 + 0x48)

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0x28)

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
