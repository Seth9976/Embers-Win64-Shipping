// 函数: sub_1421c0540
// 地址: 0x1421c0540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[2]

if (result != 0)
    int32_t i = 0
    arg1[4].d = arg2
    int64_t* rax_1
    
    if (*(result + 0x48) s<= arg2)
        arg1[4].d = 0
        rax_1 = *(result + 0x40)
    else
        rax_1 = *(result + 0x40) + (sx.q(arg2) << 3)
    
    arg1[5] = *rax_1
    int64_t r9_1 = sx.q(arg1[4].d)
    arg1[0x2f].d = *(arg1[0x30] + (r9_1 << 2))
    
    if (arg3 == 1)
        void* r8 = arg1[5]
        arg1[0x1c].d ^= (zx.d(*(*(r8 + 0x30) + 0x59)) ^ arg1[0x1c].d) & 4
        int32_t rdx = arg1[0x1c].d
        arg1[0x1c].d = ((zx.d(*(*(r8 + 0x30) + 0x59)) ^ rdx) & 2) ^ rdx
        int32_t rcx_9 = arg1[0x2d].d
        void* rbp_1 = *(r8 + 0x50)
        
        if ((r9_1 + 1).d s> rcx_9)
            sub_141cfab60(&arg1[0x2c], r9_1.d - rcx_9 + 1)
            r9_1 = zx.q(arg1[4].d)
        
        int32_t rax_8 = *(rbp_1 + 0xa8)
        int64_t* rsi_3 = (sx.q(r9_1.d) << 4) + arg1[0x2c]
        int32_t rcx_11 = rsi_3[1].d
        
        if (rcx_11 s< rax_8)
            sub_1421ad750(rsi_3, rax_8 - rcx_11)
            rax_8 = *(rbp_1 + 0xa8)
        
        if (rax_8 s> 0)
            char* r8_1 = nullptr
            int64_t r9_3 = 0
            
            do
                if (not(*(r9_3 + *(rbp_1 + 0xa0) + 8) f+ *(*(arg1[5] + 0x30) + 0xa0) f>=
                        *(arg1 + 0x12c)))
                    r8_1[*rsi_3] = 1
                
                i += 1
                r8_1 = &r8_1[1]
                r9_3 += 0xc
            while (i s< *(rbp_1 + 0xa8))
    
    void* rcx_14 = arg1[3]
    void* rax_11 = *(rcx_14 + 0xa8)
    
    if (rax_11 == 0)
        rax_11 = sub_141ee69e0(rcx_14)
    
    result = sub_14243ade0(rax_11)
    
    if (result.b == 1)
        result = arg1[5]
        
        if ((*(result + 0x2c) & 1) == 0)
            jump(*(*arg1 + 0xf0))

return result
