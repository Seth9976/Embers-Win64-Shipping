// 函数: sub_1409ea790
// 地址: 0x1409ea790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x1c) == 0
*(arg2 + 0x18) = 0

if (not(cond:0))
    sub_1405a5410(arg2 + 0x10, 0)

*(arg2 + 0x40) = 0xffffffff
*(arg2 + 0x44) = 0
void* result = sub_14059a8e0(arg2 + 0x20, 0)
int64_t rcx_2 = *(arg2 + 0x30)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg2 + 0x10)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
