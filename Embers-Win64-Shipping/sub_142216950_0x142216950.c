// 函数: sub_142216950
// 地址: 0x142216950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4b] != 0 && (*(*arg1 + 0x6e0))() == 0)
    int64_t* rcx = arg1[0x4b]
    void var_28
    (*(*rcx + 0x6f8))(rcx, &var_28, arg2)
    return arg2

void* rsi = arg1[0x26]
uint64_t var_38
int32_t rax_8
uint128_t zmm0
float zmm1[0x4]

if (rsi == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_8 = data_143dbb210
else
    zmm1 = *(rsi + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rsi + 0x180), zmm1, 4))
    float var_18[0x4] = zmm1
    
    if (temp0_2 != 0)
        *(rsi + 0x180) = zmm1
        int32_t* rax_6 = sub_140adf5d0(&var_18, &var_38)
        *(rsi + 0x190) = *rax_6
        *(rsi + 0x198) = rax_6[2]
    
    zmm0 = zx.o(*(rsi + 0x190))
    rax_8 = *(rsi + 0x198)

var_38 = zmm0.q
*arg2 = var_38
arg2[2] = rax_8

if (not(__andps_xmmxud_memxud(*arg2, data_142d3f770).d f> 9.99999994e-09f))
    zmm1 = arg1[0x49].d
    
    if (not(zmm1[0] == 0f))
        *arg2 = zmm1[0]
        return arg2
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x232))).d f* 1.41176474f
    *arg2 = zmm0.d

return arg2
