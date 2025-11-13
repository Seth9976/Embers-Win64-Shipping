// 函数: sub_141d7b080
// 地址: 0x141d7b080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rsi
int64_t* var_10 = rsi
uint128_t var_48 = arg3
int32_t arg_8 = 0
void*** var_138 = nullptr
int32_t var_130 = 0
sub_140af2b60()
int16_t* const r15 = &data_142d40450

if (sub_140b2acc0(&data_143dbb3f0, u"-MovieFolder=", &var_138, 1) != 0)
    if (arg1 + 0x50 != &var_138)
        void*** r12_1 = var_138
        int32_t r8_1 = *(arg1 + 0x5c)
        *(arg1 + 0x58) = var_130
        
        if (var_130 != 0 || r8_1 != 0)
            sub_1405a4c70(arg1 + 0x50, var_130, r8_1)
            memcpy(*(arg1 + 0x50), r12_1, var_130 * 2)
        else
            *(arg1 + 0x5c) = 0
    
    sub_140b21570(arg1 + 0x50)
    
    if (sub_140a23cf0(arg1 + 0x50, U"{}[\nt", 1, 0, 0xffffffff) == 0xffffffff)
        sub_140a464c0()
        *(arg1 + 0x58)
        char rax_3 = (*(data_14399ea08 + 0x50))()
        sub_140a464c0()
        
        if (rax_3 != 0)
            *(arg1 + 0x58)
            (*(data_14399ea08 + 0x28))()
        else if (*(arg1 + 0x58) == 0)
            (*(data_14399ea08 + 0x58))(&data_14399ea08, &data_142d40450, 0)
        else
            (*(data_14399ea08 + 0x58))(&data_14399ea08, *(arg1 + 0x50), 0)

int64_t var_108 = 0
int32_t var_100 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"-MovieName=", &var_108, 1) != 0 && arg1 + 0x68 != &var_108)
    rsi = sx.q(var_100)
    int64_t r12_2 = var_108
    int32_t r8_5 = *(arg1 + 0x74)
    *(arg1 + 0x70) = rsi.d
    
    if (rsi.d != 0 || r8_5 != 0)
        sub_1405a4c70(arg1 + 0x68, rsi.d, r8_5)
        memcpy(*(arg1 + 0x68), r12_2, rsi.d * 2)
    else
        *(arg1 + 0x74) = 0

sub_140af2b60()

if (sub_140b0e8d0(&data_143dbb3f0, u"-MovieOverwriteExisting=", &arg_8) != 0)
    *(arg1 + 0x78) = arg_8.b

sub_140af2b60()
char arg_20

if (sub_140b0e8d0(&data_143dbb3f0, u"-MovieRelativeFrames=", &arg_20) != 0)
    *(arg1 + 0x79) = arg_20

sub_140af2b60()
int32_t var_120

if (sub_140b2ab20(&data_143dbb3f0, u"-HandleFrames=", &var_120) != 0)
    *(arg1 + 0x7c) = var_120

sub_140af2b60()
char var_180

if (sub_140b0e8d0(&data_143dbb3f0, u"-MovieEngineScalabilityMode=", &var_180) != 0)
    *(arg1 + 0xb1) = var_180

sub_140af2b60()
char var_17f

if (sub_140b0e8d0(&data_143dbb3f0, u"-MovieCinematicMode=", &var_17f) != 0)
    *(arg1 + 0xb2) = var_17f

sub_140af2b60()
char var_17e

if (sub_140b0e8d0(&data_143dbb3f0, u"-PathTracer=", &var_17e) != 0)
    char rax_19 = var_17e
    *(arg1 + 0xb7) = rax_19
    
    if (rax_19 != 0)
        int64_t* rcx_6 = *(*arg2 + 0x38)
        (*(*rcx_6 + 0x38))(rcx_6)

sub_140af2b60()
int16_t var_140

if (sub_140b2aaa0(&data_143dbb3f0, u"-PathTracerSamplePerPixel=", &var_140) != 0)
    *(arg1 + 0xb8) = zx.d(var_140)

