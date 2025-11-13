// 函数: sub_142832a8c
// 地址: 0x142832a8c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = zx.o(0)

if (not(0f f> arg2.d))
    zmm6 = _mm_min_ss(0x41200000, arg2.d)

int64_t result = _mm_cvtps_pd(zmm6.q)
int32_t i = 0
*(arg1 + 0x50) = result

if (*(arg1 + 8) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rcx = *(rsi_1 + *(arg1 + 0x68))
        int64_t rax_1
        rax_1.b = *(rcx + 4)
        rax_1.b -= 1
        
        if (rax_1.b u<= 1)
            result = sub_1428395f4(rcx, zmm6)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 8))

return result
