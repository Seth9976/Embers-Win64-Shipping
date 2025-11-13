// 函数: sub_1419faf80
// 地址: 0x1419faf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422883b0(arg1, arg2, data_143f28380)
int32_t rax = arg2[0x81].d
int32_t r8_2 = arg2[0x82].d
int32_t arg_8
arg_8.q = rax.q
int32_t arg_c = divs.dp.d(sx.q(*(arg2 + 0x40c)), r8_2)
void* rax_6 = sub_1408d7580(arg2)
void* r15 = arg2[0x15]
int128_t zmm6 = *(rax_6 + 0x228)

if (r15 == 0)
    r15 = sub_141ee69e0(arg2)

char rdi = arg2[0xab].b
char rbx = *(arg2 + 0x554)
arg1[0x2b] = sub_1419edcc0(arg2)
arg1[0x2c] = r15
*(arg1 + 0x168) = zmm6
arg1[0x2f] = divs.dp.d(sx.q(rax), r8_2).q
arg1[0x34].b = rbx
*(arg1 + 0x1a1) = rdi
*(arg1 + 0x1a2) = 0
*(arg1 + 0x1a4) = 0xffffffff
__builtin_memset(&arg1[0x30], 0, 0x20)
*arg1 = &data_14301ee20
arg1[0x2a] = &data_14301efb0
sub_1419fca40(&arg1[0x35])
int32_t rdx_4 = *(arg2 + 0x414)
uint64_t rflags
int32_t temp0_2
temp0_2, rflags = _bit_scan_reverse(rdx_4 + 1)
int32_t rcx_7 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_3
temp0_3, rflags_1 = _bit_scan_reverse(rdx_4)
char rdx_5

if (rcx_7 == 0)
    rdx_5 = 0x20
else
    rdx_5 = 0x1f - temp0_3

rcx_7.b = not.b(rcx_7.b)
arg1[0x89].b = ((0x20 - rdx_5) & rcx_7.b) - 1
char rcx_9 = *(sub_1408d7580(arg2) + 0x260)
*(arg1 + 0x449) = ((*(arg1 + 0x449) & 0xfe) | (rcx_9 & 1)) & 0xfd
*(arg1 + 0x44a) = (*(sub_1419ee0e0(arg2) + 8)).b
*(arg1 + 0x44b) = *(sub_1408d7580(arg2) + 0x26c)
*(arg1 + 0x44c) = arg2[0x94].d
arg1[0x8a] = 0
arg1[0x8b] = 0
*(arg1 + 0x464) = sx.d(arg1[0x89].b)
arg1[0x8c].d = 0
arg1[0x8e].d = 0
int128_t zmm0 = *(sub_1408d7580(arg2) + 0x24c)
zmm0.d = zmm0.d f* zmm0.d
*(arg1 + 0x474) = zmm0.d
zmm0 = *(sub_1408d7580(arg2) + 0x25c)
zmm0.d = zmm0.d f* zmm0.d
arg1[0x90].d = zmm0.d
*(arg1 + 0x484) = *(sub_1408d7580(arg2) + 0x264)
*(arg1 + 0x49c) = arg2[0x83].d
arg1[0x94].d = *(arg2 + 0x414)
*(arg1 + 0x4a4) = *(arg2 + 0x414) + 1
arg1[0x95].d = arg2[0x82].d
*(arg1 + 0x4ac) = arg2[0x82].d + 1
arg1[0x97].d = *(arg2 + 0x40c)
*(arg1 + 0x4b4) = arg2[0x81].d
arg1[0x98] = arg2
arg1[0xa2] = 0
arg1[0xa3] = 0
arg1[0xa4] = 0
arg1[0xa5] = 0
*(arg1 + 0x530) = *(arg2 + 0x490)
int64_t* rax_30 = sub_1419ee0f0(arg2)
arg1[0xa8] = 0
int64_t rdi_1 = sx.q(rax_30[1].d)
int64_t r12 = *rax_30
arg1[0xa9].d = rdi_1.d

