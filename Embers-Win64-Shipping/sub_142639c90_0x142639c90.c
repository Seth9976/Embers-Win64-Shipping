// 函数: sub_142639c90
// 地址: 0x142639c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* result = sub_1423de540(data_143f5b298, arg2, 1)
float var_98[0x4]
void* result_1

if (result == 0)
    result_1 = *arg3
else
    uint128_t zmm6_1
    float zmm7_1[0x4]
    zmm6_1, zmm7_1 = sub_140ade170(arg1 + 0x94, &var_98)
    bool cond:0_1 = *(arg1 + 0xa0) == 0
    float zmm0_1[0x4] = var_98
    float zmm3_1[0x4] = *(arg1 + 0x88)
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x8c), 0)
    float var_58[0x4] = zmm0_1
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3_1, (*(arg1 + 0x90))[0].q)
    zmm0_1 = data_14399f670
    float var_48_1[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float var_38_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_1[0].q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    int64_t* rbx_1
    
    if (cond:0_1)
        rbx_1 = nullptr
    else
        void* rax_2 = sub_142452380()
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = *(arg1 + 0xa0)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> rbx_1[7].d || *(rbx_1[6] + (rax_3 << 3)) != rax_2 + 0x30)
                rbx_1 = nullptr
    
    void var_88
    sub_142427eb0(&var_88)
    char var_5f
    char var_5f_1 = var_5f | 4
    char var_60_1 = 1
    int128_t var_78_1 = zx.o(0)
    
    if (rbx_1 == 0)
        result_1 = nullptr
    else
        float zmm9[0x4]
        result = sub_1420eeee0(result, rbx_1, &var_58, &var_88, zmm6_1, zmm7_1, zmm9)
        result_1 = result
        
        if (result == 0)
            result_1 = nullptr
        else
            void* rax_5 = sub_142452380()
            void* rcx_5 = *(result_1 + 0x10)
            int64_t rdx_3 = sx.q(*(rax_5 + 0x38))
            
            if (rdx_3.d s> *(rcx_5 + 0x38) || *(*(rcx_5 + 0x30) + (rdx_3 << 3)) != rax_5 + 0x30)
                result_1 = nullptr
    
    *arg3 = result_1

if (result_1 != 0)
    result.b = 1
else
    var_98[0].q = result_1
    sub_1405a9f90(arg1 + 0x78, &var_98)
    result.b = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
