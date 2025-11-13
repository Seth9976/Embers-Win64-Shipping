// 函数: sub_14263a380
// 地址: 0x14263a380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t result = __security_cookie ^ &var_78
int64_t result_1 = result

if (arg3 != 0)
    float var_58[0x4]
    sub_140ade170(arg1 + 0x94, &var_58)
    float zmm0_1[0x4] = var_58
    float zmm3_1[0x4] = arg1[0x11].d
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x8c), 0)
    float var_48[0x4] = zmm0_1
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3_1, arg1[0x12].d[0].q)
    zmm0_1 = data_14399f670
    float var_38_1[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float var_28_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_1[0].q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    sub_141dc3850(arg3, &var_48, 0, nullptr)
    var_58[0].q = arg3
    result = sub_1405a9f90(&arg1[0xd], &var_58)

if (*(arg1 + 0x39) != 4)
    int32_t rax_1 = *(arg1 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_7
        int32_t temp1_1
        temp0_7:temp1_1 = sx.q(rax_1)
        uint32_t rdx_4 = zx.d(temp0_7)
        int32_t rax_3 = temp1_1 + rdx_4
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_4) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)
    
    if ((result.b & 1) != 0)
        *(arg1 + 0x39) = 4
    else
        result = (*(*arg1 + 0x2a0))(arg1, 0)

__security_check_cookie(result_1 ^ &var_78)
return result
