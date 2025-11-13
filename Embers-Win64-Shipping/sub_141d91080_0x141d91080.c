// 函数: sub_141d91080
// 地址: 0x141d91080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

(*(*arg2 + 0x80))(arg2, u"LengthInMS", arg1 + 8)
(*(*arg2 + 0x78))(arg2, u"NetworkVersion", arg1 + 0xc)
(*(*arg2 + 0x78))(arg2, u"Changelist", arg1 + 0x10)
(*(*arg2 + 0x60))(arg2, u"FriendlyName", arg1 + 0x18)
int64_t result = (*(*arg2 + 0x80))(arg2, u"DemoFileLastOffset", arg1 + 0x28)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
