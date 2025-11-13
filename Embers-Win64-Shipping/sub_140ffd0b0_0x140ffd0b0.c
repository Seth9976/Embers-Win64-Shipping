// 函数: sub_140ffd0b0
// 地址: 0x140ffd0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result = data_143e2c098
uint64_t rsi = zx.q(arg1.w)
uint64_t rdi_1 = zx.q(arg1 u>> 0x10)

if ((*(*(rdi_1 * 0x78 + result + 0x50) + rsi * 0x1d0 + 0x120) & 6) != 0)
    void var_b4
    memset(&var_b4, 0, 0x6c)
    uint32_t var_b8 = zx.d(arg2) * 2
    
    if (arg2 != 0)
        float zmm0_1[0x2] = *((sx.q(arg3) << 5) + &data_142ef4a70)
        float var_a8_1[0x2] = _mm_cvtps_pd(*((sx.q(arg3) << 5) + 0x142ef4a74))
        float var_b0_1[0x2] = _mm_cvtps_pd(zmm0_1)
        zmm0_1 = *((sx.q(arg3) << 5) + 0x142ef4a78)
        float var_98_1[0x2] = _mm_cvtps_pd(*((sx.q(arg3) << 5) + 0x142ef4a7c))
        float var_a0_1[0x2] = _mm_cvtps_pd(zmm0_1)
        zmm0_1 = *((sx.q(arg3) << 5) + 0x142ef4a80)
        float var_88_1[0x2] = _mm_cvtps_pd(*((sx.q(arg3) << 5) + 0x142ef4a84))
        float var_90_1[0x2] = _mm_cvtps_pd(zmm0_1)
        zmm0_1 = *((sx.q(arg3) << 5) + 0x142ef4a88)
        float var_78_1[0x2] = _mm_cvtps_pd(*((sx.q(arg3) << 5) + 0x142ef4a8c))
        float var_80_1[0x2] = _mm_cvtps_pd(zmm0_1)
        float var_70_1[0x2] = _mm_cvtps_pd(arg5)
        float var_68_1[0x2] = fconvert.d(arg4.d)
        float var_58_1[0x2] = _mm_cvtps_pd(arg7)
        float var_60_1[0x2] = _mm_cvtps_pd(arg6)
    
    result = agsSetDisplayMode(data_143e2c068, rdi_1.d, rsi.d, &var_b8)

__security_check_cookie(rax_1 ^ &var_d8)
return result
