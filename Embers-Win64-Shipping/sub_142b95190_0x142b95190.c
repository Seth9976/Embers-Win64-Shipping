// 函数: sub_142b95190
// 地址: 0x142b95190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int32_t* i = *(arg1 + 8)

for (void* r11_1 = &i[sx.q(*(arg1 + 2)) * 2]; i u< r11_1; i = &i[2])
    if (i != 0)
        int64_t rcx_1 = sx.q(i[1])
        int64_t rdx = sx.q(*i)
        int64_t r8_2 = sx.q(arg2[1]) * rcx_1
        int64_t r9_2 = sx.q(*arg2) * rdx
        int64_t r10_2 = sx.q(arg2[2]) * rdx
        int64_t rdx_2 = sx.q(arg2[3]) * rcx_1
        *i = ((r8_2 - (r8_2 u>> 0x3f) + 0x8000) s>> 0x10).d
            + ((r9_2 - (r9_2 u>> 0x3f) + 0x8000) s>> 0x10).d
        i[1] = ((rdx_2 - (rdx_2 u>> 0x3f) + 0x8000) s>> 0x10).d
            + ((r10_2 - (r10_2 u>> 0x3f) + 0x8000) s>> 0x10).d
