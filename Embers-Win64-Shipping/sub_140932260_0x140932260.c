// 函数: sub_140932260
// 地址: 0x140932260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    (*(*arg2 + 0x18))(arg2)

(*(*arg2 + 0x60))(arg2, u"itemName", arg1 + 8)
(*(*arg2 + 0x60))(arg2, u"uniqueItemId", arg1 + 0x18)
int64_t result = (*(*arg2 + 0x60))(arg2, u"validationInfo", arg1 + 0x28)

if (arg3 != 0)
    return result

return (*(*arg2 + 0x20))(arg2)
