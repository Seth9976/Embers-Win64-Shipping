// 函数: sub_142afcad0
// 地址: 0x142afcad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg1[3].d s> 0)
    return 

if (arg2 s< 0 || arg3 s< 0)
    arg1[3].d = 1
else if (arg2 != 0 || arg3 != 0)
    *(arg1 + 0x14) += 1
    int32_t rcx_1 = arg3 - rdi.d
    
    if (arg3 != rdi.d)
        bool cond:1_1 = rcx_1 s>= 0
        
        if (rcx_1 s> 0)
            int32_t rdx = arg1[2].d
            
            if (rdx s>= 0 && rcx_1 s> 0x7fffffff - rdx)
                arg1[3].d = 8
                return 
            
            cond:1_1 = rcx_1 s>= 0
        
        if (not(cond:1_1))
            int32_t rdx_1 = arg1[2].d
            
            if (rdx_1 s< 0 && rcx_1 s< 0x80000000 - rdx_1)
                arg1[3].d = 8
                return 
        
        arg1[2].d += rcx_1
    
    if ((rdi - 1).d u<= 5 && arg3 s<= 7)
        int32_t rax_3 = *(arg1 + 0xc)
        int32_t rdx_4 = ((rdi << 3).d | arg3) << 9
        
        if (rax_3 s> 0)
            int64_t rcx_2 = sx.q(rax_3 - 1)
            int64_t rax_5 = *arg1
            uint32_t rcx_3 = zx.d(*(rax_5 + (rcx_2 << 1)))
            
            if (rcx_3 - 0x1000 u<= 0x5ffe && (rcx_3 & 0xfffffe00) == rdx_4
                    && (rcx_3 & 0x1ff) u< 0x1ff)
                rcx_3.w += 1
                *(rax_5 + (rcx_2 << 1)) = rcx_3.w
                return 
        
        return sub_142afce00(arg1, rdx_4.w) __tailcall
    
    if (rdi.d s< 0x3d && arg3 s< 0x3d)
        return sub_142afce00(arg1, ((rdi.d | 0x1c0) << 6 | arg3).w) __tailcall
    
    char rax
    
    if (arg1[1].d - *(arg1 + 0xc) s< 5)
        rax = sub_142afce60(arg1)
    
    if (arg1[1].d - *(arg1 + 0xc) s>= 5 || rax != 0)
        int32_t r8_3 = *(arg1 + 0xc) + 1
        int16_t r9_1
        
        if (rdi.d s>= 0x3d)
            int64_t rax_14 = *arg1
            int64_t rcx_7 = sx.q(r8_3)
            
            if (rdi.d s> 0x7fff)
                *(rax_14 + (rcx_7 << 1)) = (rdi.d s>> 0xf).w | 0x8000
                r9_1 = (((rdi.d s>> 0x18).w & 0xffc0) + 0xf80) | 0x7000
                rax_14 = *arg1
                r8_3 += 1
                rcx_7 = sx.q(r8_3)
            else
                r9_1 = 0x7f40
            
            rdi.w |= 0x8000
            r8_3 += 1
            *(rax_14 + (rcx_7 << 1)) = rdi.w
        else
            r9_1 = ((rdi.d | 0x1c0) << 6).w
        
        int16_t r9_6
        
        if (arg3 s>= 0x3d)
            int64_t rcx_8 = sx.q(r8_3)
            
            if (arg3 s> 0x7fff)
                r9_6 = r9_1 | ((arg3 s>> 0x1e).w + 0x3e)
                r8_3 += 1
                *(*arg1 + (rcx_8 << 1)) = (arg3 s>> 0xf).w | 0x8000
                rcx_8 = sx.q(r8_3)
            else
                r9_6 = r9_1 | 0x3d
            
            int32_t rsi
            rsi.w = arg3.w | 0x8000
            r8_3 += 1
            *(*arg1 + (rcx_8 << 1)) = rsi.w
        else
            r9_6 = r9_1 | arg3.w
        
        *(*arg1 + (sx.q(*(arg1 + 0xc)) << 1)) = r9_6
        *(arg1 + 0xc) = r8_3
