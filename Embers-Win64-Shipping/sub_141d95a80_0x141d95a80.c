// 函数: sub_141d95a80
// 地址: 0x141d95a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x80)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141d94e70(arg1 + 0x70)
int64_t result = sub_141d94e70(arg1 + 0x60)
int64_t rcx_3 = *(arg1 + 0x50)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x38)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x10)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
