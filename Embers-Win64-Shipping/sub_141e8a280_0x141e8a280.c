// 函数: sub_141e8a280
// 地址: 0x141e8a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_1.b != 0)
    sub_141e8be40(arg1)

void** var_148
int64_t (* var_128)(int64_t* arg1)
char arg_18
int128_t zmm0

if (sub_140a80ea0() == 0)
    char rdx = arg_18
    void** const var_108_1 = &data_142d42ed8
    var_148 = arg1
    char var_140_1 = arg2
    zmm0 = var_148.o
    var_128 = sub_141e76720
    int64_t var_118_1 = 0
    int128_t var_100_1 = zmm0
    int64_t* result = sub_141e85cb0(&var_128, rdx)
    
    if (data_143f39be1 == 0)
        return result
    
    return sub_141e7b230(&data_143a2d4e8)

int32_t rbx_1 = arg1[0x7b].d
int32_t rbx_2 = rbx_1 - 1
int64_t rsi
int64_t var_20_1 = rsi

if (rbx_1 - 1 s>= 0)
    rsi = sx.q(rbx_2) << 3
    int64_t r14_1 = rsi
    int32_t temp1_1
    
    do
        if (sub_14235b8d0(*(rsi + arg1[0x7a]), 0) != 0)
            int32_t rdx_1 = arg1[0x7b].d
            int32_t rax_8 = rdx_1 - rbx_2 - 1
            
            if (rax_8 s>= 1)
                rax_8 = 1
            
            if (rax_8 != 0)
                int64_t rcx_3 = arg1[0x7a]
                memcpy(rcx_3 + r14_1, rcx_3 + (sx.q(rdx_1 - rax_8) << 3), rax_8 << 3)
                rdx_1 = arg1[0x7b].d
            
            arg1[0x7b].d = rdx_1 - 1
        
        r14_1 -= 8
        rsi -= 8
        temp1_1 = rbx_2
        rbx_2 -= 1
    while (temp1_1 - 1 s>= 0)

zmm0 = *(arg1 + 0xbc)
char rcx_5 = 0
arg1[0x18].d = zmm0.d

if (data_143f39fd0 == 0)
    rcx_5 = 8

*(arg1 + 0x352) = rcx_5 | (*(arg1 + 0x352) & 0xf7)

if (data_143f39fd8 == 0)
    zmm0.d = zmm0.d f* data_14399f940
    arg1[0x18].d = zmm0.d

sub_141e8b330(arg1)
(*(*arg1 + 0x170))(arg1)
(*(*arg1 + 0x190))(arg1)
(*(*arg1 + 0x198))(arg1)
sub_141e8cc70(arg1, 0)
char rcx_11 = 0

if (data_143a2d47c == 1)
    rcx_11 = 0x10

int32_t zmm6_1 = (zx.o(0)).d
*(arg1 + 0x352) = rcx_11 | (*(arg1 + 0x352) & 0xef)
double zmm0_1[0x2]
double zmm1_1[0x2]
double zmm3_1[0x2]

if (arg2 != 0)
    float zmm2_1 = *(arg1 + 0xd4)
    zmm1_1 = _mm_min_ss((*(arg1 + 0x36c))[0].d, 0x3f000000)
    
    if (not(zmm2_1 <= 0f))
        zmm0_1 = arg1[0x1a].d
        zmm3_1 = *(arg1 + 0xcc)
        zmm0_1[0].d = zmm0_1[0].d f/ zmm2_1
        
        if (zmm0_1[0].d f>= 1f)
            *(arg1 + 0xd4) = 0
            zmm0_1 = zmm3_1
        else
            zmm0_1[0].d = zmm0_1[0].d f* zmm3_1[0].d
        
        zmm0_1[0].d = zmm0_1[0].d f+ arg1[0x19].d
        *(arg1 + 0xc4) = zmm0_1[0].d
        zmm1_1[0].d = zmm1_1[0].d f+ arg1[0x1a].d
        arg1[0x1a].d = zmm1_1[0].d

arg1[0x15] += 1
char rax_16
int64_t rdx_4
rax_16, rdx_4 = sub_140a80ea0()
char var_140
int64_t var_118
void** const var_108
double var_100[0x2]

