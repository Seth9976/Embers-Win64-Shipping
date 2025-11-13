// 函数: sub_141031ca0
// 地址: 0x141031ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141031440(arg1)
void* rbx = *(arg2 + 0x28)

if (rbx != 0)
    sub_1410644f0(rbx, 0, *(rbx + 0x38))
    sub_141037da0(rbx)
    result = *(rbx + 0x40)
    *(rbx + 0x38) += 1
    *(arg2 + 0x30) = result

return result
