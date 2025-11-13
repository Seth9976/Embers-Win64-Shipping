// 函数: sub_1425ec830
// 地址: 0x1425ec830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1425f0eb0(arg1, arg2, arg3)
void* rsi_1
void* r8

if (rax != 0)
    rsi_1 = arg1 + 0xa0
    r8 = rsi_1 + 0x120

int64_t result

if (rax == 0 || rsi_1 == r8)
label_1425ec889:
    sub_1405d1550(arg2)
    result.b = 0
else
    while (true)
        bool z_1
        
        if (0 == *(rsi_1 + 4))
            *(rsi_1 + 4) = 0
            z_1 = true
        else
            *(rsi_1 + 4)
            z_1 = false
        
        if (z_1)
            *arg5 = *rsi_1
            *(rsi_1 + 0x38) = zx.q(*(arg1 + 0x98))
            *(arg1 + 0x98) += 1
            *(rsi_1 + 0x10) = arg3
            *(rsi_1 + 0x18) = arg4
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            double zmm0_1[0x2] = zx.o(0)
            zmm0_1[0] = float.d(performanceCount)
            zmm0_1[0] = zmm0_1[0] f* data_143d796f8
            zmm0_1[0] = zmm0_1[0] * 10000000.0
            zmm0_1[0] = zmm0_1[0] + 167772160000000.5
            int64_t rcx_3 = int.q(zmm0_1[0])
            
            if (rcx_3 != -0x8000000000000000 && not(float.d(rcx_3) f== zmm0_1[0]))
                uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
                zmm0_1 = zx.o(0)
                zmm0_1[0] = float.d(rcx_3 - (zx.q(temp0_2) & 1))
            
            int64_t r8_1 = arg6
            int64_t rcx_5 = sx.q(arg6:4.d)
            int64_t rax_6 = int.q(zmm0_1[0])
            zmm0_1 = zx.o(0)
            *(rsi_1 + 0x40) = rax_6
            int64_t rax_7 = sx.q(r8_1.d)
            zmm0_1[0].d = float.s(rcx_5 * rcx_5 + rax_7 * rax_7)
            
            if (int.d(_mm_sqrt_ss(0, zmm0_1[0].d).d) == 0)
                void* rcx_8 = *arg2
                int32_t var_14_1 = *(rcx_8 + 0x64)
                r8_1 = (*(rcx_8 + 0x60)).q
            
            void* rcx_9 = *(rsi_1 + 8)
            
            if (*(rcx_9 + 0x60) != r8_1.d || *(rcx_9 + 0x64) != (r8_1 u>> 0x20).d)
                sub_1425f1850(arg1, rsi_1, r8_1)
            
            sub_1425ecb70(arg2, rsi_1 + 8, nullptr)
            *(rsi_1 + 4)
            *(rsi_1 + 4) = 1
            sub_1405d1550(arg2)
            result.b = 1
            break
        
        rsi_1 += 0x60
        
        if (rsi_1 == r8)
            goto label_1425ec889

return result