if (rax_16 != 0)
    char rax_17 = *(arg1 + 0x352)
    
    if (arg2 != 0)
        if ((rax_17 & 1) == 0)
            rsi = 0
            
            if (arg1[0x29].d s> 0)
                int64_t** r15_2 = nullptr
                
                do
                    int64_t* rbx_4 = *(r15_2 + arg1[0x28])
                    
                    if ((*(rbx_4 + 0x74) & 2) != 0 && sub_141e64540(rbx_4) != 0)
                        sub_141e6bc20(rbx_4, 0)
                    
                    rsi = zx.q(rsi.d + 1)
                    r15_2 = &r15_2[1]
                while (rsi.d s< arg1[0x29].d)
    else if ((rax_17 & 1) != 0)
        rsi = 0
        
        if (arg1[0x29].d s> 0)
            int64_t** r15_1 = nullptr
            
            do
                int64_t* rbx_3 = *(r15_1 + arg1[0x28])
                
                if ((*(rbx_3 + 0x74) & 2) == 0 && sub_141e64540(rbx_3) != 0)
                    rdx_4.b = 1
                    sub_141e6bc20(rbx_3, rdx_4)
                
                rsi = zx.q(rsi.d + 1)
                r15_1 = &r15_1[1]
            while (rsi.d s< arg1[0x29].d)
    
    *(arg1 + 0x352) &= 0xfe
    *(arg1 + 0x352) |= arg2
else
    char rdx_5 = arg_18
    var_108 = &data_142d42ed8
    var_148 = arg1
    var_140 = arg2
    char var_13f_1 = 0
    zmm0_1 = var_148.o
    var_128 = sub_141e766f0
    var_118 = 0
    var_100 = zmm0_1
    zmm6_1 = sub_141e85cb0(&var_128, rdx_5)

if ((arg1[0x6b].b & 0x10) != 0)
    int64_t* rcx_17 = arg1[0xc]
    (*(*rcx_17 + 0x48))(rcx_17, _mm_min_ss((*(arg1 + 0x36c))[0].d, 0x3f000000))

void* i = arg1[0x26]
int64_t r13
r13.b = 0
int32_t zmm8_1 = zmm6_1
var_128.b = 1
double var_120_1[0x2] = zx.o(0)
int32_t var_110_1 = 0x3f000000
rsi.b = 1
int32_t var_10c_1 = 0x40000000
int32_t var_e8

