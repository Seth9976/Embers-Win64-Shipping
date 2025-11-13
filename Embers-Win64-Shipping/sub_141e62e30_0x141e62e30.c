// 函数: sub_141e62e30
// 地址: 0x141e62e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rsi = 0
*arg2 = data_143dbb1f8.q
arg2[1].d = data_143dbb200
*(arg2 + 0x10) = data_14399f720
arg2[4] = data_143dbb1f8.q
arg2[5].d = data_143dbb200
*(arg2 + 0x2c) = data_143dbb1f8.q
*(arg2 + 0x34) = data_143dbb200
*(arg2 + 0x40) = data_14399f720
*(arg2 + 0x50) = data_14399f720
arg2[0xc] = data_143dbb1f8.q
arg2[0xd].d = data_143dbb200
*(arg2 + 0x6c) = data_143dbb1f8.q
*(arg2 + 0x74) = data_143dbb200
arg2[0xf] = 0
arg2[0x10] = 0
void* r8_1

if (data_143a2d2c4 != 0)
    r8_1 = *(arg1 + 0x10)

uint128_t zmm1

if (data_143a2d2c4 == 0 || (*(r8_1 + 0x100) & 0x20) == 0)
    arg2[4] = data_143dbb1f8.q
    arg2[5].d = data_143dbb200
else
    int64_t var_78
    sub_141e7df70(*(arg1 + 8), &var_78, r8_1 + 0x148, &arg2[0xf])
    zmm1 = zx.o(0)
    
    if (0f f>= *(*(arg1 + 0x10) + 0x154))
        *(arg2 + 0x7c) = 0
    else
        float zmm2 = arg2[0xf].d
        *(arg2 + 0x7c) = 0x49742400
        
        if (not(zmm2 <= 0f))
            uint128_t zmm0
            zmm0.d = (*(*(arg1 + 0x10) + 0x154)).d f/ zmm2
            
            if (not(zmm0.d f< 0f))
                zmm1 = __minss_xmmss_memss(zmm0.d, 0x49742400)
            
            *(arg2 + 0x7c) = zmm1.d
    
    if (*(*(arg1 + 0x18) + 0xc) != 2)
        arg2[4] = var_78
        int32_t var_70
        arg2[5].d = var_70
    else
        int64_t var_68[0x2]
        int64_t* rax_10 = sub_141e7df70(*(arg1 + 8), &var_68, arg1 + 0x48, nullptr)
        arg2[0xc] = *rax_10
        arg2[0xd].d = rax_10[1].d
        int64_t* rax_12 = sub_141e7df70(*(arg1 + 8), &var_68, arg1 + 0x54, nullptr)
        *(arg2 + 0x6c) = *rax_12
        *(arg2 + 0x74) = rax_12[1].d
        arg2[4] = data_143dbb1f8.q
        arg2[5].d = data_143dbb200

void* rax_17 = *(arg1 + 0x10)
*(arg2 + 0x2c) = *(rax_17 + 0x148)
*(arg2 + 0x34) = *(rax_17 + 0x150)
void* rcx_3 = *(*(arg1 + 0x10) + 0xc0)

if (rcx_3 == 0)
    *(arg2 + 0x40) = data_14399f720
else
    *(arg2 + 0x40) = *(rcx_3 + 0x220)
    rsi = *(*(*(arg1 + 0x10) + 0xc0) + 0x6d0)

void* rcx_5 = *(arg1 + 8)
uint128_t zmm3 = __andps_xmmxud_memxud(data_143f39a20, data_143f399d0)
zmm1.q = zx.o(0) u>> 0x40
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
float var_48[0x4] = zx.o(0)
uint128_t var_38 = zmm3
sub_141e7de80(rcx_5, rsi, &var_58)
*(arg2 + 0x10) = var_58
float var_70_1 = _mm_shuffle_ps(var_48, var_48, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(var_48, _mm_shuffle_ps(var_48, var_48, 0x55)[0].q)).q
arg2[1].d = var_70_1
__security_check_cookie(rax_1 ^ &var_98)
return arg2
