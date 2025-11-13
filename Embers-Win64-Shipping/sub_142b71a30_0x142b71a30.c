// 函数: sub_142b71a30
// 地址: 0x142b71a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg4 - arg1[3].d
int32_t i_2 = arg3

if (r9 s>= arg3)
    i_2 = r9 + 1

uint64_t result = zx.q(arg5 - arg1[3].d)
int64_t r15 = sx.q(result.d)
int64_t i_1 = sx.q(i_2)

while (i_1 s<= r15)
    uint32_t rbx_1 = zx.d(*(arg2 + (i_1 << 1)))
    i_1 += 1
    int64_t i = i_1
    
    do
        uint32_t rdx_2 = zx.d(*(arg2 + (i << 1)))
        i += 1
        rbx_1 = rbx_1 * 0x25 + rdx_2
    while (i s< sx.q(arg1[3].d + i_2))
    
    result = sub_142b71bb0(arg1, arg2, arg2, i_2, rbx_1)
    
    if (result.d s< 0)
        int64_t rcx_3 = sx.q(not.d(result.d))
        result = *arg1
        *(result + (rcx_3 << 2)) = rbx_1 << (arg1[2].d).b | (i_2 + 1)
    
    i_2 += 1

return result