int16_t* var_118 = nullptr
int32_t var_110 = 0
sub_140af2b60()
char rax_24 = sub_140b2acc0(&data_143dbb3f0, u"-MovieFormat=", &var_118, 1)
char rax_25

if (rax_24 == 0)
    sub_140af2b60()
    rax_25 = sub_140b2acc0(&data_143dbb3f0, u"-ImageCaptureProtocol=", &var_118, 1)

int64_t var_1a8
int16_t* i_2
int32_t var_190
int16_t* i_3
int32_t var_170

if (rax_24 != 0 || rax_25 != 0)
    sub_141d791b0(&i_2)
    int64_t* i = i_2
    
    for (void* r12_3 = &i[sx.q(var_190)]; i != r12_3; i = &i[1])
        void* r13_1 = *i
        var_1a8 = *(r13_1 + 0x18)
        sub_140b63b70(&var_1a8, &i_3)
        int16_t* const rdx_6 = &data_142d40450
        int16_t* const i_4 = &data_142d40450
        
        if (var_110 != 0)
            rdx_6 = var_118
        
        if (var_170 != 0)
            i_4 = i_3
        
        int32_t rax_28 = sub_140a54510(i_4, rdx_6)
        int16_t* i_5 = i_3
        rsi.b = rax_28 == 0
        
        if (i_5 != 0)
            sub_140a74f90(i_5)
        
        if (rsi.b != 0)
            sub_140d15b50(&i_3, r13_1)
            *(arg1 + 0x10) = i_3
            sub_140597df0(arg1 + 0x18, &var_170)
            int64_t rcx_11 = var_170.q
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            break
    
    int16_t* i_6 = i_2
    
    if (i_6 != 0)
        sub_140a74f90(i_6)

int16_t* var_160 = nullptr
int32_t var_158 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"-AudioCaptureProtocol=", &var_160, 1) != 0)
    sub_141d791b0(&i_3)
    int16_t* i_1 = i_3
    
    for (void* r12_4 = &i_1[sx.q(var_170) * 4]; i_1 != r12_4; i_1 = &i_1[4])
        void* r13_2 = *i_1
        var_1a8 = *(r13_2 + 0x18)
        sub_140b63b70(&var_1a8, &i_2)
        int16_t* const rdx_10 = &data_142d40450
        int16_t* const i_7 = &data_142d40450
        
        if (var_158 != 0)
            rdx_10 = var_160
        
        if (var_190 != 0)
            i_7 = i_2
        
        int32_t rax_33 = sub_140a54510(i_7, rdx_10)
        int16_t* i_8 = i_2
        rsi.b = rax_33 == 0
        
        if (i_8 != 0)
            sub_140a74f90(i_8)
        
        if (rsi.b != 0)
            sub_140d15b50(&i_2, r13_2)
            *(arg1 + 0x28) = i_2
            sub_140597df0(arg1 + 0x30, &var_190)
            int64_t rcx_16 = var_190.q
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            break
    
    int16_t* i_9 = i_3
    
    if (i_9 != 0)
        sub_140a74f90(i_9)

int16_t* var_f8 = nullptr
int32_t var_f0 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"-MovieFrameRate=", &var_f8, 1) != 0)
    if (var_f0 != 0)
        r15 = var_f8
    
    if (sub_140b29b90(arg1 + 0xa0, r15) != 0)
        *(arg1 + 0x9c) = 1

int16_t* rcx_18 = var_f8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int16_t* rcx_19 = var_160

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int16_t* rcx_20 = var_118

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = var_108

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

void*** rcx_22 = var_138

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rax_37
uint64_t rdx_14

if (data_143f0f21f != 0)
    rdx_14 = zx.q(data_143f0f1a0)
    rax_37 = sx.q(rdx_14.d)

if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax_37 * 0x14) u>> 0x13).b & 1) == 0
        || not(test_bit(data_143f13cd8, rdx_14)))
    *(arg1 + 0xb7) = 0

int16_t** r12_5 = arg_10
*(arg1 + 0x118) = 0
*(arg1 + 0x189) = 0
i_2 = *r12_5
void* rax_42 = r12_5[1]
var_190.q = rax_42

