// 函数: sub_1417d10b0
// 地址: 0x1417d10b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* r12 = arg2
int32_t r15 = arg4
TEB* gsbase

if (data_143ef8904 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef8904)
    
    if (data_143ef8904 == 0xffffffff)
        int32_t rax_84 = data_143dbb200
        data_143ef88e8 = data_143dbb1f8.q
        uint32_t temp0_8[0x4] = _mm_unpacklo_ps(0x49800000, 0x49800000)
        data_143ef88f0 = rax_84
        int32_t var_1b0_2 = 0x49800000
        data_143ef88f4 = temp0_8.q
        data_143ef88fc = 0x49800000
        data_143ef8900 = 0x49800000
        _Init_thread_footer(&data_143ef8904)

uint64_t rbx = *(arg1 + 0x150)
void* rax_5 = data_143ef8810
int64_t var_108
__builtin_memset(&var_108, 0, 0x2c)
int32_t var_dc = 0x80
int32_t var_d8 = 0xffffffff
int32_t var_d4 = 0
int64_t var_c8 = 0
int32_t var_c0 = 0
int32_t r13 = *(rax_5 + 4)
int64_t rax_6 = sx.q(*(arg1 + 0x158))
double zmm6[0x2]
double var_48[0x2] = zmm6
int32_t var_1ec = r13
uint64_t var_1a0 = rbx
int64_t rsi = rbx + (rax_6 << 3)
char* var_230
int32_t var_1e8
void*** (* var_160)()
double zmm2[0x2]