for (void* r12_3 = sx.q(arg1[0x27].d) * 0xc0 + i; i != r12_3; i += 0xc0)
    char var_e0_1 = 1
    double var_d8_1[0x2] = zx.o(0)
    int32_t var_c8_1 = 0x3f000000
    int32_t var_c4_1 = 0x40000000
    char var_c0
    sub_141e90730(&var_c0)
    zmm1_1 = *(i + 0x10)
    int32_t rdx_6 = *(i + 0x74)
    var_148.d = zmm1_1[0].d
    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    var_140.d = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0].d
    var_148:4.d = zmm0_1[0].d
    double zmm6_2[0x2] = sub_141e7caf0(arg1, rdx_6, &var_148, &var_e8)
    int32_t rcx_20 = var_e8
    int32_t r15_3 = rcx_20
    int64_t zmm2_2
    
    if (rcx_20 != *(i + 0x70))
    label_141e8a734:
        char rax_25 = var_c0
        *(i + 0x80) = data_143dbb3b8
        int32_t var_a8
        
        if (rax_25 == 0)
            zmm0_1 = var_a8
        else
            zmm0_1 = *(i + 0x64)
        zmm2_2 = *(i + 0x80)
        zmm0_1 = _mm_cvtps_pd(zmm0_1[0])
        zmm0_1[0] = zmm0_1[0] f+ zmm2_2
        *(i + 0x88) = zmm0_1.q
        int32_t var_b8
        
        if (rax_25 == 0)
            zmm0_1 = var_b8
        else
            zmm0_1 = *(i + 0x54)
        zmm0_1 = _mm_cvtps_pd(zmm0_1[0])
        zmm0_1[0] = zmm0_1[0] f+ zmm2_2
        *(i + 0x90) = zmm0_1.q
        int32_t var_a0
        
        if (rax_25 == 0)
            zmm0_1 = var_a0
        else
            zmm0_1 = *(i + 0x6c)
        
        zmm0_1 = _mm_cvtps_pd(zmm0_1[0])
        zmm0_1[0] = zmm0_1[0] f+ zmm2_2
        *(i + 0x98) = zmm0_1.q
        int32_t var_b0
        
        if (rax_25 == 0)
            zmm0_1 = var_b0
        else
            zmm0_1 = *(i + 0x5c)
        
        zmm0_1 = _mm_cvtps_pd(zmm0_1[0])
        *(i + 0x70) = r15_3
        zmm0_1[0] = zmm0_1[0] f+ zmm2_2
        *(i + 0xa0) = zmm0_1.q
        *(i + 0x4c) = var_c0.o
        *(i + 0x5c) = var_b0.o
        *(i + 0x6c) = var_a0
    else
        char rax_24 = sub_141e91260(&var_c0, i + 0x4c)
        rcx_20 = var_e8
        
        if (rax_24 != 0)
            goto label_141e8a734
        
        zmm2_2 = *(i + 0x80)
    
    zmm0_1 = zx.o(data_143dbb3b8)
    
    if (zmm0_1[0] f>= zmm2_2)
        zmm1_1 = zx.o(*(i + 0x88))
        
        if (zmm0_1[0] < zmm1_1[0])
            zmm0_1[0] = zmm0_1[0] f- zmm2_2
            zmm1_1[0] = zmm1_1[0] f- zmm2_2
            zmm0_1[0] = zmm0_1[0] / zmm1_1[0]
            zmm0_1 = _mm_cvtpd_ps(zmm0_1)
            
            if (zmm0_1[0].d f>= zmm6_2[0].d)
                zmm0_1 = _mm_min_ss(zmm0_1[0].d, 0x3f800000)
            else
                zmm0_1 = zmm6_2
        else
            zmm0_1 = 0x3f800000
    else
        zmm0_1 = zmm6_2
    
    *(i + 0xa8) = zmm0_1[0].d
    zmm1_1 = zx.o(data_143dbb3b8)
    
    if (zmm1_1[0] f>= zmm2_2)
        zmm3_1 = zx.o(*(i + 0x90))
        
        if (zmm1_1[0] < zmm3_1[0])
            zmm1_1[0] = zmm1_1[0] f- zmm2_2
            zmm3_1[0] = zmm3_1[0] f- zmm2_2
            zmm1_1[0] = zmm1_1[0] / zmm3_1[0]
            zmm0_1 = _mm_cvtpd_ps(zmm1_1)
            
            if (zmm0_1[0].d f>= zmm6_2[0].d)
                zmm0_1 = _mm_min_ss(zmm0_1[0].d, 0x3f800000)
            else
                zmm0_1 = zmm6_2
        else
            zmm0_1 = 0x3f800000
    else
        zmm0_1 = zmm6_2
    
    *(i + 0xb0) = zmm0_1[0].d
    zmm1_1 = zx.o(data_143dbb3b8)
    
    if (zmm1_1[0] f>= zmm2_2)
        zmm3_1 = zx.o(*(i + 0x98))
        
        if (zmm1_1[0] < zmm3_1[0])
            zmm1_1[0] = zmm1_1[0] f- zmm2_2
            zmm3_1[0] = zmm3_1[0] f- zmm2_2
            zmm1_1[0] = zmm1_1[0] / zmm3_1[0]
            zmm0_1 = _mm_cvtpd_ps(zmm1_1)
            
            if (zmm0_1[0].d f>= zmm6_2[0].d)
                zmm0_1 = _mm_min_ss(zmm0_1[0].d, 0x3f800000)
            else
                zmm0_1 = zmm6_2
        else
            zmm0_1 = 0x3f800000
    else
        zmm0_1 = zmm6_2
    
    *(i + 0xac) = zmm0_1[0].d
    zmm1_1 = zx.o(data_143dbb3b8)
    
    if (zmm1_1[0] f>= zmm2_2)
        zmm3_1 = zx.o(*(i + 0xa0))
        
        if (zmm1_1[0] < zmm3_1[0])
            zmm1_1[0] = zmm1_1[0] f- zmm2_2
            zmm3_1[0] = zmm3_1[0] f- zmm2_2
            zmm1_1[0] = zmm1_1[0] / zmm3_1[0]
            zmm0_1 = _mm_cvtpd_ps(zmm1_1)
            
            if (zmm0_1[0].d f>= zmm6_2[0].d)
                zmm0_1 = _mm_min_ss(zmm0_1[0].d, 0x3f800000)
            else
                zmm0_1 = zmm6_2
        else
            zmm0_1 = 0x3f800000
    else
        zmm0_1 = zmm6_2
    
    int32_t var_e4
    zmm1_1 = var_e4
    *(i + 0xb4) = zmm0_1[0].d
    
    if (r13.b == 0)
    label_141e8a933:
        rsi = zx.q(rsi.b)
        zmm8_1 = zmm1_1[0].d
        r13.b = 1
        
        if (rcx_20 != 0)
            rsi = 0
        
        var_128.o = var_e0_1.o
        var_118.o = var_d8_1
    else if (rcx_20 != 0 && (rsi.b != 0 || not(zmm1_1[0].d f<= zmm8_1)))
        goto label_141e8a933

