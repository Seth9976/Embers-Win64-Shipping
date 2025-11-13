// 函数: sub_1403ec7b0
// 地址: 0x1403ec7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t rbx = sx.q(arg3)
int16_t var_38[0x10]
int32_t result = sub_1403e7cd0(&var_38, arg2, rbx.d)
int64_t i = 0
uint128_t zmm0

if (rbx s>= 4)
    void* rcx_1 = arg1 + 8
    
    do
        int32_t rax_2 = sx.d(var_38[i])
        i += 4
        rcx_1 += 0x10
        void var_3e
        int32_t rax_3 = sx.d(*(&var_3e + (i << 1)))
        zmm0 = _mm_cvtepi32_ps(zx.o(rax_2))
        void var_3c
        int32_t rax_4 = sx.d(*(&var_3c + (i << 1)))
        zmm0.d = zmm0.d f* 0.000244140625f
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_3))
        *(rcx_1 - 0x18) = zmm0.d
        void var_3a
        result = sx.d(*(&var_3a + (i << 1)))
        zmm1.d = zmm1.d f* 0.000244140625f
        zmm0 = _mm_cvtepi32_ps(zx.o(rax_4))
        *(rcx_1 - 0x14) = zmm1.d
        zmm0.d = zmm0.d f* 0.000244140625f
        *(rcx_1 - 0x10) = zmm0.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 0.000244140625f
        *(rcx_1 - 0xc) = zmm1.d
    while (i s< rbx - 3)

while (i s< rbx)
    result = sx.d(var_38[i])
    i += 1
    zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* 0.000244140625f
    *(arg1 + (i << 2) - 4) = zmm0.d

__security_check_cookie(rax_1 ^ &var_58)
return result
