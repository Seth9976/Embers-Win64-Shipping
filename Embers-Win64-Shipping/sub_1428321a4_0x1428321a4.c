// 函数: sub_1428321a4
// 地址: 0x1428321a4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
uint128_t zmm1 = zx.o(*(arg2 + 0x748))
uint128_t zmm2
zmm2.d = _mm_cvtpd_ps(zx.o(*(arg2 + 0x740))).d f+ _mm_cvtpd_ps(zx.o(*(arg2 + 0x738))).d
zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
int32_t r12 = int.d(zmm2.d)

if (r12 != 0 && *(arg1 + 8) s> 0)
    void** r14_1 = nullptr
    
    do
        int32_t* rsi_1 = *(r14_1 + *(arg1 + 0x68))
        result.b = rsi_1[1].b
        result.b -= 1
        
        if (result.b u<= 1)
            result.b = *(arg2 + 5)
            
            if (*(rsi_1 + 5) == result.b)
                zmm1 = zx.o(*(rsi_1 + 0x748))
                zmm2.d =
                    _mm_cvtpd_ps(zx.o(*(rsi_1 + 0x740))).d f+ _mm_cvtpd_ps(zx.o(*(rsi_1 + 0x738))).d
                zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
                result = zx.q(int.d(zmm2.d))
                
                if (result.d == r12)
                    int32_t rax = sub_141840b50(rsi_1)
                    result = sub_141840b50(arg2)
                    
                    if (rax != result.d)
                        result = sub_14283909c(rsi_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 8))

return result
