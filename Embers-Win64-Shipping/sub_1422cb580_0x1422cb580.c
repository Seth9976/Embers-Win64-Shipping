// 函数: sub_1422cb580
// 地址: 0x1422cb580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6].d = 0xffffffff
int64_t* rcx = *arg1
uint64_t result = zx.q(*(**rcx + (sx.q(rcx[1].d) << 1)))
*(arg1 + 0x2c) = result.d

if (result.d != 0)
    rcx[1].d += 1
    result = *arg1
    int32_t rcx_1 = *(result + 8)
    
    if (rcx_1 s>= 0 && rcx_1 s< *(*result + 8))
        int32_t r10_1 = *(arg1 + 0x1c)
        int32_t r8_2 = *(arg1 + 0x2c) - 1
        int32_t rcx_2
        
        if (r10_1 s> 0)
            rcx_2 = arg1[3].d
        
        int32_t rcx_3
        
        if (r10_1 s<= 0 || rcx_2 s<= 0)
            rcx_3 = 0
        else
            rcx_3 = divs.dp.d(sx.q(r8_2), rcx_2)
        
        *(arg1 + 0x34) = rcx_3
        
        if (rcx_3 s< arg1[4].d)
            result = zx.q(arg1[3].d * rcx_3)
            arg1[7].d = r10_1 * rcx_3
            int32_t r8_3 = r8_2 - result.d
            
            if (r8_2 - result.d s>= 0)
                result = arg1[2]
                
                if (r8_3 s< *(result + 8))
                    int64_t rdx_3 = sx.q(*(*result + sx.q(r8_3) * 0x10))
                    arg1[6].d = rdx_3.d
                    
                    if (*(arg1 + 0x24) s<= rdx_3.d && rdx_3.d s< arg1[5].d)
                        void* rcx_8 = (rdx_3 << 5) + *arg1[1]
                        
                        if (zx.d(*(rcx_8 + 0x14)) - 1 == r8_3 && *(rcx_8 + 0x1c) != 1)
                            arg1[9].d = rdx_3.d
                            result.b = 1
                            return result

result.b = 0
return result
