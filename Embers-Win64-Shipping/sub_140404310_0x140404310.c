// 函数: sub_140404310
// 地址: 0x140404310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg7)
int64_t result = sx.q(arg8)
void* rdx = arg1

if (r15 s< result)
    int32_t rbx_1 = arg13
    int128_t zmm6 = 0x80000000
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    int32_t i_2 = 1 << arg4.b
    int128_t zmm11
    int128_t var_98_1 = zmm11
    uint128_t zmm12 = 0x3fe62e42fefa39ef
    
    do
        int64_t rax = *(rdx + 0x20)
        int32_t rsi_2 = sx.d(*(rax + (r15 << 1) + 2)) - sx.d(*(rax + (r15 << 1)))
        uint128_t zmm0
        zmm0.d =
            _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(*(arg12 + (r15 << 2)) + 1), rsi_2 << arg4.b))).d
            f* -0.125f
        zmm0.q = _mm_cvtps_pd(zmm0.q).q f* zmm12.q
        zmm7 = zx.o(0)
        int32_t rax_8 = rsi_2 << arg4.b
        zmm7[0] = fconvert.s(exp(zmm0.q))
        zmm7[0] = zmm7[0] * 0.5f
        float zmm1[0x4] = zx.o(0)
        int64_t r12_1 = 0
        int32_t r14_1 = 0
        int32_t var_e8_1 = 0
        arg7 = 0
        zmm1[0] = fconvert.s(sqrt(_mm_cvtepi32_pd(zx.q(rax_8)).q).q)
        zmm11.d = 1f / zmm1[0]
        int32_t rdx_9
        
        do
            int64_t rcx_3 = sx.q(*(arg1 + 8))
            int32_t rdi_1 = 0
            int64_t rax_12 = rcx_3 * r12_1 + r15
            zmm1 = *(arg10 + (rax_12 << 2))
            zmm0 = *(arg11 + (rax_12 << 2))
            
            if (arg5 == 1)
                int64_t rdx_3 = rcx_3 + r15
                float zmm2[0x4] = *(arg10 + (rdx_3 << 2))
                
                if (not(zmm1[0] > zmm2[0]))
                    zmm1 = zmm2
                
                zmm2 = *(arg11 + (rdx_3 << 2))
                
                if (not(zmm0.d f> zmm2[0]))
                    zmm0 = zmm2
            
            if (not(zmm0.d f> zmm1[0]))
                zmm1 = zmm0
            
            zmm0.d = (*(arg9 + (rax_12 << 2))).d f- zmm1[0]
            
            if (not(0f f<= zmm0.d))
                zmm0 = zx.o(0)
            
            zmm0.q = fconvert.d((zmm0 ^ zmm6).d)
            zmm0.q = zmm0.q f* zmm12.q
            zmm1 = zx.o(0)
            zmm1[0] = fconvert.s(exp(zmm0.q).q)
            zmm1[0] = zmm1[0] * 2f
            
            if (arg4 == 3)
                zmm1[0] = zmm1[0] * 1.41421354f
            
            if (not(zmm1[0] <= zmm7[0]))
                zmm1 = zmm7
            
            int64_t r8_3 = 0
            int64_t rax_14 = *(arg1 + 0x20)
            zmm1[0] = zmm1[0] f* zmm11.d
            int32_t r9_1 = 1
            int64_t* r10_1 =
                arg2 + ((sx.q(sx.d(*(rax_14 + (r15 << 1))) << arg4.b) + sx.q(r14_1)) << 2)
            
            if (i_2 s> 0)
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    if (((sx.q(arg5) * r15 + r12_1)[arg3] & r9_1.b) == 0)
                        int32_t rdx_6 = 0
                        
                        if (rsi_2 s> 0)
                            do
                                zmm0 = zmm1
                                rbx_1 = rbx_1 * 0x19660d + 0x3c6ef35f
                                
                                if (not(test_bit(rbx_1, 0xf)))
                                    zmm0 ^= zmm6
                                
                                int32_t rax_18 = rdx_6
                                rdx_6 += 1
                                *(r10_1 + ((sx.q(rax_18 << arg4.b) + r8_3) << 2)) = zmm0.d
                            while (rdx_6 s< rsi_2)
                        
                        rdi_1 = 1
                    
                    r9_1 = rol.d(r9_1, 1)
                    r8_3 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                
                if (rdi_1 != 0)
                    zmm6 = sub_14040b790(r10_1, rax_8, 0x3f800000)
            
            r12_1 += 1
            arg7 += arg6
            rdx_9 = var_e8_1 + 1
            r14_1 = arg7
            var_e8_1 = rdx_9
        while (rdx_9 s< arg5)
        result = sx.q(arg8)
        rdx = arg1
        r15 += 1
    while (r15 s< result)

return result
