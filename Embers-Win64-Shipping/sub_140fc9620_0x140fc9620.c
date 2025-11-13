// 函数: sub_140fc9620
// 地址: 0x140fc9620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x130))
    *(arg1 + 0x130) = 0
    z = true
else
    *(arg1 + 0x130)
    z = false

uint64_t result

if (not(z))
    result.b = 0
    return result

if (*(arg1 + 0x140) != 0)
    int64_t* rcx = *(arg1 + 0x138)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
    *(arg1 + 0x140) = 0

result.b = 1
return result
