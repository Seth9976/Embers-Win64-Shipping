// 函数: sub_140d0ccd0
// 地址: 0x140d0ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x78)
char* rbx = arg4
int64_t* result = arg3

if (arg3 == 0)
    *(rdx + 0xe8)
    result = sub_140d2be40(rbx, *(rdx + 0xe0))
    rdx = *(arg1 + 0x78)
else if (rbx == 0)
    rbx = sx.q(*(arg1 + 0x4c)) + result

if (*rbx != 0)
    result = sub_140d2a650(result, *(rdx + 0xe8), arg2)
    *rbx = result.b

return result
