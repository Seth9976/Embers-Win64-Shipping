// 函数: sub_142bc2b50
// 地址: 0x142bc2b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0xe0) != 0
*arg2 = 1

if (not(cond:0))
    int64_t* rax_1 = sub_142b92360(*(*(arg2 + 0x90) + 8), "psaux")
    
    if (rax_1 == 0)
        return 0xb
    
    *(arg2 + 0xe0) = rax_1

if (*(arg2 + 0x1d8) == 0)
    *(arg2 + 0x1d8) = sub_142b92360(*(*(arg2 + 0x90) + 8), "pshinter")

int32_t result = sub_142b97060(arg1, 0, arg4)

if (result == 0)
    result = sub_142bc3880(arg2, arg3, arg4)
    
    if (result == 0 && arg3 s>= 0)
        if (arg3.w != 0)
            return result + 6
        
        int32_t rax_3 = arg2[0x6b]
        arg2[2] |= 0x811
        arg2[0xe] = 0
        arg2[1] = 0
        arg2[4] = rax_3
        
        if (arg2[0x4f].b != 0)
            arg2[2] |= 4
        
        *(arg2 + 0x18) = *(arg2 + 0x128)
        char* rcx_6 = *(arg2 + 0x18)
        *(arg2 + 0x20) = "Regular"
        
        if (rcx_6 == 0)
            int64_t rcx_7 = *(arg2 + 0xe8)
            int64_t rax_6 = *(arg2 + 0x18)
            
            if (rcx_7 != 0)
                rax_6 = rcx_7
            
            *(arg2 + 0x18) = rax_6
        else
            char* rax_5 = *(arg2 + 0x120)
            
            if (rax_5 != 0)
                for (char i = *rax_5; i != 0; i = *rax_5)
                    char r8 = *rcx_6
                    
                    if (i == r8)
                        rcx_6 = &rcx_6[1]
                        rax_5 = &rax_5[1]
                    else if (i == 0x20 || i == 0x2d)
                        rax_5 = &rax_5[1]
                    else
                        if (r8 != 0x20 && r8 != 0x2d)
                            if (*rcx_6 == 0)
                                *(arg2 + 0x20) = rax_5
                            
                            break
                        
                        rcx_6 = &rcx_6[1]
        
        arg2[3] = 0
        int32_t rax_7 = 0
        
        if (arg2[0x4e] != 0)
            rax_7 = 1
        
        arg2[3] = rax_7
        char* rdx_1 = *(arg2 + 0x130)
        
        if (rdx_1 != 0)
            for (int64_t i_1 = 0; i_1 != 5; )
                char rax_8 = rdx_1[i_1]
                i_1 += 1
                
                if (rax_8 != data_143685240[7][i_1])
                    for (int64_t j = 0; j != 6; )
                        char rax_9 = rdx_1[j]
                        j += 1
                        
                        if (rax_9 != *(j + 0x14368524f))
                            goto label_142bc2d28
                    
                    break
            
            arg2[3] |= 2
        
    label_142bc2d28:
        arg2[0xa] = 0
        *(arg2 + 0x30) = 0
        arg2[0x16] = sx.d(*(arg2 + 0x14a))
        arg2[0x17] = sx.d(*(arg2 + 0x14e))
        arg2[0x18] = (arg2[0x54] + 0xffff) s>> 0x10
        arg2[0x19] = (arg2[0x55] + 0xffff) s>> 0x10
        
        if (arg2[0x1a].w == 0)
            arg2[0x1a].w = 0x3e8
        
        uint64_t rax_18 = zx.q(arg2[0x1a].w)
        int32_t r8_1 = sx.d(arg2[0x19].w)
        int32_t r9_1 = sx.d(arg2[0x17].w)
        *(arg2 + 0x6a) = r8_1.w
        arg2[0x1b].w = r9_1.w
        int16_t rdx_4 = (((rax_18 * 3).d << 2) s/ 0xa).w
        *(arg2 + 0x6e) = rdx_4
        
        if (sx.d(rdx_4) s< r8_1 - r9_1)
            r8_1.w -= r9_1.w
            *(arg2 + 0x6e) = r8_1.w
        
        arg2[0x1d].w = *(arg2 + 0x13e)
        *(arg2 + 0x76) = arg2[0x50].w

return result
