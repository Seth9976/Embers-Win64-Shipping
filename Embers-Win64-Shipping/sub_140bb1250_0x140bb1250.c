// 函数: sub_140bb1250
// 地址: 0x140bb1250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg1 + 0x110)

if (result u<= 2)
    result.b = 0
else
    if (result == 3)
        sub_140ba8c30(arg1)
    
    if (arg4 != 0)
        char rax = sub_140bb0fd0(arg1, arg2, arg3, 1, 0)
        char rbx_1 = rax
        
        if (rax == 0 && arg5 != rax)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            double zmm0_1[0x2] = zx.o(0)
            zmm0_1[0] = float.d(performanceCount)
            zmm0_1[0] = zmm0_1[0] f* data_143d796f8
            zmm0_1[0] = zmm0_1[0] + 16777216.0
            zmm0_1[0] = zmm0_1[0] f- arg6
            int128_t zmm1_1
            zmm1_1.d = arg7.d f- _mm_cvtpd_ps(zmm0_1)[0].d
            
            if (not(zmm1_1.d f<= 0.00101000001f) && sub_140bbdcf0(arg1, zmm1_1) != 0)
                rbx_1 = 1
        
        return zx.d(rbx_1)
    
    result.b = 1

return result
