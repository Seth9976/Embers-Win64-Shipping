// 函数: sub_14217caf0
// 地址: 0x14217caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
double zmm6[0x2] = arg2
sub_140b33630("NetworkOutgoing")
int32_t rbx = *(arg1 + 0x194)
char rax_2 = sub_140b5b8a0(arg1[0x32].d, 0x11a)
uint128_t zmm9 = 0x4170000000000000
int32_t rcx
rcx.b = rbx == 0
char rax_4

if ((rcx.b & rax_2) != 0)
    void* rax_3
    rax_3, zmm6 = sub_140b3cdd0()
    rax_4 = sub_140b40280()

char var_237
int64_t* performanceCount
int128_t zmm8

if ((rcx.b & rax_2) == 0 || rax_4 == 0)
    var_237 = 0
    zmm8 = zx.o(0)
else
    var_237 = 1
    data_143f4d280 = (zx.o(0)).q
    QueryPerformanceCounter(&performanceCount)
    zmm8.q = float.d(performanceCount)
    zmm8.q = zmm8.q f* data_143d796f8
    zmm8.q = zmm8.q f+ zmm9.q

if ((*(*arg1 + 0x368))(arg1) != 0 && arg1[0x13].d s> 0
        && ((*(*arg1[0x12] + 0xa4) u>> 1).b & 1) == 0)
    data_143f4d28c = (*(*arg1 + 0x2d8))(arg1, zmm6)

int64_t rdi = 0
arg1[0xbb].d = 0
QueryPerformanceCounter(&performanceCount)
double zmm7[0x2] = zx.o(0)
zmm7[0] = float.d(performanceCount)
zmm7[0] = zmm7[0] f* data_143d796f8
zmm7[0] = zmm7[0] f+ zmm9.q
int32_t var_234
double zmm0_1[0x2]
double zmm1[0x2]
double zmm2[0x2]

