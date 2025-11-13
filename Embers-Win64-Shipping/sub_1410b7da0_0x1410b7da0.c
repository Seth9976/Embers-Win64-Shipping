// 函数: sub_1410b7da0
// 地址: 0x1410b7da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t* r15 = arg4
int32_t* r12 = arg6
int64_t* rsi = arg3
int32_t* var_1b0 = r12
float zmm0_1[0x4] = cosf(data_1439b5218)
void* rax_3 = *(arg1 + 8)
float zmm13[0x4] = zmm0_1
void* const rdi

if (rax_3 == 0)
    rdi = nullptr
else
    rdi = *(rax_3 + 0xf80)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx = zx.q(data_14401b1a0)
void* const var_220 = rdi
void* rbx_1 = *(ThreadLocalStoragePointer + (rcx << 3))

if (data_143e3a858 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143e3a858)
    
    if (data_143e3a858 == 0xffffffff)
        atexit(sub_142ccfb80)
        _Init_thread_footer(&data_143e3a858)

if (data_143e3a870 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143e3a870)
    
    if (data_143e3a870 == 0xffffffff)
        atexit(sub_142ccfb60)
        _Init_thread_footer(&data_143e3a870)

if (data_143e3a874 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143e3a874)
    
    if (data_143e3a874 == 0xffffffff)
        atexit(sub_142ccfce0)
        _Init_thread_footer(&data_143e3a874)

if (data_143e3a888 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143e3a888)
    
    if (data_143e3a888 == 0xffffffff)
        atexit(sub_142ccfbc0)
        _Init_thread_footer(&data_143e3a888)

int32_t rax_8 = data_143e3a854
data_143e3a850 = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405a51b0(&data_143e3a848, 0)

int32_t rax_9 = data_1439b5474
void* r13 = &data_1439b5460
data_1439b5470 = 0

if (rax_9 s< 0 && rax_9 != 0)
    sub_1410b3a30(&data_1439b5460, 0)

int32_t rax_10 = data_143e3a86c
data_143e3a868 = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405a5410(&data_143e3a860, 0)

int32_t rax_11 = data_143e3a884
data_143e3a880 = 0

if (rax_11 s< 0 && rax_11 != 0)
    sub_1405a5410(&data_143e3a878, 0)

*arg7 = 0
void* rcx_2 = *(arg1 + 8)
char rax_12

if (rcx_2 != 0)
    rax_12 = sub_1413ebdc0(rcx_2 + 0x12c0)

int64_t* r14

if (rcx_2 == 0 || rax_12 == 0)
    r14.b = 0
else
    r14.b = 1

char var_228 = r14.b
int32_t i_1 = 0
void* const var_178
void* const var_170

