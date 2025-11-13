// 函数: sub_141a8a940
// 地址: 0x141a8a940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r8 = 0
int64_t r12 = _mm_bsrli_si128(*arg3, 8).q

if (r12 s> 0)
    do
        int64_t rbx_1 = arg1[1].q
        result = *arg1
        int64_t r11_1 = (*arg1):8.q
        void* r10_1 = result + (sx.q(*(*arg2 + (r8 << 2))) << 2)
        int64_t i = 0
        int128_t zmm0
        
        if (rbx_1 s>= 4)
            int64_t r9_1 = 2
            int32_t* rdx = r11_1 << 3
            
            do
                if (r8 != i)
                    zmm0 = zx.o(0)
                else
                    zmm0 = 0x3f800000
                
                *(&rdx[neg.q(r11_1) * 2] + r10_1) = zmm0.d
                
                if (r8 != r9_1 - 1)
                    zmm0 = zx.o(0)
                else
                    zmm0 = 0x3f800000
                
                *(&rdx[neg.q(r11_1)] + r10_1) = zmm0.d
                
                if (r8 != r9_1)
                    zmm0 = zx.o(0)
                else
                    zmm0 = 0x3f800000
                
                *(rdx + r10_1) = zmm0.d
                
                if (r8 != r9_1 + 1)
                    zmm0 = zx.o(0)
                else
                    zmm0 = 0x3f800000
                
                result = &rdx[r11_1]
                i += 4
                rdx = &rdx[r11_1 * 4]
                *(result + r10_1) = zmm0.d
                r9_1 += 4
            while (i s< rbx_1 - 3)
        
        if (i s< rbx_1)
            result = r10_1 + ((r11_1 * i) << 2)
            
            do
                if (r8 != i)
                    zmm0 = zx.o(0)
                else
                    zmm0 = 0x3f800000
                
                *result = zmm0.d
                i += 1
                result += r11_1 << 2
            while (i s< rbx_1)
        
        r8 += 1
    while (r8 s< r12)

return result