if (rdi_1.d != 0)
    sub_1405c4a00(&arg1[0xa8], rdi_1.d, 0)
    memcpy(arg1[0xa8], r12, (rdi_1 << 3).d)
else
    *(arg1 + 0x54c) = 0

arg1[0xab].d = 0xffffffff
arg1[0xaa] = 0
arg1[0xac] = sub_1419edcc0(arg2)
arg1[0xad] = arg2[0xb0]
void* rdi_2 = &arg1[0xc3]
void* rcx_23 = &arg1[0xb8]
*(arg1 + 0x570) = *(arg2 + 0x4b0)
arg1[0xb1] = arg2[0x90]
arg1[0xb2].b = arg2[0xb1].b
__builtin_memset(arg1 + 0x594, 0, 0x14)
arg1[0xb6] = 0
arg1[0xb7] = 0
arg1[0xba] = 0
arg1[0xbb].d = 0
*(arg1 + 0x5dc) = 0x80
void* rax_35 = arg1[0xba]

if (rax_35 != 0)
    rcx_23 = rax_35

*rcx_23 = 0
*(rcx_23 + 8) = 0
__builtin_memset(&arg1[0xbc], 0, 0x48)
arg1[0xc6].d = 0xffffffff
*(arg1 + 0x634) = 4
arg1[0xc5] = &data_14301ede0
arg1[0xc7].d = 2
__builtin_memset(&arg1[0xc8], 0, 0x20)
int32_t rax_37 = arg1[0x21][1].d
uint64_t rbx_1

if (rax_37 s< 3)
    rbx_1 = sx.q(arg2[0xb4].d)
    
    if (rbx_1.d != 0)
        int32_t rax_45 = arg1[0xb7].d
        int32_t rdx_15 = rbx_1.d + rax_45
        
        if (rdx_15 s> *(arg1 + 0x5bc))
            sub_1405c5570(&arg1[0xb6], rdx_15)
            rax_45 = arg1[0xb7].d
        
        memcpy(&arg1[0xb6][sx.q(rax_45)], arg2[0xb3], (rbx_1 << 3).d)
        arg1[0xb7].d += rbx_1.d
else if (*(sub_1408d7580(arg2) + 0x50c) == 0)
    rbx_1 = zx.q(arg2[0x89].d)
    
    if (rbx_1.d != 0)
        int32_t rax_42 = arg1[0xb7].d
        int32_t rdx_13 = rbx_1.d + rax_42
        
        if (rdx_13 s> *(arg1 + 0x5bc))
            sub_1405c5570(&arg1[0xb6], rdx_13)
            rax_42 = arg1[0xb7].d
        
        int32_t i_5 = rbx_1.d
        int64_t* rdx_14 = arg2[0x88]
        int64_t* r8_7 = &arg1[0xb6][sx.q(rax_42)]
        int32_t i
        
        do
            int64_t rax_44 = *rdx_14
            rdx_14 = &rdx_14[1]
            *r8_7 = rax_44
            r8_7 = &r8_7[1]
            i = i_5
            i_5 -= 1
        while (i != 1)
        arg1[0xb7].d += rbx_1.d