if (rsi[0xa2e].d s> 0)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    int64_t rcx_4 = 0
    int128_t zmm10 = data_1439b521c
    int128_t zmm7
    int128_t var_68_1 = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    int64_t var_1c8_1 = 0
    int32_t i
    
    do
        float var_208_1[0x4] = data_142f13090
        void* rbx_2 = *(rsi[0xa2d] + (rcx_4 << 3))
        void* rcx_5 = *(rbx_2 + 0x68)
        float zmm1[0x4]
        
        if (r14.b != 0)
            void* rax_14 = *(rbx_2 + 8)
            zmm7 = zx.o(0)
            zmm1 = *(rax_14 + 0xc4)
            zmm6 = *(rax_14 + 0xc8)
            var_208_1[0] = (*(rax_14 + 0xc0))[0]
            var_208_1[1] = zmm1[0]
            var_208_1[2] = zmm6[0]
        else
            int32_t var_158
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (rdi == 0)
            label_1410b8191:
                
                if (rcx_5 == 0)
                    zmm7 = var_208_1[3]
                    zmm6 = var_208_1[2]
                else
                    zmm0_1 = *(rcx_5 + 0xf0)
                    int32_t var_218_1 = 0x3de147ae
                    int32_t var_1f4_1 = 0x3f170a3d
                    zmm6 = zmm0_1
                    float var_128_1[0x4] = zmm0_1
                    zmm0_1 = *(rcx_5 + 0x100)
                    int32_t var_1f8_1 = 0x3e99999a
                    var_178 = nullptr
                    zmm3 = zmm0_1
                    float var_118_1[0x4] = zmm0_1
                    zmm0_1 = *(rcx_5 + 0x110)
                    int64_t var_170_4 = 0
                    var_178 = nullptr
                    zmm2 = zmm0_1
                    float var_108_1[0x4] = zmm0_1
                    zmm0_1 = var_218_1
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm0_1, zmm0_1, 0))
                    int64_t var_170_5 = 0
                    zmm0_1 = var_1f4_1
                    zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm0_1, zmm0_1, 0))
                    var_178 = nullptr
                    zmm0_1 = var_1f8_1
                    zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(zmm0_1, zmm0_1, 0))
                    int64_t var_170_6 = 0
                    var_178 = nullptr
                    int64_t var_170_7 = 0
                    __builtin_memset(&var_158, 0, 0x20)
                    zmm6 = _mm_add_ps(zmm6, zmm3)
                    var_178 = nullptr
                    var_170 = nullptr
                    zmm6 = _mm_add_ps(zmm6, zmm2)
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xff) ^ 0x80000000
                    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0x55) ^ 0x80000000
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm9[0] = zmm9[0] + zmm8[0]
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm9[0] = zmm9[0] + zmm6[0]
                    
                    if (not(zmm9[0] == 1f))
                        if (zmm9[0] >= 9.99999994e-09f)
                            zmm3 = zx.o(0)
                            zmm2 = 0x3f000000
                            zmm3[0] = zmm9[0]
                            float zmm5_1[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                            zmm3[0] = zmm3[0] * 0.5f
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            zmm3[0] = zmm3[0] * zmm5_1[0]
                            zmm2[0] = 0.5f - zmm3[0]
                            zmm5_1[0] = zmm5_1[0] * zmm2[0]
                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            zmm3[0] = zmm3[0] * zmm5_1[0]
                            zmm5_1[0] = zmm5_1[0] * (0.5f - zmm3[0])
                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                            float var_218_2 = zmm5_1[0]
                            zmm5_1[0] = zmm5_1[0] * zmm8[0]
                            zmm5_1[0] = zmm5_1[0] * zmm9[0]
                            zmm5_1[0] = zmm5_1[0] * zmm6[0]
                            zmm8 = zmm5_1
                            zmm9 = zmm5_1
                            zmm6 = zmm5_1
                        else
                            zmm8 = data_143dbb1f8
                            zmm9 = data_143dbb1fc
                            zmm6 = data_143dbb200
                    
                    var_208_1[0] = zmm8[0]
                    zmm7 = zmm10
                    var_208_1[1] = zmm9[0]
                    var_208_1[2] = zmm6[0]
            else
                char rdx = *(rdi + 0x20)
                
                if ((rdx & 4) != 0 || (rdx & 2) == 0 || (*(*rsi + 0x2c) & 0x80000) == 0
                        || rcx_5 == 0)
                    if ((rdx & 6) != 0 || (*(*rsi + 0x2c) & 0x80000) == 0)
                        goto label_1410b8191
                    
                    zmm2 = *(rdi + 0x90)
                    zmm1 = *(rdi + 0x60)
                    var_178 = nullptr
                    zmm3 = *(rdi + 0x30)
                    int64_t var_170_1 = 0
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(0x3de147ae, 0x3de147ae, 0))
                    var_178 = nullptr
                    int64_t var_170_2 = 0
                    var_178 = nullptr
                    int64_t var_170_3 = 0
                    var_178 = nullptr
                    var_170 = nullptr
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(0x3f170a3d, 0x3f170a3d, 0))
                    zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(0x3e99999a, 0x3e99999a, 0))
                    __builtin_memset(&var_158, 0, 0x20)
                    var_178.o = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm2)
                    int32_t var_1a8
                    sub_141096e00(&var_178, &var_1a8)
                    zmm7 = zmm10
                    int32_t var_1a0
                    zmm6 = var_1a0
                    var_208_1[0] = var_1a8[0]
                    int32_t var_1a4
                    var_208_1[1] = var_1a4[0]
                    var_208_1[2] = zmm6[0]
                else
                    zmm7.d = data_1439b5220.d f* *(rcx_5 + 0x17c)
                    zmm1 = *(rcx_5 + 0x174)
                    zmm6 = *(rcx_5 + 0x178)
                    zmm7.d = zmm7.d f* 1.57079637f
                    var_208_1[0] = (*(rcx_5 + 0x170))[0]
                    zmm0_1 = data_1439b5224
                    zmm0_1[0] = zmm0_1[0] * 3.14159274f
                    var_208_1[1] = zmm1[0]
                    var_208_1[2] = zmm6[0]
                    zmm0_1[0] = zmm0_1[0] * 0.00555555569f
                    zmm7 = _mm_max_ss(zmm7.d, zmm0_1[0])
        
        if (not(zmm13[0] >= 1f) && r14.b == 0)
            zmm6 ^= 0x80000000
            zmm0_1 = 0x3f800000
            zmm6[0] = zmm6[0] - zmm13[0]
            zmm0_1[0] = 1f - zmm13[0]
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm6[0] = zmm6[0] / zmm0_1[0]
            
            if (zmm6[0] >= 0f)
                zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
            else
                zmm6 = zx.o(0)
        
        if (zmm13[0] >= 1f || r14.b != 0 || not(zmm6[0] >= 1f))
            int32_t j = data_143e3a850
            int32_t j_1 = data_1439b5470
            int64_t var_1d8 = 0
            int32_t var_1d0_1 = 0
            sub_14139bda0(rbx_2, &var_1d8)
            int32_t r14_1 = 0
            
            if (var_1d0_1 s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    void* rbx_3 = *(rsi_1 + var_1d8)
                    int64_t* rcx_8 = *(rbx_3 + 8)
                    
                    if ((*(rcx_8 + 0x39) & 2) != 0)
                        (*(*rcx_8 + 0x30))(rcx_8, &data_143e3a848)
                        int64_t* rcx_9 = *(rbx_3 + 8)
                        
                        if ((*(*rcx_9 + 0x120))(rcx_9) != 0)
                            void* rbx_4 = rbx_3 + 0x88
                            int64_t rdi_1 = sx.q(*(rbx_4 + 0x10))
                            
                            if (rdi_1.d != 0)
                                int32_t rdx_3 = data_1439b5470
                                int32_t rax_21 = rdi_1.d + rdx_3
                                
                                if (rax_21 s> data_1439b5474)
                                    sub_1410b3a30(&data_1439b5460, rax_21)
                                    rdx_3 = data_1439b5470
                                
                                void* rax_22 = *(rbx_4 + 8)
                                void* rcx_10 = &data_1439b5460
                                
                                if (rax_22 != 0)
                                    rbx_4 = rax_22
                                
                                void* rax_23 = data_1439b5468
                                
                                if (rax_23 != 0)
                                    rcx_10 = rax_23
                                
                                memcpy(rcx_10 + (sx.q(rdx_3) << 2), rbx_4, (rdi_1 << 2).d)
                                data_1439b5470 += rdi_1.d
                    
                    r14_1 += 1
                    rsi_1 = &rsi_1[1]
                while (r14_1 s< var_1d0_1)
                
                rsi = arg3
            
            int32_t var_218_3 = zmm7.d
            uint16_t rax_26 = (var_218_3 u>> 0x17).w
            uint16_t r9_1 = (var_218_3 u>> 0x1f).w << 0xf
            uint32_t rcx_12 = zx.d(rax_26.b)
            
            if (rcx_12 u> 0x70)
                if (rcx_12 u< 0x8f)
                    r9_1 |= ((var_218_3 u>> 0xd).w & 0x3ff) | ((rax_26 - 0x10) & 0x1f) << 0xa
                else
                    r9_1 |= 0x7bff
            else if (0x70 - rcx_12 + 0xe s<= 0x18)
                int32_t rdx_8 = (var_218_3 & 0x7fffff) | 0x800000
                r9_1 |= (rdx_8 u>> (0x70 - rcx_12 + 0xe).b).w & 0x3ff
                
                if (((rdx_8 u>> ((0x70 - rcx_12).b + 0xd)).b & 1) != 0)
                    r9_1 += 1
            
            float var_218_4 = (*(*(rbx_2 + 8) + 0x48))[0]
            uint16_t rax_31 = (var_218_4 u>> 0x17).w
            uint16_t r8_4 = (var_218_4 u>> 0x1f).w << 0xf
            uint32_t rcx_15 = zx.d(rax_31.b)
            
            if (rcx_15 u> 0x70)
                if (rcx_15 u< 0x8f)
                    r8_4 |= ((var_218_4 u>> 0xd).w & 0x3ff) | ((rax_31 - 0x10) & 0x1f) << 0xa
                else
                    r8_4 |= 0x7bff
            else if (0x70 - rcx_15 + 0xe s<= 0x18)
                int32_t rdx_13 = (var_218_4 & 0x7fffff) | 0x800000
                r8_4 |= (rdx_13 u>> (0x70 - rcx_15 + 0xe).b).w & 0x3ff
                
                if (((rdx_13 u>> ((0x70 - rcx_15).b + 0xd)).b & 1) != 0)
                    r8_4 += 1
            
            bool cond:6_1 = j s>= data_143e3a850
            var_208_1[3] = zx.d(r8_4) << 0x10 | zx.d(r9_1)
            
            if (not(cond:6_1))
                do
                    int64_t rbx_5 = sx.q(data_143e3a868)
                    int32_t rax_35 = (rbx_5 + 1).d
                    bool cond:7_1 = rax_35 s<= data_143e3a86c
                    data_143e3a868 = rax_35
                    
                    if (not(cond:7_1))
                        sub_1405a4f90(&data_143e3a860)
                    
                    j += 1
                    *(data_143e3a860 + rbx_5 * 0x10) = var_208_1
                while (j s< data_143e3a850)
            
            while (j_1 s< data_1439b5470)
                int64_t rbx_6 = sx.q(data_143e3a880)
                int32_t rax_37 = (rbx_6 + 1).d
                bool cond:8_1 = rax_37 s<= data_143e3a884
                data_143e3a880 = rax_37
                
                if (not(cond:8_1))
                    sub_1405a4f90(&data_143e3a878)
                
                j_1 += 1
                *(data_143e3a878 + rbx_6 * 0x10) = var_208_1
            
            r14 = zx.q(var_228)
            *arg5 += 1
            zmm10 = data_1439b521c
        
        i = i_1 + 1
        rdi = var_220
        rcx_4 = var_1c8_1 + 1
        i_1 = i
        var_1c8_1 = rcx_4
    while (i s< rsi[0xa2e].d)
    r15 = arg4
    r12 = var_1b0

int32_t rbx_7 = data_143e3a850
int32_t result
int128_t* var_240
int128_t var_168
uint64_t rax_39
void* rdi_2

if (rbx_7 s> 0)
    rdi_2 = &rsi[0x2b5]
    int32_t count = rbx_7 << 5
    void* r8_5 = *rdi_2
    void* rax_40 = *(r8_5 + 0xee0)
    
    if (rax_40 == 0 || *(rax_40 + 0x18) s< count)
        sub_1405d16e0(r8_5 + 0xee0, nullptr)
        sub_1405d16e0(*rdi_2 + 0xee8, nullptr)
        int128_t zmm1_1 = data_143dbb1e0
        var_240 = &var_168
        int32_t var_158_1 = 1
        int64_t* rcx_30 = data_143f0f180
        int32_t var_144_1 = (1 << (data_1439c7a34).b) - 1
        int512_t zmm0_2
        zmm0_2.o = zx.o(0)
        var_168 = zx.o(0)
        int64_t var_138_1 = 0
        int32_t var_130_1 = 0
        int128_t var_154_1 = zmm1_1
        char var_140_1 = 0
        (*(*rcx_30 + 0x498))(zmm0_2, &var_220, &data_143f02b98, zx.q(count), 0x204, var_240)
        sub_1405d1600(*rdi_2 + 0xee0, &var_220)
        sub_1405d1550(&var_220)
        int64_t* rcx_34 = data_143f0f180
        var_240.b = 1
        (*(*rcx_34 + 0x4b8))(rcx_34, &var_220, &data_143f02b98, *(*rdi_2 + 0xee0), 0x10, var_240)
        sub_1405d1600(*rdi_2 + 0xee8, &var_220)
        sub_1405ec8a0(&var_220)
        r8_5 = rsi[0x2b5]
    
    int64_t* rcx_38 = data_143f0f180
    var_240.d = 1
    memcpy((*(*rcx_38 + 0x130))(rcx_38, &data_143f02b98, *(r8_5 + 0xee0), 0, count, var_240), 
        data_143e3a848, count)
    int64_t* rcx_40 = data_143f0f180
    (*(*rcx_40 + 0x138))(rcx_40, &data_143f02b98, *(*rdi_2 + 0xee0))
    rax_39 = zx.q(data_1439b5470)
    
    if (rax_39.d s> 0)
        goto label_1410b88b1
    
label_1410b8a3a:
    void* r8_15 = *rdi_2
    int32_t rax_57 = data_143e3a868 << 4
    int32_t rbx_10 = (data_143e3a880 << 4) + rax_57
    uint64_t rsi_2 = zx.q(rax_57)
    void* rax_58 = *(r8_15 + 0xf00)
    int64_t* r13_1
    
    if (rax_58 == 0 || *(rax_58 + 0x18) s< rbx_10)
        sub_1405d16e0(r8_15 + 0xf00, nullptr)
        sub_1405d16e0(*rdi_2 + 0xf08, nullptr)
        int128_t zmm1_3 = data_143dbb1e0
        var_240 = &var_168
        int32_t var_158_3 = 1
        int64_t* rcx_61 = data_143f0f180
        int32_t var_144_3 = (1 << (data_1439c7a34).b) - 1
        int512_t zmm0_4
        zmm0_4.o = zx.o(0)
        var_168 = zx.o(0)
        int64_t var_138_3 = 0
        int32_t var_130_3 = 0
        int128_t var_154_3 = zmm1_3
        char var_140_3 = 0
        (*(*rcx_61 + 0x498))(zmm0_4, &var_220, &data_143f02b98, zx.q(rbx_10), 0x204, var_240)
        sub_1405d1600(*rdi_2 + 0xf00, &var_220)
        sub_1405d1550(&var_220)
        int64_t* rcx_65 = data_143f0f180
        var_240.b = 1
        (*(*rcx_65 + 0x4b8))(rcx_65, &var_220, &data_143f02b98, *(*rdi_2 + 0xf00), 0x10, var_240)
        sub_1405d1600(*rdi_2 + 0xf08, &var_220)
        sub_1405ec8a0(&var_220)
        r13_1 = arg3
        r8_15 = r13_1[0x2b5]
    else
        r13_1 = arg3
    
    int64_t* rcx_69 = data_143f0f180
    var_240.d = 1
    int64_t rax_64 =
        (*(*rcx_69 + 0x130))(rcx_69, &data_143f02b98, *(r8_15 + 0xf00), 0, rbx_10, var_240)
    memcpy(rax_64, data_143e3a860, rsi_2.d)
    memcpy(rax_64 + rsi_2, data_143e3a878, data_143e3a880 << 4)
    int64_t* rcx_72 = data_143f0f180
    (*(*rcx_72 + 0x138))(rcx_72, &data_143f02b98, *(*rdi_2 + 0xf00))
    *arg7 = *(*rdi_2 + 0xf08)
    
    if (r14.b == 0)
        *r15 = data_143e3a850
        result = data_1439b5470
        *r12 = result
    else
        void* r8_22 = *rdi_2
        int32_t r15_3 = data_143e3a880 + data_143e3a868
        
        if (*(r8_22 + 0xf10) == 0 || *(r8_22 + 0xf28) != *(*(r8_22 + 0xf00) + 0x18))
            sub_1408081b0(r8_22 + 0xf10)
            sub_1407b4d10(*rdi_2 + 0xf10, data_1439c861c, r15_3, 1, 0, 0, 0)
            r8_22 = r13_1[0x2b5]
        
        *arg7 = *(r8_22 + 0xf20)
        sub_1419a2ec0(r13_1[0xa2a], &var_178, &data_143e2dae0, 0)
        void* const r14_2 = var_178
        void* rbx_13 = nullptr
        
        if (r14_2 != 0)
            int64_t rdx_38 = sx.q(*(r14_2 + 0x10c))
            int64_t* rsi_3 = *(var_170 + 0x10)
            int64_t rbx_14 = rsi_3[3]
            
            if (*(rbx_14 + (rdx_38 << 3)) == 0)
                sub_1419ccf30(rsi_3, rdx_38.d)
                rbx_14 = rsi_3[3]
            
            rbx_13 = *(rbx_14 + (rdx_38 << 3))
        
        *(arg2 + 0x1b0) = rbx_13
        sub_14198aa60(rbx_13)
        void*** rcx_82 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_70 = &rcx_82[3]
        
        if (rax_70 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_82 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_70 = &rcx_82[3]
        
        *(arg2 + 0x30) = rax_70
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_82
        *(arg2 + 8) = &rcx_82[1]
        rcx_82[1] = 0
        *rcx_82 = &data_142dd5b40
        rcx_82[2] = rbx_13
        void* rcx_86 = *rdi_2
        void* var_238_2 = rcx_86 + 0xf10
        sub_1410b67e0(r14_2, arg2, *(arg1 + 8), r13_1, r15_3, *(rcx_86 + 0xf08))
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r15_3 + 0x3f)
        sub_1419cd1c0(arg2, r14_2, ((temp4_1 & 0x3f) + temp5_1) s>> 6, 1, 1)
        void* rbx_15 = *rdi_2
        sub_14077cfd0(r14_2 + 0x13a, arg2, *(arg2 + 0x1b0))
        int64_t rax_78 = *(rbx_15 + 0xf18)
        int64_t* rbx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_90 = &rbx_18[1]
        
        if (rcx_90 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_90 = &rbx_18[1]
        
        *(arg2 + 0x30) = rcx_90
        *rbx_18 = rax_78
        void*** rcx_94 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_79 = &rcx_94[6]
        
        if (rax_79 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_94 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_79 = &rcx_94[6]
        
        *(arg2 + 0x30) = rax_79
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_94
        *(arg2 + 8) = &rcx_94[1]
        rcx_94[2].d = 1
        rcx_94[3] = rbx_18
        rcx_94[4].d = 0
        *(rcx_94 + 0x24) = 3
        rcx_94[5] = 0
        rcx_94[1] = 0
        *rcx_94 = &data_142da7798
        *arg4 = data_143e3a850
        result = data_1439b5470
        *var_1b0 = result
else
    rax_39 = zx.q(data_1439b5470)
    
    if (rax_39.d s> 0)
        rdi_2 = &rsi[0x2b5]
    label_1410b88b1:
        void* r8_10 = *rdi_2
        uint32_t count_1 = (rax_39 << 2).d
        void* rax_48 = *(r8_10 + 0xef0)
        
        if (rax_48 == 0 || *(rax_48 + 0x18) s< count_1)
            sub_1405d16e0(r8_10 + 0xef0, nullptr)
            sub_1405d16e0(*rdi_2 + 0xef8, nullptr)
            int128_t zmm1_2 = data_143dbb1e0
            var_240 = &var_168
            int32_t var_158_2 = 1
            int64_t* rcx_45 = data_143f0f180
            int32_t var_144_2 = (1 << (data_1439c7a34).b) - 1
            int512_t zmm0_3
            zmm0_3.o = zx.o(0)
            var_168 = zx.o(0)
            int64_t var_138_2 = 0
            int32_t var_130_2 = 0
            int128_t var_154_2 = zmm1_2
            char var_140_2 = 0
            (*(*rcx_45 + 0x498))(zmm0_3, &var_220, &data_143f02b98, zx.q(count_1), 0x204, var_240)
            sub_1405d1600(*rdi_2 + 0xef0, &var_220)
            sub_1405d1550(&var_220)
            int64_t* rcx_49 = data_143f0f180
            var_240.b = 0x1c
            (*(*rcx_49 + 0x4b8))(rcx_49, &var_220, &data_143f02b98, *(*rdi_2 + 0xef0), 4, var_240)
            sub_1405d1600(*rdi_2 + 0xef8, &var_220)
            sub_1405ec8a0(&var_220)
            r8_10 = rsi[0x2b5]
        
        int64_t* rcx_53 = data_143f0f180
        var_240.d = 1
        int64_t rax_54 =
            (*(*rcx_53 + 0x130))(rcx_53, &data_143f02b98, *(r8_10 + 0xef0), 0, count_1, var_240)
        void* rcx_54 = data_1439b5468
        
        if (rcx_54 != 0)
            r13 = rcx_54
        
        memcpy(rax_54, r13, count_1)
        int64_t* rcx_56 = data_143f0f180
        (*(*rcx_56 + 0x138))(rcx_56, &data_143f02b98, *(*rdi_2 + 0xef0))
        goto label_1410b8a3a
    
    *r15 = rbx_7
    result = data_1439b5470
    *r12 = result
__security_check_cookie(rax_1 ^ &var_268)
return result
