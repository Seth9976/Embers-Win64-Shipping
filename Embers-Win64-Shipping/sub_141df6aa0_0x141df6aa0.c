// 函数: sub_141df6aa0
// 地址: 0x141df6aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_68[0x4] = zmm7
uint32_t zmm14[0x4]
uint32_t var_d8[0x4] = zmm14
void* rax = arg1[2]
int32_t rax_1 = arg2[1].d
char var_1e0
char* var_120 = &var_1e0
var_1e0 = 0
void*** (* var_128)() = j_sub_141df33e0
void* rax_2 = sub_140a756e0(&var_128, &data_143a2d278)
char var_1df = 0
void*** (* var_118)() = j_sub_141df33e0
uint64_t* rsi = rax_2 + 0x10
int64_t* var_1b0 = rsi
char* var_110 = &var_1df
void* rax_3 = sub_140a756e0(&var_118, &data_143a2d278)
char var_1de = 0
void*** (* var_108)() = j_sub_141df33e0
char* var_100 = &var_1de
void* rax_4 = sub_140a756e0(&var_108, &data_143a2d278)
char var_1dd = 0
void*** (* var_158)() = j_sub_141df33e0
int32_t var_150 = &var_1dd
void* rax_5 = sub_140a756e0(&var_158, &data_143a2d278)
char var_1dc = 0
void*** (* var_f8)() = j_sub_141df33e0
char* var_f0 = &var_1dc
void* rax_6 = sub_140a756e0(&var_f8, &data_143a2d278)
rsi[1].d = 0

if (*(rsi + 0xc) s<= 0xffffffff)
    sub_1405c5570(rsi, 0)

int32_t rax_7 = *(rax_3 + 0x2c)
*(rax_3 + 0x28) = 0

if (rax_7 s< 0 && rax_7 != 0)
    sub_1405c5570(rax_3 + 0x20, 0)

int32_t rax_8 = *(rax_4 + 0x3c)
*(rax_4 + 0x38) = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405c5570(rax_4 + 0x30, 0)

int32_t rax_9 = *(rax_5 + 0x4c)
*(rax_5 + 0x48) = 0

if (rax_9 s< 0 && rax_9 != 0)
    sub_1405c5570(rax_5 + 0x40, 0)

int32_t rax_10 = *(rax_6 + 0x5c)
*(rax_6 + 0x58) = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405c5570(rax_6 + 0x50, 0)

int64_t* rcx_10 = arg2
int32_t rdx = **rcx_10
int32_t i_3
i_3.b = rdx == 0
uint64_t i_2 = zx.q(i_3)
int32_t var_198

