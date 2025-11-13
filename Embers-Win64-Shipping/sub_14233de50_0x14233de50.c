// 函数: sub_14233de50
// 地址: 0x14233de50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r9_1

if (arg3 s< 0 || arg3 s>= *(arg2 + 0xe0))
    r9_1 = nullptr
else
    r9_1 = sx.q(arg3) * 0xb8 + *(arg2 + 0xd8)

int64_t i

if ((*(r9_1 + 0xb1) & 4) != 0)
label_14233dea7:
    i.b = 1
    return i

i = *arg1

for (int64_t rdx_2 = sx.q(arg1[1].d) * 0x30 + i; i != rdx_2; i += 0x30)
    if (*(i + 8) == arg3)
        goto label_14233dea7

i.b = 0
return i