if ((arg1[0x6e].b & 1) != 0 && (zmm8_1 f< arg1[0x69].d || rsi.b != 0))
    var_128.o = *(arg1 + 0x328)
    var_118.o = *(arg1 + 0x338)

void* rcx_22 = arg1[0x58]

if (rcx_22 != 0)
    sub_141e87490(rcx_22, &var_128, 0)
    int64_t* rbx_5 = arg1[0x58]
    char rax_28 = (*(rbx_5[0xd] + 8))(&rbx_5[0xd], &rbx_5[4], &rbx_5[0x1f])
    
    if (rax_28 == 0 || rbx_5[0x45].b != 0 || *(rbx_5 + 0x22a) != 0)
        *(rbx_5 + 0x22a) = 0
        rbx_5[0x17] = rbx_5[0xe]
        rbx_5[0x18].d = rbx_5[0xf].d
        *(rbx_5 + 0xc4) = *(rbx_5 + 0x7c)
        rbx_5[0x19].d = rbx_5[0x10].d
        *(rbx_5 + 0xcc) = *(rbx_5 + 0x84)
        rbx_5[0x1a].d = rbx_5[0x11].d
        *(rbx_5 + 0xd4) = *(rbx_5 + 0x8c)
        rbx_5[0x1b].d = rbx_5[0x12].d
        *(rbx_5 + 0xdc) = *(rbx_5 + 0x94)
        rbx_5[0x1c].d = rbx_5[0x13].d
        *(rbx_5 + 0xe4) = *(rbx_5 + 0x9c)
        rbx_5[0x1d].d = rbx_5[0x14].d
        *(rbx_5 + 0xec) = *(rbx_5 + 0xa4)
        rbx_5[0x1e].d = rbx_5[0x15].d
        int32_t rax_40
        rax_40.b = rax_28 == 0
        rbx_5[0x45].b = rax_40.b
        (*(*rbx_5 + 8))(rbx_5, &rbx_5[0xd])
    
    bool rax_43 = (*(rbx_5[0x35] + 8))(&rbx_5[0x35], &rbx_5[0x2d], &rbx_5[0x3d])
    
    if (rax_43 == 0 || *(rbx_5 + 0x229) != 0 || *(rbx_5 + 0x22b) != 0)
        *(rbx_5 + 0x22b) = 0
        *(rbx_5 + 0x229) = rax_43 == 0
        (*(*rbx_5 + 0x10))(rbx_5, &rbx_5[0x35])

int32_t zmm0_2
float zmm9_1[0x4]
float zmm10_1[0x4]
zmm0_2, zmm9_1, zmm10_1 = sub_141e8c820(arg1, _mm_min_ss((*(arg1 + 0x36c))[0].d, 0x3f000000))

if (data_143a2d44c != 0)
    int64_t r15_4 = 0
    int64_t* rsi_1 = arg1[0x6f]
    uint64_t r13_2 = sx.q(arg1[0x70].d) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[arg1[0x70]])
        r13_2 = 0
    
    if (r13_2 != 0)
        do
            void* rbx_6 = *rsi_1
            
            if (*(rbx_6 + 0x185) == 0 && *sub_1408296b0(&arg1[0x8a], &arg_18, rbx_6) == 0xffffffff)
                for (int64_t* i_1 = arg1[0x97]; i_1 != &i_1[sx.q(arg1[0x98].d)]; i_1 = &i_1[1])
                    if (*i_1 == rbx_6)
                        goto label_141e8ac50
                
                int64_t* rcx_31 = *(rbx_6 + 0x18)
                void* r12_4 = *(rbx_6 + 0x50)
                var_148 = nullptr
                var_140.d = 0
                int64_t var_138_1 = 0
                
                if (*(rcx_31 + 0x31) != 0 && data_143a2d44c != 0 && (*(rbx_6 + 0x182) & 8) == 0
                        && rcx_31 != 0 && sub_14236bbe0(rcx_31, zmm0_2) != 0
                        && *(rbx_6 + 0x185) == 0 && (*(rbx_6 + 0x183) & 0x10) == 0)
                    char rax_50
                    rax_50, zmm0_2 = sub_141e808a0(rbx_6, r12_4)
                    
                    if (rax_50 == 0)
                        void*** var_138_2 = sub_141dbe4e0(rbx_6, r12_4)
                        sub_141e76210(&var_148)
                        sub_141e744f0(arg1, rbx_6)
                        sub_141dbcc30(rbx_6)
                        zmm0_2 = sub_141e74a30(arg1, &var_148)
            
        label_141e8ac50:
            rsi_1 = &rsi_1[1]
            r15_4 += 1
        while (r15_4 != r13_2)

