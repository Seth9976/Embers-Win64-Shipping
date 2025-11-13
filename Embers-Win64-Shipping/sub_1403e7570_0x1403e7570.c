// 函数: sub_1403e7570
// 地址: 0x1403e7570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_7 = *(arg1 + 0x11f8)
int32_t rax_1 = sx.d(r9_7.w) * 0x3e8

if (rax_1 == 0)
    int32_t rax_2 = *(arg1 + 0x11f4)
    int32_t rcx = *(arg1 + 0x11e4)
    
    if (rax_2 s< rcx)
        rcx = rax_2
    
    return zx.q(rcx s/ 0x3e8)

int32_t rdx_1 = *(arg1 + 0x11e4)

if (rax_1 s> rdx_1 || rax_1 s> *(arg1 + 0x11ec) || rax_1 s< *(arg1 + 0x11f0))
    int32_t rax_17 = *(arg1 + 0x11ec)
    
    if (rdx_1 s>= rax_17)
        rdx_1 = rax_17
    
    int32_t rax_18 = *(arg1 + 0x11f0)
    
    if (rdx_1 s<= rax_18)
        rdx_1 = rax_18
    
    r9_7 = rdx_1 s/ 0x3e8
else
    if (*(arg1 + 0x18) s>= 0x100)
        *(arg1 + 0x1c) = 0
    
    if (*(arg1 + 0x11d0) != 0 || *(arg2 + 0x3c) != 0)
        int32_t rdx_2 = *(arg1 + 0x11f4)
        int32_t rax_7 = sx.d(r9_7.w) * 0x3e8
        
        if (rax_7 s> rdx_2)
            if (*(arg1 + 0x1c) == 0)
                *(arg1 + 0x18) = 0x100
                *(arg1 + 0x10) = 0
            
            if (*(arg2 + 0x3c) == 0)
                if (*(arg1 + 0x18) s> 0)
                    *(arg1 + 0x1c) = 0xfffffffe
                    return zx.q(r9_7)
                
                goto label_1403e768f
            
            int32_t r9_3 = 8
            
            if (*(arg1 + 0x11f8) == 0x10)
                r9_3 = 0xc
            
            *(arg1 + 0x1c) = 0
            return zx.q(r9_3)
        
        if (rax_7 s< rdx_2)
            if (*(arg2 + 0x3c) != 0)
                int32_t rax_10 = 0x10
                *(arg1 + 0x14) = 0
                
                if (r9_7 == 8)
                    rax_10 = 0xc
                
                *(arg1 + 0x10) = 0
                *(arg1 + 0x1c) = 1
                return zx.q(rax_10)
            
            if (*(arg1 + 0x1c) != 0)
                *(arg1 + 0x1c) = 1
                return zx.q(r9_7)
            
        label_1403e768f:
            uint64_t r8 = zx.q(*(arg2 + 0x34))
            *(arg2 + 0x18)
            *(arg2 + 0x54) = 1
            int32_t rcx_1
            *(arg2 + 0x34) = r8.d - divs.dp.d(sx.q((r8 * 5).d), rcx_1 + 5)
            return zx.q(r9_7)
        
        if (*(arg1 + 0x1c) s< 0)
            *(arg1 + 0x1c) = 1

return zx.q(r9_7)
