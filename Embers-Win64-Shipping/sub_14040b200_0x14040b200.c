// 函数: sub_14040b200
// 地址: 0x14040b200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint64_t result = zx.q(arg5 * 2)
uint64_t i_1 = zx.q(arg4)
int32_t* rdi = arg1

if (result.d s< arg2)
    result = sx.q(arg6)
    
    if (result.d != 0)
        uint128_t zmm7
        zmm7.d = _mm_cvtepi32_ps(zx.o(arg2)).d
            f/ _mm_cvtepi32_ps(zx.o(*((result << 2) + 0x14370089c) * arg5 + arg2)).d
        zmm7.d = zmm7.d f* zmm7.d
        zmm7.d = zmm7.d f* 0.5f
        uint128_t zmm0
        zmm0.d = zmm7.d f* 1.57079637f
        double zmm0_1 = cos(_mm_cvtps_pd(zmm0.q).q)
        float zmm1[0x2] = 0x3f800000
        zmm1[0] = 1f f- zmm7.d
        int128_t zmm8
        zmm8.d = fconvert.s(zmm0_1)
        zmm1[0] = zmm1[0] * 1.57079637f
        int128_t zmm6
        zmm6.d = fconvert.s(cos(_mm_cvtps_pd(zmm1)).q)
        
        if (arg2 s>= (i_1 << 3).d)
            rbx = 1
            int32_t rcx_4 = i_1.d s>> 2
            
            if (rcx_4 + (i_1 << 1).d s< arg2)
                do
                    rbx += 1
                while ((rbx + 1) * rbx * i_1.d + rcx_4 s< arg2)
        
        result = zx.q(divs.dp.d(sx.q(arg2), i_1.d))
        int64_t rsi_1 = sx.q(result.d)
        
        if (i_1.d s> 0)
            uint64_t i
            
            do
                if (arg3 s>= 0)
                    result, zmm6 = sub_14040b3c0(rdi, rsi_1.d, 1, zmm8.d, (zmm6 ^ 0x80000000).d)
                    
                    if (rbx != 0)
                        result, zmm6 =
                            sub_14040b3c0(rdi, rsi_1.d, rbx, zmm6.d, (zmm8 ^ 0x80000000).d)
                else
                    if (rbx != 0)
                        zmm6 = sub_14040b3c0(rdi, rsi_1.d, rbx, zmm6.d, zmm8.d)
                    
                    result, zmm6 = sub_14040b3c0(rdi, rsi_1.d, 1, zmm8.d, zmm6.d)
                
                rdi = &rdi[rsi_1]
                i = i_1
                i_1 -= 1
            while (i != 1)

return result
