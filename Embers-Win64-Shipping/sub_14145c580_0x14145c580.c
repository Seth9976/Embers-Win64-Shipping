// 函数: sub_14145c580
// 地址: 0x14145c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm12
uint128_t var_a8 = zmm12
void var_948
int64_t rax_1 = __security_cookie ^ &var_948
void* const r13 = arg1
void* const var_8f8 = arg1
uint64_t var_8f0 = arg2
sub_1419669f0(arg2)
TEB* gsbase
void* rax_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void* var_8e8 = rax_3

if (data_143ed77d0 s> *(0x14 + rax_3))
    _Init_thread_header(&data_143ed77d0)
    
    if (data_143ed77d0 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143ed77c8 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.DoLazyStaticMeshUpdate", r8_1)
        _Init_thread_footer(&data_143ed77d0)

int64_t* rcx_3 = data_143ed77c8
float zmm7[0x4]
float zmm8[0x4]
int128_t zmm9
float zmm10[0x4]
float zmm11[0x4]
uint128_t zmm13
uint128_t zmm14
uint128_t zmm15

if ((*(*rcx_3 + 0x90))(rcx_3) != 0)
    void* rdx = *(r13 + 8)
    int32_t r8_2 = data_143ed77d4
    
    if (r8_2 s>= *(rdx + 0xdc0))
        int32_t rax_10 = data_143ed77d8 + 1
        data_143ed77d4 = 0
        data_143ed77d8 = rax_10
        
        if (rax_10 u>= 0x12)
            data_143ed77d8 = 0
            rax_10 = 0
        
        sub_141461f40(((sx.q(rax_10) + 0x24) << 6) + rdx)
        r8_2 = data_143ed77d4
    
    void* rcx_8 = nullptr
    int32_t rbx_1 = 0
    int32_t rdx_1 = 0xa
    void* var_798_1 = nullptr
    int32_t var_790_1 = 0
    int32_t rdi_1 = 0
    int32_t var_78c_1 = 0xa
    void var_7e8
    
    while (true)
        void* rax_11 = *(r13 + 8)
        
        if (r8_2 s>= *(rax_11 + 0xdc0))
            break
        
        int64_t rsi_1 = *(rax_11 + 0xdb8)
        int64_t r14_1 = sx.q(r8_2)
        
        if (rbx_1 + 1 s> rdx_1)
            sub_141460aa0(&var_7e8, rbx_1)
            rcx_8 = var_798_1
            r8_2 = data_143ed77d4
        
        int64_t rax_13 = *(rsi_1 + (r14_1 << 3))
        void* rdx_3 = &var_7e8
        
        if (rcx_8 != 0)
            rdx_3 = rcx_8
        
        r8_2 += 1
        rdi_1 += 1
        data_143ed77d4 = r8_2
        *(rdx_3 + (sx.q(rbx_1) << 3)) = rax_13
        rbx_1 += 1
        rcx_8 = var_798_1
        
        if (rdi_1 s>= 0xa)
            break
        
        rdx_1 = var_78c_1
    
    void*** (* rdx_4)() = *(r13 + 8)
    void* rax_14 = &var_7e8
    int32_t var_830_1 = rbx_1
    
    if (rcx_8 != 0)
        rax_14 = rcx_8
    
    void* var_838 = rax_14
    zmm7, zmm8, zmm9, zmm10, zmm11, zmm13, zmm14, zmm15 = sub_1413ae170(arg2, rdx_4, &var_838, 0)
    
    if (var_798_1 != 0)
        sub_140a74f90(var_798_1)

uint128_t zmm6 = sub_1414289c0(arg2, *(r13 + 8), 0)
char rax_16
int64_t r8_4
rax_16, r8_4 = sub_141191440((*U"1111")[sx.q(*(*(r13 + 8) + 8))])
int64_t var_918

if (rax_16 != 0 && *(r13 + 0xa8) s> 0)
    int64_t* rcx_17 = *(**(r13 + 0xa0) + 0x20)
    void* rax_19 = (*(*rcx_17 + 0x240))(rcx_17)
    int64_t rdi_2 = *(r13 + 0xa0)
    uint32_t rsi_2 = zx.d(*(rax_19 + 0x11a))
    int64_t* rax_21 = std::_Get_future_error_what((*U"1111")[sx.q(*(r13 + 0x3b0))])
    int64_t* rcx_19 = *(r13 + 8)
    var_918 = 0
    r8_4, zmm6, zmm7, zmm8 =
        sub_14119b6c0(arg2, rsi_2, (*(*rcx_19 + 0x260))(rcx_19), rdi_2 + 0x51b0, rax_21, 1, var_918)

int64_t* rcx_21 = *(*(r13 + 8) + 0x18)

if (rcx_21 != 0 && *(r13 + 0xa8) s> 0)
    void* rax_24 = *(r13 + 0xa0)
    
    if (*(rax_24 + 0xd75) != 0 || *(rax_24 + 0xd72) != 0 || *(rax_24 + 0xd74) != 0)
        r8_4.b = 0
    else
        r8_4 = 1
    
    (*(*rcx_21 + 0x40))(rcx_21, arg2, r8_4)

int32_t result = *(r13 + 0xa8)
zmm12 = 0x3f800000
int32_t var_908 = 0
int64_t* var_928
uint64_t var_900

if (result s> 0)
    uint128_t var_48_1 = zmm6
    uint64_t r8_7 = 0
    zmm6 = 0x80000000
    float var_58_1[0x4] = zmm7
    float var_68_1[0x4] = zmm8
    int128_t var_78_1 = zmm9
    zmm9 = 0xc0000000
    float var_88_1[0x4] = zmm10
    zmm10 = zx.o(0)
    float var_98_1[0x4] = zmm11
    zmm11 = 0x3f000000
    uint128_t var_b8_1 = zmm13
    zmm13 = 0x3eaaaaab
    uint128_t var_c8_1 = zmm14
    zmm14 = 0x3dcccccd
    uint128_t var_d8_1 = zmm15
    zmm15 = -0x8000000000000000
    var_900 = 0
    int32_t rdx_28
    
    do
        int64_t* rsi_4 = r8_7 * 0x5240 + *(r13 + 0xa0)
        int64_t* r14_2 = rsi_4[0x2b5]
        
        if (r14_2 != 0)
            *(r14_2 + 0x214) += 1
        
        char rax_26
        
        if (data_143de5438 == 0)
            rax_26 = sub_14141d2d0(r13, *(r13 + 0x3b0))
        
        if (data_143de5438 != 0 || rax_26 == 0)
            *(rsi_4 + 0x497c) |= 0x30
        
        uint128_t zmm0_1
        uint128_t zmm1_1
        uint128_t zmm2_1
        
        if (data_143ec5004 == 0 || *(data_143ec4cc8 + 8) == 0)
            zmm2_1 = _mm_cvtepi32_ps(zx.o((rsi_4[0x2b4].d - rsi_4[0x2b3].d)
                * (*(rsi_4 + 0x15a4) - *(rsi_4 + 0x159c))))
        else
            zmm0_1.d = float.s(zx.q(data_143ec5000))
            int32_t rax_31 = *(rsi_4 + 0x15a4) - *(rsi_4 + 0x159c)
            zmm1_1.d = zmm12.d f/ zmm0_1.d
            zmm2_1.d = _mm_cvtepi32_ps(zx.o(rsi_4[0x2b4].d - rsi_4[0x2b3].d)).d f* zmm1_1.d
            zmm2_1.d = zmm2_1.d f* _mm_cvtepi32_ps(zx.o(rax_31)).d
            zmm2_1.d = zmm2_1.d f* zmm1_1.d
        
        if (zmm2_1.d f<= zmm10[0])
            zmm0_1 = zmm10
        else
            zmm0_1.d = zmm12.d f/ zmm2_1.d
        
        rsi_4[0xa12].d = zmm0_1.d
        int128_t* rdi_3 = &rsi_4[0x50]
        zmm1_1 = rdi_3[1]
        rdi_3[4] = *rdi_3
        zmm0_1 = rdi_3[2]
        rdi_3[5] = zmm1_1
        zmm1_1 = rdi_3[3]
        rdi_3[6] = zmm0_1
        rdi_3[7] = zmm1_1
        
        if (r14_2 != 0)
            int32_t rcx_28
            rcx_28.b = *(r13 + 0x60) != 0
            *(rsi_4 + 0x497c) = rcx_28 | (*(rsi_4 + 0x497c) & 0xfffffffe)
            int32_t rax_36 = *(r14_2 + 0x4b4)
            
            if (*(r13 + 0x60) == 0)
                rax_36 += 1
                *(r14_2 + 0x4b4) = rax_36
            
            if (rax_36 s>= 4)
                *(r14_2 + 0x4b4) = 0
            
            if ((*(rsi_4 + 0x497c) & 1) == 0)
                r14_2[0x99].d += 1
            
            if (*(rsi_4 + 0xdc4) != 0)
                r14_2[0x99].d = rsi_4[0x1b8].d
        
        int32_t r15_1 = *(rsi_4 + 0x1524)
        int32_t r12_1 = *(data_143ed5c80 + 4)
        uint128_t zmm4_1
        
        if (rsi_4[0x2a4].d == 2 && r14_2 != 0 && (r12_1 s> 0 || r15_1 == 1) && rsi_4[0x17d].b != 0)
            int32_t rbx_4 = rsi_4[0x2b4].d - rsi_4[0x2b3].d
            int32_t var_828[0x4]
            int32_t* rax_39 = sub_14141fde0(rsi_4, &var_828)
            void* rcx_31 = *(r13 + 8)
            zmm6 = _mm_cvtepi32_ps(zx.o(rbx_4))
            bool cond:4_1 = *(rcx_31 + 8) s>= 3
            int32_t rax_40 = r12_1
            zmm6.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(*rax_39)).d
            int32_t r13_1
            uint128_t zmm0_2
            uint128_t zmm1_2
            
            if (cond:4_1)
                if (r15_1 != 1)
                    if (r12_1 != 5)
                        goto label_14145cbee
                    
                    rax_40 = r12_1 - 1
                    goto label_14145cb3c
                
                zmm0_2.d = zmm6.d f* zmm6.d
                zmm1_2.d = zmm12.d f/ zmm0_2.d
                zmm0_2.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f* _mm_max_ss(zmm1_2.d, zmm12.d).d
                rax_40 = int.d(zmm0_2.d)
            label_14145cbee:
                
                if (rax_40 s>= 1)
                    goto label_14145cb3c
                
                r13_1 = 1
            else
                rax_40 = 2
            label_14145cb3c:
                r13_1 = 0xff
                
                if (rax_40 s< 0xff)
                    r13_1 = rax_40
            
            r15_1 = sx.d(*(r14_2 + 0x4c2)) + 1
            
            if (r15_1 s>= r13_1 || *(rsi_4 + 0xd64) != 0)
                r15_1 = 0
            
            if ((*(rsi_4 + 0x497c) & 1) == 0)
                void* const rcx_32 = var_8f8
                *(r14_2 + 0x4c4) += 1
                *(r14_2 + 0x4c2) = r15_1.b
                rcx_31 = *(rcx_32 + 8)
            
            if (*(rcx_31 + 8) s< 3)
                int64_t rax_41 = sx.q(r15_1)
                int32_t var_8e0 = 0xbf000000
                int32_t var_8dc_1 = 0
                int32_t var_8d8 = 0
                zmm7 = (&var_8e0)[rax_41]
                int32_t var_8d4_1 = 0x3f000000
                zmm8 = (&var_8d8)[rax_41]
            else if (*(rsi_4 + 0x1524) == 1)
                int32_t i_5 = r15_1 + 1
                zmm7 = zmm10
                int32_t i = i_5
                zmm1_2 = zmm11
                
                if (i_5 s> 0)
                    do
                        int32_t rcx_34 = i & 0x80000001
                        
                        if (rcx_34 s< 0)
                            rcx_34 = ((rcx_34 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(i)
                        i = (temp3_1 - temp2_1) s>> 1
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rcx_34)).d f* zmm1_2.d
                        zmm1_2.d = zmm1_2.d f* zmm11[0]
                        zmm7[0] = zmm7[0] f+ zmm0_2.d
                    while (i s> 0)
                
                zmm7[0] = zmm7[0] - zmm11[0]
                zmm8 = zmm10
                zmm1_2 = zmm13
                
                if (i_5 s> 0)
                    uint64_t rdx_12
                    
                    do
                        rdx_12 = zx.q(i_5 s/ 3)
                        zmm0_2 = zx.o(i_5 - (rdx_12 * 3).d)
                        i_5 = rdx_12.d
                        zmm0_2.d = _mm_cvtepi32_ps(zmm0_2).d f* zmm1_2.d
                        zmm1_2.d = zmm1_2.d f* zmm13.d
                        zmm8[0] = zmm8[0] f+ zmm0_2.d
                    while (rdx_12.d s> 0)
                
                void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                zmm8[0] = zmm8[0] - zmm11[0]
                
                if (data_143cda914
                        s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0_2.d = logf(zmm6.d).d f* data_143cda910
                zmm1_2.d =
                    (*(data_143ed5cf8 + 4)).d f- _mm_max_ss((zmm0_2 ^ data_142d3f780).d, zmm10[0]).d
                rsi_4[0x167].d = zmm1_2.d
                rsi_4[0x167].d = __maxss_xmmss_memss(zmm1_2.d, *(data_143ed5ce0 + 4)).d
            else if (r12_1 == 2)
                int64_t rax_51 = sx.q(r15_1)
                int32_t var_8d0 = 0xbe800000
                int32_t var_8cc_1 = 0x3e800000
                int32_t var_8c8 = 0xbe800000
                zmm7 = (&var_8d0)[rax_51]
                int32_t var_8c4_1 = 0x3e800000
                zmm8 = (&var_8c8)[rax_51]
            else if (r12_1 == 3)
                int64_t rax_52 = sx.q(r15_1)
                int32_t var_148 = 0xbf2aaaab
                int64_t var_144_1 = 0x3f2aaaab
                int32_t var_138 = 0xbf2aaaab
                zmm7 = (&var_148)[rax_52]
                int32_t var_134_1 = 0
                int32_t var_130_1 = 0x3f2aaaab
                zmm8 = (&var_138)[rax_52]
            else if (r12_1 == 4)
                int64_t rax_53 = sx.q(r15_1)
                int128_t var_128
                __builtin_memcpy(&var_128, 
                    "\x00\x00\x00\xbe\x00\x00\xc0\x3e\x00\x00\x00\x3e\x00\x00\xc0\xbe\x00\x00\xc0\xbe\x"
                "00\x00\x00\xbe\x00\x00\xc0\x3e\x00\x00\x00\x3e", 
                    0x20)
                zmm7 = *(&var_128 + (rax_53 << 2))
                int128_t var_118
                zmm8 = *(&var_118 + (rax_53 << 2))
            else if (r12_1 != 5)
                uint128_t zmm0_3 = sub_1414585f0(r15_1 + 1, 2)
                float zmm0_4[0x4] = sub_1414585f0(r15_1 + 1, 3)
                zmm8 = zmm0_4
                
                if (data_143ed77e8 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    int64_t r8_9
                    r8_9, zmm0_4 = _Init_thread_header(&data_143ed77e8)
                    
                    if (data_143ed77e8 == 0xffffffff)
                        int64_t* rcx_42 = data_143db18d0
                        
                        if (rcx_42 == 0)
                            sub_140a53c40()
                            rcx_42 = data_143db18d0
                        
                        r8_9.b = 1
                        data_143ed77e0 = (*(*rcx_42 + 0xb0))(rcx_42, r.TemporalAAFilterSize", r8_9)
                        zmm0_4 = _Init_thread_footer(&data_143ed77e8)
                
                int64_t* rcx_43 = data_143ed77e0
                (*(*rcx_43 + 0x98))(rcx_43)
                zmm0_4[0] = zmm0_4[0] * 0.469999999f
                zmm11[0] = zmm11[0] / zmm0_4[0]
                zmm11[0] = zmm11[0] * zmm11[0]
                zmm11[0] = zmm11[0] * -0.5f
                float zmm0_6[0x4] = logf((zmm12.d f- zmm0_3.d) * expf(zmm11[0]) f+ zmm0_3.d)
                zmm8[0] = zmm8[0] * 6.28318548f
                zmm0_6[0] = zmm0_6[0] f* zmm9.d
                zmm6 = _mm_sqrt_ss(0, zmm0_6[0])
                zmm0_6 = zx.o(0)
                zmm0_6[0] = zmm8[0]
                zmm6.d = zmm6.d f* zmm0_4[0]
                zmm0_2, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    __libm_sse2_sincosf_(zmm0_6)
                zmm8 = zmm0_2
                zmm7 = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
                zmm7[0] = zmm7[0] f* zmm6.d
                zmm8[0] = zmm8[0] f* zmm6.d
            else
                int64_t rax_54 = sx.q(r15_1)
                int128_t var_108
                __builtin_memcpy(&var_108, 
                    "\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\xbf\x00\x00\x00\xbf\x"
                "00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00", 
                    0x20)
                zmm7 = *(&var_108 + (rax_54 << 2))
                int128_t var_f8
                zmm8 = *(&var_f8 + (rax_54 << 2))
            
            *(rsi_4 + 0x4974) = zmm7[0]
            zmm7[0] = zmm7[0] + zmm7[0]
            rsi_4[0x92f].d = zmm8[0]
            *(rsi_4 + 0x496c) = r13_1
            rsi_4[0x92e].d = r15_1
            int32_t rax_61 = *(rsi_4 + 0x15a4) - *(rsi_4 + 0x159c)
            int32_t rcx_45 = rsi_4[0x2b4].d - rsi_4[0x2b3].d
            zmm8[0] = zmm8[0] f* zmm9.d
            zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_61))
            zmm8[0] = zmm8[0] f/ zmm0_2.d
            *(rdi_3 + 0x3a4) = zmm8[0]
            zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_45))
            zmm7[0] = zmm7[0] f/ zmm0_2.d
            rdi_3[0x3a].d = zmm7[0]
            zmm7[0] = zmm7[0] f+ rdi_3[2].d
            rdi_3[2].d = zmm7[0]
            int128_t zmm3_2
            zmm3_2.d = (*(rdi_3 + 0x3a4)).d f+ *(rdi_3 + 0x24)
            *(rdi_3 + 0x24) = zmm3_2.d
            uint32_t var_8a8[0x4]
            uint128_t var_898
            uint128_t var_888
            uint128_t var_878
            
            if (zmm10[0] f!= rdi_3[1].d || zmm10[0] f!= rdi_3[3].d || zmm10[0] f!= *(rdi_3 + 4)
                    || zmm10[0] f!= *(rdi_3 + 0x34) || zmm10[0] f!= *(rdi_3 + 8)
                    || zmm10[0] f!= *(rdi_3 + 0x18) || zmm10[0] f!= *(rdi_3 + 0xc)
                    || zmm10[0] f!= *(rdi_3 + 0x1c) || zmm12.d f!= *(rdi_3 + 0x2c)
                    || zmm10[0] f!= *(rdi_3 + 0x3c))
                zmm11, zmm12, zmm13, zmm14, zmm15 = sub_140631b10(rdi_3, &var_8a8)
            else
                zmm8 = zx.o(0)
                float zmm2_2[0x2] = *(rdi_3 + 0x14)
                float zmm5_1[0x2] = *rdi_3
                zmm1_2 = *(rdi_3 + 0x28)
                zmm0_2 = _mm_cvtps_pd((*(rdi_3 + 0x38)).q)
                __builtin_memset(&var_8a8[1], 0, 0x10)
                __builtin_memset(&var_898:8, 0, 0x14)
                zmm3_2 = _mm_cvtps_pd(zmm3_2.q)
                var_878:8.d = 0x3f800000
                zmm6.q = 0x3ff0000000000000 f/ zmm0_2.q
                zmm0_2 = 0x3ff0000000000000
                zmm2_2 = _mm_cvtps_pd(zmm2_2).q
                zmm1_2 = _mm_cvtps_pd(zmm1_2.q)
                zmm4_1.q = zmm0_2.q f/ zmm2_2
                zmm3_2.q = zmm3_2.q f* zmm4_1.q
                zmm0_2.q = zmm0_2.q f/ _mm_cvtps_pd(zmm5_1).q
                zmm1_2.q = zmm1_2.q f* zmm6.q
                zmm8[0] = fconvert.s((zmm3_2 ^ zmm15).q)
                zmm7[0].q = fconvert.d(zmm7[0])
                var_878:4.d = zmm8[0]
                zmm9.d = fconvert.s((zmm1_2 ^ zmm15).q)
                zmm7[0].q = zmm7[0].q f* zmm0_2.q
                zmm2_2 = _mm_cvtpd_ps(zmm6).q
                var_878:0xc.d = zmm9.d
                zmm1_2 = _mm_cvtpd_ps(zmm4_1)
                zmm0_2 = _mm_cvtpd_ps(zmm0_2)
                zmm3_2.d = fconvert.s((zmm7 ^ zmm15)[0].q)
                var_8a8[0] = zmm0_2.d
                var_878.d = zmm3_2.d
                var_898:4.d = zmm1_2.d
                var_888:0xc.d = zmm2_2[0]
            
            zmm1_2 = var_898
            rdi_3[8] = var_8a8
            rdi_3[9] = zmm1_2
            rdi_3[0xa] = var_888
            rdi_3[0xb] = var_878
            zmm9, zmm10 = sub_141366e50(rdi_3)
            zmm6 = 0x80000000
            r13 = var_8f8
        
        void var_788
        sub_1413bf240(&var_788)
        float (* rax_62)[0x4] = &var_788
        int64_t i_4 = 7
        float zmm0_7[0x4]
        int64_t i_1
        
        do
            rax_62 = &rax_62[8]
            zmm0_7 = *rdi_3
            rdi_3 = &rdi_3[8]
            rax_62[-8] = zmm0_7
            rax_62[-7] = rdi_3[-7]
            rax_62[-6] = rdi_3[-6]
            rax_62[-5] = rdi_3[-5]
            rax_62[-4] = rdi_3[-4]
            rax_62[-3] = rdi_3[-3]
            rax_62[-2] = rdi_3[-2]
            rax_62[-1] = rdi_3[-1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        *rax_62 = *rdi_3
        rax_62[1] = rdi_3[1]
        rax_62[2] = rdi_3[2]
        
        if (r14_2 == 0)
            sub_141442890(&rsi_4[0x932], &var_788)
        else
            zmm0_7 = rsi_4[0x1aa].d
            float zmm1_4[0x4]
            
            if (zmm0_7[0] != zmm10[0] || zmm10[0] f!= *(rsi_4 + 0xd54)
                    || not(zmm10[0] f== rsi_4[0x1ab].d))
                zmm0_7[0] = zmm0_7[0] f+ *(r14_2 + 0x85c)
                int32_t var_85c_1 = 0
                int64_t var_858_1 = 0
                int32_t var_850_1 = 0
                *(r14_2 + 0x85c) = zmm0_7[0]
                zmm0_7 = *(rsi_4 + 0xd54)
                zmm0_7[0] = zmm0_7[0] f+ r14_2[0x10c].d
                r14_2[0x10c].d = zmm0_7[0]
                zmm0_7 = rsi_4[0x1ab].d
                zmm0_7[0] = zmm0_7[0] f+ *(r14_2 + 0x864)
                *(r14_2 + 0x864) = zmm0_7[0]
                zmm1_4 = r14_2[0x10a].d
                zmm1_4[0] = zmm1_4[0] f- rsi_4[0x1aa].d
                zmm0_7 = *(r14_2 + 0x854)
                r14_2[0x10a].d = zmm1_4[0]
                zmm0_7[0] = zmm0_7[0] f- *(rsi_4 + 0xd54)
                zmm1_4 = r14_2[0x10b].d
                *(r14_2 + 0x854) = zmm0_7[0]
                zmm1_4[0] = zmm1_4[0] f- rsi_4[0x1ab].d
                r14_2[0x10b].d = zmm1_4[0]
                zmm1_4 = *(rsi_4 + 0xd54)
                zmm2_1 = rsi_4[0x1ab].d
                zmm4_1.d = (rsi_4[0x1aa].d ^ zmm6)[0]
                _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                zmm4_1.d = (zmm1_4 ^ zmm6)[0]
                _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
                zmm4_1.d = (zmm2_1 ^ zmm6).d
                zmm2_1 = r14_2[0xb9].d
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                uint128_t var_868 = zmm4_1
                zmm0_7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), *(r14_2 + 0x5a0))
                float zmm3_1[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), *(r14_2 + 0x590))
                zmm1_4 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), *(r14_2 + 0x5c0))
                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_7)
                zmm4_1 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), *(r14_2 + 0x5b0)), 
                    zmm1_4)
                zmm1_4 = *(r14_2 + 0x5c4)
                zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                var_858_1.o = zmm3_1
                zmm2_1.d = zmm2_1.d f+ _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)[0]
                zmm0_7 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                zmm3_1[0] = zmm3_1[0] f+ r14_2[0xb8].d
                zmm1_4[0] = zmm1_4[0] + zmm0_7[0]
                r14_2[0xb8].d = zmm3_1[0]
                *(r14_2 + 0x5c4) = zmm1_4[0]
                r14_2[0xb9].d = zmm2_1.d
                r14_2[0xc0].d = *(r14_2 + 0x85c)
                *(r14_2 + 0x604) = r14_2[0x10c].d
                r14_2[0xc1].d = *(r14_2 + 0x864)
                sub_141366e50(&r14_2[0x9a])
            
            zmm1_4 = *(r14_2 + 0x1a4)
            zmm0_7 = *(*rsi_4 + 0x38)
            zmm0_7[0] = zmm0_7[0] - zmm1_4[0]
            
            if (zmm0_7[0] < -9.99999975e-05f || zmm1_4[0] < 9.99999975e-05f)
                r15_1.b = 1
            else
                r15_1.b = 0
            
            var_928.d = 0x461c4000
            char rax_67 = sub_141459250(rsi_4, &r14_2[0xb2], r14_2 + 0x85c, 0x42340000, var_928.d)
            
            if (r15_1.b != 0 || *(rsi_4 + 0xd64) != r15_1.b || rax_67 != 0
                    || *(rsi_4 + 0xd84) != rax_67)
                r12_1.b = 1
            else
                r12_1.b = 0
            
            var_928.d = zmm14.d
            char rax_68
            rax_68, zmm9, zmm10, zmm11, zmm12 =
                sub_141459250(rsi_4, &r14_2[0xb2], r14_2 + 0x85c, 0x3e3851ec, var_928.d)
            void* rcx_52 = rsi_4[0x2b5]
            int64_t i_2 = 0
            int32_t* r9_2 = rcx_52 + 0x510
            int32_t* rcx_53
            
            do
                int64_t j = 0
                rcx_53 = r9_2
                
                do
                    if (*rcx_53 f!= *(rsi_4 - rcx_52 + rcx_53 - 0x250))
                        rcx_53.b = 1
                        goto label_14145d4df
                    
                    j += 1
                    rcx_53 = &rcx_53[1]
                while (j s< 4)
                
                i_2 += 1
                r9_2 = &r9_2[4]
            while (i_2 s< 4)
            
            rcx_53.b = 0
        label_14145d4df:
            
            if (rsi_4[0x2b1].d == 1 && (r12_1.b != 0 || *(*(r13 + 8) + 0xf79) != 0
                    || rsi_4[0x2b3].d != r14_2[0x186].d || *(rsi_4 + 0x159c) != *(r14_2 + 0xc34)
                    || rsi_4[0x2b4].d != r14_2[0x187].d || *(rsi_4 + 0x15a4) != *(r14_2 + 0xc3c)
                    || rcx_53.b != 0 || rax_68 != 0))
                int64_t* rcx_54 = r14_2[0x184]
                r14_2[0x184] = 0
                
                if (rcx_54 != 0)
                    (*(*rcx_54 + 0x38))(rcx_54)
                
                int64_t* rcx_55 = r14_2[0x185]
                r14_2[0x185] = 0
                
                if (rcx_55 != 0)
                    (*(*rcx_55 + 0x38))(rcx_55)
                
                r14_2[0x189] = 0
                r14_2[0x18a].d = 0
                r14_2[0x186].d = rsi_4[0x2b3].d
                *(r14_2 + 0xc34) = *(rsi_4 + 0x159c)
                r14_2[0x187].d = rsi_4[0x2b4].d
                *(r14_2 + 0xc3c) = *(rsi_4 + 0x15a4)
                *(r14_2 + 0xc54) = 0
                *(*(r13 + 8) + 0xf79) = 0
            
            if (r12_1.b == 0)
                sub_141442890(&rsi_4[0x932], &r14_2[0x9a])
            else
                sub_141442890(&rsi_4[0x932], &var_788)
                *(rsi_4 + 0x497c) |= 8
            
            if (((*(rsi_4 + 0x497c)).b & 1) == 0)
                sub_141442890(&r14_2[0x9a], &var_788)
            
            uint128_t zmm0_9
            float zmm1_5[0x4]
            
            if (rsi_4[0xd4].b != 0)
                zmm1_5 = *(rsi_4 + 0x680)
                uint128_t var_818 = *(rsi_4 + 0x670)
                zmm0_9 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                float var_8c0 = zmm1_5[0]
                float var_7f8_1[0x4] = zmm1_5
                float var_8b8_1 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                int32_t var_8bc_1 = zmm0_9.d
                void var_808
                zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_1422f7e80(&rsi_4[0x932], &var_8c0, sub_140adf5d0(&var_818, &var_808))
            
            if (r15_1.b != 0)
                *(rsi_4 + 0x497c) |= 0x50
            else
                void* rcx_60 = data_143f5b298
                zmm0_9.d = (*(rcx_60 + 0x8f0)).d f+ *(r14_2 + 0x1a4)
                
                if (zmm0_9.d f< *(*rsi_4 + 0x38) || *(rsi_4 + 0xd64) != 0 || *(rsi_4 + 0xd84) != 0)
                    *(rsi_4 + 0x497c) |= 0x50
                else
                    var_928.d = (*(rcx_60 + 0x8ec)).d
                    char rax_84
                    rax_84, zmm9, zmm10, zmm11, zmm12 = sub_141459250(rsi_4, &r14_2[0x38], 
                        &r14_2[0x40], *(rcx_60 + 0x8e8), var_928.d)
                    
                    if (rax_84 != 0)
                        *(rsi_4 + 0x497c) |= 0x50
            
            uint32_t rax_86
            
            if (data_143ed77f8 s> *(0x14 + var_8e8))
                int64_t r8_16
                rax_86, r8_16 = _Init_thread_header(&data_143ed77f8)
                
                if (data_143ed77f8 == 0xffffffff)
                    int64_t* rcx_62 = data_143db18d0
                    
                    if (rcx_62 == 0)
                        sub_140a53c40()
                        rcx_62 = data_143db18d0
                    
                    r8_16.b = 1
                    int64_t* rax_88 = (*(*rcx_62 + 0xb0))(rcx_62, u"vr.RoundRobinOcclusion", r8_16)
                    
                    if (rax_88 != 0)
                        int64_t rdx_22 = *rax_88
                        rax_88 = (*(rdx_22 + 0x58))(rax_88, rdx_22)
                    
                    data_143ed77f0 = rax_88
                    _Init_thread_footer(&data_143ed77f8)
            
            void* rbx_5 = data_143ed77f0
            
            if (rbx_5 == 0)
                rax_86.b = 0
            else if (data_143de5480 == 0)
                rax_86.b = *rbx_5 != 0
            else
                int64_t rcx_64
                rcx_64.b = GetCurrentThreadId() != data_143de5470
                rax_86.b = *(rbx_5 + (rcx_64 << 2)) != 0
            
            if (rax_86.b != *(r14_2 + 0x4c1))
                *(r14_2 + 0x4c1) = rax_86.b
                *(rsi_4 + 0x497c) |= 0x10
            
            *(r14_2 + 0x1c0) = *(rsi_4 + 0x340)
            *(r14_2 + 0x1d0) = *(rsi_4 + 0x350)
            *(r14_2 + 0x1e0) = *(rsi_4 + 0x360)
            *(r14_2 + 0x1f0) = *(rsi_4 + 0x370)
            r14_2[0x40] = *(rsi_4 + 0x60c)
            r14_2[0x41].d = *(rsi_4 + 0x614)
            char rax_90
            
            if (r12_1.b == 0)
                var_928.d = zmm14.d
                rax_90, zmm9, zmm10, zmm11, zmm12 =
                    sub_141459250(rsi_4, &r14_2[0xb2], r14_2 + 0x85c, zmm14, var_928.d)
            
            if (r12_1.b != 0 || rax_90 != 0)
                r14_2[0x42].d = 1
            else
                r14_2[0x42].d += 1
            
            if (*(r13 + 0x60) == 0 || *(rsi_4 + 0xd76) != 0)
                int32_t rbx_6 = *(rsi_4 + 0x128c)
                void* rax_92 = *r14_2
                float zmm6_1[0x4] = __maxss_xmmss_memss((*(*rsi_4 + 0x34))[0], 0x322bcc77)
                int32_t rax_93 = (*(rax_92 + 0x78))(r14_2)
                
                if (rbx_6 s> 0)
                    if (rax_93 == 1)
                        zmm6_1 = 0x3c888889
                    
                    zmm1_5 = zmm12
                    zmm0_9 = _mm_cvtepi32_ps(zx.o(rbx_6))
                    zmm1_5[0] = zmm1_5[0] f/ zmm0_9.d
                    r14_2[0x36].d = zmm1_5[0]
                else
                    zmm1_5 = zmm6_1
                    
                    if (rax_93 != 1)
                        zmm0_9 = r14_2[0x36].d
                        zmm1_5[0] = zmm1_5[0] f- zmm0_9.d
                        zmm1_5[0] = zmm1_5[0] f* zmm14.d
                        zmm1_5[0] = zmm1_5[0] f+ zmm0_9.d
                        r14_2[0x36].d = zmm1_5[0]
                    else
                        r14_2[0x36].d = zmm6_1[0]
                
                zmm1_5[0] = zmm1_5[0] / zmm6_1[0]
                *(r14_2 + 0x1ac) = zmm1_5[0]
            
            int128_t zmm2_3 = *(r14_2 + 0x1a4)
            r14_2[0x34].d = *(r14_2 + 0x19c)
            *(r14_2 + 0x19c) = *(*rsi_4 + 0x3c)
            void* rax_96 = *rsi_4
            zmm0_9 = *(rax_96 + 0x38)
            
            if (not(zmm0_9.d f== zmm2_3.d))
                zmm0_9.d = zmm0_9.d f- zmm2_3.d
                r14_2[0x35].d = zmm0_9.d
                zmm2_3 = *(rax_96 + 0x38)
                *(r14_2 + 0x1a4) = zmm2_3.d
            
            sub_1422f7d80(r14_2 + 0x121c, rsi_4, zmm2_3)
        
        sub_1413c4c10(&var_788)
        rdx_28 = var_908 + 1
        result = *(r13 + 0xa8)
        r8_7 = var_900 + 1
        zmm6 = 0x80000000
        var_908 = rdx_28
        var_900 = r8_7
    while (rdx_28 s< result)

