// 函数: sub_1421bf610
// 地址: 0x1421bf610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(data_143f5b298 + 0x8fc)
void* result

if (rcx s> 0 && (arg2 s< 0 || arg2 s> rcx))
    result.b = 0
    return result

if (arg2 s> *(arg1 + 0x120))
    int64_t rax_2 = sub_140a84c80(*(arg1 + 0xf0), sx.q(*(arg1 + 0x114) * arg2), 0)
    int64_t rcx_2 = *(arg1 + 0xf8)
    *(arg1 + 0xf0) = rax_2
    
    if (rcx_2 == 0)
        *(arg1 + 0x120) = rcx_2.d
    
    result = sub_140a84c80(rcx_2, sx.q(arg2 + 1) * 2, 0)
    int64_t rcx_3 = sx.q(*(arg1 + 0x120))
    *(arg1 + 0xf8) = result
    
    if (rcx_3.d s< arg2)
        int64_t rdx_4 = rcx_3 * 2
        
        do
            rdx_4 += 2
            *(rdx_4 + *(arg1 + 0xf8) - 2) = rcx_3.w
            rcx_3 = zx.q(rcx_3.d + 1)
        while (rcx_3.d s< arg2)
    
    *(arg1 + 0x120) = arg2

if (arg3 != 0)
    result = sub_142192ca0(*(arg1 + 0x10), 0)
    int32_t rcx_5 = *(arg1 + 0x120)
    
    if (rcx_5 s> *(result + 0xb4))
        *(result + 0xb4) = rcx_5

result.b = 1
return result
