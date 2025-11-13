// 函数: sub_142ab7920
// 地址: 0x142ab7920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
uint64_t result = zx.q(arg1[0x74])

if (result.d s>= 0)
    int32_t rcx = arg1[0x36]
    
    if (result.d s<= rcx && rcx s> 0)
        int32_t rax = arg1[0x74]
        arg1[0x74] += 1
        result = zx.q(rax + 1)

int32_t rcx_1 = arg1[0x36]

if (result.d != rcx_1 || rcx_1 s<= 0)
    result.b = result.d s< 0
else
    result = j_sub_142a7dd00(0x218)
    uint64_t result_1 = result
    
    if (result != 0)
        result = sub_142b3d720(result, arg1, arg2)
    
    if (result != 0)
        *(arg1 + 0x1c8) = result
        arg1[0x74] = 0x80000000
        result.b = 1
    else
        *arg2 = 7

return result
