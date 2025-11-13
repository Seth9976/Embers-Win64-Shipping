// 函数: sub_141b2b890
// 地址: 0x141b2b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t zmm7 = j_sub_140ce3290(arg1)
double zmm1 = *(arg1 + 0xf4)
uint128_t zmm0 = data_1439e588c

if (not(zmm1.d f== zmm0.d))
    arg1[0x3a].d = zmm1.d
    *(arg1 + 0x1d4) = 1
    *(arg1 + 0xf4) = data_1439e588c.d
    zmm0 = data_1439e588c

zmm1 = arg1[0x1f].d

if (not(zmm1.d f== zmm0.d))
    arg1[0x26].d = zmm1.d
    *(arg1 + 0x134) = 1
    arg1[0x1f].d = data_1439e588c.d
    zmm0 = data_1439e588c

zmm1 = arg1[0x1e].d
int64_t rbx
rbx.b = 0
int64_t var_28 = zmm7
int64_t var_48

if (not(zmm1.d f== zmm0.d))
    if (not(zmm1.d f== 0f) && arg1[0x12].b != 2)
        void* rax_3 = sub_140d226f0(arg1, sub_141a6e000())
        var_48:4.d = 0
        rbx.b = 1
        int64_t r9_1 = *(rax_3 + 0x108)
        int64_t rax_4 = arg1[0x12]
        uint32_t r8_3 = (rax_4 u>> 0x20).d + 1
        _mm_cvtepi32_pd(zx.q(r9_1.d))
        
        if (rax_4.b == 1)
            r8_3 = (rax_4 u>> 0x20).d
        
        var_48.d = r8_3
        var_48 = var_48
        zmm0.d = _mm_cvtepi32_ps(zx.o((r9_1 u>> 0x20).d)).d f* var_48:4.d
        _mm_cvtps_pd(zmm0.q)
        _mm_cvtps_pd(arg1[0x1e].d.q)
        zmm0 = data_1439e588c
    
    arg1[0x1e].d = zmm0.d
    zmm0 = data_1439e588c

zmm1 = *(arg1 + 0xec)

if (not(zmm1.d f== zmm0.d))
    *(arg1 + 0xec) = zmm0.d
    rbx.b = 1
    _mm_cvtps_pd(zmm1)

void var_40
int64_t* result
int32_t zmm6
int64_t zmm7_1
result, zmm6, zmm7_1 = sub_141a514d0(&var_40)

if (rbx.b != 0)
    int64_t rbx_1 = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x110)
    void* rax_10 = sub_140d226f0(arg1, sub_141a6e000())
    uint128_t zmm1_1
    zmm1_1.q = _mm_cvtepi32_pd(zx.q(rbx_1.d)).q f/ _mm_cvtepi32_pd(zx.q((rbx_1 u>> 0x20).d)).q
    zmm1_1.q = zmm1_1.q f* zmm7_1
    int64_t rdx_6 = int.q(zmm1_1.q)
    uint128_t zmm0_1 = zmm1_1
    
    if (rdx_6 != -0x8000000000000000 && not(float.d(rdx_6) f== zmm1_1.q))
        zmm0_1.q = float.d(rdx_6 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
    
    zmm1_1.q = zmm1_1.q f- zmm0_1.q
    int32_t rcx_12 = int.d(zmm0_1.q)
    zmm0_1 = _mm_cvtpd_ps(zmm1_1)
    var_48.d = rcx_12
    
    if (zmm0_1.d f>= zmm6)
        zmm0_1 = _mm_min_ss(zmm0_1.d, 0x3f7fffff)
        
        if (zmm0_1.d f>= zmm6)
            var_48:4.d = _mm_min_ss(zmm0_1.d, 0x3f7fffff).d
        else
            var_48:4.d = 0
    else
        var_48:4.d = _mm_min_ss(zx.o(0).d, 0x3f7fffff).d
    
    result = sub_1408ec700(&var_48, var_48, rbx_1, *(rax_10 + 0x108))
    arg1[0x1d].d = *result

__security_check_cookie(rax_1 ^ &var_68)
return result