if (rax_42 != 0)
    *(rax_42 + 8) += 1

int64_t* rax_43 = sub_141d79c10(&i_3, &i_2)

if (rax_43 != arg1 + 0xf8)
    if (*(arg1 + 0x110) != 0)
        *(arg1 + 0x110) = 0
        int64_t* rbx_4 = *(arg1 + 0x100)
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp3_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    
    *(arg1 + 0xf8) = *rax_43
    *(arg1 + 0x100) = rax_43[1]
    rax_43[1] = 0
    *rax_43 = 0
    *(arg1 + 0x108) = rax_43[2]
    *(arg1 + 0x110) = 1

int64_t* rbx_5 = var_170.q

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp1_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int32_t rax_51 = *(arg1 + 0x108)
i_2 = nullptr
var_190 = 0
void* rcx_29 = arg1 + 0xa0
float zmm1[0x4] = i_2.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
temp0_2[0] = 0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg1 + 0x120) = temp0_3
*(arg1 + 0x130) = 0xffffffff
*(arg1 + 0x120) = rax_51
*(arg1 + 0x124) = *(arg1 + 0x10c)
i_2.o = temp0_3

if (*(arg1 + 0x9c) == 0)
    rcx_29 = arg1 + 0x94

int64_t rax_54 = *rcx_29
arg3 = _mm_cvtepi32_pd(zx.q(rax_54.d))
int32_t rax_57 = *(arg1 + 0x140) - *(arg1 + 0x16c)
arg3.q = arg3.q f/ _mm_cvtepi32_pd(zx.q((rax_54 u>> 0x20).d)).q

if (rax_57 s< 0xa)
    sub_1407745b0(arg1 + 0x138, 0xa)
    uint64_t rflags_1
    int32_t temp0_6
    temp0_6, rflags_1 = _bit_scan_reverse(0xd)
    int32_t rax_58
    
    if (rax_57 == 0xa)
        rax_58 = 0x20
    else
        rax_58 = 0x1f - temp0_6
    
    int32_t rax_60 = rax_58 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_7
    temp0_7, rflags_2 = _bit_scan_reverse(0xc)
    char rdx_16
    
    if (rax_60 == 0)
        rdx_16 = 0x20
    else
        rdx_16 = 0x1f - temp0_7
    
    int32_t rax_62 = 1 << ((0x20 - rdx_16) & (not.d(rax_60)).b)
    int32_t rcx_33 = *(arg1 + 0x180)
    
    if (rcx_33 == 0 || rcx_33 s< rax_62)
        *(arg1 + 0x180) = rax_62
        sub_140773a10(arg1 + 0x138)

uint128_t zmm0
zmm0.q = arg3.q f+ 0.5
int64_t rcx_35 = int.q(zmm0.q)