if (*(arg1 + 0x2b4) != 0)
    int32_t rcx_7
    rcx_7.b = *(arg1 + 0x194) == 0
    
    if ((rcx_7.b & sub_140b5b8a0(arg1[0x32].d, 0x11a)) != 0)
        zmm0_1 = arg1[0x55].d
        zmm7[0] = zmm7[0] f- arg1[0x54]
        zmm0_1 = _mm_cvtps_pd(zmm0_1[0])
        
        if (not(zmm7[0] <= zmm0_1[0]))
            int32_t rdx_1 = 0
            int64_t* rcx_8 = arg1[0x12]
            int32_t r8_1 = 0
            int32_t r9_1 = 0
            int32_t r10_1 = 0
            int64_t r11_1 = 0
            uint64_t rbx_3 = sx.q(arg1[0x13].d) << 3 u>> 3
            
            if (rcx_8 u> &rcx_8[arg1[0x13]])
                rbx_3 = 0
            
            if (rbx_3 != 0)
                do
                    void* rax_15 = *rcx_8
                    
                    if (rax_15 != 0)
                        if (rdx_1 == 0 || *(rax_15 + 0x4c4) s< rdx_1)
                            rdx_1 = *(rax_15 + 0x4c4)
                        
                        if (r9_1 == 0 || *(rax_15 + 0x4c8) s< r9_1)
                            r9_1 = *(rax_15 + 0x4c8)
                        
                        if (r8_1 == 0 || *(rax_15 + 0x4cc) s< r8_1)
                            r8_1 = *(rax_15 + 0x4cc)
                        
                        if (r10_1 == 0 || *(rax_15 + 0x4d0) s< r10_1)
                            r10_1 = *(rax_15 + 0x4d0)
                    
                    rcx_8 = &rcx_8[1]
                    r11_1 += 1
                while (r11_1 != rbx_3)
            
            if (*(arg1 + 0x2b4) != 0)
                zmm0_1 = zx.o(0)
                zmm0_1[0].d = fconvert.s(zmm7[0])
                int32_t r10_2 = arg1[0x13].d
                zmm2 = zx.o(0)
                float zmm5_1 = 1f f/ zmm0_1[0].d
                zmm0_1 = zx.o(0)
                zmm1 = zx.o(0)
                zmm0_1[0].d = float.s(zx.q(arg1[0x47].d))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t r9_2 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                zmm0_1[0].d = float.s(zx.q(arg1[0x48].d))
                arg1[0x47].d = r9_2
                arg1[0x46].d = r9_2
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t r8_2 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                zmm0_1[0].d = float.s(zx.q(arg1[0x49].d))
                arg1[0x48].d = r8_2
                *(arg1 + 0x234) = r8_2
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rax_19 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                arg1[0x49].d = rax_19
                zmm0_1[0].d = float.s(zx.q(*(arg1 + 0x24c)))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rax_21 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                *(arg1 + 0x24c) = rax_21
                zmm0_1[0].d = float.s(zx.q(arg1[0x4a].d))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rdx_2 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                zmm0_1[0].d = float.s(zx.q(arg1[0x4b].d))
                arg1[0x4a].d = rdx_2
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rcx_9 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                zmm0_1[0].d = float.s(zx.q(arg1[0x4c].d))
                arg1[0x4b].d = rcx_9
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rax_25 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                arg1[0x4c].d = rax_25
                zmm0_1[0].d = float.s(zx.q(*(arg1 + 0x264)))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rax_27 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                *(arg1 + 0x264) = rax_27
                zmm2[0].d = float.s(zx.q(arg1[0x4f].d))
                zmm0_1[0].d = float.s(zx.q(rcx_9))
                zmm2[0].d = zmm2[0].d f* 100f
                zmm0_1 = _mm_max_ss(zmm0_1[0].d, 0x3f800000)
                zmm2[0].d = zmm2[0].d f/ zmm0_1[0].d
                zmm0_1 = zx.o(0)
                arg1[0x4f].d = int.d(zmm2[0].d)
                zmm0_1[0].d = float.s(zx.q(arg1[0x4e].d))
                zmm1[0].d = float.s(zx.q(rdx_2))
                zmm0_1[0].d = zmm0_1[0].d f* 100f
                zmm1[0].d = zmm1[0].d f+ zmm0_1[0].d
                zmm1 = _mm_max_ss(zmm1[0].d, 0x3f800000)
                zmm0_1[0].d = zmm0_1[0].d f/ zmm1[0].d
                arg1[0x4e].d = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                zmm0_1[0].d = float.s(zx.q(arg1[0x51].d))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rax_35 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                arg1[0x51].d = rax_35
                zmm0_1[0].d = float.s(zx.q(arg1[0x52].d))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rax_37 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                arg1[0x52].d = rax_37
                zmm0_1[0].d = float.s(zx.q(*(arg1 + 0x28c)))
                uint64_t rax_39 = zx.q(*(arg1 + 0x294))
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rdx_3 = int.d(zmm0_1[0].d)
                zmm0_1 = zx.o(0)
                *(arg1 + 0x28c) = rdx_3
                zmm0_1[0].d = float.s(rax_39)
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1
                int32_t rcx_10 = int.d(zmm0_1[0].d)
                *(arg1 + 0x294) = rcx_10
                int32_t rax_42
                
                if (r9_2 == 0)
                    rax_42 = 0
                else
                    zmm2 = 0x42c80000
                    zmm0_1 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm0_1[0].d = float.s(zx.q(r9_2))
                    zmm1[0].d = float.s(zx.q(rcx_10))
                    zmm2[0].d = 100f f/ zmm0_1[0].d
                    zmm2[0].d = zmm2[0].d f* zmm1[0].d
                    rax_42 = int.d(zmm2[0].d)
                
                arg1[0x53].d = rax_42
                int32_t rax_45
                
                if (r8_2 == 0)
                    rax_45 = 0
                else
                    zmm0_1 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm0_1[0].d = float.s(zx.q(r8_2))
                    zmm1[0].d = float.s(zx.q(rdx_3))
                    rax_45 = int.d(100f f/ zmm0_1[0].d f* zmm1[0].d)
                
                void* rcx_11 = arg1[0x28]
                *(arg1 + 0x29c) = rax_45
                
                if (rcx_11 != 0)
                    sub_1424359e0(rcx_11)
                    r10_2 = arg1[0x13].d
                
                void* rdx_4 = arg1[0x11]
                
                if (rdx_4 == 0)
                    int32_t i = 0
                    
                    if (r10_2 s> 0)
                        int64_t* r14_1 = nullptr
                        
                        do
                            void* rbx_5 = arg1[0xde]
                            sub_140d3a3a0(&performanceCount, *(arg1[0x12] + r14_1))
                            sub_1408506d0(rbx_5 + 0xf0, &var_234, performanceCount)
                            int64_t* rcx_17 = *(r14_1 + arg1[0x12])
                            (*(*rcx_17 + 0x2b8))(rcx_17, 0)
                            i += 1
                            r14_1 = &r14_1[1]
                        while (i s< arg1[0x13].d)
                else
                    void* rbx_4 = arg1[0xde]
                    sub_140d3a3a0(&performanceCount, rdx_4)
                    sub_1408506d0(rbx_4 + 0xf0, &var_234, performanceCount)
                    int64_t* rcx_14 = arg1[0x11]
                    (*(*rcx_14 + 0x2b8))(rcx_14, 0)
            
            arg1[0x54] = zmm7.q
            arg1[0x47].d = 0
            arg1[0x48].d = 0
            arg1[0x49] = 0
            arg1[0x4a].d = 0
            arg1[0x4b].d = 0
            arg1[0x4c] = 0
            arg1[0x4f].d = 0
            arg1[0x4e].d = 0
            __builtin_memset(&arg1[0x51], 0, 0x18)

int64_t rax_49 = *arg1

if (arg1[0x11] == 0)
    (*(rax_49 + 0x310))(arg1)
else
    (*(rax_49 + 0x318))(arg1)
    int64_t* rcx_19 = arg1[0x11]
    (*(*rcx_19 + 0x2b0))(rcx_19)

int32_t i_1 = 0

