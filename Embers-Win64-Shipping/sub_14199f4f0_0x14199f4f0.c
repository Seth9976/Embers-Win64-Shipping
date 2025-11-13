// 函数: sub_14199f4f0
// 地址: 0x14199f4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_14196e590(arg1, arg2)
int64_t rcx = *(arg1 + 0x68)

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x18)

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1) __tailcall
