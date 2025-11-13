// 函数: sub_141ebb170
// 地址: 0x141ebb170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
float zmm6[0x4] = *arg3
float zmm7[0x4] = arg3[2]
float zmm5[0x4] = data_143f3a5f0
uint32_t var_98[0x4] = arg3[1]
int32_t zmm2[0x8]
zmm2[0].o = zmm5
uint32_t var_88[0x4] = __andps_xmmxud_memxud(data_143f3a510, data_143f3a520)
float temp0_1[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float var_b8 = zmm7[0]
float var_b4 = temp0_2[0]
float temp0_5[0x4] = _mm_add_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0x4e))
float var_b0 = temp0_3[0]
float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x39), temp0_5)
float temp0_8[0x4] = _mm_rsqrt_ps(temp0_7)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm5)
uint32_t zmm0[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_8, temp0_8), temp0_9)
zmm2[0].o = _mm_sub_ps(zmm2[0].o, zmm0)
zmm2[0].o = _mm_mul_ps(zmm2[0].o, temp0_8)
zmm2[0].o = _mm_add_ps(zmm2[0].o, temp0_8)
zmm0 = _mm_mul_ps(_mm_mul_ps(zmm2[0].o, zmm2[0].o), temp0_9)
float zmm1[0x4] = _mm_and_ps(temp0_2, 0x7fffffff)
float temp0_18[0x4] = _mm_sub_ps(zmm5, zmm0)
zmm0 = _mm_cmpeq_ps(data_143f3a600, temp0_7, 2)
float temp0_21[0x4] = _mm_add_ps(_mm_mul_ps(temp0_18, zmm2[0].o), zmm2[0].o)
zmm2[0].o = zmm7
zmm2[0].o = _mm_and_ps(zmm2[0].o, 0x7fffffff)
bool cond:0 = zmm1[0] f>= zmm2[0]
zmm5 = _mm_and_ps(_mm_mul_ps(temp0_21, zmm6) ^ data_143f3a5e0, zmm0) ^ data_143f3a5e0
*(arg2 + 0xc) = data_143dbb1f8.q
int32_t rax_2 = data_143dbb200
*(arg2 + 0x14) = rax_2
*arg2 = *(arg2 + 0xc)
arg2[1].d = rax_2
float var_a8[0x4] = zmm5
arg2[3].b = 0

if (not(cond:0))
    zmm7 = temp0_2

float temp0_25[0x4] = _mm_min_ss(zmm1[0], zmm2[0])

if (not(_mm_and_ps(temp0_3, 0x7fffffff)[0] f>= temp0_25[0]))
    zmm7 = temp0_3

int32_t i_4 = 0
int32_t i = 0
int64_t var_d8

if (*(arg1 + 8) s> 0)
    do
        int64_t* rax_3
        rax_3, zmm2, zmm7 = sub_141ebc270((sx.q(i) << 6) + *arg1, &var_d8, &var_a8, zmm7)
        
        if (arg2[3].b == 0)
            if (rax_3[3].b != 0)
                *arg2 = *rax_3
                arg2[2] = rax_3[2]
                arg2[3].d = rax_3[3].d
        else if (rax_3[3].b != 0)
            *arg2 = __minss_xmmss_memss((*arg2)[0], *rax_3)[0]
            *(arg2 + 4) = __minss_xmmss_memss((*(rax_3 + 4))[0], *(arg2 + 4))[0]
            arg2[1].d = __minss_xmmss_memss(rax_3[1].d[0], arg2[1].d)[0]
            *(arg2 + 0xc) = __maxss_xmmss_memss((*(rax_3 + 0xc))[0], *(arg2 + 0xc))[0]
            arg2[2].d = __maxss_xmmss_memss(rax_3[2].d[0], arg2[2].d)[0]
            *(arg2 + 0x14) = __maxss_xmmss_memss((*(rax_3 + 0x14))[0], *(arg2 + 0x14))[0]
        
        i += 1
    while (i s< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0x18) s> 0)
    int64_t rsi = 0
    
    do
        void* rcx_3 = *(arg1 + 0x10)
        zmm0 = zx.o(data_143dbb1f8.q)
        zmm2[0].o = zmm7
        int32_t rax_5 = data_143dbb200
        int64_t var_cc_1 = zmm0.q
        zmm1 = *(rsi + rcx_3 + 0x4c)
        var_d8 = zmm0.q
        char var_c0_1 = 0
        zmm2, zmm7 = sub_140338c50(&var_d8, &var_a8, zmm2, rcx_3 + 0x3c + rsi, rcx_3 + 0x30 + rsi, 
            (*(rsi + rcx_3 + 0x48))[0], zmm1[0], (*(rsi + rcx_3 + 0x50))[0])
        
        if (arg2[3].b == 0)
            if (var_c0_1 != 0)
                *arg2 = var_d8.o
                arg2[2] = var_cc_1
                arg2[3].d = var_c0_1.d
        else if (var_c0_1 != 0)
            zmm0 = __minss_xmmss_memss((*arg2)[0], var_d8.d)
            float temp0_34[0x4] = __minss_xmmss_memss(var_d8:4.d[0], *(arg2 + 4))
            *arg2 = zmm0[0]
            zmm0 = __minss_xmmss_memss(rax_5[0], arg2[1].d)
            *(arg2 + 4) = temp0_34[0]
            float temp0_36[0x4] = __maxss_xmmss_memss(var_cc_1.d[0], *(arg2 + 0xc))
            arg2[1].d = zmm0[0]
            zmm0 = __maxss_xmmss_memss(arg2[2].d[0], var_cc_1:4.d)
            *(arg2 + 0xc) = temp0_36[0]
            float temp0_38[0x4] = __maxss_xmmss_memss((*(arg2 + 0x14))[0], rax_5)
            arg2[2].d = zmm0[0]
            *(arg2 + 0x14) = temp0_38[0]
        
        i_1 += 1
        rsi += 0x58
    while (i_1 s< *(arg1 + 0x18))