int32_t i_3 = 0

if (result s> 0)
    int64_t r15_3 = 0
    
    do
        void* rsi_6 = *(r13 + 0xa0) + r15_3
        float zmm0_10 = sub_1422e5e20(rsi_6)
        int64_t* rcx_72 = data_143f0f180
        float var_848 = zmm0_10
        var_928.d = 1
        (*(*rcx_72 + 0xf8))(rcx_72, &var_8f0, &var_848, &data_143eca170, var_928, 1, var_918)
        uint64_t rbx_7 = var_8f0
        var_900 = rbx_7
        
        if (rbx_7 != 0)
            *(rbx_7 + 8) += 1
            rbx_7 = var_900
        
        sub_1405d1550(&var_8f0)
        
        if (rsi_6 + 0x1650 != &var_900)
            uint64_t rdi_4 = *(rsi_6 + 0x1650)
            *(rsi_6 + 0x1650) = rbx_7
            var_900 = 0
            
            if (rdi_4 != 0)
                int32_t rax_99 = *(rdi_4 + 8)
                *(rdi_4 + 8) -= 1
                
                if (rax_99 == 1)
                    char rax_100
                    
                    if (*(rdi_4 + 0x10) == 0 && data_143f0f1d0 == 0)
                        rax_100 = sub_1405949a0()
                    
                    if (*(rdi_4 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_100 != 0))
                        (**rdi_4)(rdi_4, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rdi_4 + 0xc))
                            *(rdi_4 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_4 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_102 = sub_140a20af0()
                            uint64_t rdx_30 = zx.q(rax_102)
                            void* const rax_103
                            
                            if (rax_102 != 0)
                                rax_103 = *((rdx_30 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_30.d) & 0x3fff) * 0x18
                            else
                                rax_103 = nullptr
                            
                            *(rax_103 + 8) = rdi_4
                            sub_1405a42f0(&data_143f02390, rdx_30.d)
        
        sub_1405d1550(&var_900)
        float zmm0_11 = sub_1422e5e20(rsi_6)
        int64_t* rcx_80 = data_143f0f180
        int32_t var_920_3 = 1
        var_928.d = 1
        var_848 = zmm0_11 f- zmm12.d
        (*(*rcx_80 + 0xf8))(rcx_80, &var_8e8, &var_848, &data_143eca170, var_928, var_920_3)
        void* const rbx_8 = var_8e8
        var_8f8 = rbx_8
        
        if (rbx_8 != 0)
            *(rbx_8 + 8) += 1
            rbx_8 = var_8f8
        
        sub_1405d1550(&var_8e8)
        
        if (rsi_6 + 0x1648 != &var_8f8)
            int64_t* rdi_5 = *(rsi_6 + 0x1648)
            *(rsi_6 + 0x1648) = rbx_8
            var_8f8 = nullptr
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    char rax_110
                    
                    if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
                        rax_110 = sub_1405949a0()
                    
                    if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_110 != 0))
                        (**rdi_5)(rdi_5, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rdi_5 + 0xc))
                            *(rdi_5 + 0xc) = 1
                            z_2 = true
                        else
                            *(rdi_5 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_112 = sub_140a20af0()
                            uint64_t rdx_32 = zx.q(rax_112)
                            void* const rax_113
                            
                            if (rax_112 != 0)
                                rax_113 = *((rdx_32 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_32.d) & 0x3fff) * 0x18
                            else
                                rax_113 = nullptr
                            
                            *(rax_113 + 8) = rdi_5
                            sub_1405a42f0(&data_143f02390, rdx_32.d)
        
        result = sub_1405d1550(&var_8f8)
        i_3 += 1
        r15_3 += 0x5240
    while (i_3 s< *(r13 + 0xa8))

__security_check_cookie(rax_1 ^ &var_948)
return result
