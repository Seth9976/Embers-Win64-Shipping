// 函数: sub_142a259a0
// 地址: 0x142a259a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg6)
int32_t r15 = 3
int32_t temp0 = result.d
int32_t r12 = 1
int32_t rsi = arg4

if (temp0 != 0)
    r15 = 1

void* rbx = arg3
arg6 = r15
void* rdx = arg1

if (temp0 == 0)
    result = zx.q(*(arg3 + 0x8c))
    
    if (result.d == 1 && *(arg3 + 0x88) == 1)
        r12 = 0
    else if (result.d != 0 || *(arg3 + 0x88) != result.d)
        r12 = 2

if (arg4 s< arg5)
    do
        int32_t i = 0
        int64_t r13_1 = *(arg2 + 0x408) + (sx.q(*(arg2 + 0x368) * rsi) << 3)
        result = sx.q((rsi s>> 3) * *(arg2 + 0x10e0))
        int64_t* rbp_3 = result * 0xa0 + *(arg2 + 0x10d8)
        
        if (*(arg2 + 0x364) s> 0)
            do
                sub_142a28ab0(rbx, rdx, zx.q(rsi), i)
                sub_142a25c40(arg2, rsi, i, rbp_3)
                result = sub_142a26770(arg2, rbx, rsi, rbp_3)
                
                if (r15 u> 1)
                    void* rbx_1 = rbx + 0x80
                    uint64_t j_1 = zx.q(r15 - 1)
                    uint64_t j
                    
                    do
                        if (r12 == 0)
                            result = sub_142a26920(arg2, rbx_1, rsi, rbp_3)
                        else
                            result = zx.q(r12 - 1)
                            
                            if (r12 == 1)
                                result = sub_142a26770(arg2, rbx_1, rsi, rbp_3)
                            else if (result.d == 1)
                                result = sub_142a261e0(arg2, rbx_1, (sx.q(i) << 3) + r13_1, rsi, i)
                        
                        rbx_1 -= -0x80
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    rbx = arg3
                    r15 = arg6
                
                rdx = arg1
                i += 8
                rbp_3 = &rbp_3[0x14]
            while (i s< *(arg2 + 0x364))
        
        rsi += 8
    while (rsi s< arg5)

return result