int32_t i_2 = 0

if (*(arg1 + 0x28) s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rcx_5 = *(arg1 + 0x20)
        zmm0 = zx.o(data_143dbb1f8.q)
        zmm2[0].o = zmm7
        int32_t rax_9 = data_143dbb200
        zmm1 = *(rsi_1 + rcx_5 + 0x48)
        int64_t var_cc_2 = zmm0.q
        var_d8 = zmm0.q
        char var_c0_2 = 0
        zmm2, zmm7 = sub_140338dd0(&var_d8, &var_a8, zmm2, rcx_5 + 0x3c + rsi_1, 
            rcx_5 + 0x30 + rsi_1, zmm1[0], (*(rsi_1 + rcx_5 + 0x4c))[0])
        
        if (arg2[3].b == 0)
            if (var_c0_2 != 0)
                *arg2 = var_d8.o
                arg2[2] = var_cc_2
                arg2[3].d = var_c0_2.d
        else if (var_c0_2 != 0)
            zmm0 = __minss_xmmss_memss((*arg2)[0], var_d8.d)
            float temp0_40[0x4] = __minss_xmmss_memss(var_d8:4.d[0], *(arg2 + 4))
            *arg2 = zmm0[0]
            zmm0 = __minss_xmmss_memss(rax_9[0], arg2[1].d)
            *(arg2 + 4) = temp0_40[0]
            float temp0_42[0x4] = __maxss_xmmss_memss(var_cc_2.d[0], *(arg2 + 0xc))
            arg2[1].d = zmm0[0]
            zmm0 = __maxss_xmmss_memss(arg2[2].d[0], var_cc_2:4.d)
            *(arg2 + 0xc) = temp0_42[0]
            float temp0_44[0x4] = __maxss_xmmss_memss((*(arg2 + 0x14))[0], rax_9)
            arg2[2].d = zmm0[0]
            *(arg2 + 0x14) = temp0_44[0]
        
        i_2 += 1
        rsi_1 += 0x50
    while (i_2 s< *(arg1 + 0x28))

int32_t i_3 = 0

if (*(arg1 + 0x38) s> 0)
    do
        uint64_t* rax_14
        rax_14, zmm7 = sub_141ebb810(sx.q(i_3) * 0xb0 + *(arg1 + 0x30), &var_d8, &var_a8, &var_b8)
        
        if (arg2[3].b == 0)
            if (rax_14[3].b != 0)
                *arg2 = *rax_14
                arg2[2] = rax_14[2]
                arg2[3].d = rax_14[3].d
        else if (rax_14[3].b != 0)
            *arg2 = __minss_xmmss_memss((*arg2)[0], *rax_14)[0]
            *(arg2 + 4) = __minss_xmmss_memss((*(rax_14 + 4)).d, *(arg2 + 4)).d
            arg2[1].d = __minss_xmmss_memss(rax_14[1].d[0], arg2[1].d)[0]
            *(arg2 + 0xc) = __maxss_xmmss_memss((*(rax_14 + 0xc)).d, *(arg2 + 0xc)).d
            arg2[2].d = __maxss_xmmss_memss(rax_14[2].d[0], arg2[2].d)[0]
            *(arg2 + 0x14) = __maxss_xmmss_memss((*(rax_14 + 0x14)).d, *(arg2 + 0x14)).d
        
        i_3 += 1
    while (i_3 s< *(arg1 + 0x38))

if (*(arg1 + 0x48) s> 0)
    do
        int64_t* rax_17
        rax_17, zmm7 = sub_141ebc810(sx.q(i_4) * 0x58 + *(arg1 + 0x40), &var_d8, &var_a8, zmm7)
        
        if (arg2[3].b == 0)
            if (rax_17[3].b != 0)
                *arg2 = *rax_17
                arg2[2] = rax_17[2]
                arg2[3].d = rax_17[3].d
        else if (rax_17[3].b != 0)
            *arg2 = __minss_xmmss_memss((*arg2)[0], *rax_17)[0]
            *(arg2 + 4) = __minss_xmmss_memss((*(rax_17 + 4)).d, *(arg2 + 4)).d
            arg2[1].d = __minss_xmmss_memss(rax_17[1].d[0], arg2[1].d)[0]
            *(arg2 + 0xc) = __maxss_xmmss_memss((*(rax_17 + 0xc)).d, *(arg2 + 0xc)).d
            arg2[2].d = __maxss_xmmss_memss(rax_17[2].d[0], arg2[2].d)[0]
            *(arg2 + 0x14) = __maxss_xmmss_memss((*(rax_17 + 0x14)).d, *(arg2 + 0x14)).d
        
        i_4 += 1
    while (i_4 s< *(arg1 + 0x48))

__security_check_cookie(rax_1 ^ &var_118)
return arg2
