// 函数: sub_14190d950
// 地址: 0x14190d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)

if (data_143f0f161 != 0)
    int64_t rax_1 = sub_14193da00(arg1 + 0x18, 1)
    double zmm2 = 1.8446744073709552e+19
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rax_1)
    
    if (rax_1 s< 0)
        zmm0[0] = zmm0[0] + zmm2
    
    int64_t rax_2 = data_143f0f168
    int64_t zmm1 = float.d(rax_2)
    
    if (rax_2 s< 0)
        zmm1 = zmm1 f+ zmm2
    
    zmm0[0] = zmm0[0] f/ zmm1

return _mm_cvtpd_ps(zmm0)