if (rcx_35 != -0x8000000000000000)
    zmm1 = zx.o(0)
    zmm1[0].q = float.d(rcx_35)
    
    if (not(zmm1[0].q f== zmm0.q))
        zmm0.q = float.d(rcx_35 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

int16_t** rcx_37 = &i_3

if (arg3.q f!= zmm0.q)
    sub_140a2e390(rcx_37, u"%.2f", arg3.q)
else
    float temp0_10[0x4] = _mm_cvtpd_ps(arg3)
    temp0_10[0] = temp0_10[0] + temp0_10[0]
    temp0_10[0] = temp0_10[0] + 0.5f
    sub_140a2e390(rcx_37, u"%d", zx.q(int.d(temp0_10[0]) s>> 1))

sub_140b2f3e0(&var_160, &i_3)
var_1a8 = 0
int32_t var_1a0 = 0
sub_1405947f0(&var_1a8, 4)
int32_t rax_65 = var_1a0 + 4
var_1a0 = rax_65

if (rax_65 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, &data_142e72278, 8)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_43 = var_1a8

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

int64_t var_150

if (var_150 != 0)
    sub_140a74f90(var_150)

sub_140a2e390(&i_3, u"%d", zx.q(*(arg1 + 0x120)))
sub_140b2f3e0(&var_160, &i_3)
var_1a8 = 0
int32_t var_1a0_1 = 0
sub_1405947f0(&var_1a8, 6)
int32_t rax_66 = var_1a0_1 + 6
var_1a0_1 = rax_66

if (rax_66 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"width", 0xc)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_51 = var_1a8

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

if (var_150 != 0)
    sub_140a74f90(var_150)

sub_140a2e390(&i_3, u"%d", zx.q(*(arg1 + 0x124)))
sub_140b2f3e0(&var_160, &i_3)
var_1a8 = 0
int32_t var_1a0_2 = 0
sub_1405947f0(&var_1a8, 7)
int32_t rax_67 = var_1a0_2 + 7
var_1a0_2 = rax_67

if (rax_67 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"height", 0xe)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_59 = var_1a8

if (rcx_59 != 0)
    sub_140a74f90(rcx_59)

if (var_150 != 0)
    sub_140a74f90(var_150)

int64_t* rcx_61 = *(*r12_5 + 0x38)
arg_10 = *((*(*rcx_61 + 0x30))(rcx_61) + 0x18)
sub_140b63b70(&arg_10, &i_3)
sub_140b2f3e0(&var_160, &i_3)
var_1a8 = 0
int32_t var_1a0_3 = 0
sub_1405947f0(&var_1a8, 6)
int32_t rax_71 = var_1a0_3 + 6
var_1a0_3 = rax_71

if (rax_71 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"world", 0xc)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_69 = var_1a8

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

if (var_150 != 0)
    sub_140a74f90(var_150)

int64_t var_128
sub_140b21590(&var_128)
sub_140b2f3e0(&var_160, sub_140b28970(&var_128, &i_3, &data_14323343c))
var_1a8 = 0
int32_t var_1a0_4 = 0
sub_1405947f0(&var_1a8, 5)
int32_t rax_73 = var_1a0_4 + 5
var_1a0_4 = rax_73

if (rax_73 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"year", 0xa)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_78 = var_1a8

if (rcx_78 != 0)
    sub_140a74f90(rcx_78)

if (var_150 != 0)
    sub_140a74f90(var_150)

sub_140b2f3e0(&var_160, sub_140b28970(&var_128, &i_3, &data_143233454))
var_1a8 = 0
int32_t var_1a0_5 = 0
sub_1405947f0(&var_1a8, 6)
int32_t rax_75 = var_1a0_5 + 6
var_1a0_5 = rax_75

if (rax_75 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"month", 0xc)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_86 = var_1a8

if (rcx_86 != 0)
    sub_140a74f90(rcx_86)

if (var_150 != 0)
    sub_140a74f90(var_150)

sub_140b2f3e0(&var_160, sub_140b28970(&var_128, &i_3, &data_142d40480))
var_1a8 = 0
int32_t var_1a0_6 = 0
sub_1405947f0(&var_1a8, 4)
int32_t rax_77 = var_1a0_6 + 4
var_1a0_6 = rax_77

if (rax_77 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, &data_143233470, 8)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_94 = var_1a8

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

if (var_150 != 0)
    sub_140a74f90(var_150)

sub_140b2f3e0(&var_160, sub_140b28970(&var_128, &i_3, u"%Y.%m.%d"))
var_1a8 = 0
int32_t var_1a0_7 = 0
sub_1405947f0(&var_1a8, 5)
int32_t rax_79 = var_1a0_7 + 5
var_1a0_7 = rax_79

if (rax_79 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"date", 0xa)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_102 = var_1a8

if (rcx_102 != 0)
    sub_140a74f90(rcx_102)

if (var_150 != 0)
    sub_140a74f90(var_150)

sub_140b2f3e0(&var_160, sub_140b28970(&var_128, &i_3, u"%H.%M.%S"))
var_1a8 = 0
int32_t var_1a0_8 = 0
sub_1405947f0(&var_1a8, 5)
int32_t rax_81 = var_1a0_8 + 5
var_1a0_8 = rax_81

if (rax_81 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"time", 0xa)
i_2 = &var_1a8
var_190.q = &var_160
sub_141d73530(arg1 + 0x138, &arg_10, &i_2, nullptr)
int64_t rcx_110 = var_1a8

if (rcx_110 != 0)
    sub_140a74f90(rcx_110)

if (var_150 != 0)
    sub_140a74f90(var_150)

if (*(arg1 + 0xe8) == 0)
    void*** rax_82 = j_sub_140a82f30(0x18)
    void*** rsi_2 = rax_82
    
    if (rax_82 == 0)
        rsi_2 = nullptr
    else
        int64_t rdx_50 = *(arg1 + 0x94)
        *rsi_2 = &data_143232000
        rsi_2[1] = 0
        uint64_t temp0_11 = _mm_cvtepi32_pd(zx.q(rdx_50.d))
        rsi_2[2] = _mm_cvtepi32_pd(zx.q((rdx_50 u>> 0x20).d)) f/ temp0_11
    
    void*** rax_83 = j_sub_140a82f30(0x18)
    void*** rbx_7 = rax_83
    
    if (rax_83 == 0)
        rbx_7 = nullptr
    else
        rax_83[1].d = 1
        *(rax_83 + 0xc) = 1
        *rbx_7 = &data_142d42ea8
        rbx_7[2] = rsi_2
    
    var_138 = rsi_2
    void*** var_130_1 = rbx_7
    
    if (arg1 + 0xe8 == &var_138)
    label_141d7c024:
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp6_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rbx_7)[1](rbx_7, 1)
    else
        *(arg1 + 0xe8) = rsi_2
        int64_t* rsi_3 = *(arg1 + 0xf0)
        var_138 = nullptr
        
        if (rbx_7 == rsi_3)
            goto label_141d7c024
        
        void*** var_130_2 = nullptr
        *(arg1 + 0xf0) = rbx_7
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp9_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
            
            rbx_7 = var_130_2
            goto label_141d7c024
    
    int64_t* rcx_118 = *(arg1 + 0xe8)
    (*(*rcx_118 + 8))(rcx_118)

