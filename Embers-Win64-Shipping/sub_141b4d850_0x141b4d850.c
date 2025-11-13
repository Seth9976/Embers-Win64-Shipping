// 函数: sub_141b4d850
// 地址: 0x141b4d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_698
int64_t rax_1 = __security_cookie ^ &var_698
int32_t r13 = 0
int32_t var_5e0 = 0
float (* var_588)[0x4] = nullptr
int32_t rsi = *arg4
int32_t var_57c = 0
int128_t zmm8 = arg4[2]
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rsi + 1)
int32_t rax_5 = (temp3 - temp2) s>> 1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_5)
uint128_t zmm14
uint128_t var_d8 = zmm14
int32_t rax_8 = (temp5 - temp4) s>> 1
uint128_t zmm15
uint128_t var_e8 = zmm15

if ((rax_5.b & 1) != 0)
    rax_8 += 1

if (rax_8 s> 0)
    sub_1405a4f90(&var_588)

uint128_t zmm6 = 0x3f800000
float var_3f0
float* rax_9
uint128_t zmm8_1
uint128_t zmm10
uint128_t zmm11
rax_9, zmm8_1, zmm10, zmm11 = sub_141b60470(&var_3f0, 0x3f800000, zmm8.d)
float (* rdi)[0x4] = var_588
float zmm0[0x4] = zmm8_1
zmm0[0] = zmm0[0] f* zmm8_1.d
int32_t var_504 = 0
int32_t rbx = 3
float zmm2_1 = *rax_9
int128_t zmm12 = zx.o(0)
int32_t zmm3 = rax_9[1]
zmm0[0] = zmm0[0] * 6.28318548f
uint128_t zmm1_1
zmm1_1.d = 1f / _mm_sqrt_ss(zmm0[0], zmm0[0])[0]
float var_508[0x4]
zmm0 = var_508
zmm0[0] = zmm1_1.d
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
temp0_1[0] = zmm2_1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm3
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
var_508 = temp0_3
*rdi = temp0_3
uint128_t var_598
uint128_t zmm7_1

if (rsi s> 3)
    float* rdi_1 = &rdi[1]
    
    do
        float var_3e8
        float* rax_11
        int512_t zmm7_2
        float zmm8_2
        rax_11, zmm7_2, zmm8_2 = sub_141b60470(&var_3e8, _mm_cvtepi32_ps(zx.o(rbx + 2)), zmm8_1.d)
        uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(rbx))
        zmm6 = *rax_11
        zmm7_2.o = rax_11[1]
        float* rax_12
        rax_12, zmm7_1, zmm8_1, zmm10, zmm11 = sub_141b60470(&var_508, zmm1_2, zmm8_2)
        rbx += 4
        rdi_1 = &rdi_1[4]
        zmm1_1 = *rax_12
        int32_t zmm0_1 = rax_12[1]
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
        zmm1_1.d = zmm0_1
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc6)
        zmm1_1.d = zmm6.d
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0x27)
        zmm1_1.d = zmm7_1.d
        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x39)
        *(rdi_1 - 0x10) = zmm1_1
        var_598 = zmm1_1
    while (rbx s< rsi)
    
    zmm6 = 0x3f800000

int64_t* rdi_2 = arg5
int128_t zmm13 = 0x3f000000
int32_t rsi_1 = arg4[1]
zmm1_1.d = rdi_2[4].d.d f- rdi_2[3].d
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
zmm1_1.d = zmm1_1.d f+ 0.5f
int32_t rax_13 = int.d(zmm1_1.d)
zmm1_1.d = (*(rdi_2 + 0x24)).d f- *(rdi_2 + 0x1c)
int32_t rax_14 = rax_13 s>> 1
int32_t var_5c0 = rax_14
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
zmm1_1.d = zmm1_1.d f+ 0.5f
int32_t rcx_7 = int.d(zmm1_1.d) s>> 1
int32_t var_5bc = rcx_7

if (rsi_1 s> 0)
    var_5c0 = divs.dp.d(sx.q(rax_14 - 1 + rsi_1), rsi_1)
    int32_t var_5bc_1 = divs.dp.d(sx.q(rsi_1 - 1 + rcx_7), rsi_1)

int64_t rax_23 = var_5c0.q
int32_t rcx_8 = rdi_2[5].d
int32_t rdx_6 = *(rdi_2 + 0x2c)
int64_t* r15_1 = arg1

if (rax_23.d s<= rcx_8)
    rcx_8 = rax_23.d

int64_t var_608 = rax_23
var_608.d = rcx_8

if (var_608:4.d s<= rdx_6)
    rdx_6 = var_608:4.d

void* rbx_1 = *r15_1
var_608:4.d = rdx_6
int64_t var_600 = var_608
int32_t r8 = *(rbx_1 + 0x44)

if (rcx_8 s> r8)
label_141b4dae6:
    
    if (*(rbx_1 + 0x10) == 0xffffffff)
        (*(*(rbx_1 + 8) + 0x28))(rbx_1 + 8)
    
    zmm6 = sub_141b654c0(rbx_1, &var_608)