else
    rbx_1 = zx.q(arg2[0x8b].d)
    
    if (rbx_1.d != 0)
        int32_t rax_39 = arg1[0xb7].d
        int32_t rdx_11 = rbx_1.d + rax_39
        
        if (rdx_11 s> *(arg1 + 0x5bc))
            sub_1405c5570(&arg1[0xb6], rdx_11)
            rax_39 = arg1[0xb7].d
        
        int32_t i_4 = rbx_1.d
        int64_t* rdx_12 = arg2[0x8a]
        int64_t* r8_6 = &arg1[0xb6][sx.q(rax_39)]
        int32_t i_1
        
        do
            int64_t rax_41 = *rdx_12
            rdx_12 = &rdx_12[1]
            *r8_6 = rax_41
            r8_6 = &r8_6[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        arg1[0xb7].d += rbx_1.d
sub_14081d8c0(&arg1[0xbf], &arg2[0x8e])
sub_14081d8c0(&arg1[0xbd], &arg2[0x8c])

if ((arg1[7].b & 2) == 0)
    *(arg1 + 0x3b) |= 0x20

uint128_t zmm1

if (rax_37 s> 1)
    void* rdx_19 = arg1[0x2b]
    int32_t* rax_47 = *(rdx_19 + 0xd0)
    int32_t rcx_33
    
    if (rax_47 == 0)
        rcx_33 = 0
    else
        rcx_33 = *rax_47
    
    if (rcx_33 s<= 1)
        rcx_33 = 1
    
    zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x414) + 1)).d f/ _mm_cvtepi32_ps(zx.o(rcx_33)).d
    arg1[0xb0].d = zmm1.d
    void* rax_50 = *(rdx_19 + 0xd0)
    int32_t rcx_34
    
    if (rax_50 == 0)
        rcx_34 = 0
    else
        rcx_34 = *(rax_50 + 4)
    
    if (rcx_34 s<= 1)
        rcx_34 = 1
    
    zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x414) + 1)).d f/ _mm_cvtepi32_ps(zx.o(rcx_34)).d
else
    zmm1 = zx.o(0)
    arg1[0x2b] = 0
    arg1[0xb0].d = 0

*(arg1 + 0x584) = zmm1.d
void* rax_53 = sub_1408d7580(arg2)
bool cond:2 = data_143de5480 == 0
int128_t zmm8
zmm8.d = data_1439cbf5c.d f* *(rax_53 + 0x254)
int64_t rbx_2 = data_143ed5cc8
zmm8 = _mm_max_ss(zmm8.d, 0x3f8147ae)
int64_t rcx_36

if (cond:2)
    rcx_36 = 0
else
    rcx_36.b = GetCurrentThreadId() != data_143de5470

zmm6 = *(rbx_2 + (rcx_36 << 2))
void* rax_55 = sub_1408d7580(arg2)
int32_t rcx_40 = sx.d(arg1[0x89].b) + 1 + arg1[0x8b].d
uint128_t zmm7
zmm7.d = (*(rax_55 + 0x250)).d f/ zmm6.d
arg1[0x8b].d = rcx_40

if (rcx_40 s> *(arg1 + 0x45c))
    sub_1406105e0(&arg1[0x8a])

uint128_t zmm0_1
zmm0_1.d = zmm7.d f* zmm7.d
zmm7.d = zmm7.d f/ zmm8.d
*arg1[0x8a] = zmm0_1.d
arg1[0x91].d = zmm0_1.d
zmm0_1.d = zmm7.d f* zmm7.d
*(arg1 + 0x48c) = zmm0_1.d
void* rax_57 = sub_1408d7580(arg2)
int32_t i_2 = 1
uint128_t zmm2
zmm2.d = data_1439cbf60.d f* *(rax_57 + 0x258)
zmm2 = _mm_max_ss(zmm2.d, 0x3f8147ae)
zmm0_1.d = zmm2.d f* zmm2.d
arg1[0x92].d = zmm0_1.d

if (arg1[0x89].b s>= 1)
    int64_t rcx_43 = 4
    zmm1.d = 1f f/ zmm2.d
    
    do
        rcx_43 += 4
        i_2 += 1
        zmm0_1.d = zmm7.d f* zmm7.d
        zmm7.d = zmm7.d f* zmm1.d
        *(rcx_43 + arg1[0x8a] - 4) = zmm0_1.d
    while (i_2 s<= sx.d(arg1[0x89].b))

void* rax_60 = arg1[0x2b]
int32_t r8_11 = sx.d(arg1[0x89].b)
arg1[0x8c].d = 0
*(arg1 + 0x464) = r8_11
void* rcx_44

if (rax_60 != 0)
    rcx_44 = *(rax_60 + 0x78)

int32_t rcx_47