if (arg1[0x13].d s> 0)
    int64_t* r14_2 = nullptr
    
    do
        int64_t* rcx_20 = *(r14_2 + arg1[0x12])
        (*(*rcx_20 + 0x2b0))(rcx_20)
        i_1 += 1
        r14_2 = &r14_2[1]
    while (i_1 s< arg1[0x13].d)

void* rcx_21 = arg1[0x21]

if (rcx_21 != 0)
    sub_141ccf540(rcx_21, zmm6)
    (*(*arg1 + 0x298))(arg1)

char rax_54 = data_143de5480

if (rax_54 != 0)
    GetCurrentThreadId()
    rax_54 = data_143de5480

int64_t rbx_6 = data_143f4d078
int64_t rcx_23

if (rax_54 == 0)
    rcx_23 = 0
else
    rcx_23.b = GetCurrentThreadId() != data_143de5470

void* rax_56

if (*(rbx_6 + (rcx_23 << 2)) != 0)
    rax_56 = arg1[0x2a]

int32_t var_230
double var_1f8[0x2]
int64_t var_1d8
void* var_1d0
double var_180[0x2]
char var_238

if (*(rbx_6 + (rcx_23 << 2)) == 0 || rax_56 == 0)
    void* r14_13 = &arg1[0xa3]
    var_230 = 0
    int32_t var_22c_6 = 1
    int32_t var_220_6 = 0xffffffff
    int64_t var_21c_5 = 0
    
    if (*(r14_13 + 0x28) != 0)
        sub_14059bdd0(&var_230)
    
    zmm2 = var_220_6.o
    var_1d0 = r14_13
    double var_170_4[0x2] = zmm2
    var_180 = var_230.o
    zmm1 = var_180
    var_1f8 = r14_13.o
    uint32_t rax_172 = (zmm2[0] u>> 0x20).d
    var_1d8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    
    if (rax_172 s< *(r14_13 + 0x28))
        int32_t rbx_20 = zmm1[1]:4.d
        
        while (true)
            void* rcx_128 = *(*var_1f8[0] + sx.q(rbx_20) * 0x10)
            var_238 = 0
            zmm7, zmm8, zmm9 = sub_141fcfd00(rcx_128, &var_238)
            
            if (var_238 == 0)
                sub_1418ebff0(r14_13, rbx_20)
            
            zmm1[1].d &= not.d(var_1f8[1]:4.d)
            sub_14059bdd0(&var_1f8[1])
            rbx_20 = zmm1[1]:4.d
            
            if (rbx_20 s>= *(zmm1[0] i+ 0x18))
                break
            
            r14_13 = var_1d0
