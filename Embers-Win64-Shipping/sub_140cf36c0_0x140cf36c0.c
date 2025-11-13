// 函数: sub_140cf36c0
// 地址: 0x140cf36c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
void* rbx = arg3
void* rdx = *(arg1 + 0x78)

if (result == 0)
    *(rdx + 0xe8)
    result = sub_140d2be40(rbx, *(rdx + 0xe0))
    rdx = *(arg1 + 0x78)
else if (rbx == 0)
    rbx = sx.q(*(arg1 + 0x4c)) + result

if (*rbx != 0)
    result = sub_140d1a460(result, *(rdx + 0xe8))
    *rbx = 0

return result
