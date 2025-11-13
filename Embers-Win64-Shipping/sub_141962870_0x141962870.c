// 函数: sub_141962870
// 地址: 0x141962870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x50) = 0
int64_t rcx = *(arg1 + 0x48)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_14196cb10(arg1 + 8, 0)
int64_t rcx_2 = *(arg1 + 0x28)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 8)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
