// 函数: sub_1429d7d40
// 地址: 0x1429d7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i = 0

if (*(result + 8) s> 0)
    int64_t r15_1 = 0
    int32_t* r14_1 = nullptr
    
    do
        int32_t r9_1 = *(r14_1 + *(arg1 + 0xf0))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            int32_t r11_1 = r9_1 * 2
            void* rdx_1 = *(r8_1 + 0x150)
            uint64_t j_1 = zx.q(*(rdx_1 + r15_1))
            int32_t* r10_1 = *(r8_1 + 0x168) + (sx.q(*(rdx_1 + r15_1 + 4)) << 2)
            void* r8_2 = *(arg1 + 0x10)
            int16_t* rax_3 = *(r8_1 + 0x180) + (sx.q(*(rdx_1 + r15_1 + 4)) << 1)
            int64_t r12_1 = sx.q(r11_1) << 2
            int32_t* rdx_3 = *(r8_2 + 0x150) + r12_1
            *rdx_3 = j_1.d
            int32_t rcx_3
            
            if (r9_1 != 0)
                rcx_3 = rdx_3[-2] + rdx_3[-1]
            else
                rcx_3 = 0
            
            rdx_3[1] = rcx_3
            int32_t rcx_5 = *(r8_2 + 0x14)
            
            if (rcx_5 s< j_1.d)
                rcx_5 = j_1.d
            
            int32_t rsi_1 = 0
            *(r8_2 + 0x14) = rcx_5
            void* r9_2 = *(arg1 + 0x10)
            int64_t rdx_4 = sx.q(r11_1 + 1)
            int32_t* r11_2 = *(r9_2 + 0x168) + (sx.q(*(*(r9_2 + 0x150) + (rdx_4 << 2))) << 2)
            int16_t* r8_4 = *(r9_2 + 0x180) + (sx.q(*(*(r9_2 + 0x150) + (rdx_4 << 2))) << 1)
            
            if (j_1.d s> 0)
                uint64_t j
                
                do
                    int32_t r9_3 = *(*(arg1 + 0xc0) + ((sx.q(*r10_1 * 2) + zx.q(*rax_3)) << 2))
                    
                    if (r9_3 != 0xffffffff)
                        *r11_2 = r9_3
                        rsi_1 += 1
                        r11_2 = &r11_2[1]
                        *r8_4 = 1
                        r8_4 = &r8_4[1]
                    
                    r10_1 = &r10_1[1]
                    rax_3 = &rax_3[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            *(r12_1 + *(*(arg1 + 0x10) + 0x150)) = rsi_1
        
        result = *(arg1 + 8)
        i += 1
        r14_1 = &r14_1[1]
        r15_1 += 8
    while (i s< *(result + 8))

return result
