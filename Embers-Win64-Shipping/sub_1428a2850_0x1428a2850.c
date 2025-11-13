// 函数: sub_1428a2850
// 地址: 0x1428a2850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t result = sub_1428dafb0(*arg1, arg2, arg3, arg4)

if (result == 0)
    return result

if (arg5 != 0)
    sub_1428a6780(*(arg1[1] + 8))
    *(arg1[1] + 8) = arg5
    *arg1[1] = arg6
    void* rax_2 = arg1[1]
    *(rax_2 + 0x10) &= 0xfffffff0
    void* rax_3 = arg1[1]
    *(rax_3 + 0x10) |= 8

return 1
