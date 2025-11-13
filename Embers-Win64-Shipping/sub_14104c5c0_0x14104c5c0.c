// 函数: sub_14104c5c0
// 地址: 0x14104c5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)

if (data_143f0f161 != 0)
    void* rax_1 = sub_1410242b0(arg1 + 0x20, 1)
    double zmm2_1 = 1.8446744073709552e+19
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rax_1)
    
    if (rax_1 s< 0)
        zmm0[0] = zmm0[0] + zmm2_1
    
    int64_t rax_2 = data_143f0f168
    int64_t zmm1_1 = float.d(rax_2)
    
    if (rax_2 s< 0)
        zmm1_1 = zmm1_1 f+ zmm2_1
    
    zmm0[0] = zmm0[0] f/ zmm1_1

return _mm_cvtpd_ps(zmm0)
