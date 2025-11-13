// 函数: sub_1424676d0
// 地址: 0x1424676d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x78)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_141a90330(arg2 + 0x58)
int64_t rcx_2 = *(arg2 + 0x48)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg2 + 0x10)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