if (i_2 s< sx.q(rax_1))
    int32_t rdx_1 = rax_1
    uint64_t i = zx.q(i_2.d)
    uint64_t i_1 = i_2
    
    do
        int64_t rsi_1 = sx.q(*(*rcx_10 + (i << 2)))
        
        if (rsi_1.d != 0xffffffff)
            int64_t r8 = rsi_1
            int32_t rbx_1 = *(*(rax + 0x80) + (rsi_1 << 2))
            
            if (rbx_1 != 0xffffffff)
                int64_t* rcx_11 = var_1b0
                int32_t var_188_1 = i_2.d
                int32_t rdx_2 = rcx_11[1].d
                rcx_11[1].d = rdx_2 + 1
                
                if (rdx_2 + 1 s> *(rcx_11 + 0xc))
                    sub_1405a4d70(rcx_11)
                    rcx_11 = var_1b0
                    r8 = rsi_1
                    i = i_1
                
                *(*rcx_11 + (sx.q(rdx_2) << 3)) = rbx_1.q
                uint32_t rcx_13
                
                if (rsi_1.d s< 0 || rsi_1.d s>= *(arg4 + 0x40))
                    rcx_13 = 0
                else
                    rcx_13 = zx.d(*(*(arg4 + 0x38) + r8 * 0x10 + 0xc))
                
                int64_t rbx_2
                
                if (rcx_13 == 0)
                    var_198 = rbx_1
                    rbx_2 = sx.q(*(rax_3 + 0x28))
                    int32_t var_194_1 = i_2.d
                    int32_t rax_30 = (rbx_2 + 1).d
                    *(rax_3 + 0x28) = rax_30
                    
                    if (rax_30 s> *(rax_3 + 0x2c))
                        sub_1405a4d70(rax_3 + 0x20)
                    
                    *(*(rax_3 + 0x20) + (rbx_2 << 3)) = var_198.q
                    i = i_1
                else if (rcx_13 == 2)
                    int32_t rcx_24 = *(rax_3 + 0x28)
                    int32_t var_160_1 = i_2.d
                    *(rax_3 + 0x28) = rcx_24 + 1
                    
                    if (rcx_24 + 1 s> *(rax_3 + 0x2c))
                        sub_1405a4d70(rax_3 + 0x20)
                    
                    int32_t var_1a4_1 = rsi_1.d
                    *(*(rax_3 + 0x20) + (sx.q(rcx_24) << 3)) = rbx_1.q
                    rbx_2 = sx.q(*(rax_4 + 0x38))
                    int32_t rax_29 = (rbx_2 + 1).d
                    *(rax_4 + 0x38) = rax_29
                    
                    if (rax_29 s> *(rax_4 + 0x3c))
                        sub_1405a4d70(rax_4 + 0x30)
                    
                    *(*(rax_4 + 0x30) + (rbx_2 << 3)) = rbx_1.q
                    i = i_1
                else if (rcx_13 == 3)
                    int32_t rcx_20 = *(rax_3 + 0x28)
                    int32_t var_170_1 = i_2.d
                    *(rax_3 + 0x28) = rcx_20 + 1
                    
                    if (rcx_20 + 1 s> *(rax_3 + 0x2c))
                        sub_1405a4d70(rax_3 + 0x20)
                    
                    *(*(rax_3 + 0x20) + (sx.q(rcx_20) << 3)) = rbx_1.q
                    
                    if (arg6 != 0)
                        i = i_1
                    else
                        rbx_2 = sx.q(*(rax_5 + 0x48))
                        int32_t var_168_1 = rsi_1.d
                        int32_t rax_26 = (rbx_2 + 1).d
                        *(rax_5 + 0x48) = rax_26
                        
                        if (rax_26 s> *(rax_5 + 0x4c))
                            sub_1405a4d70(rax_5 + 0x40)
                        
                        *(*(rax_5 + 0x40) + (rbx_2 << 3)) = rbx_1.q
                        i = i_1
                else if (rcx_13 == 4)
                    int32_t rcx_16 = *(rax_3 + 0x28)
                    int32_t var_180_1 = i_2.d
                    *(rax_3 + 0x28) = rcx_16 + 1
                    
                    if (rcx_16 + 1 s> *(rax_3 + 0x2c))
                        sub_1405a4d70(rax_3 + 0x20)
                    
                    *(*(rax_3 + 0x20) + (sx.q(rcx_16) << 3)) = rbx_1.q
                    
                    if (arg6 != 0)
                        i = i_1
                    else
                        rbx_2 = sx.q(*(rax_6 + 0x58))
                        int32_t var_178_1 = rsi_1.d
                        int32_t rax_22 = (rbx_2 + 1).d
                        *(rax_6 + 0x58) = rax_22
                        
                        if (rax_22 s> *(rax_6 + 0x5c))
                            sub_1405a4d70(rax_6 + 0x50)
                        
                        *(*(rax_6 + 0x50) + (rbx_2 << 3)) = rbx_1.q
                        i = i_1
                rcx_10 = arg2
                rdx_1 = rax_1
        
        i += 1
        i_2 = zx.q(i_2.d + 1)
        i_1 = i
    while (i s< sx.q(rdx_1))
    
    rsi = var_1b0

