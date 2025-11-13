// 函数: sub_142306200
// 地址: 0x142306200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = arg1
sub_1422883b0(arg1, arg2, *(arg2[0x86] + 0x18))
*result = &data_143325ad0
result[0x2a] = arg2[0x14]
result[0x2b] = arg2[0xb6]
result[0x2c] = arg3
result[0x2d] = arg2[0x86]
int64_t rax_3 = sub_141f64a80(arg2)
result[0x2f].b &= 0xfe
void* rbx_1 = &result[0x30]
result[0x2e] = rax_3
char rax_4 = result[0x2f].b
uint8_t rdx = ((*(arg2 + 0x5a6) u>> 3 ^ rax_4) & 2) ^ rax_4
result[0x2f].b = rdx
uint8_t rcx_1 = ((*(arg2 + 0x5a7) u>> 1 ^ rdx) & 8) ^ rdx
result[0x2f].b = rcx_1
result[0x2f].b = (((arg2[0xb5].b * 2) ^ rcx_1) & 0x10) ^ rcx_1
*(result + 0x179) = (result[0x21][1].d).b
*(result + 0x17a) = 0
uint128_t zmm6
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
zmm6, zmm7, zmm8, zmm9 = sub_141f15fd0(arg2, rbx_1, result[0x21][1].d)
char rdi = 0
__builtin_memset(&result[0x31], 0, 0x40)
void* rcx_4 = &result[0x39]
void* r12 = &result[0x33]
*(rcx_4 + 0x1c) = 0x80
void* rax_9 = *(rcx_4 + 0x10)

if (rax_9 != 0)
    rcx_4 = rax_9

__builtin_memset(rcx_4, 0, 0x1c)
result[0x3d].d = 0xffffffff
*(result + 0x1ec) = 0
result[0x3f] = 0
result[0x40].d = 0
int64_t* rcx_5 = result[0x2b]
char rax_11 = (*(*rcx_5 + 0x40))(rcx_5)
result[0x2f].b &= 0xfb
result[0x2f].b |= (rax_11 & 1) << 2
char rax_12

if ((*(arg2 + 0x20b) & 0x48) != 0x48 || (*(arg2 + 0x5a7) & 0x40) == 0)
    rax_12 = 0
else
    rax_12 = 0x40

*(result + 0x39) &= 0xbf
*(result + 0x39) |= rax_12
char rax_13

if ((*(arg2 + 0x20b) & 0x48) != 0x48 || *(arg2 + 0x5a7) s>= 0)
    rax_13 = 0
else
    rax_13 = 0x80

char rcx_6 = (*(result + 0x39) & 0x7f) | rax_13
int32_t zmm1 = (zx.o(0)).d
*(result + 0x39) = rcx_6
int32_t zmm0 = *(arg2 + 0x5ac)

if (not(zmm0 f< 0f))
    zmm1 = _mm_min_ss(zmm0, 0x3f800000)

char rax_14 = *(result + 0x3a)
result[9].d = zmm1

if ((rax_14 & 8) != 0 || (rcx_6 & 0x40) != 0)
    rcx_6 = 8
else
    rcx_6 = 0

*(result + 0x3a) = (rax_14 & 0xf7) | rcx_6
sub_141f64cf0(arg2, &result[0x41])
void* rax_15 = sub_1425974e0()
void* rdx_4 = arg2[2]
int64_t rax_16 = sx.q(*(rax_15 + 0x38))
int64_t* var_190

