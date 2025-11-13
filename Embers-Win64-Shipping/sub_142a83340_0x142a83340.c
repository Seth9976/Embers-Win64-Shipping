// 函数: sub_142a83340
// 地址: 0x142a83340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t j
j.b = arg2 | 1

if (arg3 u> j.b)
    j = zx.q(*(arg1 + 0x14))
    int32_t rdx = *(arg1 + 0x128)
    int64_t rbp_1 = *(arg1 + 0x78)
    int64_t* r14_1 = *(arg1 + 0x130)
    int32_t arg_10 = rdx
    
    if (*(arg1 + 0xc4) s< j.d)
        rdx -= 1
        arg_10 = rdx
    
    char i = arg3 - 1
    int64_t r10_1 = sx.q(rdx)
    int64_t r15_1 = 0
    int64_t zmm0
    int64_t zmm1
    
    if (i u>= arg2 + 1)
        do
            int32_t r8 = 0
            uint64_t j_1
            
            for (j = 0; j s< r10_1; j = j_1 + 1)
                int32_t* rdx_1 = r14_1 + j * 0xc
                
                while (*(sx.q(*rdx_1) + rbp_1) u< i)
                    r8 += 1
                    j += 1
                    rdx_1 = &rdx_1[3]
                    
                    if (j s>= r10_1)
                        goto label_142a833eb
                
                j_1 = j
                void* rsi_1 = r14_1 + j * 0xc
                void* rdx_3 = rsi_1
                int64_t r11_1
                
                do
                    r11_1 = sx.q(r8)
                    rdx_3 += 0xc
                    r8 += 1
                    j_1 += 1
                    
                    if (j_1 s>= r10_1)
                        break
                while (*(sx.q(*rdx_3) + rbp_1) u>= i)
                
                int64_t rdi_1 = r11_1
                
                if (j s< r11_1)
                    void* r11_2 = r14_1 + r11_1 * 0xc
                    
                    do
                        zmm0 = *r11_2
                        r11_2 -= 0xc
                        zmm1 = *rsi_1
                        j += 1
                        int32_t rdx_4 = *(rsi_1 + 8)
                        rdi_1 -= 1
                        *rsi_1 = zmm0
                        rsi_1 += 0xc
                        *(rsi_1 - 4) = *(r11_2 + 0x14)
                        *(r11_2 + 0xc) = zmm1
                        *(r11_2 + 0x14) = rdx_4
                    while (j s< rdi_1)
                
                if (j_1 == r10_1)
                    break
                
                r8 += 1
            
        label_142a833eb:
            i -= 1
        while (i u>= arg2 + 1)
        
        rdx = arg_10
    
    if (((arg2 + 1) & 1) == 0)
        j = zx.q(*(arg1 + 0xc4))
        int32_t rcx_2 = rdx - 1
        
        if (j.d != *(arg1 + 0x14))
            rcx_2 = rdx
        
        int64_t r8_1 = sx.q(rcx_2)
        
        if (rcx_2 s> 0)
            void* rdx_2 = r14_1 + r8_1 * 0xc
            
            do
                zmm0 = *rdx_2
                rdx_2 -= 0xc
                zmm1 = *r14_1
                r15_1 += 1
                int32_t rcx_3 = r14_1[1].d
                r8_1 -= 1
                *r14_1 = zmm0
                r14_1 += 0xc
                j = zx.q(*(rdx_2 + 0x14))
                *(r14_1 - 4) = j.d
                *(rdx_2 + 0xc) = zmm1
                *(rdx_2 + 0x14) = rcx_3
            while (r15_1 s< r8_1)

return j