int32_t rax_32 = data_143f393d0
sub_140b34200("ExtractPoseFromAnimData", rax_32)
sub_140b43e30("NumberOfExtractedAnimations", data_143f393d0, 1, 3)
int64_t r14 = 0
int64_t* rcx_30 = arg2
char arg_30
char var_144 = arg_30
int64_t var_140 = arg7
int64_t var_138 = rcx_30[0xa]
float var_148 = arg5
float zmm0 = *(arg3 + 4)
float var_130 = zmm0
float var_12c = zmm0 / arg5
char var_1f8
int64_t arg_40
float zmm6[0x4]
int128_t zmm8
uint32_t zmm9[0x4]
uint32_t zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
uint32_t zmm13[0x4]

if (rdx == 0)
    int64_t* rcx_31 = rcx_30[0xb]
    arg_30.d = 0
    int128_t* rbx_4 = *arg1
    (*(*rcx_31 + 0x290))(rcx_31, &var_148, 0, rbx_4)
    var_1f8 = arg6
    zmm6, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
        sub_141def0e0(arg4, &arg_40, rbx_4, 0, &arg_30, rax, var_1f8)
    rcx_30 = arg2

int128_t* var_1c8

if (rsi[1].d s> 0)
    int64_t* rcx_33 = rcx_30[0xb]
    var_1c8 = *arg1
    int32_t var_1c0_1 = arg1[1].d
    (*(*rcx_33 + 0x288))(rcx_33, &var_148, rsi, rax_3 + 0x20, rsi, &var_1c8, var_1f8)

sub_140b38680("ExtractPoseFromAnimData", rax_32)
void* result = arg3
uint32_t zmm0_1[0x4]
float zmm2[0x4]
float zmm3[0x4]

if ((*result != 0 && *arg8 != 0) || arg8[8] != 0)
    int32_t rcx_34 = *(arg8 + 4)
    int128_t* rdx_20 = *arg1
    
    if (rcx_34 == 1)
        *rdx_20 = *(arg8 + 0x10)
        rdx_20[1] = *(arg8 + 0x20)
        zmm0_1 = *(arg8 + 0x30)
    else if (rcx_34 == 2)
        *rdx_20 = data_143dbb0c0
        rdx_20[1] = data_143dbb0d0
        zmm0_1 = data_143dbb0e0
    else
        result = *(rax + 0x48)
        uint32_t (* rcx_36)[0x4] = *(result + 0x30)
        *rdx_20 = *rcx_36
        rdx_20[1] = rcx_36[1]
        zmm0_1 = rcx_36[2]
    
    rdx_20[2] = zmm0_1
    
    if (arg8[0x40] != 0 && *(arg8 + 4) != 1)
        zmm3 = zmm0_1
        zmm2 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        zmm3[0] = zmm3[0] - 1f
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
        zmm2[0] = zmm2[0] - 1f
        zmm0_1[0] = zmm0_1[0] f- 1f
        zmm2 = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
        rdx_20[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1[0].q), zmm2[0].q)

void* rdi_1 = arg4
float zmm1_1[0x4]
float zmm4_1[0x4]

if (*(rax_4 + 0x38) s> 0)
    result = sub_141dec140(rdi_1, arg_40)
    int32_t* r8_5 = *(rax_4 + 0x30)
    void* result_2 = result
    void* r9_3 = &r8_5[sx.q(*(rax_4 + 0x38)) * 2]
    
    if (r8_5 != r9_3)
        do
            result = *result_2
            zmm1_1 = *(result + sx.q(r8_5[1]) * 0x30 + 0x10)
            zmm0_1 = zmm1_1
            zmm2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            zmm0_1[0] = zmm0_1[0] f* zmm1_1[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
            zmm2[0] = zmm2[0] f+ zmm0_1[0]
            zmm2[0] = zmm2[0] + zmm1_1[0]
            zmm4_1 = _mm_sqrt_ss(zx.o(0)[0], zmm2[0])
            
            if (not(zmm4_1[0] <= 9.99999975e-05f))
                int64_t rcx_41 = sx.q(*r8_5) * 6
                zmm2 = *(*(rax + 0xa0) + (rcx_41 << 3) + 0x10)
                result = *arg1
                zmm0_1 = zmm2
                zmm0_1[0] = zmm0_1[0] f* zmm2[0]
                zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm1_1[0] = zmm1_1[0] f+ zmm0_1[0]
                zmm0_1 = 0x3f800000
                zmm0_1[0] = 1f / zmm4_1[0]
                zmm1_1[0] = zmm1_1[0] + zmm2[0]
                zmm3 = _mm_sqrt_ss(zx.o(0)[0], zmm1_1[0])
                zmm3[0] = zmm3[0] f* zmm0_1[0]
                *(result + (rcx_41 << 3) + 0x10) = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q), 
                        _mm_unpacklo_ps(zmm3, 0)[0].q), 
                    *(result + (rcx_41 << 3) + 0x10))
            
            r8_5 = &r8_5[2]
        while (r8_5 != r9_3)
        
        rdi_1 = arg4