if (rax_60 == 0 || rcx_44 == 0)
    rcx_47 = 0
else
    int32_t rax_61 = *(arg1 + 0x4a4)
    uint64_t rflags_2
    int32_t temp0_10
    temp0_10, rflags_2 = _bit_scan_reverse(rax_61)
    int32_t rdx_21
    
    if (rcx_44 == 0)
        rdx_21 = 0x20
    else
        rdx_21 = 0x1f - temp0_10
    
    uint64_t rflags_3
    int32_t temp0_11
    temp0_11, rflags_3 = _bit_scan_reverse(rax_61 - 1)
    int32_t r9_2
    
    if (rax_61 == 1)
        r9_2 = 0x20
    else
        r9_2 = 0x1f - temp0_11
    
    int32_t rax_63 = *(rcx_44 + 0x60)
    rcx_47 = ((0x20 - r9_2) & not.d(rdx_21 << 0x1a s>> 0x1f)) - 1
    
    if (rax_63 s<= rcx_47)
        rcx_47 = rax_63

if (rcx_47 s>= r8_11)
    r8_11 = rcx_47

*(arg1 + 0x464) = r8_11
void* rax_64 = sub_1408d7580(arg2)
int32_t r8_12 = *(arg1 + 0x464)
int32_t r9_3 = *(rax_64 + 0x240)

if (r9_3 s>= 0)
    char rax_65 = arg1[0x89].b
    char rdx_25 = r9_3.b
    char rcx_49 = rax_65
    
    if (rdx_25 s<= rax_65)
        rcx_49 = rdx_25
    
    arg1[0x89].b = rcx_49
    
    if (r9_3 s<= r8_12)
        r8_12 = r9_3

int32_t rax_66 = sx.d(arg1[0x34].b)
int32_t rdx_26

if (rax_66.b s< 0)
    rdx_26 = rax_66
else
    rdx_26 = arg1[0x8c].d
    
    if (rax_66 s>= rdx_26)
        rdx_26 = r8_12
        
        if (rax_66 s< r8_12)
            rdx_26 = rax_66

int32_t rax_67 = sx.d(rdx_26.b)
arg1[0x34].b = rdx_26.b
int32_t rcx_50 = rax_67

if (rdx_26.b s< 0)
    rcx_50 = arg1[0x8c].d

char r9_4 = *(arg1 + 0x1a1)
arg1[0x8c].d = rcx_50
int64_t rcx_51 = arg1[0x8a]

if (rdx_26.b s< 0)
    rax_67 = r8_12

char r8_13 = arg1[0x89].b
*(arg1 + 0x464) = rax_67
arg1[0x93].b = rax_67.b
*(arg1 + 0x494) = *(rcx_51 + (sx.q(rax_67) << 2))
char rcx_53 = neg.b(r8_13)
*(arg1 + 0x499) = rdx_26.b
char rdx_27

if (r9_4 s>= rcx_53)
    rdx_27 = r8_13
    
    if (r9_4 s< r8_13)
        rdx_27 = r9_4
else
    rdx_27 = rcx_53

*(arg1 + 0x1a1) = rdx_27
rdx_27 += data_143f23d10

if (rdx_27 s>= rcx_53)
    rcx_53 = r8_13
    
    if (rdx_27 s< r8_13)
        rcx_53 = rdx_27

int32_t rcx_54 = sx.d(r8_13)
*(arg1 + 0x46c) = rcx_54
zmm0_1 = _mm_cvtepi32_ps(zx.o(sx.d(rcx_53)))
int32_t rax_73 = sx.d(rdx_27) + rcx_54

if (rcx_54 s<= rax_73)
    rax_73 = rcx_54

arg1[0x8f].d = zmm0_1.d
*(arg1 + 0x47c) = _mm_cvtepi32_ps(zx.o(rax_73)).d
void* rax_74 = sub_1408d7580(arg2)
int32_t rcx_56 = sx.d(arg1[0x89].b)
void*** rbx_4 = nullptr
int32_t rax_75 = 0

