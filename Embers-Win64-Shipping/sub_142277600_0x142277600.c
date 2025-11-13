// 函数: sub_142277600
// 地址: 0x142277600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_678
int64_t rax_1 = __security_cookie ^ &var_678
void* result = arg1[0x57]

if (result != 0 && (*(result + 0x2710) & 0x80) != 0)
    int32_t var_634_1 = 0
    void var_658
    int64_t* rax_2 = sub_14200cc70(&var_658, arg2, arg1)
    int64_t* rcx_1 = arg1[0x57]
    uint128_t zmm8 = zx.o(*rax_2)
    int32_t rbx_1 = rax_2[1].d
    uint128_t zmm7 = _mm_cvtepi32_ps(zx.o((arg3 s>> 0x10).w))
    int64_t rax_7 = *rcx_1
    zmm7.d = zmm7.d f* 0.00549316406f
    uint128_t zmm6
    zmm6.d = _mm_cvtepi32_ps(zx.o(arg3.w)).d f* 0.00549316406f
    uint64_t var_628
    (*(rax_7 + 0x660))(rcx_1, &var_628)
    int64_t* rcx_2 = arg1[0x57]
    int64_t var_61c_1 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
    var_628 = zmm8.q
    int32_t var_620_1 = rbx_1
    int32_t var_614_1 = var_634_1
    result = sub_14226a8c0(rcx_2, &var_628)
    char var_68_1 = 0
    int64_t var_b8
    
    if (var_b8 != 0)
        result = sub_140a74f90(var_b8)

__security_check_cookie(rax_1 ^ &var_678)
return result
