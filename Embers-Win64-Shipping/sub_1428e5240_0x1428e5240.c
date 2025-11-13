// 函数: sub_1428e5240
// 地址: 0x1428e5240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint64_t rbx
rbx.b = 0
int64_t result

if (arg1 == 0 || arg2 == 0)
    result = 1
    arg2 = 0
else
    char rax = *arg1
    
    if (arg3 != 0)
        rbx.b = 0xff
        
        if (rax u<= 0x80)
            if (rax == 0x80)
                void* i = 1
                
                if (arg2 u> 1)
                    if (arg2 - 1 u>= 8)
                        uint128_t zmm3 = zx.o(0)
                        uint128_t zmm2 = zx.o(0)
                        
                        do
                            uint128_t zmm0 = zx.o(0)
                            zmm3 |= _mm_unpacklo_epi16(
                                _mm_unpacklo_epi8(zx.o(*(arg1 + i)), zmm0.q), zmm0.q)
                            uint128_t zmm1 = _mm_unpacklo_epi8(zx.o(*(arg1 + i + 4)), zmm0.q)
                            i += 8
                            zmm2 |= _mm_unpacklo_epi16(zmm1, zmm0.q)
                        while (i u< arg2 - (zx.q((arg2 - 1).d) & 7))
                        
                        zmm2 |= zmm3
                        zmm2 |= _mm_bsrli_si128(zmm2, 8)
                        r10 = (zmm2 | _mm_bsrli_si128(zmm2, 4)).d
                    
                    while (i u< arg2)
                        uint32_t rcx_2 = zx.d(*(i + arg1))
                        i += 1
                        r10 |= rcx_2
                
                rbx.b = sbb.b(0xff, 0xff, r10 != 0)
                rbx = zx.q(rbx.b)
                r10 = rbx.d & 1
            
            result = zx.q(r10) + arg2
        else
            r10 = 1
            result = 1 + arg2
    else if (rax u<= 0x7f)
        result = zx.q(r10) + arg2
    else
        r10 = 1
        result = 1 + arg2

if (arg4 != 0)
    char* rsi_1 = *arg4
    
    if (rsi_1 != 0)
        void* r11_1 = &arg1[arg2]
        uint32_t r8_3 = zx.d(rbx.b) & 1
        *rsi_1 = rbx.b
        
        if (arg2 != 0)
            int64_t i_1 = r11_1 - arg1
            
            do
                uint32_t rdx = zx.d(*(r11_1 - 1))
                r11_1 -= 1
                i_1 -= 1
                uint32_t r8_4 = r8_3 + (rdx ^ zx.d(rbx.b))
                rsi_1[zx.q(r10) + i_1] = r8_4.b
                r8_3 = r8_4 u>> 8
            while (i_1 != 0)
        
        *arg4 += result

return result
