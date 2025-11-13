// 函数: sub_140a81850
// 地址: 0x140a81850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8_1 = *(arg1 + 8)

if (r8_1 == 0 && *(arg2 + 8) == r8_1)
    return false

int64_t* rdx = *(arg2 + 8)
bool result = rdx != 0
arg1.b = r8_1 != 0

if (arg1.b != result)
    return result

return sub_140a65540(r8_1, rdx) __tailcall