else
    int32_t rcx_24 = 0
    uint64_t var_d8 = 0
    int32_t var_d0_1 = 0
    int32_t var_ac_1 = 0x80
    int32_t r8_5 = 0
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x1c)
    int32_t var_a8_1 = 0xffffffff
    int32_t var_a4_1 = 0
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    int32_t r11_2 = arg1[0xa8].d
    performanceCount = rax_56 + 0xf8
    int32_t var_1b0 = 0
    int32_t var_1ac_1 = 1
    void* var_1a8 = &arg1[0xa5]
    int32_t var_1a0_1 = 0xffffffff
    int64_t var_19c_1 = 0
    
    if (r11_2 != 0)
        void* rax_58 = arg1[0xa7]
        void* r9_3 = &arg1[0xa5]
        
        if (rax_58 != 0)
            r9_3 = rax_58
        
        int32_t temp0_4
        int32_t temp1_1
        temp0_4:temp1_1 = sx.q(r11_2 - 1)
        int32_t rdx_11 = *r9_3
        
        if (rdx_11 != 0)
        label_14217d268:
            int32_t rax_65 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_5
            temp0_5, rflags_1 = _bit_scan_reverse(rax_65)
            int32_t var_1ac_2 = rax_65
            int32_t rax_66
            
            if (rax_65 == 0)
                rax_66 = 0x20
            else
                rax_66 = 0x1f - temp0_5
            
            var_19c_1.d = r8_5 - rax_66 + 0x1f
            
            if (r8_5 - rax_66 + 0x1f s> r11_2)
                var_19c_1.d = r11_2
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_24)
                r8_5 += 0x20
                rcx_24 += 1
                var_19c_1:4.d = r8_5
                var_1b0 = rcx_24
                
                if (rdx_12.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_3 + (rdx_12 << 2) + 4)
                var_1a0_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_14217d268
            
            var_19c_1.d = r11_2
    
    int32_t rdx_13 = arg1[0xa8].d
    zmm0_1 = var_1b0.o
    var_1f8[0] = &arg1[0xa3]
    zmm2 = var_1a0_1.o
    var_1f8 = zmm0_1
    int32_t r14_3 = 0xffffffff << (rdx_13.b & 0x1f)
    zmm0_1 = var_1f8
    int32_t r8_8 = rdx_13 s>> 5
    int32_t r9_5 = rdx_13 & 0xffffffe0
    int32_t var_220 = r14_3
    int64_t var_21c
    var_21c.d = rdx_13
    int64_t var_190_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_1b0.o = zmm0_1
    var_1a0_1.o = zmm2
    
    if (rdx_13 != r11_2)
        void* rax_68 = arg1[0xa7]
        void* r10_3 = &arg1[0xa5]
        
        if (rax_68 != 0)
            r10_3 = rax_68
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_2 - 1)
        int32_t rdx_17 = *(r10_3 + (sx.q(r8_8) << 2)) & r14_3
        
        if (rdx_17 != 0)
        label_14217d343:
            int32_t rax_75 = neg.d(rdx_17) & rdx_17
            uint64_t rflags_2
            int32_t temp0_7
            temp0_7, rflags_2 = _bit_scan_reverse(rax_75)
            int32_t rax_76
            
            if (rax_75 == 0)
                rax_76 = 0x20
            else
                rax_76 = 0x1f - temp0_7
            
            var_21c.d = r9_5 - rax_76 + 0x1f
            
            if (r9_5 - rax_76 + 0x1f s> r11_2)
                var_21c.d = r11_2
        else
            while (true)
                int64_t rcx_29 = sx.q(r8_8)
                r9_5 += 0x20
                r8_8 += 1
                
                if (rcx_29.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_17 = *(r10_3 + (rcx_29 << 2) + 4)
                var_220 = 0xffffffff
                
                if (rdx_17 != 0)
                    goto label_14217d343
            
            var_21c.d = r11_2
    
    void* var_150
    
    while (true)
        int32_t var_194
        int64_t rcx_31 = sx.q(var_194)
        int64_t* rax_78 = var_1b0.q
        
        if (rcx_31.d == (var_220.q u>> 0x20).d && var_1a0_1.q == &arg1[0xa5]
                && rax_78 == &arg1[0xa3])
            break
        
        void* rdx_18 = *(*rax_78 + rcx_31 * 0x10)
        var_150 = rdx_18
        int32_t rax_80 = *(rdx_18 + 8)
        
        if ((rax_80.b & 4) != 0)
            *(rdx_18 + 8) = rax_80 & 0xfffffffb
            sub_140812a70(&var_d8, &var_234, &var_150, nullptr)
        
        var_19c_1:4.d &= not.d(var_1a8:4.d)
        sub_14059bdd0(&var_1a8)
    
    uint64_t r14_6 = rax_56 + 0xa8
    
    if (*(r14_6 + 8) != *(r14_6 + 0x34) || var_d0_1 != var_a4_1)
        int32_t var_158_1 = 0
        int32_t var_154_1
        
        if ((*(*arg1 + 0x368))(arg1) == 0)
            int64_t rbx_8 = data_143f4d090
            int64_t rcx_36
            
            if (data_143de5480 == 0)
                rcx_36 = 0
            else
                rcx_36.b = GetCurrentThreadId() != data_143de5470
            
            var_154_1 = *(rbx_8 + (rcx_36 << 2))
        else
            var_154_1 = 0
        
        int64_t rbx_9 = data_143f4d0a8
        int64_t rcx_37
        
        if (data_143de5480 == 0)
            rcx_37 = 0
        else
            rcx_37.b = GetCurrentThreadId() != data_143de5470
        
        int32_t* r9_7 = r14_6 + 0x10
        int32_t r10_4 = r9_7[6]
        int32_t* rbx_10 = nullptr
        var_234 = *(rbx_9 + (rcx_37 << 2))
        int32_t rcx_38 = 0
        int32_t* var_148 = nullptr
        int32_t r13_3 = 0
        int32_t var_13c_1 = 0
        int32_t r8_10 = 0
        var_1b0.q = 0
        int32_t var_208_1 = 0
        var_1a8:4.d = 0
        var_230 = 0
        int32_t var_22c_1 = 1
        int32_t* var_228_1 = r9_7
        int32_t var_220_1 = 0xffffffff
        int64_t var_21c_1 = 0
        
        if (r10_4 != 0)
            int32_t* rax_92 = *(r9_7 + 0x10)
            
            if (rax_92 != 0)
                r9_7 = rax_92
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_4 - 1)
            int32_t rdx_22 = *r9_7
            
            if (rdx_22 != 0)
            label_14217d50b:
                int32_t rax_99 = neg.d(rdx_22) & rdx_22
                uint64_t rflags_3
                int32_t temp0_8
                temp0_8, rflags_3 = _bit_scan_reverse(rax_99)
                int32_t var_22c_2 = rax_99
                int32_t rax_100
                
                if (rax_99 == 0)
                    rax_100 = 0x20
                else
                    rax_100 = 0x1f - temp0_8
                
                var_21c_1.d = r8_10 - rax_100 + 0x1f
                
                if (r8_10 - rax_100 + 0x1f s> r10_4)
                    var_21c_1.d = r10_4
            else
                while (true)
                    int64_t rdx_23 = sx.q(rcx_38)
                    r8_10 += 0x20
                    rcx_38 += 1
                    var_21c_1:4.d = r8_10
                    var_230 = rcx_38
                    
                    if (rdx_23.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_22 = r9_7[rdx_23 + 1]
                    var_220_1 = 0xffffffff
                    
                    if (rdx_22 != 0)
                        goto label_14217d50b
                
                var_21c_1.d = r10_4
        
        zmm2 = var_220_1.o
        var_1f8[0] = r14_6
        uint64_t r12_1 = r14_6
        uint64_t var_160_1 = r14_6
        var_1f8 = var_230.o
        int64_t* var_188
        var_188.o = var_1f8
        uint32_t rax_103 = (zmm2[0] u>> 0x20).d
        int64_t var_170 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_180 = zmm2
        
        if (rax_103 s< r10_4)
            int32_t r15_1 = var_170:4.d
            
            while (true)
                r14_6.b = 0
                int64_t* rcx_41 = arg1[0x2a]
                int32_t var_1b4 = *(*var_188 + sx.q(r15_1) * 0xc)
                void* rax_107
                rax_107, zmm7, zmm8, zmm9 = sub_142168c50(rcx_41, &var_1b4, 0, r9_7.d)
                int64_t rbx_11 = sx.q(var_1b4)
                
                if (rax_107 != 0)
                    r14_6 = sx.q(var_208_1)
                    int32_t rcx_42 = (r14_6 + 1).d
                    var_208_1 = rcx_42
                    var_1a8.d = rcx_42
                    
                    if (rcx_42 s> var_1a8:4.d)
                        sub_1405a4cf0(&var_1b0)
                        var_208_1 = var_1a8.d
                    
                    *(var_1b0.q + (r14_6 << 2)) = rbx_11.d
                    r14_6.b = 1
                
                if (rbx_11.d u>= 2)
                    int64_t* r9_8 = arg1[0x2a]
                    int32_t* rcx_48
                    
                    if (r9_8[1].d == *(r9_8 + 0x34))
                    label_14217d64e:
                        rcx_48 = nullptr
                    else
                        void* rcx_45 = r9_8[8]
                        void* r8_12 = &r9_8[7]
                        
                        if (rcx_45 != 0)
                            r8_12 = rcx_45
                        
                        int32_t rax_110 = *(r8_12 + (((sx.q(r9_8[9].d) - 1) & rbx_11) << 2))
                        
                        if (rax_110 == 0xffffffff)
                        label_14217d64e_1:
                            rcx_48 = nullptr
                        else
                            while (true)
                                rcx_48 = sx.q(rax_110) * 0x38 + *r9_8
                                
                                if (*rcx_48 == rbx_11.d)
                                    break
                                
                                rax_110 = rcx_48[0xc]
                                
                                if (rax_110 == 0xffffffff)
                                    goto label_14217d64e_2
                            
                            if (rax_110 == 0xffffffff)
                            label_14217d64e_2:
                                rcx_48 = nullptr
                    
                    void* rax_111 = &rcx_48[2]
                    
                    if (rcx_48 == 0)
                        rax_111 = nullptr
                    
                    if (rax_111 != 0)
                        r14_6 = zx.q(r14_6.b)
                        
                        if ((*(rax_111 + 0x20) & 8) != 0)
                            r14_6 = 1
                
                sub_141f967d0(r12_1, r15_1)
                
                if (r14_6.b == 0)
                    int32_t rdx_31 = 0
                    int32_t var_1b8 = 0
                    
                    if (rbx_11.d u>= 2)
                        int64_t* r10_5 = arg1[0x2a]
                        int32_t* rcx_53
                        
                        if (r10_5[1].d == *(r10_5 + 0x34))
                        label_14217d6ed:
                            rcx_53 = nullptr
                        else
                            void* rcx_50 = r10_5[8]
                            void* r9_9 = &r10_5[7]
                            
                            if (rcx_50 != 0)
                                r9_9 = rcx_50
                            
                            int32_t rax_113 = *(r9_9 + (((sx.q(r10_5[9].d) - 1) & rbx_11) << 2))
                            
                            if (rax_113 == 0xffffffff)
                            label_14217d6ed_1:
                                rcx_53 = nullptr
                            else
                                while (true)
                                    rcx_53 = sx.q(rax_113) * 0x38 + *r10_5
                                    
                                    if (*rcx_53 == rbx_11.d)
                                        break
                                    
                                    rax_113 = rcx_53[0xc]
                                    
                                    if (rax_113 == 0xffffffff)
                                        goto label_14217d6ed_2
                                
                                if (rax_113 == 0xffffffff)
                                label_14217d6ed_2:
                                    rcx_53 = nullptr
                        
                        void* rax_114 = &rcx_53[2]
                        
                        if (rcx_53 == 0)
                            rax_114 = nullptr
                        
                        if (rax_114 != 0)
                            rdx_31 = *(rax_114 + 8)
                            var_1b8 = rdx_31
                    
                    if (var_234 s<= 0 || rdx_31 u< 2)
                    label_14217d839:
                        
                        if (rbx_11.d != 0)
                            r14_6 = sx.q(r13_3)
                            r13_3 = (r14_6 + 1).d
                            
                            if (r13_3 s> var_13c_1)
                                sub_1405a4cf0(&var_148)
                            
                            var_148[r14_6] = rbx_11.d
                    else
                        int64_t* r10_6 = arg1[0x2a]
                        int32_t* rcx_57
                        
                        if (r10_6[1].d == *(r10_6 + 0x34))
                        label_14217d76f:
                            rcx_57 = nullptr
                        else
                            void* rcx_54 = r10_6[8]
                            void* r9_11 = &r10_6[7]
                            
                            if (rcx_54 != 0)
                                r9_11 = rcx_54
                            
                            int32_t rax_117 =
                                *(r9_11 + (((sx.q(r10_6[9].d) - 1) & sx.q(rdx_31)) << 2))
                            
                            if (rax_117 == 0xffffffff)
                            label_14217d76f_1:
                                rcx_57 = nullptr
                            else
                                while (true)
                                    rcx_57 = sx.q(rax_117) * 0x38 + *r10_6
                                    
                                    if (*rcx_57 == rdx_31)
                                        break
                                    
                                    rax_117 = rcx_57[0xc]
                                    
                                    if (rax_117 == 0xffffffff)
                                        goto label_14217d76f_2
                                
                                if (rax_117 == 0xffffffff)
                                label_14217d76f_2:
                                    rcx_57 = nullptr
                        
                        void* rax_118 = &rcx_57[2]
                        
                        if (rcx_57 == 0)
                            rax_118 = nullptr
                        
                        if (rax_118 != 0)
                            if (j_sub_140d3e110(rax_118) != 0)
                                goto label_14217d839
                            
                            rdx_31 = var_1b8
                        
                        if (rdx_31 u< 2)
                            sub_141f77ab0(sub_14215b490(performanceCount, rdx_31, &var_1b8), 
                                &var_150, &var_1b4, nullptr)
                        else
                            int64_t* r10_7 = arg1[0x2a]
                            int32_t* rcx_62
                            
                            if (r10_7[1].d == *(r10_7 + 0x34))
                            label_14217d7fd:
                                rcx_62 = nullptr
                            else
                                void* rcx_59 = r10_7[8]
                                void* r9_13 = &r10_7[7]
                                
                                if (rcx_59 != 0)
                                    r9_13 = rcx_59
                                
                                int32_t rax_122 =
                                    *(r9_13 + (((sx.q(r10_7[9].d) - 1) & sx.q(rdx_31)) << 2))
                                
                                if (rax_122 == 0xffffffff)
                                label_14217d7fd_1:
                                    rcx_62 = nullptr
                                else
                                    while (true)
                                        rcx_62 = sx.q(rax_122) * 0x38 + *r10_7
                                        
                                        if (*rcx_62 == rdx_31)
                                            break
                                        
                                        rax_122 = rcx_62[0xc]
                                        
                                        if (rax_122 == 0xffffffff)
                                            goto label_14217d7fd_2
                                    
                                    if (rax_122 == 0xffffffff)
                                    label_14217d7fd_2:
                                        rcx_62 = nullptr
                            
                            void* rax_123 = &rcx_62[2]
                            
                            if (rcx_62 == 0)
                                rax_123 = nullptr
                            
                            if (rax_123 != 0 && (*(rax_123 + 0x20) & 4) != 0)
                                goto label_14217d839
                            
                            sub_141f77ab0(sub_14215b490(performanceCount, rdx_31, &var_1b8), 
                                &var_150, &var_1b4, nullptr)
                
                int32_t rax_126 = var_158_1 + 1
                var_158_1 = rax_126
                
                if (var_154_1 s> 0 && rax_126 s>= var_154_1)
                    break
                
                var_170.d &= not.d(var_180[0]:4.d)
                r9_7 = sub_14059bdd0(&var_180)
                r15_1 = var_170:4.d
                
                if (r15_1 s>= *(var_180[1] i+ 0x18))
                    break
                
                r12_1 = var_160_1
            
            r14_6 = rax_56 + 0xa8
            rbx_10 = var_1b0.q
        
        uint64_t r12_2 = sx.q(var_208_1)
        void* r15_2 = &rbx_10[r12_2]
        
        if (rbx_10 != r15_2)
            int64_t* performanceCount_1 = performanceCount
            
            do
                sub_142167340(performanceCount_1, &var_234, rbx_10)
                int64_t rax_130 = sx.q(var_234)
                void* const rax_133
                
                if (rax_130.d == 0xffffffff)
                    rax_133 = nullptr
                else
                    rax_133 = rax_130 * 0x60 + *performanceCount_1
                
                void* rdx_36 = rax_133 + 8
                
                if (rax_133 == 0)
                    rdx_36 = nullptr
                
                if (rdx_36 != 0)
                    sub_1421595f0(r14_6, rdx_36)
                    sub_142174270(performanceCount_1, rbx_10)
                
                rbx_10 = &rbx_10[1]
            while (rbx_10 != r15_2)
            
            r12_2 = zx.q(var_208_1)
        
        int32_t* r13_4
        
        if (r13_3 == 0)
            r13_4 = var_148
        else
            if (sub_142162500(r14_6) != 0)
                sub_140771f10(r14_6)
            
            int32_t rax_136 = *(r14_6 + 8) - *(r14_6 + 0x34)
            int32_t rbx_12 = rax_136 + r13_3
            
            if (rbx_12 s> rax_136)
                sub_1407c2fa0(r14_6, rbx_12)
                int32_t rax_139
                
                if (rbx_12 u< 4)
                    rax_139 = 1
                else
                    uint32_t rbx_13 = rbx_12 u>> 1
                    uint64_t rflags_4
                    int32_t temp0_10
                    temp0_10, rflags_4 = _bit_scan_reverse(rbx_13 + 8)
                    int32_t rcx_75
                    
                    if (rbx_13 == 0xfffffff8)
                        rcx_75 = 0x20
                    else
                        rcx_75 = 0x1f - temp0_10
                    
                    int32_t rcx_77 = rcx_75 << 0x1a s>> 0x1f
                    uint64_t rflags_5
                    char temp0_11
                    temp0_11, rflags_5 = _bit_scan_reverse(rbx_13 + 7)
                    
                    if (rcx_77 == 0)
                        rax_139 = 1
                    else
                        rax_139 = 1 << ((not.d(rcx_77)).b & (0x20 - (0x1f - temp0_11)))
                
                int32_t rcx_80 = *(r14_6 + 0x48)
                
                if (rcx_80 == 0 || rcx_80 s< rax_139)
                    *(r14_6 + 0x48) = rax_139
                    sub_140771f10(r14_6)
            
            r13_4 = var_148
            int32_t* rbx_15 = r13_4
            void* r14_8 = &r13_4[sx.q(r13_3)]
            
            if (r13_4 != r14_8)
                do
                    sub_141f77ab0(rax_56 + 0xa8, &var_150, rbx_15, nullptr)
                    rbx_15 = &rbx_15[1]
                while (rbx_15 != r14_8)
                
                r13_4 = var_148
        
        if (r12_2.d != 0 || var_d0_1 != var_a4_1)
            int64_t var_128
            __builtin_memset(&var_128, 0, 0x2c)
            int32_t var_fc_1 = 0x80
            int32_t var_f8_1 = 0xffffffff
            int32_t var_f4_1 = 0
            int64_t var_e8_1 = 0
            int32_t var_e0_1 = 0
            sub_140cd48b0(&var_128, &var_d8)
            
            for (int32_t* i_2 = var_1b0.q; i_2 != r15_2; i_2 = &i_2[1])
                sub_142167340(&arg1[0x98], &var_234, i_2)
                int64_t rax_142 = sx.q(var_234)
                void* const rax_145
                
                if (rax_142.d == 0xffffffff)
                    rax_145 = nullptr
                else
                    rax_145 = rax_142 * 0x60 + arg1[0x98]
                
                void* rdx_43 = rax_145 + 8
                
                if (rax_145 == 0)
                    rdx_43 = nullptr
                
                if (rdx_43 != 0)
                    sub_142159360(&var_128, rdx_43)
            
            int32_t var_100
            int32_t r8_29 = var_100
            int64_t var_118
            int64_t* var_228_2 = &var_118
            int32_t var_22c_3 = 1
            var_230 = 0
            int32_t var_220_2 = 0xffffffff
            int64_t var_21c_2 = 0
            
            if (r8_29 != 0)
                sub_14059bdd0(&var_230)
                r8_29 = var_100
            
            zmm2 = var_220_2.o
            int64_t* var_188_1 = &var_128
            double var_170_1[0x2] = zmm2
            var_21c_2.d = r8_29
            var_180 = var_230.o
            zmm1 = var_180
            zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
            var_1f8 = var_188_1.o
            var_1d8 = zmm2.q
            
            while (true)
                int64_t rcx_89 = sx.q(zmm1[1]:4.d)
                double rax_146 = var_1f8[0]
                
                if (rcx_89.d == ((0xffffffff << (r8_29.b & 0x1f)).q u>> 0x20).d
                        && zmm1[0] == &var_118 && rax_146 == &var_128)
                    break
                
                void* rbx_16 = *(*rax_146 + rcx_89 * 0x10)
                
                if (*sub_1408296b0(&arg1[0xa3], &var_150, rbx_16) != 0xffffffff)
                    var_238 = 0
                    zmm7, zmm8, zmm9 = sub_141fcfd00(rbx_16, &var_238)
                    
                    if (var_238 == 0)
                        sub_1409740e0(&arg1[0xa3], rbx_16)
                
                zmm1[1].d &= not.d(var_1f8[1]:4.d)
                sub_14059bdd0(&var_1f8[1])
            
            int32_t var_e0_2 = 0
            
            if (var_e8_1 != 0)
                sub_140a74f90(var_e8_1)
            
            sub_14100e680(&var_128)
        
        int64_t rax_151 = var_1b0.q
        
        if (rax_151 != 0)
            sub_140a74f90(rax_151)
        
        if (r13_4 != 0)
            sub_140a74f90(r13_4)
    
    int32_t var_90_2 = 0
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    sub_14100e680(&var_d8)
zmm7[0] = zmm7[0] f- arg1[0x57]

if (not(zmm7[0] <= 10.0))
    var_230 = 0
    int32_t var_22c_4 = 1
    void* var_228_3 = &arg1[0x7b]
    int32_t var_220_4 = 0xffffffff
    int64_t var_21c_3 = 0
    
    if (arg1[0x7e].d != 0)
        sub_14059bdd0(&var_230)
    
    double zmm4_2[0x2] = var_220_4.o
    void* var_160_2 = &arg1[0x79]
    var_180 = var_230.o
    int16_t var_1c0_1 = 0
    double zmm3[0x2] = var_180
    double rax_153 = zmm3[0]
    var_1f8 = (&arg1[0x79]).o
    double rcx_102 = zmm4_2[0]
    zmm4_2[0] = (_mm_unpackhi_pd(zmm4_2, zmm4_2[0])).q
    double var_170_2[0x2] = zmm4_2
    var_1d8.o = zmm4_2
    
    if ((rcx_102 u>> 0x20).d s< *(rax_153 i+ 0x18))
        int32_t i_3 = zmm3[1]:4.d
        
        do
            if (sub_140d3e110(*var_1f8[0] + ((sx.q(i_3) * 5 + 3) << 3)) == 0)
                sub_142173b90(var_1d0, i_3)
                var_1c0_1.b = 1
            
            zmm3[1].d &= not.d(var_1f8[1]:4.d)
            sub_14059bdd0(&var_1f8[1])
            i_3 = zmm3[1]:4.d
        while (i_3 s< *(zmm3[0] i+ 0x18))
        
        if (var_1c0_1.b != 0 && var_1c0_1:1.b != 0)
            sub_140d1a980(&arg1[0x79], arg1[0x7a].d - *(arg1 + 0x3fc), 1)
    
    var_230 = 0
    int32_t var_22c_5 = 1
    void* var_228_4 = &arg1[0x90]
    int32_t var_220_5 = 0xffffffff
    int64_t var_21c_4 = 0
    
    if (arg1[0x93].d != 0)
        sub_14059bdd0(&var_230)
    
    zmm4_2 = var_220_5.o
    void* var_160_3 = &arg1[0x8e]
    var_180 = var_230.o
    int16_t var_1c0_2 = 0
    zmm3 = var_180
    double rax_161 = zmm3[0]
    var_1f8 = (&arg1[0x8e]).o
    double rcx_111 = zmm4_2[0]
    zmm4_2[0] = (_mm_unpackhi_pd(zmm4_2, zmm4_2[0])).q
    var_1d8.o = zmm4_2
    
    if ((rcx_111 u>> 0x20).d s< *(rax_161 i+ 0x18))
        int32_t i_4 = zmm3[1]:4.d
        
        do
            if (sub_140d3e110(*var_1f8[0] + ((sx.q(i_4) * 5 + 3) << 3)) == 0)
                sub_142173b90(var_1d0, i_4)
                var_1c0_2.b = 1
            
            zmm3[1].d &= not.d(var_1f8[1]:4.d)
            sub_14059bdd0(&var_1f8[1])
            i_4 = zmm3[1]:4.d
        while (i_4 s< *(zmm3[0] i+ 0x18))
        
        if (var_1c0_2.b != 0 && var_1c0_2:1.b != 0)
            sub_140d1a980(&arg1[0x8e], arg1[0x8f].d - *(arg1 + 0x4a4), 1)
    
    void** rbx_19 = arg1[0x12]
    uint64_t r14_12 = sx.q(arg1[0x13].d) << 3 u>> 3
    
    if (rbx_19 u> &rbx_19[arg1[0x13]])
        r14_12 = 0
    
    if (r14_12 != 0)
        do
            void* rcx_119 = *rbx_19
            
            if (rcx_119 != 0)
                sub_14213f5e0(rcx_119)
            
            rbx_19 = &rbx_19[1]
            rdi += 1
        while (rdi != r14_12)
    
    void* rcx_120 = arg1[0x11]
    
    if (rcx_120 != 0)
        sub_14213f5e0(rcx_120)
    
    arg1[0x57] = zmm7.q

(*(*arg1 + 0x320))(arg1)

if (var_237 != 0)
    QueryPerformanceCounter(&performanceCount)
    zmm0_1 = zx.o(data_143f4d280)
    zmm1 = zx.o(0)
    zmm1[0] = float.d(performanceCount)
    zmm1[0] = zmm1[0] f* data_143d796f8
    zmm1[0] = zmm1[0] f+ zmm9.q
    zmm1[0] = zmm1[0] f- zmm8.q
    zmm0_1[0] = zmm0_1[0] + zmm1[0]
    data_143f4d280 = zmm0_1.q

int64_t result = sub_140b37f60("NetworkOutgoing")
__security_check_cookie(rax_1 ^ &var_258)
return result
