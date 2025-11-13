// 函数: sub_142227c50
// 地址: 0x142227c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t var_d8 = arg2
uint64_t result

if (sub_140d3e110(arg2 + 0x100).b == 0 || *(var_d8 + 0xa0) == arg1)
    result.b = 0
else
    int128_t zmm1 = data_143dbb0d0
    int128_t var_88 = data_143dbb0c0
    int128_t zmm0 = data_143dbb0e0
    int64_t var_c0 = 0
    int64_t var_b8_1 = 0
    char var_e0 = 0
    char var_e8 = 0
    uint64_t* var_b0 = &var_88
    char* var_a0_1 = &var_e8
    char* var_98_1 = &var_e0
    uint64_t** var_c8_1 = &var_b0
    int128_t* (* var_d0)(int64_t* arg1) = sub_142212540
    int128_t var_78_1 = zmm1
    int128_t var_68_1 = zmm0
    void* var_a8_1 = arg1
    sub_142269e40(arg1 + 0xf0, &var_d0)
    float var_68_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x10), (*(arg1 + 0x18)).q), 
        _mm_unpacklo_ps(*(arg1 + 0x14), 0)[0].q)
    float var_58[0x3][0x4]
    sub_140ad7d70(arg3, &var_58, &var_88)
    void* var_a8_2 = arg1
    var_b0 = &var_d8
    float (* var_90_1)[0x4] = arg3
    float (* var_a0_2)[0x3][0x4] = &var_58
    int64_t* var_98_2 = &var_c0
    uint64_t** var_c8_2 = &var_b0
    var_d0 = j_sub_14220d920
    sub_14226a4e0(arg1 + 0xf0, &var_d0)
    sub_1422272c0(arg1)
    int64_t rcx_5 = var_c0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_108)
return result