if (rbx != rsi)
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int64_t rax_7 = rsi
    uint32_t zmm8[0x4]
    uint32_t var_68_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10 = 0x3f000000
    uint32_t zmm11[0x4] = 0x7fffffff
    int128_t zmm12 = 0x38d1b717
    
    do
        int64_t* rsi_1 = *rbx
        
        if (rsi_1 != 0)
            int64_t* rcx = *(arg1 + 0x160)
            int64_t rax_9 = (*(*rcx + 0x280))(rcx)
            int32_t i = 0
            int32_t i_2 = 0
            
            if (r12[1].d s> 0)
                int64_t* rax_10 = arg2
                int32_t r14_1 = 1
                int64_t* r12_1 = nullptr
                int64_t* var_1a8_1 = nullptr
                int32_t rcx_1 = arg4
                int32_t var_1f0_1 = 1
                
                do
                    if ((rcx_1 & r14_1) != 0)
                        zmm2 = *(rsi_1 + 0x2c4)
                        zmm9 = rsi_1[0x57].d
                        uint32_t zmm3[0x4] = *(rsi_1 + 0x2cc)
                        zmm2[0].d = zmm2[0].d f- zmm9.d
                        zmm8 = rsi_1[0x59].d
                        zmm7 = rsi_1[0x58].d
                        float zmm4_1 = *(rsi_1 + 0x2bc)
                        zmm3[0] = zmm3[0] f- zmm7.d
                        int64_t rax_11 = *rax_10
                        zmm8[0] = zmm8[0] f- zmm4_1
                        zmm2[0].d = zmm2[0].d f* zmm10.d
                        void* rcx_2 = *(r12_1 + rax_11)
                        zmm3[0] = zmm3[0] f* zmm10.d
                        uint32_t temp0_1[0x4] = _mm_and_ps(zmm2, zmm11)
                        zmm8[0] = zmm8[0] f* zmm10.d
                        
                        if (temp0_1[0] f> zmm12.d)
                            rax_11.b = 0
                        else if (_mm_and_ps(zmm8, zmm11)[0] f> zmm12.d)
                            rax_11.b = 0
                        else if (_mm_and_ps(zmm3, zmm11)[0] f> zmm12.d)
                            rax_11.b = 0
                        else
                            rax_11.b = 1
                        
                        char rax_12
                        
                        if (rax_11.b == 0)
                            zmm3[0] = zmm3[0] f+ zmm7.d
                            int32_t var_170 = zmm2[0].d
                            zmm4_1 = zmm4_1 f+ zmm8[0]
                            uint32_t var_16c_1 = zmm8[0]
                            zmm2[0].d = zmm2[0].d f+ zmm9.d
                            uint32_t var_168_1 = zmm3[0]
                            zmm3[0] = zmm3[0] f* zmm10.d
                            zmm2[0].d = zmm2[0].d f* zmm10.d
                            float var_1b4_1 = zmm4_1 f* zmm10.d
                            uint32_t var_1b0_1 = zmm3[0]
                            int32_t var_1b8 = zmm2[0].d
                            rax_12, zmm10, zmm11, zmm12 =
                                sub_141f8d780(rcx_2 + 0xbf0, &var_1b8, &var_170)
                        
                        if (rax_11.b != 0 || rax_12 != 0)
                            rbx.b = 1
                        else
                            rbx.b = 0
                        
                        if (r13 == 1)
                            zmm6 = *(rsi_1 + 0x2b8)
                            int128_t var_188
                            var_188:8.d = rsi_1[0x5a].d
                            zmm7 = zx.o(rsi_1[0x59])
                            var_188:0xc.b = rbx.b
                            sub_14093d370(&var_108, &var_1e8)
                            int64_t rax_26 = *rsi_1
                            var_230 = nullptr
                            int64_t* var_1e0
                            *var_1e0 = rax_26
                            int128_t zmm0_2
                            zmm0_2.q = zmm7.q
                            int32_t rax_28 = var_1e8
                            *(var_1e0 + 8) = zmm6
                            *(var_1e0 + 0x18) = zmm0_2
                            var_1e0[5].d = 0xffffffff
                            var_188 = zmm0_2
                            void var_14c
                            sub_1417d0670(&var_108, &var_14c, 
                                (rax_26 u>> 0x20).d * 0x17 + rax_26.d, var_1e0, rax_28, var_230)
                        label_1417d14d8:
                            
                            if (rbx.b != 0)
                                int32_t rax_29 = sub_14081f8e0(arg5, 1)
                                char var_204 = 0
                                int64_t* r12_4 = zx.q(rax_29 s% 0x66) * 0xa0
                                    + *(*arg5 + (sx.q(rax_29 s/ 0x66) << 3))
                                int64_t* r13_1 = r12_4
                                int64_t* rax_31 = r12_4[0xd]
                                
                                if (rax_31 != 0)
                                    r13_1 = rax_31
                                
                                r13_1[2] = &rsi_1[0x11]
                                *(r12_4 + 0x9c) ^=
                                    (zx.d(*(arg1 + 0x16d)) << 6 ^ *(r12_4 + 0x9c)) & 0x40
                                int32_t rax_37 = *(r12_4 + 0x9c)
                                int32_t rcx_25 =
                                    ((zx.d(*(arg1 + 0x16c)) << 5 ^ rax_37) & 0x20) ^ rax_37
                                *(r12_4 + 0x9c) = rcx_25
                                *(r12_4 + 0x9c) =
                                    ((zx.d(*(arg1 + 0x16c)) << 4 ^ rcx_25) & 0x10) ^ rcx_25
                                r12_4[0xf] = &rsi_1[0x15]
                                r12_4[0x10] = rax_9
                                char* var_158_1 = &var_204
                                var_160 = j_sub_140597fc0
                                void* rax_45 = sub_140a756e0(&var_160, &data_143958018)
                                rbx = (*(rax_45 + 0x10) + 0xf) & 0xfffffffffffffff0
                                int64_t rax_46 = rbx + 0x30
                                
                                if (rax_46 u> *(rax_45 + 0x18))
                                    sub_140b0e3d0(rax_45 + 0x10, 0x40)
                                    rbx = (*(rax_45 + 0x10) + 0xf) & 0xfffffffffffffff0
                                    rax_46 = rbx + 0x30
                                
                                *(rax_45 + 0x10) = rax_46
                                
                                if (rbx != 0)
                                    *(rbx + 0x10) = 0
                                    *(rbx + 0x18) = 0
                                    *rbx = &data_142e0f070
                                    *(rbx + 0x10) = 0xffffffff
                                    *(rbx + 0x14) = 4
                                    *(rbx + 8) = &data_142d99570
                                    *(rbx + 0x18) = 2
                                    *(rbx + 0x20) = 0
                                    *(rbx + 0x28) = 0
                                
                                int64_t r15_2 = sx.q(arg5[0x18].d)
                                int32_t rax_47 = (r15_2 + 1).d
                                arg5[0x18].d = rax_47
                                
                                if (rax_47 s> *(arg5 + 0xc4))
                                    sub_14083a310(&arg5[0x17], r15_2.d)
                                
                                char var_218_1 = 0
                                *(arg5[0x17] + (r15_2 << 3)) = rbx
                                var_230.b = 1
                                int32_t var_238
                                var_238.q = &data_143ef88e8
                                sub_1422f21f0(rbx, arg1 + 0x80, arg1 + 0x80, &data_143ef88e8, 
                                    var_238, var_230.b, 0, *(arg1 + 0x32) - 1 u<= 1, var_218_1)
                                i = i_2
                                r13_1[1] = rbx + 8
                                r13_1[8].d = 0
                                int32_t temp7_1
                                int32_t temp8_1
                                temp7_1:temp8_1 = muls.dp.d(0x55555556, rsi_1[0x14].d)
                                r13_1[0xa].d = 0
                                *(r13_1 + 0x44) = temp7_1 + (temp7_1 u>> 0x1f)
                                *(r13_1 + 0x54) = rsi_1[4].d - 1
                                *(r12_4 + 0x9c) =
                                    (zx.d(*(arg1 + 0x35)) & 1) | (*(r12_4 + 0x9c) & 0xfffe007e)
                                zmm10, zmm11, zmm12 = sub_1422dd2a0(arg5, i, r12_4)
                                r14_1 = var_1f0_1
                                r12_1 = var_1a8_1
                                r13 = var_1ec
                        else
                            if (r13 != 2)
                                goto label_1417d14d8
                            
                            int64_t r10_1 = *rsi_1
                            
                            if (*(arg1 + 0x178) != *(arg1 + 0x1a4))
                                void* r9 = arg1 + 0x1a8
                                void* r8_3 = *(r9 + 8)
                                
                                if (r8_3 != 0)
                                    r9 = r8_3
                                
                                int32_t rax_18 = *(r9 + ((sx.q((r10_1 u>> 0x20).d * 0x17 + r10_1.d)
                                    & (sx.q(*(arg1 + 0x1b8)) - 1)) << 2))
                                
                                if (rax_18 != 0xffffffff)
                                    int64_t r8_4 = *(arg1 + 0x170)
                                    int64_t rdx_3
                                    
                                    while (true)
                                        rdx_3 = sx.q(rax_18)
                                        int64_t rcx_9 = rdx_3 * 6
                                        
                                        if (*(r8_4 + (rcx_9 << 3)) == r10_1)
                                            break
                                        
                                        rax_18 = *(r8_4 + (rcx_9 << 3) + 0x28)
                                        
                                        if (rax_18 == 0xffffffff)
                                            goto label_1417d1725
                                    
                                    if (rax_18 != 0xffffffff)
                                        int64_t rax_20 = rdx_3 * 0x30
                                        
                                        if (rax_20 != neg.q(r8_4) && rax_20 + r8_4 != -8)
                                            int32_t var_140
                                            sub_14093d370(&var_108, &var_140)
                                            int64_t rax_22 = *rsi_1
                                            var_230 = nullptr
                                            int64_t* var_138
                                            *var_138 = rax_22
                                            int32_t rax_24 = var_140
                                            *(var_138 + 8) = *(rax_20 + r8_4 + 8)
                                            *(var_138 + 0x18) = *(rax_20 + r8_4 + 0x18)
                                            var_138[5].d = 0xffffffff
                                            void var_150
                                            sub_1417d0670(&var_108, &var_150, 
                                                (rax_22 u>> 0x20).d * 0x17 + rax_22.d, var_138, 
                                                rax_24, var_230)
                                            rbx = zx.q(*(rax_20 + r8_4 + 0x24))
                                            goto label_1417d14d8
                        
                    label_1417d1725:
                        rcx_1 = arg4
                        rax_10 = arg2
                    
                    i += 1
                    r14_1 = rol.d(r14_1, 1)
                    r12_1 = &r12_1[1]
                    i_2 = i
                    var_1f0_1 = r14_1
                    var_1a8_1 = r12_1
                while (i s< rax_10[1].d)
                
                r12 = arg2
                rbx = var_1a0
            
            rax_7 = rsi
        
        rbx += 8
        var_1a0 = rbx
    while (rbx != rax_7)
    
    r15 = arg4