if (rcx_56 - *(rax_74 + 0x2d8) s>= 0)
    rax_75 = rcx_56 - *(rax_74 + 0x2d8)

arg1[0x8d].d = rax_75
void* rax_76 = sub_1408d7580(arg2)
bool cond:10 = *(arg1 + 0x49c) s<= 1
zmm2 = _mm_cvtepi32_ps(zx.o(arg1[0x94].d))
*(arg1 + 0x41) = *(rax_76 + 0x2dc)
*(arg1 + 0x49a) = 0xffff
zmm1 = *(arg2 + 0x1e0)
zmm2.d = zmm2.d f* _mm_max_ss(zmm1.d, _mm_shuffle_ps(zmm1, zmm1, 0x55).d).d
arg1[0x8e].d = zmm2.d
uint128_t var_a8
void* r15_1

if (not(cond:10))
    void* rbx_5 = arg1[0x98]
    zmm1 = *(rbx_5 + 0x1c0)
    var_a8 = zmm1
    void var_b8
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1, *(rbx_5 + 0x180), 4)) != 0)
        *(rbx_5 + 0x180) = zmm1
        int32_t* rax_78 = sub_140adf5d0(&var_a8, &var_b8)
        *(rbx_5 + 0x190) = *rax_78
        *(rbx_5 + 0x198) = rax_78[2]
        zmm2 = arg1[0x8e].d
    
    zmm2.d = zmm2.d f* 0.5f
    int32_t var_d0_1 = 0
    uint64_t var_c8 = *(rbx_5 + 0x190)
    int32_t rax_80 = *(rbx_5 + 0x198)
    int32_t var_d8 = zmm2.d
    int32_t var_d4_1 = zmm2.d
    int32_t var_c0_1 = rax_80
    float* rax_81 = sub_140adf300(&var_c8, &var_b8, &var_d8)
    void* rcx_62 = arg1[0x98]
    *(rcx_62 + 0x108)
    *(rcx_62 + 0x104)
    *(rcx_62 + 0x100)
    rax_81[2]
    rax_81[1]
    *rax_81
    int32_t rax_82 = arg1[0xa3].d + 4
    arg1[0xa3].d = rax_82
    
    if (rax_82 s> *(arg1 + 0x51c))
        sub_140638a00(&arg1[0xa2])
    
    int32_t i_3 = *(arg1 + 0x49c)
    rbx_4 = nullptr
    r15_1 = nullptr
    
    if (i_3 s> 0)
        do
            int32_t rdi_3 = 0
            
            if (i_3 s> 0)
                uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(r15_1.d))
                
                do
                    float zmm1_1 = arg1[0x8e].d
                    int32_t rbx_6 = *(arg1 + 0x49c)
                    int32_t var_d0_2 = 0
                    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rdi_3)).d f* zmm1_1
                    int64_t zmm2_1
                    zmm2_1.d = zmm6_1.q.d f* zmm1_1
                    var_d8 = zmm0_1.d
                    int32_t rbx_8 = rbx_6 * r15_1.d + rdi_3
                    int32_t var_d4_2 = zmm2_1.d
                    float* rax_83
                    float zmm7_2
                    int64_t zmm8_2
                    uint128_t zmm9_2
                    rax_83, zmm6_1, zmm7_2, zmm8_2, zmm9_2 =
                        sub_140adf300(&var_c8, &var_a8, &var_d8)
                    int64_t rdx_32 = arg1[0xa2]
                    rdi_3 += 1
                    zmm1_1 = zmm7_2 + rax_83[2]
                    zmm2_1.d = zmm8_2.d f+ rax_83[1]
                    zmm0_1.d = zmm9_2.d f+ *rax_83
                    int64_t rcx_65 = sx.q(rbx_8) * 3
                    *(rdx_32 + (rcx_65 << 2)) = (_mm_unpacklo_ps(zmm0_1, zmm2_1)).q
                    *(rdx_32 + (rcx_65 << 2) + 8) = zmm1_1
                    i_3 = *(arg1 + 0x49c)
                while (rdi_3 s< i_3)
                
                rbx_4 = nullptr
            
            r15_1 = zx.q(r15_1.d + 1)
        while (r15_1.d s< i_3)
        
        rdi_2 = &arg1[0xc3]

