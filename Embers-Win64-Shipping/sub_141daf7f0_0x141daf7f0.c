// 函数: sub_141daf7f0
// 地址: 0x141daf7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

(*(*arg2 + 0x60))(arg2, u"AppName", arg1 + 8)
(*(*arg2 + 0x60))(arg2, u"SessionName", arg1 + 0x18)
(*(*arg2 + 0x60))(arg2, u"FriendlyName", arg1 + 0x28)
(*(*arg2 + 0x40))(arg2, u"Timestamp", arg1 + 0x38)
(*(*arg2 + 0x80))(arg2, u"SizeInBytes", arg1 + 0x40)
(*(*arg2 + 0x80))(arg2, u"DemoTimeInMs", arg1 + 0x44)
(*(*arg2 + 0x80))(arg2, u"NumViewers", arg1 + 0x48)
(*(*arg2 + 0x68))(arg2, u"bIsLive", arg1 + 0x4c)
(*(*arg2 + 0x80))(arg2, u"Changelist", arg1 + 0x50)
int64_t result = (*(*arg2 + 0x68))(arg2, u"shouldKeep", arg1 + 0x54)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
