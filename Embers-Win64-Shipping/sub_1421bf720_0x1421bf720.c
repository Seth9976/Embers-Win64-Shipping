// 函数: sub_1421bf720
// 地址: 0x1421bf720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x120))
int64_t rdi = sx.q(arg2)
int32_t rcx = *(data_143f5b298 + 0x8fc)
uint64_t result

if (rcx s<= 0 || (arg2 s>= 0 && rdi.d s<= rcx))
    if (rdi.d s> rsi.d)
        int64_t rax_2 = sub_140a84c80(*(arg1 + 0xf0), sx.q(*(arg1 + 0x114) * rdi.d), 0)
        int64_t rcx_2 = *(arg1 + 0xf8)
        *(arg1 + 0xf0) = rax_2
        
        if (rcx_2 == 0)
            *(arg1 + 0x120) = rcx_2.d
        
        result = sub_140a84c80(rcx_2, sx.q((rdi + 1).d) * 2, 0)
        int64_t rcx_3 = sx.q(*(arg1 + 0x120))
        *(arg1 + 0xf8) = result
        
        if (rcx_3.d s< rdi.d)
            int64_t rdx_4 = rcx_3 * 2
            
            do
                rdx_4 += 2
                *(rdx_4 + *(arg1 + 0xf8) - 2) = rcx_3.w
                rcx_3 = zx.q(rcx_3.d + 1)
            while (rcx_3.d s< rdi.d)
        
        *(arg1 + 0x120) = rdi.d
    
    if (arg3 != 0)
        result = sub_142192ca0(*(arg1 + 0x10), 0)
        int32_t rcx_5 = *(arg1 + 0x120)
        
        if (rcx_5 s> *(result + 0xb4))
            *(result + 0xb4) = rcx_5
    
    if (*(arg1 + 0x1d8) != 0)
        int64_t r8 = rsi
        
        if (rsi s< rdi)
            do
                uint32_t rcx_6 = zx.d(*(*(arg1 + 0xf8) + (r8 << 1)))
                r8 += 1
                void* rcx_10 =
                    sx.q(rcx_6 * *(arg1 + 0x114)) + sx.q(*(arg1 + 0x1dc)) + *(arg1 + 0xf0)
                *(rcx_10 + 0x3c) = data_143dbb1f8.q
                *(rcx_10 + 0x44) = data_143dbb200
            while (r8 s< rdi)
    
    result.b = 1
else
    result.b = 0

return result
