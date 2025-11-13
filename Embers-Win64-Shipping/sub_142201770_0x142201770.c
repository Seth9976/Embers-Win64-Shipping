// 函数: sub_142201770
// 地址: 0x142201770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8
int32_t arg_18 = r8
void* var_30 = arg4
int32_t var_28
sub_141fe56b0(arg1 + 0x30, &var_28, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
uint128_t zmm1 = var_28
int32_t var_24
uint128_t zmm2_1 = var_24
int32_t result_2
uint128_t result_3 = result_2
uint128_t zmm0
zmm0.d = zmm1.d f+ *(arg5 + 0x50)
*(arg5 + 0x50) = zmm0.d
zmm0.d = zmm2_1.d f+ *(arg5 + 0x54)
*(arg5 + 0x54) = zmm0.d
zmm0.d = result_3.d f+ *(arg5 + 0x58)
*(arg5 + 0x58) = zmm0.d
uint64_t result = zx.q(*(*(*(arg2 + 0x28) + 0x30) + 0xd0))

if (result.d u<= 7)
    switch (result)
        case 1
            zmm1 ^= 0x80000000
            zmm2_1 ^= 0x80000000
            result_3 ^= 0x80000000
        case 2
            zmm1 ^= data_142d3f780
        case 3
            zmm2_1 ^= data_142d3f780
        case 4
            int32_t rax_2 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_2
            zmm0.d = (rax_2 u>> 9 | 0x3f800000).d f- 1f
            uint64_t var_18
            int32_t result_1
            
            if (zmm0.d f<= 0.5f)
                var_18 = var_28.q
                result_1 = result_2
            else
                var_18.d = (zmm1 ^ 0x80000000).d
                var_18:4.d = (zmm2_1 ^ 0x80000000).d
                result_1 = (result_3 ^ 0x80000000).d
            
            zmm1 = zx.o(var_18)
            result = zx.q(result_1)
            int32_t result_4 = result.d
            zmm2_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            result_3 = result_4
            var_28.q = zmm1.q
            zmm1 = var_28
        case 5
            int32_t rax_7 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_7
            result = zx.q(rax_7 u>> 9) | 0x3f800000
            zmm0.d = result.d.d f- 1f
            
            if (not(zmm0.d f<= 0.5f))
                zmm1 ^= data_142d3f780
        case 6
            int32_t rax_10 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_10
            result = zx.q(rax_10 u>> 9) | 0x3f800000
            zmm0.d = result.d.d f- 1f
            
            if (not(zmm0.d f<= 0.5f))
                zmm2_1 ^= data_142d3f780
        case 7
            int32_t rcx_5 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            zmm0.d = (rcx_5 u>> 9 | 0x3f800000).d f- 1f
            
            if (not(zmm0.d f<= 0.5f))
                zmm1 ^= 0x80000000
            
            *(arg4 + 4) = rcx_5 * 0xbb38435 + 0x3619636b
            result = zx.q((rcx_5 * 0xbb38435 + 0x3619636b) u>> 9) | 0x3f800000
            zmm0.d = result.d.d f- 1f
            
            if (not(zmm0.d f<= 0.5f))
                zmm2_1 ^= 0x80000000

zmm1.d = zmm1.d f+ *(arg5 + 0x40)
zmm2_1.d = zmm2_1.d f+ *(arg5 + 0x44)
result_3.d = result_3.d f+ *(arg5 + 0x48)
*(arg5 + 0x40) = zmm1.d
*(arg5 + 0x44) = zmm2_1.d
*(arg5 + 0x48) = result_3.d
return result
