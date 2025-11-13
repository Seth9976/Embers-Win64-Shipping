// 函数: sub_142222be0
// 地址: 0x142222be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2[0]
char rax
int512_t zmm0
int512_t zmm1
float zmm6[0x4]
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
float zmm14[0x4]
float zmm15[0x4]
rax, zmm0, zmm1, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_142223f50(arg1, arg2)

if (rax == 0)
    zmm0.o = *(arg1 + 0x124)
    return zmm0

zmm1.o = *(arg1 + 0x12c)
float var_48[0x4] = zmm6
void* r15 = **(arg1[2] + 0x40)
uint128_t var_58 = zmm7
uint128_t var_68 = zmm8
zmm8 = *(arg1 + 0x124)
uint128_t var_78 = zmm9
int128_t var_88 = zmm10
int128_t var_b8 = zmm13
void* var_110 = r15
sub_141fe5610(*(r15 + 0x50) + 0x68, zmm1, arg1[3], nullptr)
sub_1421f1540(*(r15 + 0x50))
float zmm0_1
int512_t zmm1_1
zmm0_1, zmm1_1 = sub_142193350(arg1[2])

if (zmm0_1 >= 0f)
    _mm_min_ss(zmm0_1, 0x3f800000)

zmm1_1.o = *(arg1 + 0x12c)
int32_t r8_2
uint128_t zmm0_2
float zmm6_2[0x4]
zmm0_2, r8_2, zmm6_2 = sub_141fe5610(*(r15 + 0x50) + 0x38, zmm1_1, arg1[3], nullptr)
uint128_t zmm7_1
zmm7_1.d = zmm0_2.d f* zmm6_2[0]
int32_t rbx = *(arg1[0x47] + 0x3c)
uint128_t zmm2
zmm2.d = zmm7_1.d f* arg_10
zmm2.d = zmm2.d f+ zmm8.d
float zmm1_2[0x4] = zmm2
zmm1_2[0] = zmm1_2[0] f+ zmm2.d
zmm1_2[0] = zmm1_2[0] - 0.5f
int32_t r14_1 = int.d(zmm1_2[0]) s>> 1
int32_t var_154 = r14_1
int32_t rcx_7 = r14_1
zmm9 = _mm_cvtepi32_ps(zx.o(r14_1))
zmm2.d = zmm2.d f- zmm9.d
*(arg1 + 0x124) = zmm2.d

if (rbx s> 0)
    r8_2 = arg1[0x23].d - rbx + r14_1
    
    if (r8_2 s> 0)
        (*(*arg1 + 0x228))(arg1, 0, r8_2)
    
    rcx_7 = rbx
    
    if (r14_1 s>= rbx)
        rcx_7 = r14_1

int32_t rdx_1 = arg1[0x23].d + rcx_7

if (rdx_1 s>= arg1[0x24].d)
    void* rax_4 = *arg1
    zmm0_2 = _mm_cvtepi32_ps(zx.o(rdx_1))
    int64_t r9_1 = *(rax_4 + 0x18)
    float temp0_4[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm0_2.d)
    zmm0_2 = arg_10
    int32_t rax_5
    
    if (zmm0_2.d f>= 0.25f)
        rax_5 = int.d(temp0_4[0])
        r8_2 = 0
    else
        zmm0_2 = temp0_4
        r8_2.b = 1
        rax_5 = int.d(zmm0_2.d)
    
    if (r9_1(zmm0_2, zx.q(rdx_1 + rax_5 + 1), r8_2) == 0)
        return zmm8

int32_t r11_1 = arg1[0x23].d
int32_t* rbp_1 = nullptr
int128_t var_98_1 = zmm11
int32_t rdx_3 = 0
int32_t* var_148_1 = nullptr
uint32_t var_158_1 = 0xffffffff
void* var_128_1 = nullptr

