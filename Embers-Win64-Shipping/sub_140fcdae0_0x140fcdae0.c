// 函数: sub_140fcdae0
// 地址: 0x140fcdae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t var_48 = 0
int32_t result_1 = 0
int32_t var_18 = arg5[1].d
int64_t rax_2 = *arg1
int128_t var_28 = *arg5
int128_t zmm0 = *arg3
int128_t var_38 = zmm0
(*(rax_2 + 0x2f8))(zmm0, arg2, &var_38, &var_48, &var_28)
int32_t rcx = arg4[1].d
uint64_t result = zx.q(result_1)

if (result.d s> rcx)
    arg4[1].d = result.d
    
    if (result.d s> *(arg4 + 0xc))
        sub_140610660(arg4)
        result = zx.q(result_1)
else if (result.d s< rcx && rcx != result.d)
    arg4[1].d = result.d
    sub_1405a5010(arg4)
    result = zx.q(result_1)

if (result.d s> 0)
    int64_t r8_1 = 0
    int64_t rdx_3 = 0
    
    do
        int64_t rcx_4 = var_48
        rdx_3 += 4
        float zmm3[0x4] = zx.o(0)
        r8_1 += 0x10
        rdi += 1
        zmm3[0] = float.s(zx.d(*(rdx_3 + rcx_4 - 2)))
        zmm0.d = float.s(zx.d(*(rdx_3 + rcx_4 - 3)))
        uint32_t rax_5 = zx.d(*(rdx_3 + rcx_4 - 4))
        zmm3[0] = zmm3[0] * 0.00392156886f
        uint32_t rax_6 = zx.d(*(rdx_3 + rcx_4 - 1))
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        result = *arg4
        zmm0.d = zmm0.d f* 0.00392156886f
        zmm3[0] = zmm0.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3[0] = float.s(rax_5) f* 0.00392156886f
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
        zmm3[0] = float.s(rax_6) f* 0.00392156886f
        *(r8_1 + result - 0x10) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
    while (rdi s< result_1)

int64_t rcx_5 = var_48

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
