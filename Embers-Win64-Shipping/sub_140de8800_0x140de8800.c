// 函数: sub_140de8800
// 地址: 0x140de8800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rcx = arg2[1].d
int64_t rdi = sx.q(arg3)
int128_t zmm14
zmm14.d = 1f f/ _mm_cvtepi32_ps(zx.o(rcx - rdi.d)).d
int64_t result

if (rdi.d s>= rcx - 1)
    int64_t r9_2 = *arg2
    int64_t rbx_1 = rdi * 3
    sub_140e25d50(r9_2 + ((sx.q((rdi - 1).d) * 3 + 1) << 3), r9_2 + 8 + (rbx_1 << 3), arg8, arg4, 
        arg5, arg6, arg7, arg1, 0x3f800000)
    void var_128
    sub_140ae16d0(*arg2 + ((rbx_1 + 1) << 3), &var_128, *(arg8 + 0x28))
    result = sub_140e10e60(arg1, arg7, &var_128)
else
    int64_t r8 = *arg2
    int128_t zmm2 = *arg5
    int128_t zmm3 = *(arg5 + 4)
    uint128_t* rax_6 = arg6
    uint128_t zmm0 = *rax_6
    int128_t zmm1 = *(rax_6 + 4)
    int128_t zmm10 = *arg7
    uint128_t zmm7
    zmm7.d = zmm0.d f- zmm2.d
    int128_t zmm11 = *(arg7 + 4)
    int128_t zmm9
    zmm9.d = zmm10.d f- zmm0.d
    int128_t zmm8
    zmm8.d = zmm11.d f- zmm1.d
    zmm7.d = zmm7.d f* zmm14.d
    int128_t zmm13
    zmm13.d = zmm2.d f- *arg4
    zmm9.d = zmm9.d f* zmm14.d
    int128_t zmm12
    zmm12.d = zmm3.d f- arg4[1]
    zmm7.d = zmm7.d f+ zmm2.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm13.d = zmm13.d f* zmm14.d
    zmm2.d = zmm1.d f- zmm3.d
    int32_t var_f0 = zmm10.d
    zmm8.d = zmm8.d f+ zmm1.d
    zmm12.d = zmm12.d f* zmm14.d
    zmm13.d = zmm13.d f+ *arg4
    zmm9.d = zmm9.d f+ zmm0.d
    int32_t var_ec_1 = zmm11.d
    zmm12.d = zmm12.d f+ arg4[1]
    zmm0 = zx.o(*arg4)
    zmm2.d = zmm2.d f* zmm14.d
    uint128_t zmm6
    zmm6.d = zmm7.d f- zmm13.d
    int32_t var_118 = zmm13.d
    int32_t var_114_1 = zmm12.d
    zmm2.d = zmm2.d f+ zmm3.d
    int32_t var_f8 = zmm9.d
    int128_t zmm4
    zmm4.d = zmm9.d f- zmm7.d
    int32_t var_f4_1 = zmm8.d
    uint64_t var_120 = zmm0.q
    zmm6.d = zmm6.d f* zmm14.d
    zmm3.d = zmm8.d f- zmm2.d
    zmm4.d = zmm4.d f* zmm14.d
    zmm6.d = zmm6.d f+ zmm13.d
    zmm3.d = zmm3.d f* zmm14.d
    zmm4.d = zmm4.d f+ zmm7.d
    zmm3.d = zmm3.d f+ zmm2.d
    int32_t var_110 = zmm6.d
    int32_t var_100 = zmm4.d
    float zmm5 = (zmm2.d f- zmm12.d) f* zmm14.d f+ zmm12.d
    zmm2.d = zmm4.d f- zmm6.d
    int32_t var_fc_1 = zmm3.d
    zmm1.d = zmm3.d f- zmm5
    float var_10c_1 = zmm5
    zmm2.d = zmm2.d f* zmm14.d
    zmm1.d = zmm1.d f* zmm14.d
    zmm2.d = zmm2.d f+ zmm6.d
    zmm1.d = zmm1.d f+ zmm5
    int32_t var_108 = zmm2.d
    int32_t var_104_1 = zmm1.d
    sub_140e25d50(r8 + 8 + sx.q((rdi - 1).d) * 0x18, r8 + ((rdi * 3 + 1) << 3), arg8, &var_120, 
        &var_118, &var_110, &var_108, arg1, 0x3f800000)
    result =
        sub_140de8800(arg1, arg2, zx.q((rdi + 1).d), &var_108, &var_100, &var_f8, &var_f0, arg8)

__security_check_cookie(rax_1 ^ &var_178)
return result