if (r11_1 s> 0)
    int64_t r14_2 = sx.q(arg1[6].d)
    int16_t* r8_5 = arg1[0x1f]
    
    do
        uint32_t r10_1 = zx.d(*r8_5)
        int32_t* rcx_10 = sx.q(r10_1 * *(arg1 + 0x114)) + arg1[0x1e]
        void* r9_2 = r14_2 + rcx_10
        
        if ((*(r14_2 + rcx_10) & 0xf0000000) == 0x40000000 && *(r9_2 + 4) == 0)
            var_158_1 = r10_1
            rbp_1 = rcx_10
            var_148_1 = rcx_10
            var_128_1 = r9_2
            break
        
        rdx_3 += 1
        r8_5 = &r8_5[1]
    while (rdx_3 s< r11_1)
    
    r14_1 = var_154

int64_t rdx_4 = *(r15 + 0x58)
bool arg_18 = rbp_1 == 0
int64_t var_130_1 = 0
bool arg_20 = _mm_and_ps(*(arg1[0x47] + 0x50), 0x7fffffff).d f> 9.99999994e-09f

if (rdx_4 != 0)
    int64_t rax_13 = sub_1421b7c40(arg1, rdx_4)
    var_130_1 = rax_13
    int64_t rdi_2 = rax_13
    
    if (rax_13 != 0)
        if ((*rax_13 & 9) == 0)
            rdi_2 = 0
        
        var_130_1 = rdi_2

int32_t var_13c_1 = arg1[0x3c].d.d