void* r14_4 = arg1 + 0x170
sub_1417cead0(r14_4, &var_108)

if (r13 != 0)
    int32_t i_1 = 0
    int32_t var_200_1 = 0xff7f7f7f
    int32_t i_3 = 0
    
    if (r12[1].d s> 0)
        int64_t* r12_5 = nullptr
        int64_t* rcx_35 = arg2
        zmm6 = zx.o(0)
        
        do
            if (test_bit(r15, i_1))
                int32_t r10_2 = *(r14_4 + 0x28)
                void* rsi_2 = r14_4 + 0x10
                int32_t rcx_36 = 0
                int32_t var_1e4_1 = 1
                int32_t r8_13 = 0
                var_1e8 = 0
                void* var_1e0_1 = rsi_2
                int32_t var_1d8_1 = 0xffffffff
                int64_t var_1d4_1 = 0
                
                if (r10_2 != 0)
                    void* rax_57 = *(rsi_2 + 0x10)
                    void* r9_3 = rsi_2
                    
                    if (rax_57 != 0)
                        r9_3 = rax_57
                    
                    int32_t temp0_4
                    int32_t temp1_1
                    temp0_4:temp1_1 = sx.q(r10_2 - 1)
                    int32_t rdx_20 = *r9_3
                    
                    if (rdx_20 != 0)
                    label_1417d1879:
                        int32_t rax_64 = neg.d(rdx_20) & rdx_20
                        uint64_t rflags_1
                        int32_t temp0_5
                        temp0_5, rflags_1 = _bit_scan_reverse(rax_64)
                        int32_t var_1e4_2 = rax_64
                        int32_t rax_65
                        
                        if (rax_64 == 0)
                            rax_65 = 0x20
                        else
                            rax_65 = 0x1f - temp0_5
                        
                        var_1d4_1.d = r8_13 - rax_65 + 0x1f
                        
                        if (r8_13 - rax_65 + 0x1f s> r10_2)
                            var_1d4_1.d = r10_2
                    else
                        while (true)
                            int64_t rdx_21 = sx.q(rcx_36)
                            r8_13 += 0x20
                            rcx_36 += 1
                            var_1d4_1:4.d = r8_13
                            var_1e8 = rcx_36
                            
                            if (rdx_21.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                                break
                            
                            rdx_20 = *(r9_3 + (rdx_21 << 2) + 4)
                            var_1d8_1 = 0xffffffff
                            
                            if (rdx_20 != 0)
                                goto label_1417d1879
                        
                        var_1d4_1.d = r10_2
                
                int32_t rdx_22 = *(r14_4 + 0x28)
                zmm2 = var_1d8_1.o
                var_1d4_1.d = rdx_22
                double var_118_1[0x2] = zmm2
                int128_t var_128_1 = var_1e8.o
                int32_t r15_3 = 0xffffffff << (rdx_22 & 0x1f).b
                int32_t r8_16 = rdx_22 s>> 5
                int32_t r9_5 = rdx_22 & 0xffffffe0
                int64_t var_178_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                int32_t var_1d8_2 = r15_3
                uint32_t zmm1[0x4] = var_128_1
                int128_t var_198 = r14_4.o
                
                if (rdx_22 != r10_2)
                    void* rax_69 = *(rsi_2 + 0x10)
                    void* r11_1 = rsi_2
                    
                    if (rax_69 != 0)
                        r11_1 = rax_69
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_2 - 1)
                    int32_t rdx_26 = *(r11_1 + (sx.q(r8_16) << 2)) & r15_3
                    
                    if (rdx_26 != 0)
                    label_1417d1956:
                        int32_t rax_75 = neg.d(rdx_26) & rdx_26
                        uint64_t rflags_2
                        int32_t temp0_7
                        temp0_7, rflags_2 = _bit_scan_reverse(rax_75)
                        int32_t rax_76
                        
                        if (rax_75 == 0)
                            rax_76 = 0x20
                        else
                            rax_76 = 0x1f - temp0_7
                        
                        var_1d4_1.d = r9_5 - rax_76 + 0x1f
                        
                        if (r9_5 - rax_76 + 0x1f s> r10_2)
                            var_1d4_1.d = r10_2
                    else
                        while (true)
                            int64_t rcx_40 = sx.q(r8_16)
                            r9_5 += 0x20
                            r8_16 += 1
                            
                            if (rcx_40.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_26 = *(r11_1 + (rcx_40 << 2) + 4)
                            var_1d8_2 = 0xffffffff
                            
                            if (rdx_26 != 0)
                                goto label_1417d1956
                        
                        var_1d4_1.d = r10_2
                    
                    r14_4 = arg1 + 0x170
                
                while (true)
                    int64_t rcx_42 = sx.q(zmm1[3])
                    int32_t rax_68
                    
                    if (rcx_42.d != (var_1d8_2.q u>> 0x20).d || zmm1[0].q != rsi_2)
                        rax_68.b = 0
                    else
                        rax_68.b = 1
                    
                    int64_t rdx_27 = var_198.q
                    
                    if (rax_68.b == 0 || rdx_27 != r14_4)
                        rax_68.b = 1
                    else
                        rax_68.b = 0
                    
                    if (rax_68.b == 0)
                        break
                    
                    int32_t rax_77 = -0x808081
                    void* rcx_45 = rcx_42 * 0x30 + *rdx_27
                    
                    if (*(rcx_45 + 0x24) != 0)
                        rax_77 = data_14399f63c
                    
                    int64_t** rcx_47 = &arg5[0xa]
                    var_1ec = rax_77
                    int64_t** rax_78 = rcx_47[2]
                    
                    if (rax_78 != 0)
                        rcx_47 = rax_78
                    
                    int64_t* r15_4 = *(rcx_47 + r12_5)
                    sub_140acc920(&var_160, &var_1ec)
                    uint8_t r9_7 = *(arg1 + 0x36)
                    
                    if ((r9_7 & 4) == 0)
                    label_1417d1a45:
                        r9_7 u>>= 4
                    else
                        int64_t* r10_3 = *(arg1 + 0x70)
                        int64_t* rcx_50 = r10_3
                        void* rdx_29 = &r10_3[sx.q(*(arg1 + 0x78))]
                        
                        if (r10_3 == rdx_29)
                        label_1417d1a45_1:
                            r9_7 u>>= 4
                        else
                            while (*rcx_50 != *(*(r12_5 + *arg2) + 0x240))
                                rcx_50 = &rcx_50[1]
                                
                                if (rcx_50 == rdx_29)
                                    goto label_1417d1a45_2
                            
                            if (((rcx_50 - r10_3) s>> 3).d == 0xffffffff)
                            label_1417d1a45_2:
                                r9_7 u>>= 4
                            else
                                r9_7 = *(arg1 + 0x37)
                    
                    var_230.d = zmm6[0].d
                    zmm6 = sub_14229ae30(r15_4, rcx_45 + 8, &var_160, r9_7 & 7, zmm6[0].d, 
                        var_230.d, 0)
                    zmm1[2] &= not.d(var_198:0xc.d)
                    sub_14059bdd0(&var_198:8)
                    r14_4 = arg1 + 0x170
                
                i_1 = i_3
                rcx_35 = arg2
                r15 = arg4
            
            i_1 += 1
            r12_5 = &r12_5[1]
            i_3 = i_1
        while (i_1 s< rcx_35[1].d)

int32_t var_c0_1 = 0

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t var_100
var_100.d = 0
int32_t var_d8_1 = 0xffffffff
int32_t var_d4_1 = 0
int64_t var_f8
void* result = sub_14059a8e0(&var_f8, 0)
int64_t var_e8

if (var_e8 != 0)
    result = sub_140a74f90(var_e8)

int64_t rcx_59 = var_108

if (rcx_59 != 0)
    result = sub_140a74f90(rcx_59)

__security_check_cookie(rax_1 ^ &var_258)
return result
