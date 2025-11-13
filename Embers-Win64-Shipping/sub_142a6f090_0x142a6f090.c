// 函数: sub_142a6f090
// 地址: 0x142a6f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 8)
void* result

if (rdx + 1 s< 0 || *(arg1 + 0xc) s< rdx + 1)
    result = sub_142ae7df0(arg1, rdx + 1, arg3)

if ((rdx + 1 s>= 0 && *(arg1 + 0xc) s>= rdx + 1) || result.b != 0)
    result = *(arg1 + 0x18)
    *(result + (sx.q(*(arg1 + 8)) << 2)) = arg2
    *(arg1 + 8) += 1

return result