else
    int32_t rax_25 = *(rbx_1 + 0x48)
    
    if (rdx_6 s> rax_25)
        goto label_141b4dae6
    
    if (r8 != data_143dbb180.d)
        if (*(rbx_1 + 0x38) == 0)
            goto label_141b4dae6
    else if (rax_25 == data_143dbb180:4.d || *(rbx_1 + 0x38) == 0)
        goto label_141b4dae6

if (rsi_1 s> 0)
    zmm6, zmm10, zmm11, zmm12, zmm13 = sub_141b54e70(r15_1, arg2, arg3, rdi_2, zmm6, &var_600)

float (* rax_27)[0x4] = data_14395f4d0
float (* var_5c8)[0x4] = rax_27

if (rax_27 != 0)
    (*rax_27)[2] += 1

int64_t* rax_29 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_440
sub_1419a2ec0(rax_29, &var_440, &data_143f55f90, 0)
void* rax_30 = var_440
void* var_430
sub_1419a2ec0(rax_29, &var_430, &data_143f2d740, 0)
int64_t* rcx_15 = *r15_1
void* r12_1 = var_430
int32_t rax_33 = rdi_2[5].d
int32_t rax_34 = *(rdi_2 + 0x2c)
void* var_618 = r12_1
int32_t rax_36 = (**rcx_15)(rcx_15)
int64_t* rcx_16 = *r15_1
int64_t rdx_11 = *rcx_16
int32_t rax_37 = (*(rdx_11 + 8))(rcx_16, rdx_11)
void* rcx_17 = data_1439c9210
void* var_558 = rcx_17

if (rcx_17 != 0)
    *(rcx_17 + 8) += 1

int64_t var_3b0 = data_14395da00
void*** rcx_20 = (arg2[6] + 7) & 0xfffffffffffffff8
int64_t var_3a8 = data_14395da18
int64_t var_3a0 = data_14395d9e8
void* rax_41 = &rcx_20[5]
int64_t var_384
__builtin_memset(&var_384, 0, 0x30)
int128_t var_3e0
__builtin_memset(&var_3e0, 0, 0x30)
int128_t var_398 = zx.o(0)
int64_t var_350 = 0
int32_t var_348 = 0
int16_t var_344 = 0
char var_342 = 0
int16_t var_340 = 0

if (rax_41 u> arg2[7])
    zmm6 = sub_140b0e3d0(&arg2[6], 0x30)
    rcx_20 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_41 = &rcx_20[5]

arg2[6] = rax_41
int64_t* rax_42 = arg2[1]
*(arg2 + 0x14) += 1
zmm14 = _mm_cvtepi32_ps(zx.o(rax_37))
*rax_42 = rcx_20
arg2[1] = &rcx_20[1]
rcx_20[1] = 0
*rcx_20 = &data_142f18bc8
rcx_20[2].b = 0
*(rcx_20 + 0x14) = 0
*(rcx_20 + 0x1c) = 0
void*** rcx_26 = (arg2[6] + 7) & 0xfffffffffffffff8
zmm15 = _mm_cvtepi32_ps(zx.o(rax_36))
void* rax_44 = &rcx_26[5]

if (rax_44 u> arg2[7])
    zmm6 = sub_140b0e3d0(&arg2[6], 0x30)
    rcx_26 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_44 = &rcx_26[5]

arg2[6] = rax_44
int64_t* rax_45 = arg2[1]
*(arg2 + 0x14) += 1
zmm8_1.d = zmm6.d f/ zmm15.d
int32_t i_1 = 0
*rax_45 = rcx_26
arg2[1] = &rcx_26[1]
rcx_26[1] = 0
*rcx_26 = &data_142d54998
int32_t i = 0
rcx_26[2] = 0
rcx_26[3].d = 0
*(rcx_26 + 0x24) = 0
float zmm9 = zmm6.d f/ zmm14.d
uint128_t var_98 = zmm10
int32_t var_56c = zmm8_1.d
float var_5e0_1 = zmm9
*(rcx_26 + 0x1c) = zmm15.d
rcx_26[4].d = zmm14.d
uint128_t var_a8 = zmm11
int32_t var_670_1