if (not(zmm7_1.d f<= 0f) && r14_1 s> 0)
    int64_t rax_14 = arg1[0x47]
    float var_c8_1[0x4] = zmm14
    float var_d8_1[0x4] = zmm15
    zmm15 = 0x3f800000
    zmm15[0] = 1f f/ zmm7_1.d
    bool cond:4_1 = *(rax_14 + 0x44) != 1
    zmm15[0] = zmm15[0] f* zmm8.d
    zmm15[0] = zmm15[0] + arg_10
    zmm15[0] = zmm15[0] - zmm15[0]
    int32_t var_118_1
    
    if (cond:4_1)
        var_118_1 = 0x3f800000
        zmm0_2 = _mm_unpacklo_ps(zx.o(0), 0)
    else
        void* rax_15 = arg1[3]
        float temp0_6[0x4] = __mulps_xmmps_memps(data_142d4cc30, *(rax_15 + 0x1e0))
        uint128_t zmm5_1 = *(rax_15 + 0x1c0)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), zmm2)
        float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_7)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_14[0x4] = _mm_sub_ps(temp0_12, zmm0_2)
        float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
        zmm5_1 = _mm_mul_ps(zmm5_1, temp0_15)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xd2)
        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xc9), zmm2)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_7)
        zmm5_1 = _mm_add_ps(zmm5_1, temp0_6)
        float temp0_23[0x4] = _mm_add_ps(_mm_sub_ps(temp0_20, zmm0_2), zmm5_1)
        var_118_1 = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa).d
        zmm0_2 = _mm_unpacklo_ps(temp0_23, _mm_shuffle_ps(temp0_23, temp0_23, 0x55)[0].q)
    
    int32_t rdx_5 = 0
    uint64_t var_108_1 = zmm0_2.q
    zmm0_2.d = 1f f/ zmm9.d
    int32_t var_134_1 = zmm0_2.d
    
    if (r14_1 s> 0)
        int128_t var_a8_1 = zmm12
        
        do
            int64_t rax_17 = arg1[0x1f]
            int64_t rcx_12 = sx.q(arg1[0x23].d)
            int64_t r14_3 = sx.q(arg1[6].d)
            zmm9 = _mm_cvtepi32_ps(zx.o(rdx_5))
            uint32_t r12_1 = zx.d(*(rax_17 + (rcx_12 << 1)))
            uint32_t var_140_1 = r12_1
            zmm9.d = zmm9.d f* zmm15[0]
            int64_t r13_1 = sx.q(*(arg1 + 0x114) * r12_1)
            zmm15[0] = zmm15[0] f- zmm9.d
            int32_t* r13_2 = r13_1 + arg1[0x1e]
            void* r14_4 = r14_3 + r13_2
            zmm8.d = _mm_cvtepi32_ps(zx.o(rdx_5 + 1)).d f* zmm0_2.d
            
            if (zmm8.d f>= 0f)
                zmm7_1 = _mm_min_ss(zmm8.d, 0x3f800000)
            else
                zmm7_1 = zx.o(0)
            
            zmm7_1.d = zmm7_1.d f* arg_10
            (*(*arg1 + 0xc8))(arg1, r13_2)
            int64_t* rcx_14 = *(r15 + 0x48)
            int32_t* var_168
            int32_t* var_160
            
            if (rcx_14 != 0)
                var_168 = r13_2
                (*(*rcx_14 + 0x268))(rcx_14, arg1, zx.q(arg1[6].d), zmm15, var_168, var_160, 
                    var_158_1, var_118_1, var_148_1, var_140_1, rdx_5 + 1, var_130_1, var_128_1)
            
            int32_t i = 0
            
            if (*(r15 + 0x78) s> 0)
                int64_t* r15_1 = nullptr
                
                do
                    int64_t* rdi_3 = *(r15_1 + *(var_110 + 0x70))
                    
                    if (rdi_3[5].b s< 0)
                        var_168 = r13_2
                        (*(*rdi_3 + 0x268))(rdi_3, arg1, zx.q(sub_1421b7be0(arg1, rdi_3)), zmm15, 
                            var_168, var_160, var_158_1, var_118_1, var_148_1, var_140_1, 
                            rdx_5 + 1, var_130_1, var_128_1)
                    
                    i += 1
                    r15_1 = &r15_1[1]
                while (i s< *(var_110 + 0x78))
                
                r12_1 = var_140_1
                r15 = var_110
            
            zmm2.d = 1f f- zmm8.d
            (*(*arg1 + 0xd0))(arg1, r13_2, zmm2, zmm15, var_168, var_160, var_158_1, var_118_1, 
                var_148_1, var_140_1, rdx_5 + 1, var_130_1, var_128_1)
            var_160 = &r13_2[0x14]
            var_168 = &r13_2[7]
            void* rdx_12
            rdx_12, zmm6_2 = sub_142217b70(arg1, 0, r13_2, arg_18, zmm15, var_168, var_160)
            int32_t rax_25 = r13_2[0x14]
            zmm6_2[0] = zmm6_2[0] f* r13_2[7]
            r13_2[0x15] = rax_25
            int32_t rax_26 = r13_2[0x16]
            *(r13_2 + 0x40) = *(r13_2 + 0x50)
            r13_2[3] = zmm6_2[0]
            r13_2[0x12] = rax_26
            
            if (var_130_1 != 0)
                int64_t* rcx_19 = *(r15 + 0x58)
                (*(*rcx_19 + 0x348))(rcx_19, arg1, var_130_1, r13_2)
            
            *r14_4 |= 0xfffffff
            int32_t* rbx_4 = r14_4 + 0xc
            zmm7_1.d = zmm7_1.d f+ var_13c_1
            *(r14_4 + 4) = 0
            zmm0_2 = arg_10
            zmm2 = zmm0_2
            uint128_t zmm1_3 = zmm0_2
            zmm0_2.d = zmm0_2.d f* r13_2[0xe]
            zmm2.d = zmm2.d f* r13_2[0xc]
            zmm1_3.d = zmm1_3.d f* r13_2[0xd]
            *(r14_4 + 0x24) &= 0xfffffffc
            *rbx_4 = zmm7_1.d
            *(r14_4 + 0x28) = (_mm_unpacklo_ps(zmm2 ^ 0x80000000, (zmm1_3 ^ 0x80000000).q)).q
            *(r14_4 + 0x30) = (zmm0_2 ^ 0x80000000).d
            *(r14_4 + 0x34) = var_108_1
            *(r14_4 + 0x3c) = var_118_1
            *(r14_4 + 0x10) = zmm9.d
            *(r14_4 + 0x18) = 1
            
            if (arg_18 != 0)
                *r14_4 = 0x4fffffff
                arg_18 = false
                *arg1[0x44] = 0
                *(r14_4 + 0x14) = 0
            label_142223301:
                
                if (arg_20 == 1)
                    if (var_148_1 != 0)
                        zmm0_2.d = r13_2[6].d f- var_148_1[6]
                        zmm2.d = r13_2[5].d f- var_148_1[5]
                        zmm1_3.d = r13_2[4].d f- var_148_1[4]
                        int32_t* rax_49 = arg1[0x44]
                        zmm0_2.d = zmm0_2.d f* zmm0_2.d
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm1_3.d = zmm1_3.d f* zmm1_3.d
                        zmm2.d = zmm2.d f+ zmm1_3.d
                        zmm2.d = zmm2.d f+ zmm0_2.d
                        zmm0_2.d = _mm_sqrt_ss(0, zmm2.d).d f+ *rax_49
                        *rax_49 = zmm0_2.d
                        zmm0_2.d = (*arg1[0x44]).d f/ *(arg1[0x47] + 0x50)
                        *(r14_4 + 0x14) = zmm0_2.d
                    else
                        *(r14_4 + 0x14) = 0
                
                arg1[0x23].d += 1
                var_148_1 = r13_2
                var_158_1 = r12_1
                var_128_1 = r14_4
                float zmm3_1[0x4]
                
                if (not(_mm_and_ps(*(r14_4 + 0x28), 0x7fffffff).d f> 9.99999975e-05f)
                        && not(_mm_and_ps(*(r14_4 + 0x2c), 0x7fffffff).d f> 9.99999975e-05f)
                        && not(_mm_and_ps(*(r14_4 + 0x30), 0x7fffffff).d f> 9.99999975e-05f))
                    int32_t* r8_10 = nullptr
                    void* r9_5 = nullptr
                    int32_t* rcx_25 = r13_2
                    void* rax_51 = r14_4
                    rdx_12.b = 0
                    
                    while (true)
                        if (rdx_12.b == 1 && (*(rax_51 + 0x24) & rdx_12.b) == 0)
                            r8_10 = rcx_25
                            r9_5 = rax_51
                            break
                        
                        int32_t rax_53 = *rax_51 & 0x3fff
                        
                        if (rax_53 == 0x3fff)
                            break
                        
                        rdx_12.b = 1
                        rcx_25 = sx.q(rax_53 * *(arg1 + 0x114)) + arg1[0x1e]
                        rax_51 = sx.q(arg1[6].d) + rcx_25
                    
                    if (r8_10 != 0)
                        zmm3_1 = r13_2[4]
                        zmm3_1[0] = zmm3_1[0] f- r8_10[4]
                        zmm0_2.d = (*rbx_4).d f- *(r9_5 + 0xc)
                        zmm1_3.d = r13_2[5].d f- r8_10[5]
                        zmm2.d = 1f f/ zmm0_2.d
                        zmm0_2.d = r13_2[6].d f- r8_10[6]
                        zmm3_1[0] = zmm3_1[0] f* zmm2.d
                        zmm1_3.d = zmm1_3.d f* zmm2.d
                        zmm0_2.d = zmm0_2.d f* zmm2.d
                        *(r14_4 + 0x28) = (_mm_unpacklo_ps(zmm3_1, zmm1_3.q)).q
                        *(r14_4 + 0x30) = zmm0_2.d
                
                char rcx_27 = (*(arg1[0x47] + 0x40)).b
                
                if ((rcx_27 & 8) != 0 && (rcx_27 & 0x10) == 0)
                    int32_t* r10_2 = nullptr
                    void* r9_6 = nullptr
                    int32_t* rax_58 = r13_2
                    rcx_27 = 0
                    
                    while (true)
                        if (rcx_27 == 1 && (*(r14_4 + 0x24) & rcx_27) == 0)
                            r10_2 = rax_58
                            r9_6 = r14_4
                            break
                        
                        int32_t rax_60 = *r14_4 & 0x3fff
                        
                        if (rax_60 == 0x3fff)
                            break
                        
                        rcx_27 = 1
                        rax_58 = sx.q(rax_60 * *(arg1 + 0x114)) + arg1[0x1e]
                        r14_4 = sx.q(arg1[6].d) + rax_58
                    
                    int32_t* r8_11 = nullptr
                    int32_t* r11_2 = nullptr
                    
                    if (r10_2 != 0)
                        if (r9_6 != 0)
                            int32_t* rcx_28 = r10_2
                            int32_t* rax_63 = r9_6
                            rdx_12.b = 0
                            
                            while (true)
                                if (rdx_12.b == 1 && (rax_63[9].b & rdx_12.b) == 0)
                                    r8_11 = rcx_28
                                    r11_2 = rax_63
                                    break
                                
                                int32_t rax_65 = *rax_63 & 0x3fff
                                
                                if (rax_65 == 0x3fff)
                                    break
                                
                                rdx_12.b = 1
                                rcx_28 = sx.q(rax_65 * *(arg1 + 0x114)) + arg1[0x1e]
                                rax_63 = sx.q(arg1[6].d) + rcx_28
                        
                        zmm0_2 = *rbx_4
                        zmm3_1 = r13_2[4]
                        zmm1_3 = r13_2[5]
                        int32_t rax_68
                        
                        if (r8_11 == 0)
                            zmm0_2.d = zmm0_2.d f- *(r9_6 + 0xc)
                            zmm3_1[0] = zmm3_1[0] f- r10_2[4]
                            zmm1_3.d = zmm1_3.d f- r10_2[5]
                            zmm2.d = 1f f/ zmm0_2.d
                            zmm0_2.d = r13_2[6].d f- r10_2[6]
                            zmm0_2.d = zmm0_2.d f* zmm2.d
                            rax_68 = zmm0_2.d
                        else
                            zmm0_2.d = zmm0_2.d f- r11_2[3]
                            zmm3_1[0] = zmm3_1[0] f- r8_11[4]
                            zmm1_3.d = zmm1_3.d f- r8_11[5]
                            zmm2.d = 1f f/ zmm0_2.d
                            zmm0_2.d = r13_2[6].d f- r8_11[6]
                            zmm0_2.d = zmm0_2.d f* zmm2.d
                            rax_68 = zmm0_2.d
                        
                        zmm3_1[0] = zmm3_1[0] f* zmm2.d
                        zmm1_3.d = zmm1_3.d f* zmm2.d
                        *(r9_6 + 0x28) = (_mm_unpacklo_ps(zmm3_1, zmm1_3.q)).q
                        *(r9_6 + 0x30) = rax_68
                
                *arg1[0x3e] = *rbx_4
            else if (var_148_1 != 0)
                int32_t rcx_20 = *var_128_1
                int32_t rax_38
                
                if ((rcx_20 & 0xf0000000) != 0x40000000 || (rcx_20 & 0x3fff) != 0x3fff)
                    rax_38 = ((r12_1 & 0x3fff) | 0x8000) << 0xe | (rcx_20 & 0x3fff)
                else
                    rax_38 = (r12_1 & 0x3fff) << 0xe | 0x80003fff
                
                *var_128_1 = rax_38
                *r14_4 = (((*r14_4 & 0xffffc000) | (var_158_1 & 0x3fff) | 0xfffc000) & 0xfffffff)
                    | 0x40000000
                goto label_142223301
            
            rdx_5 += 1
            zmm0_2 = var_134_1
        while (rdx_5 s< var_154)

return *(arg1 + 0x124)
