// 函数: sub_142712f20
// 地址: 0x142712f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_14273b470()
arg1[1].d = arg2[1].d
int32_t result = arg1[3].d
uint32_t rcx_1 = arg2[1].d * 0x18

if (rcx_1 s> result)
    arg1[3].d = rcx_1
    
    if (rcx_1 s> *(arg1 + 0x1c))
        result = sub_1405daba0(&arg1[2])
else if (rcx_1 s< result && rcx_1 != result)
    arg1[3].d = rcx_1
    result = sub_1405dac10(&arg1[2])

void* rcx_4 = arg1[2]
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rdx_1 = 0
    
    do
        int64_t rax_3 = *arg2
        rcx_4 += 0x18
        rdx_1 += 0xc
        i += 1
        result = *(rdx_1 + rax_3 - 4)
        int32_t result_1 = result
        uint128_t zmm0_1
        zmm0_1.q = *(rdx_1 + rax_3 - 0xc)
        *(rcx_4 - 0x18) = zmm0_1
        *(rcx_4 - 8) = 0
    while (i s< arg2[1].d)

return result
