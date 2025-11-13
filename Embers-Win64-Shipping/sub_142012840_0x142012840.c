// 函数: sub_142012840
// 地址: 0x142012840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t rax

if (rcx != 0)
    double zmm0_1[0x2]
    zmm0_1, rax = sub_142004530(rcx)
    float zmm2 = zmm0_1[0].d
    int64_t zmm1
    
    if (*(arg1 + 0x11) == 0)
        zmm1 = fconvert.d(arg2.d)
    else
        zmm1 = data_14399f938
    
    zmm0_1 = _mm_cvtps_pd((*(arg1 + 0x14))[0])
    zmm0_1[0] = zmm0_1[0] f+ zmm1
    int64_t temp0_2 = _mm_cvtpd_ps(zmm0_1)
    *(arg1 + 0x14) = temp0_2.d
    
    if (temp0_2.d f<= zmm2)
    label_1420128ad:
        sub_142007680(arg1, arg3)
        int64_t rax_1
        rax_1.b = 1
        return rax_1
    
    if (arg1[2].b != 0 && not(zmm2 == 0f))
        goto label_1420128ad

rax.b = 0
return rax