if (rax_16.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
    var_190 = nullptr
else
    var_190 = arg2
    
    if ((*(arg2 + 0x5a7) & 1) != 0)
        *(result + 0x3b) |= 4

char rax_18 = *(arg2 + 0x20b)
void* rax_19 = result[0x2c]
char arg_10 = 0
int32_t rdx_5 = *(rax_19 + 8)

if (rdx_5 s> *(result + 0x194))
    sub_1405a5410(&result[0x31], rdx_5)
    rax_19 = result[0x2c]

int64_t r13 = sx.q(*(rax_19 + 8))
int64_t rsi = sx.q(result[0x32].d)
int32_t rax_20 = (rsi + r13).d
result[0x32].d = rax_20

if (rax_20 s> *(result + 0x194))
    sub_1405a4f90(&result[0x31])

void* rsi_1 = &result[0x31]
memset((rsi << 4) + *rsi_1, 0, r13 << 4)
int64_t* rax_21 = result[0x2c]
int32_t i = 0
int32_t i_2 = 0
int64_t* var_1a8
int64_t var_168
int32_t* var_158
int64_t var_148
int64_t var_138
float var_f8[0x4]
int64_t* rcx_14

if (rax_21[1].d s> 0)
    int64_t rdx_7 = 0
    rcx_14 = nullptr
    int64_t var_188_1 = 0
    int64_t* var_108_1 = nullptr
    
    do
        int64_t* rdi_1 = *(rcx_14 + *rax_21)
        void* rcx_15 = arg2[0x86]
        var_148 = rdi_1
        int64_t rax_22
        
        if (i s< 0 || i s>= *(rcx_15 + 0xe0))
            rax_22.b = 0
        else
            rax_22.b = 1
        
        void* const r12_2
        
        if (rax_22.b == 0)
            r12_2 = nullptr
        else
            r12_2 = sx.q(i) * 0xb8 + *(rcx_15 + 0xd8)
        
        uint64_t* r13_2 = *rsi_1 + rdx_7
        int32_t rdx_8 = rdi_1[1].d
        r13_2[1].d = 0
        
        if (*(r13_2 + 0xc) != rdx_8)
            sub_1405a5410(r13_2, rdx_8)
            i = i_2
        
        int32_t j = 0
        int32_t j_3 = 0
        
        if (rdi_1[1].d s> 0)
            int32_t* r8_6 = nullptr
            void* rax_24 = nullptr
            var_158 = nullptr
            var_f8[0].q = 0
            
            do
                int64_t rcx_17 = *rdi_1
                var_168 = rcx_17
                uint32_t rsi_2 = zx.d(*(rax_24 + rcx_17))
                
                if (j s< *(r12_2 + 0x10))
                    uint32_t rcx_18 = *(r8_6 + *(r12_2 + 8))
                    void* rax_25
                    
                    if (rcx_18 s< 0 || rcx_18 s>= *(arg2[0x86] + 0xc0))
                        rax_25.b = 0
                    else
                        rax_25.b = 1
                    
                    if (rax_25.b != 0)
                        rsi_2 = *(arg2[0x86] + 0xc0)
                        
                        if (rcx_18 s< 0)
                            rsi_2 = 0
                        else if (rcx_18 s< rsi_2)
                            rsi_2 = rcx_18
                
                char rax_27 = sub_14233de20(result[0x2b], i, rsi_2)
                int64_t r8_8 = *arg2
                int64_t* rax_28 = (*(r8_8 + 0x548))(arg2, zx.q(rsi_2), r8_8)
                bool cond:2_1 = data_143f597d8 == 0
                int64_t* rdi_2 = rax_28
                int64_t* var_180 = rax_28
                
                if (not(cond:2_1) && rax_28 != 0)
                    int64_t rdx_11 = *rax_28
                    
                    if ((*(rdx_11 + 0x3f8))(rax_28, rdx_11) u<= 1)
                        int64_t* rax_30
                        rax_30, zmm6, zmm7, zmm8, zmm9 = sub_14210f630(0)
                        uint32_t r8_9 = zx.d(*(result + 0x179))
                        var_180 = rax_30
                        rdi_2 = rax_30
                        void var_d8
                        int64_t rax_32 = *sub_142126870(rax_30, &var_d8, r8_9)
                        *rbx_1 |= rax_32
                
                int32_t var_178_1 = *(var_f8[0].q + var_168 + 0x20)
                int32_t rax_34
                
                if (rdi_2 != 0)
                    rax_34 = (*(*rdi_2 + 0x2d8))(rdi_2, 0)
                
                if (rdi_2 == 0 || rax_34.b == 0)
                    rbx_1.b = 0
                else
                    rbx_1.b = 1
                
                if (var_178_1 s> 0)
                    if (rdi_2 != 0)
                        rax_34 = (*(*rdi_2 + 0x2d8))(rdi_2, 9)
                    
                    if (rdi_2 == 0 || rax_34.b == 0)
                        rax_34.b = 0
                    else
                        rax_34.b = 1
                    
                    rbx_1.b &= rax_34.b
                
                if (rdi_2 == 0 || rbx_1.b == 0)
                    int64_t* rax_37
                    rax_37, zmm6, zmm7, zmm8, zmm9 = sub_14210f630(0)
                    uint32_t r8_10 = zx.d(*(result + 0x179))
                    var_180 = rax_37
                    rdi_2 = rax_37
                    rbx_1 = &result[0x30]
                    void var_c8
                    int64_t rax_39 = *sub_142126870(rax_37, &var_c8, r8_10)
                    *rbx_1 |= rax_39
                else
                    rbx_1 = &result[0x30]
                
                int64_t rax_40 = sub_1423b4730(rdi_2, &data_143f46010, zx.d(*(result + 0x179)))
                
                if (rax_40.b != 0 && *(var_148 + 0x28) == 0)
                    int64_t* rax_41 = sub_14210f630(0)
                    uint32_t rbx_2 = zx.d(*(result + 0x179))
                    rdi_2 = rax_41
                    var_180 = rax_41
                    int64_t* rax_42
                    rax_42, zmm6, zmm7, zmm8, zmm9 = sub_14210f630(0)
                    rbx_1 = &result[0x30]
                    rax_40 = *sub_142126870(rax_42, &var_138, rbx_2)
                    *rbx_1 |= rax_40
                
                if (rax_27 == 0 && (rax_18 & 8) != 0)
                    if (rsi_2 s< 0 || rsi_2 s>= *(arg2[0x86] + 0xc0))
                        rax_40.b = 0
                    else
                        rax_40.b = 1
                
                char rdx_14
                
                if (rax_27 == 0 && (rax_18 & 8) != 0
                        && (rax_40.b == 0 || *(var_f8[0].q + var_168 + 0xd) != 0))
                    rdx_14 = 1
                else
                    rdx_14 = 0
                
                char rax_45 = result[0x2f].b
                arg_10 |= rdx_14
                uint8_t rcx_31 = *(result + 0x183) u>> 3 | rax_45
                var_1a8 = rdi_2
                int32_t var_1a0
                var_1a0.b = rdx_14
                uint32_t var_19c_1 = rsi_2
                result[0x2f].b = ((rcx_31 ^ rax_45) & 1) ^ rax_45
                int64_t rdi_3 = sx.q(r13_2[1].d)
                int32_t rax_46 = (rdi_3 + 1).d
                r13_2[1].d = rax_46
                
                if (rax_46 s> *(r13_2 + 0xc))
                    sub_1405a4f90(r13_2)
                
                *(*r13_2 + rdi_3 * 0x10) = var_1a8.o
                void var_e8
                sub_141e6db90(&result[0x37], &var_e8, &var_180, nullptr)
                j = j_3 + 1
                rax_24 = var_f8[0].q + 0xe8
                rdi_1 = var_148
                r8_6 = &var_158[1]
                i = i_2
                j_3 = j
                var_f8[0].q = rax_24
                var_158 = r8_6
            while (j s< rdi_1[1].d)
            
            rsi_1 = &result[0x31]
        
        i += 1
        rcx_14 = &var_108_1[1]
        rax_21 = result[0x2c]
        rdx_7 = var_188_1 + 0x10
        i_2 = i
        var_108_1 = rcx_14
        var_188_1 = rdx_7
    while (i s< rax_21[1].d)
    
    rdi = arg_10
    r12 = &result[0x33]

char rax_49 = *(result + 0x39)

if ((rax_49 & 2) == 0 || rdi == 0)
    rcx_14.b = 0
else
    rcx_14.b = 2

void* rcx_37 = result[0x2a]
*(result + 0x39) = (rax_49 & 0xfd) | rcx_14.b

if (rcx_37 != 0)
    sub_1420e3ab0(sub_141dc9840(rcx_37))

int64_t* rcx_39 = data_143f5b298
void var_174
(*(*rcx_39 + 0x300))(rcx_39, arg2, &var_174)
sub_140acc920(&var_1a8, &var_174)
int64_t* rbx_3 = var_190
int32_t* rax_52

if (rbx_3 != 0)
    rax_52 = *(rbx_3[0x86] + 0x150)
    int32_t* var_188_2 = rax_52
    
    if (rax_52 != 0 && (*(rbx_3 + 0x20b) & 8) != 0)
        char rcx_41 = *(rbx_3 + 0x5a7)
        
        if ((rcx_41 & 0x40) != 0 || rcx_41 s< 0)
            arg_10.d = 0
            
            if (rax_52[0x12] s> 0)
                uint128_t var_58_1 = zmm6
                int64_t* rcx_42 = nullptr
                float var_68_1[0x4] = zmm7
                float var_78_1[0x4] = zmm8
                float var_88_1[0x4] = zmm9
                float zmm10[0x4]
                float var_98_1[0x4] = zmm10
                char arg_20
                arg_20.q = 0
                int32_t i_1
                
                do
                    void* r13_3 = *(rcx_42 + *(rax_52 + 0x40))
                    int64_t rdi_4 = sx.q(sub_141f5e0e0(rbx_3, *(r13_3 + 0x80)))
                    
                    if (rdi_4.d != 0xffffffff)
                        int64_t j_6 = sx.q(*(r13_3 + 0x30))
                        int64_t j_4 = j_6
                        int64_t r8_17 = rdi_4 << 6
                        char arg_18
                        arg_18.d = j_6.d
                        int64_t rdx_23 = *(rbx_3[0x86] + 0x360)
                        zmm7 = *(r8_17 + rdx_23)
                        zmm8 = *(r8_17 + rdx_23 + 0x10)
                        zmm9 = *(r8_17 + rdx_23 + 0x20)
                        zmm10 = *(r8_17 + rdx_23 + 0x30)
                        float zmm1_1[0x4]
                        float zmm2_1[0x4]
                        float zmm3_1[0x4]
                        
                        if (j_6.d s> 0)
                            var_138 = 0
                            int64_t rbx_4 = 0
                            zmm6 = zx.o(var_138)
                            int32_t var_130_1 = 0x3f800000
                            int32_t var_13c_1 = 0x3f800000
                            int64_t j_1
                            
                            do
                                int64_t rcx_45 = *(r13_3 + 0x28)
                                zmm3_1 = var_148.o
                                int64_t rsi_3 = sx.q(*(r12 + 8))
                                var_1a8 = nullptr
                                zmm1_1 = *(rbx_4 + rcx_45 + 0x34)
                                zmm3_1[0] = (*(rbx_4 + rcx_45 + 0x30))[0]
                                zmm2_1 = *(rbx_4 + rcx_45 + 0x38)
                                float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                                temp0_2[0] = zmm1_1[0]
                                int32_t var_1a0_1 = 0
                                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
                                temp0_3[0] = zmm2_1[0]
                                uint64_t var_118_1 = zmm6.q
                                float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
                                var_148.o = temp0_4
                                float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
                                float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
                                float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
                                float temp0_8[0x4] = _mm_mul_ps(temp0_6, zmm9)
                                int32_t var_110_1 = 0x3f800000
                                float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm8)
                                int32_t var_10c_1 = 0
                                float temp0_10[0x4] = _mm_mul_ps(temp0_5, zmm10)
                                float temp0_12[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0), zmm7)
                                float temp0_15[0x4] = _mm_add_ps(_mm_add_ps(temp0_10, temp0_8), 
                                    _mm_add_ps(temp0_9, temp0_12))
                                float var_120_1 = _mm_shuffle_ps(temp0_15, temp0_15, 0xaa)[0]
                                int32_t rax_57 = (rsi_3 + 1).d
                                int64_t var_128_1 = (_mm_unpacklo_ps(temp0_15, 
                                    _mm_shuffle_ps(temp0_15, temp0_15, 0x55)[0].q)).q
                                float var_11c_1 = (*(rbx_4 + rcx_45 + 0x3c))[0]
                                *(r12 + 8) = rax_57
                                
                                if (rax_57 s> *(r12 + 0xc))
                                    sub_140adefe0(r12)
                                
                                int64_t rax_58 = *r12
                                int64_t rcx_47 = rsi_3 * 9
                                rbx_4 += 0x40
                                *(rax_58 + (rcx_47 << 2)) = rdi_4.d
                                *(rax_58 + (rcx_47 << 2) + 4) = var_128_1.o
                                *(rax_58 + (rcx_47 << 2) + 0x14) = var_118_1.o
                                j_1 = j_4
                                j_4 -= 1
                            while (j_1 != 1)
                        
                        int64_t j_7 = sx.q(*(r13_3 + 0x50))
                        int64_t j_5 = j_7
                        
                        if (j_7.d s> 0)
                            int32_t var_14c_1 = 0
                            int64_t rsi_4 = 0
                            int32_t var_15c_1 = 0x3f800000
                            int64_t j_2
                            
                            do
                                void* rbx_5 = *(r13_3 + 0x48)
                                float (* rax_59)[0x4]
                                rax_59, zmm7, zmm8 = sub_140ade170(rbx_5 + 0x3c + rsi_4, &var_f8)
                                zmm3_1 = data_143a2ff00
                                var_1a8 = nullptr
                                zmm6 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
                                zmm2_1 = *rax_59
                                float temp0_20[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
                                zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
                                int32_t var_1a0_2 = 0
                                float temp0_24[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
                                zmm6 = __mulps_xmmps_memps(zmm6, data_143f578d0)
                                float temp0_26[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
                                zmm6 = _mm_add_ps(zmm6, temp0_24)
                                float temp0_29[0x4] =
                                    _mm_mul_ps(temp0_20, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
                                float temp0_31[0x4] =
                                    _mm_mul_ps(temp0_26, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
                                float temp0_32[0x4] = __mulps_xmmps_memps(temp0_29, data_143f578c0)
                                float temp0_33[0x4] = __mulps_xmmps_memps(temp0_31, data_143f578b0)
                                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, temp0_32), temp0_33)
                                float temp0_36[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                float temp0_37[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                zmm3_1 = temp0_36 ^ 0x80000000
                                temp0_37[0] = temp0_37[0] + temp0_37[0]
                                zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                                zmm2_1 = zmm3_1
                                temp0_37[0] = temp0_37[0] f* zmm6.d
                                zmm2_1[0] = zmm2_1[0] * temp0_36[0]
                                temp0_37[0] = temp0_37[0] * temp0_37[0]
                                zmm1_1 = zmm3_1
                                zmm3_1[0] = zmm3_1[0] f* zmm6.d
                                zmm2_1[0] = zmm2_1[0] - temp0_37[0]
                                float temp0_38[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                                temp0_37[0] = temp0_37[0] * temp0_38[0]
                                zmm1_1[0] = zmm1_1[0] * temp0_38[0]
                                temp0_37[0] = temp0_37[0] - zmm3_1[0]
                                zmm3_1 = var_158.o
                                zmm2_1[0] = zmm2_1[0] + 1f
                                temp0_37[0] = temp0_37[0] + zmm1_1[0]
                                zmm3_1[0] = zmm2_1[0]
                                float temp0_39[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                                temp0_39[0] = temp0_37[0]
                                float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc6)
                                temp0_40[0] = temp0_37[0]
                                float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
                                var_158.o = temp0_41
                                float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xff)
                                float temp0_43[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
                                float temp0_44[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
                                float temp0_45[0x4] = _mm_mul_ps(temp0_42, zmm10)
                                float temp0_46[0x4] = _mm_mul_ps(temp0_43, zmm9)
                                float temp0_48[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0), zmm7)
                                float temp0_52[0x4] = _mm_add_ps(_mm_add_ps(temp0_45, temp0_46), 
                                    _mm_add_ps(_mm_mul_ps(temp0_44, zmm8), temp0_48))
                                float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
                                zmm2_1 = *(rsi_4 + rbx_5 + 0x38)
                                zmm3_1 = var_168.o
                                zmm3_1[0] = (*(rsi_4 + rbx_5 + 0x30))[0]
                                float var_100_1 = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)[0]
                                float zmm0_2[0x4] = *(rsi_4 + rbx_5 + 0x34)
                                float temp0_55[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                                temp0_55[0] = zmm0_2[0]
                                var_1a8 = nullptr
                                float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xc6)
                                temp0_56[0] = zmm2_1[0]
                                int32_t var_1a0_3 = 0
                                float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc9)
                                var_168.o = temp0_57
                                float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
                                float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
                                float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
                                float temp0_61[0x4] = _mm_mul_ps(temp0_59, zmm9)
                                float temp0_62[0x4] = _mm_mul_ps(temp0_60, zmm8)
                                float temp0_63[0x4] = _mm_mul_ps(temp0_58, zmm10)
                                float temp0_65[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), zmm7)
                                float temp0_68[0x4] = _mm_add_ps(_mm_add_ps(temp0_63, temp0_61), 
                                    _mm_add_ps(temp0_62, temp0_65))
                                float var_d0_1 = _mm_shuffle_ps(temp0_68, temp0_68, 0xaa)[0]
                                int64_t var_128_2 = (_mm_unpacklo_ps(temp0_68, 
                                    _mm_shuffle_ps(temp0_68, temp0_68, 0x55)[0].q)).q
                                float var_120_2 = var_d0_1
                                float var_11c_2 = (*(rsi_4 + rbx_5 + 0x48))[0]
                                zmm0_2 = *(rsi_4 + rbx_5 + 0x4c)
                                int64_t rbx_6 = sx.q(*(r12 + 8))
                                float var_110_2 = var_100_1
                                float temp0_72[0x4] = _mm_unpacklo_ps(temp0_52, temp0_53[0].q)
                                float var_10c_2 = zmm0_2[0]
                                int32_t rax_62 = (rbx_6 + 1).d
                                int64_t var_118_2 = temp0_72.q
                                *(r12 + 8) = rax_62
                                
                                if (rax_62 s> *(r12 + 0xc))
                                    sub_140adefe0(r12)
                                
                                int64_t rax_63 = *r12
                                int64_t rcx_51 = rbx_6 * 9
                                rsi_4 += 0x50
                                *(rax_63 + (rcx_51 << 2)) = rdi_4.d
                                *(rax_63 + (rcx_51 << 2) + 4) = var_128_2.o
                                *(rax_63 + (rcx_51 << 2) + 0x14) = var_118_2.o
                                j_2 = j_5
                                j_5 -= 1
                            while (j_2 != 1)
                        
                        if (arg_18.d s> 0 || j_7.d s> 0)
                            int16_t* rdx_27 = result[0x35]
                            int64_t r8_18 = sx.q(result[0x36].d)
                            int16_t* rax_64 = rdx_27
                            void* rcx_52 = &rdx_27[r8_18]
                            
                            if (rdx_27 != rcx_52)
                                while (*rax_64 != rdi_4.w)
                                    rax_64 = &rax_64[1]
                                    
                                    if (rax_64 == rcx_52)
                                        goto label_142306e22
                            
                            if (rdx_27 == rcx_52 || ((rax_64 - rdx_27) s>> 1).d == 0xffffffff)
                            label_142306e22:
                                int32_t rax_67 = (r8_18 + 1).d
                                result[0x36].d = rax_67
                                
                                if (rax_67 s> *(result + 0x1b4))
                                    sub_140594770(&result[0x35])
                                
                                *(result[0x35] + (r8_18 << 1)) = rdi_4.w
                        
                        rbx_3 = var_190
                    
                    i_1 = arg_10.d + 1
                    rcx_42 = arg_20.q + 8
                    arg_10.d = i_1
                    arg_20.q = rcx_42
                    rax_52 = var_188_2
                while (i_1 s< var_188_2[0x12])
                result = arg1

if (result[0x36].d != 0)
    sub_141e366b0(result[0x35], result[0x36].d)

if ((result[0x2f].b & 0x14) == 0)
    rax_52.b = 2
else
    rax_52 = sx.q(data_143f0f1a0)
    char rdx_31
    
    if (rax_52.d u> 0x1e)
        if ((*(rax_52 * 0x14 + &data_143f025fc) & 1) != 0)
            rdx_31 = 1
        else
            rdx_31 = 0
    else if (test_bit(0x6562c800, rax_52.d) || (*(rax_52 * 0x14 + &data_143f025fc) & 1) != 0)
        rdx_31 = 1
    else
        rdx_31 = 0
    
    bool cond:5_1
    
    if (rdx_31 != 0)
        cond:5_1 = sub_1419a5610().b == 0
    label_142306fe3:
        
        if (cond:5_1)
            rax_52.b = 2
        else
            rax_52.b = 0
    else if (zx.d(*(result + 0x179)) s< 3)
        rax_52.b = 2
    else
        int32_t* r8_21
        
        if (rax_52.d u> 0x18 || not(test_bit(0x100a040, rax_52.d)))
            r8_21 = rax_52
        
        int64_t rcx_58
        
        if ((rax_52.d u<= 0x18 && test_bit(0x100a040, rax_52.d))
                || *(&data_143f025f0 + rax_52 * 0x14) == data_143f025b8)
            r8_21 = rax_52
            rcx_58.b = 1
        else
            rcx_58.b = 0
        
        if (rcx_58.b != 0)
            rax_52.b = 2
        else
            uint64_t rcx_59
            
            if ((rax_52 - 0x19).d u<= 1 || *(&data_143f025f0 + r8_21 * 0x14) == data_143f025d0)
                rcx_59.b = 1
            else
                rcx_59.b = 0
            
            if (rcx_59.b != 0 || rax_52.d == 0x30)
                rax_52.b = 2
            else
                void* rcx_60 = r8_21 * 5
                
                if (((*((rcx_60 << 2) + 0x143f02600) u>> 1).b & 1) != 0)
                    cond:5_1 = ((*((rcx_60 << 2) + &data_143f025fc) u>> 0x17).b & 1) == 0
                    goto label_142306fe3
                
                rax_52.b = 0

*(result + 0x3b) &= 0xfd
*(result + 0x3b) |= rax_52.b
return result