float var_58[0x4] = zmm6
int128_t var_78 = zmm8
uint32_t var_88[0x4] = zmm9
uint32_t var_98[0x4] = zmm10
float var_a8[0x4] = zmm11
float var_b8[0x4] = zmm12
uint32_t var_c8[0x4] = zmm13
void* rdi_3

if (*(rax_5 + 0x48) s<= 0)
    rdi_3 = rax
else
    result = sub_141dec140(rdi_1, arg_40)
    int32_t* r8_6 = *(rax_5 + 0x40)
    void* result_3 = result
    rdi_3 = rax
    void* r9_4 = &r8_6[sx.q(*(rax_5 + 0x48)) * 2]
    
    if (r8_6 != r9_4)
        zmm11 = data_143f39390
        zmm12 = data_143f39380
        zmm13 = data_143f39370
        zmm9 = data_143f393a0
        
        do
            int64_t r10_1 = *(rdi_3 + 0xa0)
            int64_t rdx_26 = sx.q(*r8_6) * 6
            zmm6 = *(r10_1 + (rdx_26 << 3))
            zmm2 = *(*result_3 + sx.q(r8_6[1]) * 0x30)
            int128_t* rax_49 = *arg1
            zmm4_1 = zmm2 ^ 0x80000000
            zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm3 = *(rax_49 + (rdx_26 << 3))
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            zmm4_1[0] = (zmm0_1 ^ 0x80000000)[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
            zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm4_1[0] = (zmm1_1 ^ 0x80000000)[0]
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x27)
            zmm4_1[0] = zmm2[0]
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x39)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
            float zmm5_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b), zmm0_1)
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm4_1)
            zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e)
            zmm5_1 = _mm_mul_ps(zmm5_1, zmm11)
            var_1c8.o = zmm4_1
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1)
            zmm5_1 = _mm_add_ps(zmm5_1, zmm0_1)
            zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm3, zmm3, 0x55))
            zmm4_1 = _mm_mul_ps(zmm4_1, _mm_shuffle_ps(zmm3, zmm3, 0xaa))
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm4_1 = _mm_mul_ps(zmm4_1, zmm13)
            zmm5_1 = _mm_add_ps(zmm5_1, zmm1_1)
            zmm1_1 = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
            zmm5_1 = _mm_add_ps(zmm5_1, zmm4_1)
            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm6)
            zmm2 = _mm_mul_ps(zmm2, zmm11)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
            zmm2 = _mm_add_ps(zmm2, zmm0_1)
            zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
            zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm6 = _mm_mul_ps(zmm6, zmm13)
            *(rax_49 + (rdx_26 << 3)) = _mm_add_ps(_mm_add_ps(zmm2, zmm1_1), zmm6)
            zmm6 = *(r10_1 + (rdx_26 << 3) + 0x10)
            zmm3 = *(*result_3 + sx.q(r8_6[1]) * 0x30 + 0x10)
            int128_t* rax_52 = *arg1
            zmm4_1 = *(rax_52 + (rdx_26 << 3) + 0x10)
            zmm5_1 = zmm6
            zmm5_1[0] = zmm5_1[0] - zmm3[0]
            zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm2[0] = zmm2[0] f- zmm0_1[0]
            zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
            zmm6[0] = zmm6[0] - zmm3[0]
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            zmm2[0] = zmm2[0] + zmm1_1[0]
            zmm6[0] = zmm6[0] + zmm4_1[0]
            zmm2 = _mm_unpacklo_ps(zmm2, 0)
            *(rax_52 + (rdx_26 << 3) + 0x10) =
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm6[0].q), zmm2[0].q)
            zmm1_1 = *(*result_3 + sx.q(r8_6[1]) * 0x30 + 0x20)
            var_158.o = zmm1_1
            
            if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] f> 9.99999994e-09f)
                zmm6 = 0x3f800000
                zmm6[0] = 1f / zmm1_1[0]
            else
                zmm6 = zx.o(0)
            
            zmm1_1 = var_158:4.d
            
            if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] f> 9.99999994e-09f)
                zmm5_1 = 0x3f800000
                zmm5_1[0] = 1f / zmm1_1[0]
            else
                zmm5_1 = zx.o(0)
            
            zmm1_1 = var_150
            
            if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] f> 9.99999994e-09f)
                zmm4_1 = 0x3f800000
                zmm4_1[0] = 1f / zmm1_1[0]
            else
                zmm4_1 = zx.o(0)
            
            zmm2 = *(r10_1 + (rdx_26 << 3) + 0x20)
            r8_6 = &r8_6[2]
            int128_t* rax_55 = *arg1
            zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_1[0] = zmm5_1[0] f* zmm0_1[0]
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm3 = *(rax_55 + (rdx_26 << 3) + 0x20)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm5_1[0] = zmm5_1[0] * zmm1_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm2[0]
            zmm6[0] = zmm6[0] * zmm3[0]
            zmm2 = _mm_unpacklo_ps(zmm5_1, 0)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm4_1[0] = zmm4_1[0] * zmm3[0]
            *(rax_55 + (rdx_26 << 3) + 0x20) =
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm4_1[0].q), zmm2[0].q)
            result = *arg1
            zmm5_1 = data_143f39360
            zmm6 = *(result + (rdx_26 << 3))
            zmm1_1 = _mm_mul_ps(zmm6, zmm6)
            zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
            zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
            zmm1_1 = _mm_rsqrt_ps(zmm4_1)
            zmm3 = _mm_mul_ps(zmm4_1, zmm5_1)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                    zmm1_1), 
                zmm1_1)
            zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
            zmm0_1 = _mm_cmpeq_ps(zmm9, zmm4_1, 2)
            *(result + (rdx_26 << 3)) = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm2), zmm2), zmm6) ^ data_143f39350, 
                zmm0_1) ^ data_143f39350
        while (r8_6 != r9_4)

