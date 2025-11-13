// 函数: sub_1421ead50
// 地址: 0x1421ead50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x30)
int32_t r10 = 0
int16_t* r8 = *(arg2 + 0xa0)
int32_t rbx = 0
int32_t rax = 0
int32_t i = 0

if (*(r9 + 0xc) s<= 0)
    *(arg2 + 0xa8) = 0
else
    int64_t rsi_1 = 0
    
    do
        int32_t* r11_3 =
            sx.q(zx.d(*(*(r9 + 0x30) + rsi_1)) * *(r9 + 0x10)) + sx.q(*(r9 + 0xe0)) + *(r9 + 0x28)
        int32_t rcx_3 = *r11_3 & 0xf0000000
        
        if (rcx_3 == 0x40000000 || rcx_3 == 0x10000000)
            uint64_t j_2 = zx.q(r11_3[2])
            
            if (j_2.d != 0)
                int16_t* rdx_2 = &r8[1]
                
                if (rbx != 0)
                    *r8 = rax.w - 1
                    *rdx_2 = rax.w
                    rdx_2[1] = rax.w
                    rdx_2 = &rdx_2[2]
                    r10 += 4
                else
                    *r8 = rax.w
                
                *rdx_2 = (rax + 1).w
                r8 = &rdx_2[1]
                rax += 2
                
                if (j_2.d s> 0)
                    uint64_t j_1 = j_2
                    r10 += j_2.d
                    uint64_t j
                    
                    do
                        *r8 = rax.w
                        r8 = &r8[1]
                        rax.w += 1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                r9 = *(arg1 + 0x30)
                rbx += 1
        
        i += 1
        rsi_1 += 2
    while (i s< *(r9 + 0xc))
    
    *(arg2 + 0xa8) = r10

return zx.q(r10)
