// 函数: sub_1409cc200
// 地址: 0x1409cc200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 8)
void* r9_1 = sx.q(arg4) * 0xd0 + *(*(*rax + 0x10) + sx.q(rax[1].d) * 0x10)

if (arg5 == 1)
    r9_1 += 0x34
else if (arg5 == 2)
    r9_1 += 0x68
else if (arg5 == 3)
    r9_1 += 0x9c

int32_t result = *(arg2 + 8)
*(r9_1 + 0x24) = (_mm_unpacklo_ps(*arg2, *(arg2 + 4))).q
*(r9_1 + 0x2c) = result
*(r9_1 + 0x30) = arg3.d
return result