zmm0_1 = arg2[0xaa].d

if (not(zmm0_1.d f> 0f))
    zmm0_1 = *(sub_1408d7580(arg2) + 0x388)

arg1[0x96].d = zmm0_1.d
void*** rax_87 = j_sub_140a82f30(0x40)

if (rax_87 != 0)
    rbx_4 = sub_1419fc1a0(rax_87, arg2)

void**** rax_89 = &arg1[0xbc]
void* arg_10

if (rax_89 != &arg_10)
    r15_1 = *rax_89
    *rax_89 = rbx_4
    
    if (r15_1 != 0)
        int64_t rcx_68 = *(r15_1 + 0x30)
        
        if (rcx_68 != 0)
            sub_140a74f90(rcx_68)
        
        *r15_1 = &data_14301de90
        sub_1405d1550(r15_1 + 0x28)
        j_sub_140a74f90(r15_1)
        rax_89 = &arg1[0xbc]
else if (rbx_4 != 0)
    int64_t rcx_71 = rbx_4[6]
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    *rbx_4 = &data_14301de90
    sub_1405d1550(&rbx_4[5])
    j_sub_140a74f90(rbx_4)
    rax_89 = &arg1[0xbc]

void*** rax_90 = *rax_89

if (rax_90[2] != 0 || rax_90[3] != 0)
    r15_1.b = 1
else
    r15_1.b = 0

if (arg1[0xb7].d s<= 0)
    int64_t rax_96 = sub_14210f630(0)
    int64_t rbx_10 = sx.q(arg1[0xb7].d)
    int32_t rcx_75 = (rbx_10 + 1).d
    arg1[0xb7].d = rcx_75
    
    if (rcx_75 s> *(arg1 + 0x5bc))
        sub_1405a4d70(&arg1[0xb6])
    
    arg1[0xb6][rbx_10] = rax_96
else
    int64_t* rbx_9 = arg1[0xb6]
    void* rcx_73 = &rbx_9[sx.q(arg1[0xb7].d)]
    arg_10 = rcx_73
    
    if (rbx_9 != rcx_73)
        void* rax_92 = rcx_73
        
        do
            int64_t* rcx_74 = *rbx_9
            
            if (rcx_74 == 0)
                *rbx_9 = sub_14210f630(0)
                rax_92 = arg_10
            else if (r15_1.b != 0)
                if ((*(*rcx_74 + 0x2d8))(rcx_74, 4) != 0)
                    rax_92 = arg_10
                else
                    *rbx_9 = sub_14210f630(0)
                    rax_92 = arg_10
            
            rbx_9 = &rbx_9[1]
        while (rbx_9 != rax_92)

int32_t rdx_36 = arg1[0xb7].d

if (rdx_36 s> *(rdi_2 + 0xc))
    sub_1405c5570(rdi_2, rdx_36)

int64_t** rdi_4 = arg1[0xb6]
void* rcx_79 = &rdi_4[sx.q(arg1[0xb7].d)]
arg_10 = rcx_79
bool cond:12 = rdi_4 == rcx_79