void* rax_89 = sub_141d73a80(arg1 + 0x10)
void* rax_90
int512_t zmm6
rax_90, zmm6 = sub_141d73a80(arg1 + 0x28)
bool cond:8_1

if (rax_89 != 0)
    void* rax_91 = *(arg1 + 0x40)
    
    if (rax_91 == 0 || *(rax_91 + 0x10) != rax_89)
        sub_141d79780(arg1 - 0x28)
    else
        int64_t rax_92 = *(arg1 + 0x48)
        
        if (rax_92 != 0)
            cond:8_1 = *(rax_92 + 0x10) == rax_90
            goto label_141d7c0a2
        
        sub_141d79780(arg1 - 0x28)
else if (rax_90 != 0 || *(arg1 + 0x40) != rax_89)
    sub_141d79780(arg1 - 0x28)
else
    cond:8_1 = *(arg1 + 0x48) == rax_89
label_141d7c0a2:
    
    if (not(cond:8_1))
        sub_141d79780(arg1 - 0x28)
int64_t* rcx_123 = *(arg1 + 0x40)

if (rcx_123 != 0 && *(arg1 + 0x48) != 0)
    void* rbx_9 = arg1 + 8
    
    if (arg1 == 0x28)
        rbx_9 = nullptr
    
    sub_141d7efc0(rcx_123, arg1 + 0xf8, rbx_9)
    sub_141d7efc0(*(arg1 + 0x48), arg1 + 0xf8, rbx_9)

