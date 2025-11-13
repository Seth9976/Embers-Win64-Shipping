// 函数: sub_140938b30
// 地址: 0x140938b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x20))()

if (result != 0)
    *(result + 0x30) = *(arg3 + 8)
    *(result + 0x34) = *(arg3 + 0xc)
    *(result + 0x38) = *(arg3 + 0x10)
    *(result + 0x39) = *(arg3 + 0x11)
    *(result + 0x3a) = *(arg3 + 0x12)
    *(result + 0x3b) = *(arg3 + 0x13)
    *(result + 0x3c) = *(arg3 + 0x14)
    *(result + 0x3d) = *(arg3 + 0x15)
    *(result + 0x3e) = *(arg3 + 0x16)
    *(result + 0x3f) = *(arg3 + 0x17)
    *(result + 0x40) = *(arg3 + 0x18)
    *(result + 0x41) = *(arg3 + 0x19)
    *(result + 0x44) = *(arg3 + 0x1c)
    sub_14091bc80(result + 0x48, arg3 + 0x20)
    int64_t r8
    r8.b = 1
    (*(*arg1 + 0xb8))(arg1, arg2, r8)

result.b = 1
return result
