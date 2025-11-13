// 函数: sub_140cab330
// 地址: 0x140cab330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cddc80()
void* rdx = *(arg1 + 0x10)
int64_t result = sx.q(*(rax + 0x38))

if (result.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (result << 3)) == rax + 0x30)
    result.b = 1
    return result

result.b = 0
return result