if (*(arg1 + 0xb1) != 0)
    void var_98
    int32_t* rax_93 = sub_1422e5800(&var_98)
    *(arg1 + 0x1a8) = *rax_93
    *(arg1 + 0x1ac) = rax_93[1]
    *(arg1 + 0x1b0) = rax_93[2]
    *(arg1 + 0x1b4) = rax_93[3]
    *(arg1 + 0x1b8) = rax_93[4]
    *(arg1 + 0x1bc) = rax_93[5]
    *(arg1 + 0x1c0) = rax_93[6]
    *(arg1 + 0x1c4) = rax_93[7]
    *(arg1 + 0x1c8) = rax_93[8]
    *(arg1 + 0x1cc) = rax_93[9]
    *(arg1 + 0x1d0) = rax_93[0xa]
    
    if (arg1 + 0x1d8 != &rax_93[0xc])
        int64_t rcx_132 = *(arg1 + 0x1d8)
        
        if (rcx_132 != 0)
            sub_140a74f90(rcx_132)
        
        *(arg1 + 0x1d8) = *(rax_93 + 0x30)
        *(rax_93 + 0x30) = 0
        *(arg1 + 0x1e0) = rax_93[0xe]
        *(arg1 + 0x1e4) = rax_93[0xf]
        *(rax_93 + 0x38) = 0
    
    if (arg1 + 0x1e8 != &rax_93[0x10])
        int64_t rcx_133 = *(arg1 + 0x1e8)
        
        if (rcx_133 != 0)
            sub_140a74f90(rcx_133)
        
        *(arg1 + 0x1e8) = *(rax_93 + 0x40)
        *(rax_93 + 0x40) = 0
        *(arg1 + 0x1f0) = rax_93[0x12]
        *(arg1 + 0x1f4) = rax_93[0x13]
        *(rax_93 + 0x48) = 0
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rbx_12 = sx.q(*(arg1 + 0x1e0))
    int32_t zmm1_2 = *(arg1 + 0x1d0)
    int64_t r14_3 = *(arg1 + 0x1d8)
    int32_t var_e4_1 = *(arg1 + 0x1ac)
    int32_t var_e0_1 = *(arg1 + 0x1b0)
    int32_t var_dc_1 = *(arg1 + 0x1b4)
    int32_t var_d8_1 = *(arg1 + 0x1b8)
    int32_t var_d4_1 = *(arg1 + 0x1bc)
    int32_t var_d0_1 = *(arg1 + 0x1c0)
    int32_t rax_111 = *(arg1 + 0x1c4)
    int32_t var_e8 = *(arg1 + 0x1a8)
    int32_t var_cc_1 = rax_111
    int32_t var_c8_1 = *(arg1 + 0x1c8)
    int32_t var_c4_1 = *(arg1 + 0x1cc)
    int32_t var_c0_1 = zmm1_2
    uint64_t var_b8 = 0
    int32_t var_b0_1 = rbx_12.d
    
    if (rbx_12.d != 0)
        sub_140638750(&var_b8, rbx_12.d, 0)
        memcpy(var_b8, r14_3, (rbx_12 << 2).d)
    else
        int32_t var_ac_1 = 0
    
    int64_t rbx_13 = sx.q(*(arg1 + 0x1f0))
    int64_t r14_4 = *(arg1 + 0x1e8)
    uint64_t var_a8 = 0
    int32_t var_a0_1 = rbx_13.d
    
    if (rbx_13.d != 0)
        sub_140638750(&var_a8, rbx_13.d, 0)
        memcpy(var_a8, r14_4, (rbx_13 << 2).d)
    else
        int32_t var_9c_1 = 0
    
    sub_1422f26d0(&var_e8, 0)
    sub_1422f2980(&var_e8, 0)
    uint64_t rcx_142 = var_a8
    
    if (rcx_142 != 0)
        sub_140a74f90(rcx_142)
    
    uint64_t rcx_143 = var_b8
    
    if (rcx_143 != 0)
        sub_140a74f90(rcx_143)

uint8_t result = (*(arg1 - 0x20) u>> 4).b

if ((result & 1) == 0)
    arg_10 = arg1 - 0x28
    int64_t* rax_114
    rax_114, zmm6 = sub_141d7a3f0()
    result = sub_1405a7050(&rax_114[3], &arg_10)

int64_t* rbx_14 = r12_5[1]

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        result = (**rbx_14)(rbx_14)
        int32_t temp8_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_14 + 8))(rbx_14, 1)

zmm6.o = var_48
return result
