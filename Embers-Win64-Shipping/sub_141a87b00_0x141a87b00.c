// 函数: sub_141a87b00
// 地址: 0x141a87b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg2[2]
int32_t result_1 = 0
arg1[2] = result
arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    result = sub_14083ad10(arg1, 0)

int64_t rsi = sx.q(arg2[1].d)

if (rsi.d != 0)
    int32_t rax = arg1[1].d
    int32_t rdx = rax + rsi.d
    
    if (rdx s> *(arg1 + 0xc))
        sub_14083ad10(arg1, rdx)
        rax = arg1[1].d
    
    result = memcpy(*arg1 + (sx.q(rax) << 3), *arg2, (rsi << 3).d)
    arg1[1].d += rsi.d

int64_t* rcx_3 = arg1[2]

if (rcx_3 != 0)
    int64_t i_1 = sx.q(rcx_3[1].d)
    
    if (i_1 s> 0)
        void* rcx_4 = *rcx_3
        int64_t i
        
        do
            result = zx.q(result_1)
            rcx_4 += 2
            result_1 += 1
            
            if (*(rcx_4 - 2) == 0xffff)
                result_1 = result.d
            
            i = i_1
            i_1 -= 1
        while (i != 1)

arg1[3].w = result_1.w
*(arg1 + 0x1a) = 1
return result
