// 函数: sub_1422a3c20
// 地址: 0x1422a3c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1422a3c90(arg1, arg2[1].d, arg3)
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t r10_1 = 0
    
    do
        r10_1 += 0x74
        int64_t r8 = *arg2
        uint64_t rdx_2 = zx.q(*(arg1 + 0x30) * i)
        i += 1
        int64_t* rdx_3 = rdx_2 + *(arg1 + 0x28)
        *rdx_3 = *(r8 + r10_1 - 0x74)
        result = *(r8 + r10_1 - 0x6c)
        rdx_3[1].d = result
    while (i s< arg2[1].d)

return result
