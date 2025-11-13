// 函数: sub_141f4a450
// 地址: 0x141f4a450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint128_t zmm0 = zx.o(*arg2)
int64_t* rcx = arg1[0x18]
float rax_2 = arg2[1].d
uint64_t var_58

if (rcx != 0 && (*(arg1 + 0x14c) & 0x10) == 0)
    void var_48
    (*(*rcx + 0x408))(rcx, &var_48, arg1[0x19], 0)
    float zmm1 = (zx.o(0)).d
    uint128_t var_28
    bool cond:0_1 = __andps_xmmxud_memxud(var_28, data_142d3f770).d f> 9.99999994e-09f
    var_58.o = var_28
    uint128_t zmm2
    
    if (cond:0_1)
        zmm2.d = 1f f/ var_28.d
    else
        zmm2 = zx.o(0)
    
    uint128_t zmm5_1 = var_58:4.d
    uint128_t zmm3
    
    if (__andps_xmmxud_memxud(zmm5_1, data_142d3f770).d f> 9.99999994e-09f)
        zmm3.d = 1f f/ zmm5_1.d
    else
        zmm3 = zx.o(0)
    
    int32_t var_50
    zmm5_1 = var_50
    
    if (not(__andps_xmmxud_memxud(zmm5_1, data_142d3f770).d f<= 9.99999994e-09f))
        zmm1 = 1f f/ zmm5_1.d
    
    zmm2.d = zmm2.d f* *arg2
    zmm3.d = zmm3.d f* *(arg2 + 4)
    rax_2 = zmm1 f* arg2[1].d
    zmm0 = _mm_unpacklo_ps(zmm2, zmm3.q)

var_58 = zmm0.q
float var_50_2 = rax_2
int64_t result = sub_141f48ee0(arg1, &var_58)
__security_check_cookie(rax_1 ^ &var_78)
return result
