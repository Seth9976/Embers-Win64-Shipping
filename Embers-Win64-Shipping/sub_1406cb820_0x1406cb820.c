// 函数: sub_1406cb820
// 地址: 0x1406cb820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
arg2[1].d = 0

if (rdx s> *(arg2 + 0xc))
    sub_14061cd70(arg2, rdx)

int32_t* rbx = *arg1
uint64_t result = sx.q(arg1[1].d)
void* rbp = &rbx[result]

if (rbx != rbp)
    uint128_t zmm6 = 0x3f70101010101010
    int32_t var_2c_1 = 0x3f800000
    
    do
        int32_t rcx_1 = *rbx
        uint128_t zmm0
        zmm0.q = _mm_cvtepi32_pd(zx.q((rcx_1 u>> 0x10).b)).q f* zmm6.q
        int32_t temp0_2 = _mm_cvtpd_ps(zmm0)
        zmm0.q = _mm_cvtepi32_pd(zx.q((rcx_1 u>> 8).b)).q f* zmm6.q
        uint128_t zmm1
        zmm1.q = _mm_cvtepi32_pd(zx.q(rcx_1.b)).q f* zmm6.q
        int32_t var_38 = temp0_2
        int32_t var_34_1 = _mm_cvtpd_ps(zmm0)
        int32_t var_30_1 = _mm_cvtpd_ps(zmm1).d
        uint128_t var_28
        zmm6 = sub_1406d0c20(&var_28, &var_38)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_7 = (rsi_1 + 1).d
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_140610660(arg2)
        
        result = *arg2
        rbx = &rbx[1]
        *(result + rsi_1 * 0x10) = var_28
    while (rbx != rbp)

return result