uint32_t zmm0_3[0x4] = sub_141e82850(arg1, 0)

if (arg1[0x27].d s> 0)
    uint32_t zmm2_3[0x4] = data_142d4cc30
    int128_t* rax_52 = arg1[0x26]
    zmm0_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
    uint32_t zmm1_2[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xd2)
    float var_78_1[0x4] = zmm9_1
    float zmm5_1[0x4] = *rax_52
    uint32_t zmm8_2[0x4] = rax_52[1]
    float zmm4_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    zmm1_2 = _mm_mul_ps(zmm1_2, zmm4_1)
    var_120_1[0]:4.d = 0
    float zmm3_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    zmm0_3 = _mm_mul_ps(zmm0_3, zmm3_2)
    int32_t var_10c_2 = 0
    float var_88_1[0x4] = zmm10_1
    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    zmm1_2 = _mm_sub_ps(zmm1_2, zmm0_3)
    zmm1_2 = _mm_add_ps(zmm1_2, zmm1_2)
    zmm0_3 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xc9)
    zmm10_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xd2)
    zmm0_3 = _mm_mul_ps(zmm0_3, zmm3_2)
    zmm1_2 = _mm_mul_ps(zmm1_2, zmm5_1)
    zmm10_1 = _mm_mul_ps(zmm10_1, zmm4_1)
    zmm1_2 = _mm_add_ps(zmm1_2, zmm2_3)
    zmm2_3 = data_142d4cc20
    zmm10_1 = _mm_sub_ps(zmm10_1, zmm0_3)
    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9), zmm3_2)
    zmm10_1 = _mm_add_ps(zmm10_1, zmm1_2)
    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xd2), zmm4_1)
    var_128.d = zmm10_1[0]
    zmm1_2 = _mm_sub_ps(zmm1_2, zmm0_3)
    zmm1_2 = _mm_add_ps(zmm1_2, zmm1_2)
    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0xc9), zmm3_2)
    zmm9_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xd2)
    zmm1_2 = _mm_mul_ps(zmm1_2, zmm5_1)
    zmm9_1 = _mm_mul_ps(zmm9_1, zmm4_1)
    zmm4_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55)
    zmm1_2 = _mm_add_ps(zmm1_2, zmm2_3)
    zmm3_2 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa)
    var_128:4.d = zmm4_1[0]
    zmm9_1 = _mm_sub_ps(zmm9_1, zmm0_3)
    var_120_1[0].d = zmm3_2[0]
    zmm9_1 = _mm_add_ps(zmm9_1, zmm1_2)
    var_118.d = zmm9_1[0]
    float zmm7_1[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
    zmm5_1 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
    zmm0_3 = zmm5_1
    float zmm6_3 = zmm7_1[0] * zmm4_1[0]
    zmm0_3[0] = zmm0_3[0] f* zmm3_2[0]
    zmm2_3 = zmm9_1
    zmm2_3[0] = zmm2_3[0] f* zmm3_2[0]
    zmm1_2 = zmm5_1
    zmm6_3 = zmm6_3 f- zmm0_3[0]
    zmm1_2[0] = zmm1_2[0] f* zmm10_1[0]
    zmm0_3 = zmm7_1
    var_118:4.d = zmm5_1[0]
    zmm0_3[0] = zmm0_3[0] f* zmm10_1[0]
    float var_110_2 = zmm7_1[0]
    var_108.d = zmm6_3
    zmm2_3[0] = zmm2_3[0] f- zmm0_3[0]
    zmm0_3 = zmm9_1
    zmm0_3[0] = zmm0_3[0] f* zmm4_1[0]
    zmm1_2[0] = zmm1_2[0] f- zmm0_3[0]
    var_108:4.d = zmm2_3[0]
    var_100[1].d = zmm8_2[0]
    zmm0_3 = _mm_shuffle_ps(zmm8_2, zmm8_2, 0x55)
    uint32_t var_f0_1 = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)[0]
    var_100[0].d = zmm1_2[0]
    var_100[1]:4.d = zmm0_3[0]
    var_100[0]:4.d = 0
    int32_t var_ec_1 = 0x3f800000
    uint32_t (* rax_53)[0x4]
    int512_t zmm9_2
    int512_t zmm10_2
    rax_53, zmm9_2, zmm10_2 = sub_140631b10(&var_128, &var_e8)
    zmm10_2.o = var_88_1
    void* r15_5 = &arg1[0xec]
    zmm9_2.o = var_78_1
    int64_t i_2 = 0
    *r15_5 = *rax_53
    *(r15_5 + 0x10) = rax_53[1]
    *(r15_5 + 0x20) = rax_53[2]
    *(r15_5 + 0x30) = rax_53[3]
    
    do
        int64_t j = 0
        void* rsi_2 = r15_5
        
        do
            zmm0_3 = _mm_cvtps_pd((*rsi_2)[0].q)
            
            if (_finite(zmm0_3[0].q) == 0)
                goto label_141e8ae9b
            
            j += 1
            rsi_2 += 4
        while (j s< 4)
        
        i_2 += 1
        r15_5 += 0x10
    while (i_2 s< 4)