if (rdi_4 != rcx_79)
    void* rax_98 = rcx_79
    
    do
        int64_t* rcx_80 = *rdi_4
        
        if (rcx_80 != 0)
            var_a8 = zx.o(0)
            int64_t rax_100 = (*(*rcx_80 + 0x270))(rcx_80, &var_a8)
            
            if (rax_100 != 0)
                int64_t* rbx_11 = *rdi_4
                
                if (rbx_11 == 0)
                label_1419fbcf5:
                    void arg_20
                    int64_t* rax_105 = sub_1421268c0(*rdi_4, &arg_20, rax_37)
                    int64_t rbx_12 = sx.q(arg1[0xc4].d)
                    int32_t rcx_84 = (rbx_12 + 1).d
                    arg1[0xc4].d = rcx_84
                    
                    if (rcx_84 s> *(arg1 + 0x624))
                        sub_1405a4d70(&arg1[0xc3])
                    
                    arg1[0xc3][rbx_12] = *rax_105
                else
                    void* rax_101 = sub_142543020()
                    void* rcx_81 = rbx_11[2]
                    int64_t rax_102 = sx.q(*(rax_101 + 0x38))
                    
                    if (rax_102.d s> *(rcx_81 + 0x38)
                            || *(*(rcx_81 + 0x30) + (rax_102 << 3)) != rax_101 + 0x30)
                        goto label_1419fbcf5
                    
                    if (sub_14212d430(rbx_11, rax_100) != 0)
                        goto label_1419fbcf5
                
                void* rax_107 = arg2[0x15]
                
                if (rax_107 == 0)
                    rax_107 = sub_141ee69e0(arg2)
                
                void* rdx_42 = &data_143f285b0
                
                if (arg1[0xb1] == 0)
                    rdx_42 = &data_143f284d0
                
                char rax_108 = sub_1423b4730(*rdi_4, rdx_42, zx.d(*(rax_107 + 0x118)))
                bool r12_2 = false
                *(arg1 + 0x449) |= rax_108 * 2
                
                if (rax_37 s>= 3)
                    r12_2 = *(rax_100 + 0x209) != nullptr
                
                int32_t rbx_13 = arg1[0xbb].d
                sub_1405a4980(&arg1[0xb8], rbx_13 + 1)
                arg1[0xbb].d += 1
                void* rdx_44 = &arg1[0xb8]
                void* rax_109 = arg1[0xba]
                
                if (rax_109 != 0)
                    rdx_44 = rax_109
                
                int32_t rax_110 = rbx_13
                
                if (rbx_13 s< 0)
                    rax_110 = rbx_13 + 0x1f
                
                int64_t r8_19 = sx.q(rax_110 s>> 5)
                int32_t rax_112 = 1 << (rbx_13.b & 0x1f)
                int32_t rcx_91 = *(rdx_44 + (r8_19 << 2))
                
                if (r12_2 == 0)
                    *(rdx_44 + (r8_19 << 2)) = not.d(rax_112) & rcx_91
                else
                    *(rdx_44 + (r8_19 << 2)) = rcx_91 | rax_112
            
            rax_98 = arg_10
        
        rdi_4 = &rdi_4[1]
        cond:12 = rdi_4 == rax_98
    while (rdi_4 != rax_98)

int32_t rcx_93 = *(arg2 + 0x414)
uint64_t rflags_4
int32_t temp0_22
temp0_22, rflags_4 = _bit_scan_reverse(rcx_93 + 1)
int32_t rdx_45

rdx_45 = cond:12 ? 0x20 : 0x1f - temp0_22

int32_t rdx_47 = rdx_45 << 0x1a s>> 0x1f
uint64_t rflags_5
char temp0_23
temp0_23, rflags_5 = _bit_scan_reverse(rcx_93)
char r9_5

if (rdx_47 == 0)
    r9_5 = 0x20
else
    r9_5 = 0x1f - temp0_23

rdx_47.b = not.b(rdx_47.b)
uint32_t rax_117
rax_117.b = neg.b(r9_5)
int32_t rax_122 = 0x40000000

if (rax_37 s<= 1)
    rax_122 = 0

int32_t rdx_52 = (rdx_47 & rax_117 & 0xf) | (*(arg1 + 0x49c) & 0xf) << 4
    | (sbb.d(rcx_93, rcx_93, arg1[0xb1] != 0) & 0x80000000) | rax_122
*(arg1 + 0x3b) |= 0x10
*(arg1 + 0x594) = rdx_52
return arg1