int64_t rsi_2 = sx.q(*(rax_6 + 0x58))

if (rsi_2.d s> 0)
    int128_t zmm15_1
    result, zmm14, zmm15_1 = sub_141ea43a0(rdi_3, &arg_40)
    void* result_1 = result
    
    if (*(result + 8) s> 0 && *(result + 0x18) == *(rdi_3 + 8) && rsi_2.d s> 0)
        int128_t var_e8_1 = zmm15_1
        
        do
            int64_t rdx_28 = sx.q(*(*(rax_6 + 0x50) + (r14 << 3)))
            result = *(result_1 + 0x10)
            int64_t rcx_52 = sx.q(*(result + (rdx_28 << 2)))
            
            if (rcx_52.d != 0xffffffff)
                void* rdx_31 = &(*arg1)[rdx_28 * 3]
                int128_t* rcx_55 = rcx_52 * 0x30 + *result_1
                uint128_t zmm3_1 = *(rdx_31 + 0x10)
                uint128_t zmm0_2
                zmm0_2.d = zmm3_1.d f- *(rcx_55 + 0x14)
                zmm12 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                zmm13 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                uint128_t zmm2_1
                zmm2_1.d = zmm12.d f- *(rcx_55 + 0x18)
                zmm13[0] = zmm13[0] f- *(rcx_55 + 0x1c)
                int128_t** rax_58
                uint128_t zmm5_2
                
                if (_mm_and_ps(zmm0_2, zmm14).d f> 0.00100000005f)
                label_141df7657:
                    zmm9 = *(rcx_55 + 4)
                    rax_58 = &var_1c8
                    zmm6 = *(rcx_55 + 8)
                    zmm11 = zmm3_1
                    zmm8 = *rcx_55
                    uint32_t zmm4_2[0x4] = *(rcx_55 + 0xc)
                    zmm5_2 = rcx_55[1].d
                    zmm11[0] = zmm11[0] * zmm6[0]
                    zmm0_2.d = zmm12.d f* zmm6[0]
                    zmm13[0] = zmm13[0] f* zmm9[0]
                    zmm12[0] = zmm12[0] f* zmm8.d
                    zmm13[0] = zmm13[0] f- zmm0_2.d
                    zmm0_2.d = zmm13.d f* zmm8.d
                    zmm11[0] = zmm11[0] f- zmm0_2.d
                    zmm0_2.d = zmm3_1.d f* zmm9[0]
                    zmm13[0] = zmm13[0] f+ zmm13[0]
                    zmm12[0] = zmm12[0] f- zmm0_2.d
                    zmm11[0] = zmm11[0] + zmm11[0]
                    zmm4_2[0] = zmm4_2[0] f* zmm13[0]
                    zmm4_2[0] = zmm4_2[0] f+ zmm3_1.d
                    zmm3_1.d = zmm13.d f* zmm6[0]
                    zmm12[0] = zmm12[0] + zmm12[0]
                    zmm0_2.d = zmm11.d f* zmm6[0]
                    zmm13[0] = zmm13[0] f* zmm9[0]
                    zmm2_1.d = zmm12.d f* zmm9[0]
                    zmm2_1.d = zmm2_1.d f- zmm0_2.d
                    zmm0_2.d = zmm12.d f* zmm8.d
                    zmm2_1.d = zmm2_1.d f+ zmm4_2[0]
                    zmm4_2[0] = zmm4_2[0] f* zmm11[0]
                    zmm3_1.d = zmm3_1.d f- zmm0_2.d
                    zmm11[0] = zmm11[0] f* zmm8.d
                    zmm4_2[0] = zmm4_2[0] f* zmm12[0]
                    zmm4_2[0] = zmm4_2[0] f+ zmm12[0]
                    zmm11[0] = zmm11[0] f- zmm13[0]
                    zmm2_1.d = zmm2_1.d f* zmm5_2.d
                    zmm4_2[0] = zmm4_2[0] f+ zmm13[0]
                    zmm3_1.d = zmm3_1.d f+ zmm4_2[0]
                    var_1c8.d = zmm2_1.d
                    zmm11[0] = zmm11[0] f+ zmm4_2[0]
                    zmm3_1.d = zmm3_1.d f* zmm5_2.d
                    zmm11[0] = zmm11[0] f* zmm5_2.d
                    var_1c8:4.d = zmm3_1.d
                    float var_1c0_2 = zmm11[0]
                else
                    if (_mm_and_ps(zmm2_1, zmm14).d f> 0.00100000005f)
                        goto label_141df7657
                    
                    if (_mm_and_ps(zmm13, zmm14)[0] f> 0.00100000005f)
                        goto label_141df7657
                    
                    int32_t var_190_1 = *(rcx_55 + 0x28)
                    rax_58 = &var_198
                    var_198.q = rcx_55[2].q
                
                zmm5_2 = zx.o(*rax_58)
                result = zx.q(rax_58[1].d)
                zmm2_1 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0x55), zx.o(0)[0].q)
                *(rdx_31 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_2, result.d[0].q), zmm2_1.q)
            
            r14 += 1
        while (r14 s< rsi_2)

return result