label_141e8ae9b:
int32_t rax_55 = arg1[0x29].d

if (rax_55 != 0)
    int32_t i_3 = 0
    
    if (rax_55 s> 0)
        int64_t* rbx_7 = nullptr
        
        do
            int64_t* rcx_40 = *(rbx_7 + arg1[0x28])
            
            if ((*(*rcx_40 + 0x50))(rcx_40) != 0)
                int64_t* rcx_41 = *(rbx_7 + arg1[0x28])
                (*(*rcx_41 + 0x38))(rcx_41)
            
            i_3 += 1
            rbx_7 = &rbx_7[1]
        while (i_3 s< arg1[0x29].d)
    
    int32_t rax_61 = *(arg1 + 0x3ec)
    arg1[0x7d].d = 0
    
    if (rax_61 s< 0 && rax_61 != 0)
        zmm0_3 = sub_1405c5570(&arg1[0x7c], 0)
    
    uint32_t r15_6 = zx.d(arg2)
    int32_t rax_62 = sub_141e7e8e0(arg1, &arg1[0x7c], r15_6 ^ 1, zmm0_3)
    sub_141e89340(arg1, &arg1[0x7c], rax_62)
    sub_141e88060(arg1, &arg1[0x7c], rax_62, r15_6.b)
    int32_t zmm11_1 = sub_141e8bb20(arg1, &arg1[0x7c], zx.q(rax_62))
    
    if (r15_6.b != 0)
        int64_t rdx_25 = 0
        void** rcx_47 = arg1[0x6f]
        uint64_t r8_13 = sx.q(arg1[0x70].d) << 3 u>> 3
        
        if (rcx_47 u> &rcx_47[arg1[0x70]])
            r8_13 = 0
        
        if (r8_13 != 0)
            do
                void* rax_65 = *rcx_47
                rdx_25 += 1
                rcx_47 = &rcx_47[1]
                uint32_t zmm1_4[0x4] = _mm_min_ss((*(arg1 + 0x36c))[0], zmm11_1)
                zmm1_4[0] = zmm1_4[0] f* *(rax_65 + 0x198)
                zmm1_4[0] = zmm1_4[0] f+ *(rax_65 + 0x190)
                zmm1_4[0] = zmm1_4[0] f+ *(rax_65 + 0x194)
                *(rax_65 + 0x190) = zmm1_4[0]
                *(rax_65 + 0x194) = zmm1_4[0]
            while (rdx_25 != r8_13)
    
    sub_140a80ea0()
    sub_140a80ea0()

(*(*arg1 + 0x178))(arg1)
void* rax_67 = arg1[0x58]
int64_t rax_68

if (rax_67 == 0)
    rax_68 = 0
else
    rax_68 = *(rax_67 + 0x18)

var_140.q = rax_68
var_148.d = arg1[5].d
zmm0_3 = var_148.o
void** const var_108_2 = &data_142d42ed8
var_128 = j_sub_141e725e0
int64_t var_118_2 = 0
uint32_t var_100_2[0x4] = zmm0_3
return sub_141e85f30(&var_128)