do
    int32_t* var_678
    int32_t var_628
    void* var_438
    void* var_428
    int128_t var_3c0_1
    
    if (i != 0)
        void* rbx_9 = *r15_1
        void* rax_166 = *(rbx_9 + 0x30)
        void* rdi_4 = rbx_9 + 0x20
        
        if (rax_166 != 0)
            rdi_4 = rax_166
        
        int64_t* rdi_5 = *(rdi_4 + 8)
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
            rbx_9 = *r15_1
        
        void* rax_167 = *(rbx_9 + 0x30)
        void* rbx_10 = rbx_9 + 0x20
        
        if (rax_167 != 0)
            rbx_10 = rax_167
        
        int64_t* rbx_11 = *rbx_10
        
        if (rbx_11 != 0)
            rbx_11[1].d += 1
        
        void** r15_29 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rcx_128 = &r15_29[1]
        
        if (rcx_128 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x10)
            r15_29 = (arg2[6] + 7) & 0xfffffffffffffff8
            rcx_128 = &r15_29[1]
        
        arg2[6] = rcx_128
        *r15_29 = rdi_5
        void*** rcx_132 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_169 = &rcx_132[5]
        
        if (rax_169 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x30)
            rcx_132 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_169 = &rcx_132[5]
        
        arg2[6] = rax_169
        void**** rax_170 = arg2[1]
        *(arg2 + 0x14) += 1
        *rax_170 = rcx_132
        arg2[1] = &rcx_132[1]
        rcx_132[3] = r15_29
        rcx_132[1] = 0
        *rcx_132 = &data_142d549c8
        int64_t* rax_172 = rbx_11
        rcx_132[2].d = 1
        rcx_132[4].d = 0
        void** r15_34 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rcx_136 = &r15_34[1]
        
        if (rcx_136 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x10)
            rax_172 = rbx_11
            r15_34 = (arg2[6] + 7) & 0xfffffffffffffff8
            rcx_136 = &r15_34[1]
        
        arg2[6] = rcx_136
        *r15_34 = rax_172
        void*** rcx_140 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_173 = &rcx_140[5]
        
        if (rax_173 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x30)
            rcx_140 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_173 = &rcx_140[5]
        
        arg2[6] = rax_173
        void**** rax_174 = arg2[1]
        *(arg2 + 0x14) += 1
        zmm1_1 = data_142d3f5a0
        *rax_174 = rcx_140
        arg2[1] = &rcx_140[1]
        rcx_140[1] = 0
        *rcx_140 = &data_142d549c8
        rcx_140[2].d = 1
        rcx_140[4].d = 1
        rcx_140[3] = r15_34
        int32_t var_140_1 = 0
        int32_t var_13c
        __builtin_memset(&var_13c, 0xff, 0x14)
        uint128_t var_128_1 = zmm1_1
        int64_t var_118
        __builtin_memset(&var_118, 0, 0x1a)
        int64_t* var_218 = rbx_11
        int64_t var_210_1 = 0
        int32_t var_208_1 = 0xffffffff
        int16_t var_204_1 = 0x500
        int64_t var_158
        __builtin_memset(&var_158, 0, 0x11)
        int32_t var_144_1 = 0
        int16_t var_100_1
        var_100_1:1.b = rbx_11[7].d u> 1
        void var_200
        memset(&var_200, 0, 0xa8)
        int64_t r15_39 = (arg2[6] + 1) & 0xfffffffffffffffe
        int64_t rax_176 = r15_39 + 0x1c
        
        if (rax_176 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x1e)
            r15_39 = (arg2[6] + 1) & 0xfffffffffffffffe
            rax_176 = r15_39 + 0x1c
        
        arg2[6] = rax_176
        wchar16 const* const rcx_146 = u"SlateBlurRect"
        wchar16 const j
        
        do
            j = *rcx_146
            *(r15_39 - u"SlateBlurRect" + rcx_146) = j
            rcx_146 = &rcx_146[1]
        while (j != 0)
        void*** rcx_149 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_177 = &rcx_149[0x27]
        
        if (rax_177 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x140)
            rcx_149 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_177 = &rcx_149[0x27]
        
        arg2[6] = rax_177
        void**** rax_178 = arg2[1]
        *(arg2 + 0x14) += 1
        *rax_178 = rcx_149
        arg2[1] = &rcx_149[1]
        sub_1405d11b0(rcx_149, &var_218, r15_39)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_218)
        int64_t var_108
        arg2[0x2f].b = var_108:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        sub_140fdc870(arg2, &var_3e0)
        var_3e0.q = var_558
        int64_t rax_182 = 0
        
        if (rax_30 != 0)
            int64_t rdx_38 = sx.q(*(rax_30 + 0x10c))
            int64_t* r15_42 = *(var_438 + 0x10)
            int64_t rax_184 = r15_42[3]
            
            if (*(rax_184 + (rdx_38 << 3)) == 0)
                sub_1419ccf30(r15_42, rdx_38.d)
                rax_184 = r15_42[3]
            
            rax_182 = *(rax_184 + (rdx_38 << 3))
            r12_1 = var_618
        
        var_3e0:8.q = rax_182
        int64_t rax_185 = 0
        
        if (r12_1 != 0)
            int64_t rdx_39 = sx.q(*(r12_1 + 0x10c))
            int64_t* r15_43 = *(var_428 + 0x10)
            int64_t rax_187 = r15_43[3]
            
            if (*(rax_187 + (rdx_39 << 3)) == 0)
                sub_1419ccf30(r15_43, rdx_39.d)
                rax_187 = r15_43[3]
            
            rax_185 = *(rax_187 + (rdx_39 << 3))
            r12_1 = var_618
        
        var_3c0_1.q = rax_185
        int32_t var_388_2 = 0
        sub_1419870b0(arg2, &var_3e0, 2)
        sub_141b66960(r12_1, arg2, &var_588, rax_5)
        uint128_t zmm6_5 = zx.o(var_600.d)
        zmm7_1 = zx.o(var_600:4.d)
        int32_t zmm1_5 = data_143dbb1f0:4.d
        int64_t rax_188 = arg2[0x34]
        float var_4a8 = data_143dbb1f0.d
        zmm6_5 = _mm_cvtepi32_ps(zmm6_5)
        int64_t var_470 = rax_188
        var_678.d = 0
        zmm7_1 = _mm_cvtepi32_ps(zmm7_1)
        int32_t var_4a4_1 = zmm1_5
        float var_4a0_1 = (zmm6_5.d f- zmm13.d) f/ zmm15.d
        float var_49c_1 = (zmm7_1.d f- zmm13.d) f/ zmm14.d
        sub_1405d0e10(arg2, &var_470, r12_1 + 0x142, &var_4a8, var_678.d)
        float (* rax_189)[0x4] = var_5c8
        float (* var_468)[0x4] = rax_189
        
        if (rax_189 != 0)
            (*rax_189)[2] += 1
        
        sub_141b667f0(r12_1, arg2, rdi_5, &var_468)
        int64_t var_460 = arg2[0x34]
        var_598.d = zmm8_1.d
        var_598:4.d = zmm9
        var_598:8.d = 0
        var_598:0xc.d = 0x3f800000
        var_678.d = 0
        int32_t zmm6_6 = sub_1405d0e10(arg2, &var_460, r12_1 + 0x130, &var_598, var_678.d)
        int32_t var_630_3 = 0
        void* var_400 = rax_30
        void* var_3f8_1 = var_438
        int32_t var_534_1 = rax_37
        int32_t var_52c_1 = rax_37
        int64_t r8_16 = *arg3
        var_678.d = zmm6_6
        (*(r8_16 + 0xd0))(arg3, arg2, r8_16, zmm12.d, var_678, zmm7_1.d, zmm12.d, zmm12.d, zmm6_6, 
            zmm7_1.d, rax_36.q, rax_36.q, &var_400, var_630_3, var_628, rax_37, var_618, rax_36)
        void*** rcx_167 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_196 = &rcx_167[2]
        
        if (rax_196 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x18)
            rcx_167 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_196 = &rcx_167[2]
        
        arg2[6] = rax_196
        int64_t* rax_197 = arg2[1]
        *(arg2 + 0x14) += 1
        *rax_197 = rcx_167
        arg2[1] = &rcx_167[1]
        rcx_167[1] = 0
        *rcx_167 = &data_142d549b8
        *(arg2 + 0x1c4) = 0
        arg2[0x2f].w = 0
        int64_t var_110
        sub_1405d1550(&var_110)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            char rax_200
            
            if (rbx_11[2].b == 0 && data_143f0f1d0 == 0)
                rax_200 = sub_1405949a0()
            
            if (rbx_11[2].b != 0 || (data_143f0f1d0 == 0 && rax_200 != 0))
                (**rbx_11)(rbx_11, 1)
            else
                bool z_5
                
                if (0 == *(rbx_11 + 0xc))
                    *(rbx_11 + 0xc) = 1
                    z_5 = true
                else
                    *(rbx_11 + 0xc)
                    z_5 = false
                
                if (z_5)
                    sub_1405dcc10(&data_143f02390, rbx_11)
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                char rax_204
                
                if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_204 = sub_1405949a0()
                
                if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_204 != 0))
                    (**rdi_5)(rdi_5, 1)
                else
                    bool z_6
                    
                    if (0 == *(rdi_5 + 0xc))
                        *(rdi_5 + 0xc) = 1
                        z_6 = true
                    else
                        *(rdi_5 + 0xc)
                        z_6 = false
                    
                    if (z_6)
                        sub_1405dcc10(&data_143f02390, rdi_5)
    else
        int64_t* var_5e8
        int64_t* var_5b8
        int64_t* rax_49
        int64_t* rdi_3
        int32_t r13_1
        
        if (rsi_1 s<= i)
            rax_49 = *rdi_2
            r13_1 = r13 | 2
            var_628 = r13_1
            var_5e8 = rax_49
            
            if (rax_49 != 0)
                rax_49[1].d += 1
                rax_49 = var_5e8
            
            rdi_3 = rax_49
        else
            r13_1 = r13 | 1
            int64_t* rcx_31 = *r15_1 + 0x20
            var_628 = r13_1
            int64_t* rax_47 = rcx_31[2]
            
            if (rax_47 != 0)
                rcx_31 = rax_47
            
            int64_t* rax_48 = *rcx_31
            var_5b8 = rax_48
            
            if (rax_48 != 0)
                rax_48[1].d += 1
            
            rdi_3 = var_5b8
            rax_49 = var_5e8
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
            rax_49 = var_5e8
        
        if ((r13_1.b & 2) != 0)
            r13_1 &= 0xfffffffd
            var_628 = r13_1
            
            if (rax_49 != 0)
                rax_49[1].d -= 1
                
                if (rax_49[1].d == 1)
                    if (var_5e8[2].b != 0)
                        (**var_5e8)(var_5e8, 1)
                    else
                        char rax_50
                        
                        if (data_143f0f1d0 == 0)
                            rax_50 = sub_1405949a0()
                        
                        if (data_143f0f1d0 == 0 && rax_50 != 0)
                            (**var_5e8)(var_5e8, 1)
                        else
                            bool z_1
                            
                            if (0 == *(var_5e8 + 0xc))
                                *(var_5e8 + 0xc) = 1
                                z_1 = true
                            else
                                *(var_5e8 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_52 = sub_140a20af0()
                                uint64_t rdx_12 = zx.q(rax_52)
                                void* rcx_33
                                
                                if (rax_52 != 0)
                                    rcx_33 = *((rdx_12 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                                else
                                    rcx_33 = nullptr
                                
                                *(rcx_33 + 8) = var_5e8
                                sub_1405a42f0(&data_143f02390, rdx_12.d)
        
        if ((r13_1.b & 1) != 0)
            var_628 = r13_1 & 0xfffffffe
            
            if (var_5b8 != 0)
                var_5b8[1].d -= 1
                
                if (var_5b8[1].d == 1)
                    if (var_5b8[2].b != 0)
                        (**var_5b8)(var_5b8, 1)
                    else
                        char rax_59
                        
                        if (data_143f0f1d0 == 0)
                            rax_59 = sub_1405949a0()
                        
                        if (data_143f0f1d0 == 0 && rax_59 != 0)
                            (**var_5b8)(var_5b8, 1)
                        else
                            bool z_2
                            
                            if (0 == *(var_5b8 + 0xc))
                                *(var_5b8 + 0xc) = 1
                                z_2 = true
                            else
                                *(var_5b8 + 0xc)
                                z_2 = false
                            
                            if (z_2)
                                int32_t rax_61 = sub_140a20af0()
                                uint64_t rdx_13 = zx.q(rax_61)
                                void* rcx_39
                                
                                if (rax_61 != 0)
                                    rcx_39 = *((rdx_13 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                                else
                                    rcx_39 = nullptr
                                
                                *(rcx_39 + 8) = var_5b8
                                sub_1405a42f0(&data_143f02390, rdx_13.d)
        
        void* rbx_7 = *r15_1 + 0x20
        void* rax_67 = *(rbx_7 + 0x10)
        
        if (rax_67 != 0)
            rbx_7 = rax_67
        
        int64_t* rbx_8 = *(rbx_7 + 8)
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
        
        int64_t** r15_4 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rcx_44 = &r15_4[1]
        
        if (rcx_44 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x10)
            r15_4 = (arg2[6] + 7) & 0xfffffffffffffff8
            rcx_44 = &r15_4[1]
        
        arg2[6] = rcx_44
        *r15_4 = rdi_3
        void*** rcx_48 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_69 = &rcx_48[5]
        
        if (rax_69 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x30)
            rcx_48 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_69 = &rcx_48[5]
        
        arg2[6] = rax_69
        void**** rax_70 = arg2[1]
        *(arg2 + 0x14) += 1
        *rax_70 = rcx_48
        arg2[1] = &rcx_48[1]
        rcx_48[3] = r15_4
        rcx_48[1] = 0
        *rcx_48 = &data_142d549c8
        int64_t* rax_72 = rbx_8
        rcx_48[2].d = 1
        rcx_48[4].d = 0
        void** r15_9 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rcx_52 = &r15_9[1]
        
        if (rcx_52 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x10)
            rax_72 = rbx_8
            r15_9 = (arg2[6] + 7) & 0xfffffffffffffff8
            rcx_52 = &r15_9[1]
        
        arg2[6] = rcx_52
        *r15_9 = rax_72
        void*** rcx_56 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_73 = &rcx_56[5]
        
        if (rax_73 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x30)
            rcx_56 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_73 = &rcx_56[5]
        
        arg2[6] = rax_73
        void**** rax_74 = arg2[1]
        *(arg2 + 0x14) += 1
        zmm1_1 = data_142d3f5a0
        *rax_74 = rcx_56
        arg2[1] = &rcx_56[1]
        rcx_56[1] = 0
        *rcx_56 = &data_142d549c8
        rcx_56[2].d = 1
        rcx_56[3] = r15_9
        rcx_56[4].d = 1
        int32_t var_260_1 = 0
        int32_t var_25c
        __builtin_memset(&var_25c, 0xff, 0x14)
        uint128_t var_248_1 = zmm1_1
        int64_t var_238
        __builtin_memset(&var_238, 0, 0x1a)
        int64_t* var_338 = rbx_8
        int64_t var_330_1 = 0
        int32_t var_328_1 = 0xffffffff
        int16_t var_324_1 = 0x500
        int64_t var_278
        __builtin_memset(&var_278, 0, 0x11)
        int32_t var_264_1 = 0
        int16_t var_220_1
        var_220_1:1.b = rbx_8[7].d u> 1
        void var_320
        memset(&var_320, 0, 0xa8)
        int64_t r15_14 = (arg2[6] + 1) & 0xfffffffffffffffe
        int64_t rax_76 = r15_14 + 0x26
        
        if (rax_76 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x28)
            r15_14 = (arg2[6] + 1) & 0xfffffffffffffffe
            rax_76 = r15_14 + 0x26
        
        arg2[6] = rax_76
        wchar16 const* const rcx_62 = u"SlateBlurRectPass0"
        wchar16 const j_1
        
        do
            j_1 = *rcx_62
            *(r15_14 - u"SlateBlurRectPass0" + rcx_62) = j_1
            rcx_62 = &rcx_62[1]
        while (j_1 != 0)
        void*** rcx_65 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_77 = &rcx_65[0x27]
        
        if (rax_77 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x140)
            rcx_65 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_77 = &rcx_65[0x27]
        
        arg2[6] = rax_77
        void**** rax_78 = arg2[1]
        *(arg2 + 0x14) += 1
        *rax_78 = rcx_65
        arg2[1] = &rcx_65[1]
        sub_1405d11b0(rcx_65, &var_338, r15_14)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_338)
        int32_t j_2 = 0
        int64_t var_228
        arg2[0x2f].b = var_228:7.b
        uint64_t rax_81 = zx.q(arg2[0x14].d)
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        var_384.d = rax_81.d
        
        if (rax_81.d != 0)
            do
                uint64_t j_3 = zx.q(j_2)
                uint64_t r13_3 = j_3 * 3
                int64_t* rcx_70 = arg2[r13_3 + 0x15]
                
                if (rcx_70 == 0)
                    *(&var_384:4 + j_3) = 0
                    rax_81.b = 0
                else
                    *(&var_384:4 + j_3) = *(rcx_70 + 0x3c)
                    int64_t var_378
                    *(&var_378 + (j_3 << 2)) = rcx_70[8].d
                    int64_t rax_85 = (*(*rcx_70 + 0x10))()
                    
                    if (rax_85 != 0)
                        var_344:1.b = 1
                    
                    if (rax_85 == 0 || *(rax_85 + 0x68) u<= 1)
                        var_344:1.b = 0
                    
                    rax_81 = zx.q(*(&var_384:4 + j_3))
                
                if (rax_81.b != 0)
                    var_348.w = arg2[r13_3 + 0x15][7].w
                
                j_2 += 1
            while (j_2 u< var_384.d)
        
        int64_t* rcx_72 = arg2[0x2d]
        int32_t var_358_1
        
        if (rcx_72 == 0)
            var_358_1 = 0
        else
            var_358_1 = *(rcx_72 + 0x3c)
            var_358_1 = rcx_72[8].d
            void* rax_89 = (*(*rcx_72 + 0x10))()
            
            if (rax_89 == 0 || *(rax_89 + 0x68) u<= 1)
                var_344:1.b = 0
            else
                var_344:1.b = 1
        
        var_350.b = arg2[0x2e].b
        var_350:1.b = *(arg2 + 0x171)
        var_350:2.b = *(arg2 + 0x172)
        var_350:3.b = *(arg2 + 0x173)
        var_350:4.d = *(arg2 + 0x174)
        
        if (var_358_1 != 0)
            var_348.w = arg2[0x2d][7].w
        
        var_348:2.b = arg2[0x2f].b
        var_348:3.b = *(arg2 + 0x179)
        char var_342_1 = *(arg2 + 0x17a)
        var_3e0.q = var_558
        int64_t rax_100 = 0
        
        if (rax_30 != 0)
            int64_t rdx_18 = sx.q(*(rax_30 + 0x10c))
            int64_t* r15_18 = *(var_438 + 0x10)
            int64_t rax_101 = r15_18[3]
            
            if (*(rax_101 + (rdx_18 << 3)) == 0)
                sub_1419ccf30(r15_18, rdx_18.d)
                rax_101 = r15_18[3]
            
            rax_100 = *(rax_101 + (rdx_18 << 3))
        
        r12_1 = var_618
        var_3e0:8.q = rax_100
        int64_t rax_102 = 0
        
        if (r12_1 != 0)
            int64_t rdx_19 = sx.q(*(r12_1 + 0x10c))
            int64_t* r15_19 = *(var_428 + 0x10)
            int64_t rax_104 = r15_19[3]
            
            if (*(rax_104 + (rdx_19 << 3)) == 0)
                sub_1419ccf30(r15_19, rdx_19.d)
                rax_104 = r15_19[3]
            
            rax_102 = *(rax_104 + (rdx_19 << 3))
            r12_1 = var_618
        
        var_3c0_1.q = rax_102
        int32_t var_388_1 = 0
        sub_1419870b0(arg2, &var_3e0, 2)
        int32_t count = zx.d(*(r12_1 + 0x13a))
        int32_t var_568 = rax_5
        float (* var_550)[0x4] = var_588
        int32_t count_1 = rax_8 << 4
        
        if (count_1 s<= count)
            count = count_1
        
        int64_t var_548
        
        if (count s> 0)
            uint32_t rax_108 = zx.d(*(r12_1 + 0x138))
            uint32_t rax_109 = zx.d(*(r12_1 + 0x136))
            int64_t r15_22 = (arg2[6] + 0xf) & 0xfffffffffffffff0
            int64_t count_2 = sx.q(count)
            var_548 = arg2[0x34]
            int64_t rax_111 = count_2 + r15_22
            
            if (rax_111 u> arg2[7])
                sub_140b0e3d0(&arg2[6], count + 0x10)
                r15_22 = (arg2[6] + 0xf) & 0xfffffffffffffff0
                rax_111 = count_2 + r15_22
            
            arg2[6] = rax_111
            memcpy(r15_22, var_550, count)
            void*** rcx_82 = (arg2[6] + 7) & 0xfffffffffffffff8
            void* rax_112 = &rcx_82[6]
            
            if (rax_112 u> arg2[7])
                sub_140b0e3d0(&arg2[6], 0x38)
                rcx_82 = (arg2[6] + 7) & 0xfffffffffffffff8
                rax_112 = &rcx_82[6]
            
            r12_1 = var_618
            arg2[6] = rax_112
            void** rax_113 = arg2[1]
            *(arg2 + 0x14) += 1
            *rax_113 = rcx_82
            arg2[1] = &rcx_82[1]
            rcx_82[1] = 0
            *rcx_82 = &data_142d549d8
            rcx_82[2] = var_548
            rcx_82[4].d = rax_109
            *(rcx_82 + 0x24) = rax_108
            rcx_82[3] = r15_22
            rcx_82[5].d = count
        
        var_548 = arg2[0x34]
        var_678.d = 0
        sub_1405eb490(arg2, &var_548, r12_1 + 0x13c, &var_568, var_678.d)
        float (* rax_119)[0x4] = var_5c8
        var_550 = rax_119
        
        if (rax_119 != 0)
            (*rax_119)[2] += 1
        
        float (* r15_25)[0x4] = var_5c8
        int64_t r13_4 = arg2[0x34]
        
        if (*(r12_1 + 0x11a) u> 0)
            uint32_t r12_4 = zx.d(*(r12_1 + 0x118))
            void*** rcx_89 = (arg2[6] + 7) & 0xfffffffffffffff8
            void* rax_120 = &rcx_89[5]
            
            if (rax_120 u> arg2[7])
                sub_140b0e3d0(&arg2[6], 0x30)
                rcx_89 = (arg2[6] + 7) & 0xfffffffffffffff8
                rax_120 = &rcx_89[5]
            
            arg2[6] = rax_120
            void**** rax_121 = arg2[1]
            *(arg2 + 0x14) += 1
            *rax_121 = rcx_89
            arg2[1] = &rcx_89[1]
            rcx_89[1] = 0
            rcx_89[3].d = r12_4
            r12_1 = var_618
            *rcx_89 = &data_142d5a070
            rcx_89[2] = r13_4
            rcx_89[4] = rdi_3
        
        if (*(r12_1 + 0x11e) u> 0)
            uint32_t r12_5 = zx.d(*(r12_1 + 0x11c))
            
            if ((*(*r15_25 + 8))(r15_25) == 0)
                void*** rcx_96 = (arg2[6] + 7) & 0xfffffffffffffff8
                void* rax_125 = &rcx_96[5]
                
                if (rax_125 u> arg2[7])
                    sub_140b0e3d0(&arg2[6], 0x30)
                    rcx_96 = (arg2[6] + 7) & 0xfffffffffffffff8
                    rax_125 = &rcx_96[5]
                
                arg2[6] = rax_125
                void**** rax_126 = arg2[1]
                *(arg2 + 0x14) += 1
                *rax_126 = rcx_96
                arg2[1] = &rcx_96[1]
                rcx_96[1] = 0
                *rcx_96 = &data_142d5a080
                rcx_96[2] = r13_4
                rcx_96[3].d = r12_5
                rcx_96[4] = r15_25
            
            r12_1 = var_618
        
        uint128_t zmm6_1 = sub_1405d1550(&var_550)
        var_678.d = 0
        uint128_t zmm0_2
        uint128_t zmm1_3
        
        if (rsi_1 s<= 0)
            zmm7_1.d = zmm6_1.d f/ _mm_cvtepi32_ps(zx.o(rax_33)).d
            zmm6_1.d = zmm6_1.d f/ _mm_cvtepi32_ps(zx.o(rax_34)).d
            zmm1_3.d = zmm7_1.d f* arg5[4].d
            zmm0_2.d = zmm6_1.d f* *(arg5 + 0x24)
            zmm11.d = zmm7_1.d f* arg5[3].d
            zmm10.d = zmm6_1.d f* *(arg5 + 0x1c)
            int64_t rax_136 = arg2[0x34]
            int32_t var_4c8 = zmm11.d
            int32_t var_4c0_1 = zmm1_3.d
            zmm8_1.d = zmm0_2.d f- zmm10.d
            int32_t var_4c4_1 = zmm10.d
            int32_t var_4bc_1 = zmm0_2.d
            int64_t var_490 = rax_136
            int32_t zmm6_3 = sub_1405d0e10(arg2, &var_490, r12_1 + 0x142, &var_4c8, var_678.d)
            int64_t var_488 = arg2[0x34]
            int32_t var_4b8 = zmm7_1.d
            int32_t var_4b4_1 = zmm6_3
            int64_t var_4b0_1 = 0x3f800000
            var_678.d = 0
            sub_1405d0e10(arg2, &var_488, r12_1 + 0x130, &var_4b8, var_678.d)
            uint128_t zmm0_3 = zx.o(var_608:4.d)
            uint128_t zmm1_4 = zx.o(var_608.d)
            int32_t var_630_2 = 0
            void* var_410 = rax_30
            int64_t r8_9 = *arg3
            void* var_408_1 = var_438
            int32_t var_4f4_1 = rax_37
            void** var_638_2 = &var_410
            int32_t var_514_1 = 1
            int32_t var_650_2 = zmm8_1.d
            int32_t var_660_2 = zmm10.d
            int32_t var_668_2 = zmm11.d
            var_670_1 = _mm_cvtepi32_ps(zmm0_3).d
            var_678.d = _mm_cvtepi32_ps(zmm1_4).d
            (*(r8_9 + 0xd0))(arg3, arg2, r8_9, zmm12.d, var_678, var_670_1, var_668_2, var_660_2, 
                zmm1_3.d f- zmm11.d, var_650_2, rax_36.q, 1.q, var_638_2, var_630_2, var_628, 
                rax_37, var_618, rax_36)
            zmm8_1 = var_56c
            zmm9 = var_5e0_1
        else
            zmm7_1 = zx.o(var_600.d)
            zmm6_1 = zx.o(var_600:4.d)
            zmm1_3 = data_143dbb1f0:4.d
            int64_t rax_128 = arg2[0x34]
            int32_t var_4e8 = data_143dbb1f0.d.d
            zmm7_1 = _mm_cvtepi32_ps(zmm7_1)
            int64_t var_448 = rax_128
            int32_t var_4e4_1 = zmm1_3.d
            zmm0_2.d = _mm_cvtepi32_ps(zmm6_1).d f- zmm13.d
            zmm0_2.d = zmm0_2.d f/ zmm14.d
            float var_4e0_1 = (zmm7_1.d f- zmm13.d) f/ zmm15.d
            int32_t var_4dc_1 = zmm0_2.d
            sub_1405d0e10(arg2, &var_448, r12_1 + 0x142, &var_4e8, var_678.d)
            int64_t var_498 = arg2[0x34]
            int32_t var_4d8 = zmm8_1.d
            float var_4d4_1 = zmm9
            int64_t var_4d0_1 = 0x3f800000
            var_678.d = 0
            int32_t zmm6_2 = sub_1405d0e10(arg2, &var_498, r12_1 + 0x130, &var_4d8, var_678.d)
            int32_t var_630_1 = 0
            void* var_420 = rax_30
            int64_t r8_7 = *arg3
            void* var_418_1 = var_438
            int32_t var_524_1 = rax_37
            int32_t var_51c_1 = rax_37
            var_678.d = zmm7_1.d
            (*(r8_7 + 0xd0))(arg3, arg2, r8_7, zmm12.d, var_678, zmm6_2, zmm12.d, zmm12.d, 
                zmm7_1.d, zmm6_2, rax_36.q, rax_36.q, &var_420, var_630_1, var_628, rax_37, 
                var_618, rax_36)
        void*** rcx_109 = (arg2[6] + 7) & 0xfffffffffffffff8
        void* rax_144 = &rcx_109[2]
        
        if (rax_144 u> arg2[7])
            sub_140b0e3d0(&arg2[6], 0x18)
            rcx_109 = (arg2[6] + 7) & 0xfffffffffffffff8
            rax_144 = &rcx_109[2]
        
        arg2[6] = rax_144
        int64_t* rax_145 = arg2[1]
        *(arg2 + 0x14) += 1
        *rax_145 = rcx_109
        arg2[1] = &rcx_109[1]
        rcx_109[1] = 0
        *rcx_109 = &data_142d549b8
        *(arg2 + 0x1c4) = 0
        arg2[0x2f].w = 0
        int64_t var_230
        sub_1405d1550(&var_230)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            char rax_148
            
            if (rbx_8[2].b == 0 && data_143f0f1d0 == 0)
                rax_148 = sub_1405949a0()
            
            if (rbx_8[2].b != 0 || (data_143f0f1d0 == 0 && rax_148 != 0))
                (**rbx_8)(rbx_8, 1)
            else
                bool z_3
                
                if (0 == *(rbx_8 + 0xc))
                    *(rbx_8 + 0xc) = 1
                    z_3 = true
                else
                    *(rbx_8 + 0xc)
                    z_3 = false
                
                if (z_3)
                    int32_t rax_150 = sub_140a20af0()
                    uint64_t rdx_30 = zx.q(rax_150)
                    void* const rax_151
                    
                    if (rax_150 != 0)
                        rax_151 = *((rdx_30 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_30.d) & 0x3fff) * 0x18
                    else
                        rax_151 = nullptr
                    
                    *(rax_151 + 8) = rbx_8
                    sub_1405a42f0(&data_143f02390, rdx_30.d)
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                char rax_157
                
                if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_157 = sub_1405949a0()
                
                if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_157 != 0))
                    (**rdi_3)(rdi_3, 1)
                else
                    bool z_4
                    
                    if (0 == *(rdi_3 + 0xc))
                        *(rdi_3 + 0xc) = 1
                        z_4 = true
                    else
                        *(rdi_3 + 0xc)
                        z_4 = false
                    
                    if (z_4)
                        int32_t rax_159 = sub_140a20af0()
                        uint64_t rdx_31 = zx.q(rax_159)
                        void* const rax_160
                        
                        if (rax_159 != 0)
                            rax_160 = *((rdx_31 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_31.d) & 0x3fff) * 0x18
                        else
                            rax_160 = nullptr
                        
                        *(rax_160 + 8) = rdi_3
                        sub_1405a42f0(&data_143f02390, rdx_31.d)
        
        r13 = var_628
    int512_t zmm6_4
    zmm6_4.o = 0x3f800000
    i = i_1 + 1
    r15_1 = arg1
    rdi_2 = arg5
    i_1 = i
while (i s< 2)

var_670_1.q = &var_5c8
sub_141b6c050(r15_1, arg2, arg3, rdi_2, &var_600, var_670_1)
sub_14081c9d0(&var_558)
int64_t result = sub_1405d1550(&var_5c8)
float (* rcx_124)[0x4] = var_588

if (rcx_124 != 0)
    result = sub_140a74f90(rcx_124)

__security_check_cookie(rax_1 ^ &var_698)
return result
