// 函数: sub_141daf910
// 地址: 0x141daf910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

(*(*arg2 + 0x60))(arg2, u"state", arg1 + 8)
(*(*arg2 + 0x80))(arg2, u"numChunks", arg1 + 0x2c)
(*(*arg2 + 0x80))(arg2, u"time", arg1 + 0x28)
(*(*arg2 + 0x60))(arg2, u"viewerId", arg1 + 0x18)
int64_t result = (*(*arg2 + 0x60))(arg2, u"meta", arg1 + 0x30)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
