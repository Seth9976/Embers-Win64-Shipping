// 函数: sub_141f41c10
// 地址: 0x141f41c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result[0x4] = _mm_and_ps(arg3, 0x7fffffff)

if (not(result[0] f<= 9.99999975e-06f))
    arg3[0] = arg3[0] f- 1f
    result = _mm_and_ps(arg3, 0x7fffffff)
    
    if (result[0] f> 9.99999975e-06f)
        int32_t i = 0
        
        if (arg1[1].d s> 0)
            int64_t r9_1 = *arg2
            float* rcx_5 = nullptr
            
            do
                uint64_t rdx_4 = *arg1
                uint64_t rax
                
                if (*(rcx_5 + rdx_4 + 4) != 0 || *(rcx_5 + r9_1 + 4) != 0)
                    rax.b = 1
                else
                    rax.b = 0
                
                *(rcx_5 + rdx_4 + 4) = rax.b
                i += 1
                rax = *arg1
                r9_1 = *arg2
                *(rcx_5 + rax) = (*(rcx_5 + r9_1) f- *(rcx_5 + rax)) f* arg3[0] f+ *(rcx_5 + rax)
                rcx_5 = &rcx_5[2]
            while (i s< arg1[1].d)
    else if (arg2 != arg1)
        int64_t* rdx = arg2[2]
        arg1[2] = rdx
        int32_t rcx = 0
        
        if (rdx != 0)
            int64_t i_2 = sx.q(rdx[1].d)
            
            if (i_2 s> 0)
                void* rdx_1 = *rdx
                int64_t i_1
                
                do
                    int32_t rax_1 = rcx
                    rdx_1 += 2
                    rcx += 1
                    
                    if (*(rdx_1 - 2) == 0xffff)
                        rcx = rax_1
                    
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        
        arg1[3].w = rcx.w
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) s<= 0xffffffff)
            result = sub_1405c5570(arg1, 0)
        
        int64_t rsi = sx.q(arg2[1].d)
        
        if (rsi.d != 0)
            int32_t rax_2 = arg1[1].d
            int32_t rdx_2 = rax_2 + rsi.d
            
            if (rdx_2 s> *(arg1 + 0xc))
                sub_1405c5570(arg1, rdx_2)
                rax_2 = arg1[1].d
            
            result = memcpy(*arg1 + (sx.q(rax_2) << 3), *arg2, (rsi << 3).d)
            arg1[1].d += rsi.d
        
        *(arg1 + 0x1a) = 1

return result
