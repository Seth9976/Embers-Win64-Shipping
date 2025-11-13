// 函数: sub_141b55710
// 地址: 0x141b55710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a48
int64_t rax_1 = __security_cookie ^ &var_a48
void*** rsi = arg2
void* r12 = arg1
int32_t i = 0
int64_t* r15 = arg3

if (data_143f3d6b0 != 0)
    int64_t rax_6 = sub_141fe0f50(sub_141fe0c50(0))
    
    if (rax_6 != 0 && rax_6 != *(r12 + 0xc8))
        int64_t* rax_8 = sub_1405e25d0(rax_6) + 0x28
        
        if (r12 + 0xb8 != rax_8)
            int32_t r14 = rax_8[1].d
            int64_t r15_1 = *rax_8
            int32_t r8 = *(r12 + 0xc4)
            *(r12 + 0xc0) = r14
            
            if (r14 != 0 || r8 != 0)
                sub_141b65270(r12 + 0xb8, r14, r8)
                memcpy(*(r12 + 0xb8), r15_1, r14 * 0x54)
                i = 0
            else
                i = 0
                *(r12 + 0xc4) = 0
            
            r15 = arg3
        
        *(r12 + 0xc8) = rax_6

int64_t rbx_2 = data_143f2d530
j_sub_140b3db50()
int64_t* rax_9 = sub_140b3da90(&data_143de7d78, rbx_2)
TEB* gsbase

if (data_143f2f150 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2f150)
    
    if (data_143f2f150 == 0xffffffff)
        data_143f2f148 = -1
        int32_t rax_252 = data_143f2f148:4.d
        data_143f2f148.d |= 0x48000
        data_143f2f148:4.d = (rax_252 & 0xfff8ffff) | 0x400
        _Init_thread_footer(&data_143f2f150)

uint128_t zmm0 = 0x400ccccd

if (*(*(*(*r15 + 8))(r15) + 0x3c) != 0xa || *(arg9 + 0x56) != 0)
    void* rax_12 = data_143f5b298
    
    if (rax_12 != 0)
        zmm0 = *(rax_12 + 0x91c)
    
    zmm0 = _mm_cvtps_pd(zmm0.q)
else
    zmm0 = 0x3ff0000000000000

bool cond:1 = *(r12 + 0xa8) == 0
int128_t zmm15 = _mm_cvtpd_ps(zmm0)
int128_t zmm13

zmm13 = cond:1 ? 0x3f800000 : zmm15

void* rdx_5 = nullptr
int32_t var_988 = data_1439ae6ac.d
int32_t rax_14 = *(*(r12 + 0x98) + 0x248)
void* var_368 = nullptr
int32_t var_35c = 3
int32_t rax_15 = 0
int32_t var_360 = 0
void var_380

if (rax_14 + 1 s> 0)
    int32_t var_360_1 = rax_14 + 1
    
    if (rax_14 + 1 s> 3)
        sub_1413a87c0(&var_380, 0)
        rdx_5 = var_368
    
    void* rcx_9 = &var_380
    
    if (rdx_5 != 0)
        rcx_9 = rdx_5
    
    memset(rcx_9, 0, sx.q(rax_14 + 1) << 3)
else if (rax_14 + 1 s< 0)
    int32_t rbx_4 = neg.d(rax_14 + 1)
    
    if (rbx_4 != 0)
        int32_t rcx_11 = neg.d(rbx_4 + rax_14 + 1)
        
        if (rcx_11 != 0)
            memmove(&var_380 + (sx.q(rax_14 + 1) << 3), &var_380, rcx_11 << 3)
            rax_15 = var_360
        
        int32_t var_360_2 = rax_15 - rbx_4
        sub_1413a88e0(&var_380)

int32_t var_384 = 3
void* rdx_7 = nullptr
void* var_390 = nullptr
int32_t rax_18 = 0
int32_t var_388 = 0
void var_3a8

if (rax_14 + 1 s> 0)
    int32_t var_388_1 = rax_14 + 1
    
    if (rax_14 + 1 s> 3)
        sub_1413a87c0(&var_3a8, 0)
        rdx_7 = var_390
    
    void* rcx_15 = &var_3a8
    
    if (rdx_7 != 0)
        rcx_15 = rdx_7
    
    memset(rcx_15, 0, sx.q(rax_14 + 1) << 3)
else if (rax_14 + 1 s< 0)
    int32_t rbx_6 = neg.d(rax_14 + 1)
    
    if (rbx_6 != 0)
        int32_t rcx_17 = neg.d(rbx_6 + rax_14 + 1)
        
        if (rcx_17 != 0)
            memmove(&var_3a8 + (sx.q(rax_14 + 1) << 3), &var_3a8, rcx_17 << 3)
            rax_18 = var_388
        
        int32_t var_388_2 = rax_18 - rbx_6
        sub_1413a88e0(&var_3a8)

if (*(*(r12 + 0x98) + 0x248) s> 0)
    int64_t* rdi_3 = nullptr
    
    do
        int64_t* rax_22 = j_sub_140a82f30(0x90)
        int64_t* rbx_7 = rax_22
        
        if (rax_22 == 0)
            rbx_7 = nullptr
        else
            int128_t zmm0_1 = data_142d3f660
            int32_t var_874
            int32_t rax_25 = (var_874 & 0xffffffe8) | 8
            int64_t rcx_21 = data_143f2f148
            int64_t* r8_10 = *(rdi_3 + *(*(r12 + 0x98) + 0x240))
            int64_t* var_8a8 = r15
            int64_t* var_8a0_1 = r8_10
            int64_t var_898_1 = rcx_21
            int32_t var_890_1 = 0xffffffff
            int64_t var_88c_1 = 0
            int128_t var_884_1 = zmm0_1
            
            if (r8_10 != 0 && (*(*r8_10 + 0x240))(r8_10) != 0)
                uint32_t rax_28
                
                if (data_143de5480 != 0)
                    rax_28.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143de5480 == 0 || rax_28.b != 0)
                    rax_25 |= 0x10
            
            var_884_1.d = (*(arg9 + 0x48)).d
            var_884_1:8.d = arg9[5].d.d
            var_884_1:4.d = *(arg9 + 0x4c)
            var_884_1:0xc.d = zmm13.d
            var_874 = rax_25 | 0x12
            sub_1422d9ba0(rbx_7, &var_8a8)
        
        void* rcx_24 = &var_3a8
        
        if (var_390 != 0)
            rcx_24 = var_390
        
        *(rcx_24 + rdi_3) = rbx_7
        void* rcx_25 = &var_3a8
        
        if (var_390 != 0)
            rcx_25 = var_390
        
        int64_t* rax_33
        rax_33, zmm13 = sub_141b520b0(*(rcx_25 + rdi_3), r15, arg9)
        void* rcx_27 = &var_380
        
        if (var_368 != 0)
            rcx_27 = var_368
        
        i += 1
        *(rcx_27 + rdi_3) = rax_33
        rdi_3 = &rdi_3[1]
    while (i s< *(*(r12 + 0x98) + 0x248))
    
    rsi = arg2

int64_t* rax_35 = j_sub_140a82f30(0x90)
int64_t* rbx_9 = rax_35

if (rax_35 == 0)
    rbx_9 = rax_35
else
    int64_t var_770_1 = 0
    int64_t var_75c_1 = 0
    int32_t var_754_1 = *(arg9 + 0x48)
    int64_t var_768_1 = data_143f2f148
    int32_t var_744
    int32_t var_744_1 = (var_744 & 0xfffffffa) | 0x1a
    int32_t var_750_1 = *(arg9 + 0x4c)
    int32_t var_74c_1 = arg9[5].d
    int32_t var_748_1 = zmm13.d
    int64_t* var_778 = r15
    int32_t var_760_1 = 0xffffffff
    sub_1422d9ba0(rbx_9, &var_778)

void* rcx_30 = &var_3a8
int64_t rdi_4 = sx.q(rax_14)

if (var_390 != 0)
    rcx_30 = var_390

*(rcx_30 + (rdi_4 << 3)) = rbx_9
void* rcx_31 = &var_3a8

if (var_390 != 0)
    rcx_31 = var_390

int64_t* rax_41
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
uint128_t zmm12
float zmm13_1
float zmm15_1
rax_41, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm15_1 =
    sub_141b520b0(*(rcx_31 + (rdi_4 << 3)), r15, arg9)
void* rcx_33 = &var_380

if (var_368 != 0)
    rcx_33 = var_368

*(rcx_33 + (rdi_4 << 3)) = rax_41
void* var_740
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_740, 
    &data_143f2d540, 0)
void* rdi_5 = var_740
int64_t* rax_45 = data_14395f4d0
int64_t* var_970 = rax_45

if (rax_45 != 0)
    rax_45[1].d += 1

int64_t i_2 = 0
int64_t var_63c
__builtin_memset(&var_63c, 0, 0x43)
int128_t var_698
__builtin_memset(&var_698, 0, 0x30)
int128_t var_650 = zx.o(0)
int16_t var_5f8 = 0
sub_140fdc870(rsi, &var_698)
int64_t* var_7b8 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
int64_t* rax_47

if (*(arg9 + 0x54) == 0)
    rax_47.b = 0
else
    int64_t* r8_13 = sx.q((*U"1111")[sx.q(data_1439c7a08)])
    int64_t rcx_39 = data_143f025b8
    
    if (((r8_13.d u> 0x18 || not(test_bit(0x100a040, r8_13.d)))
            && *(r8_13 * 0x14 + &data_143f025f0) != rcx_39) || ((r8_13.d u> 0x1e
            || not(test_bit(0x6562c800, r8_13.d))) && (*(r8_13 * 0x14 + &data_143f025fc) & 1) == 0)
            || (r8_13.d u<= 0x1b && test_bit(0x857c041, r8_13.d)))
        rax_47.b = 0
    else
        void* rdx_18 = r8_13 * 5
        int32_t r9 = *((rdx_18 << 2) + &data_143f025fc)
        
        if (((r9 u>> 2).b & 1) != 0 || r8_13.d == 0xb || r8_13.d == 0x1e)
            rax_47.b = 0
        else
            int64_t rdx_19 = *((rdx_18 << 2) + &data_143f025f0)
            
            if ((rdx_19 != rcx_39 || (r9.b & 1) == 0)
                    && (r8_13.d u> 0x30 || not(test_bit(0x1000030200000, r8_13)))
                    && rdx_19 != data_143f025c0 && (r8_13 - 0x19).d u> 1)
                rax_47.b = 1
            else
                rax_47.b = 0

int64_t rcx_41 = rsi[6] + 7
char var_9d6 = rax_47.b
void*** rcx_42 = rcx_41 & 0xfffffffffffffff8
int32_t var_9c8 = 0
int32_t var_9b0 = 0
void* rax_49 = &rcx_42[5]

if (rax_49 u> rsi[7])
    zmm6 = sub_140b0e3d0(&rsi[6], 0x30)
    rcx_42 = (rsi[6] + 7) & 0xfffffffffffffff8
    rax_49 = &rcx_42[5]

int32_t i_1 = arg7
uint128_t var_58 = zmm6
rsi[6] = rax_49
*(rsi + 0x14) += 1
int32_t zmm14 = 0xbf800000
*rsi[1] = rcx_42
rsi[1] = &rcx_42[1]
rcx_42[1] = 0
*rcx_42 = &data_142f18bc8
rcx_42[2].b = 0
*(rcx_42 + 0x14) = 0
*(rcx_42 + 0x1c) = 0
int64_t var_658 = data_14395d9e8
uint64_t var_920 = arg9[4].q
uint128_t zmm0_3

if (i_1 != 0xffffffff)
    uint128_t var_68_1 = zmm7
    uint128_t var_78_1 = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    
    do
        uint128_t zmm1_1
        
        if (*(rsi + 0x1c4) == 0)
            int64_t* rax_54 = (*(*r15 + 8))(r15)
            zmm1_1 = data_142d3f5a0
            int64_t rcx_47 = *rax_54
            int64_t var_5e8 = rcx_47
            int32_t var_510_1 = 0
            int32_t var_50c
            __builtin_memset(&var_50c, 0xff, 0x14)
            uint128_t var_4f8_1 = zmm1_1
            int64_t var_4e8
            __builtin_memset(&var_4e8, 0, 0x1a)
            int64_t var_5e0_1 = 0
            int32_t var_5d8_1 = 0xffffffff
            int16_t var_5d4_1 = 0x500
            int64_t var_528_1
            __builtin_memset(&var_528_1, 0, 0x11)
            int32_t var_514_1 = 0
            int16_t var_4d0_1
            var_4d0_1:1.b = *(rcx_47 + 0x38) u> 1
            void var_5d0
            memset(&var_5d0, 0, 0xa8)
            int64_t rax_55 = *arg6
            int64_t var_528_2 = rax_55
            
            if (rax_55 == 0)
                char var_518_2 = 0
                int32_t var_514_3 = 0
            else
                char var_518_1 = 0x55
                int32_t var_514_2 = 0x22
            
            int64_t rbx_13 = (rsi[6] + 1) & 0xfffffffffffffffe
            int64_t rax_56 = rbx_13 + 0x38
            
            if (rax_56 u> rsi[7])
                sub_140b0e3d0(&rsi[6], 0x3a)
                rbx_13 = (rsi[6] + 1) & 0xfffffffffffffffe
                rax_56 = rbx_13 + 0x38
            
            rsi[6] = rax_56
            wchar16 const* const rcx_51 = u"RestartingSlateDrawElements"
            wchar16 const j
            
            do
                j = *rcx_51
                *(rbx_13 - u"RestartingSlateDrawElements" + rcx_51) = j
                rcx_51 = &rcx_51[1]
            while (j != 0)
            void*** rcx_54 = (rsi[6] + 7) & 0xfffffffffffffff8
            void* rax_57 = &rcx_54[0x27]
            
            if (rax_57 u> rsi[7])
                sub_140b0e3d0(&rsi[6], 0x140)
                rcx_54 = (rsi[6] + 7) & 0xfffffffffffffff8
                rax_57 = &rcx_54[0x27]
            
            rsi[6] = rax_57
            void**** rax_58 = rsi[1]
            *(rsi + 0x14) += 1
            *rax_58 = rcx_54
            rsi[1] = &rcx_54[1]
            sub_1405d11b0(rcx_54, &var_5e8, rbx_13)
            *(rsi + 0x1c4) = 1
            sub_1405d19b0(rsi, &var_5e8)
            int64_t var_4d8
            rsi[0x2f].b = var_4d8:7.b
            *(rsi + 0x179) = 0
            *(rsi + 0x1c4) = 1
            void var_6f0
            zmm6 = zx.o(*((*(*r15 + 0x18))(r15, &var_6f0) + 4))
            int64_t rax_63 = *r15
            zmm6 = _mm_cvtepi32_ps(zmm6)
            void var_720
            int32_t* rax_64 = (*(rax_63 + 0x18))(r15, &var_720)
            void*** rcx_63 = (rsi[6] + 7) & 0xfffffffffffffff8
            zmm7 = _mm_cvtepi32_ps(zx.o(*rax_64))
            void* rax_65 = &rcx_63[5]
            
            if (rax_65 u> rsi[7])
                zmm6 = sub_140b0e3d0(&rsi[6], 0x30)
                rcx_63 = (rsi[6] + 7) & 0xfffffffffffffff8
                rax_65 = &rcx_63[5]
            
            rsi[6] = rax_65
            void**** rax_66 = rsi[1]
            *(rsi + 0x14) += 1
            *rax_66 = rcx_63
            rsi[1] = &rcx_63[1]
            *(rcx_63 + 0x1c) = zmm7.d
            rcx_63[4].d = zmm6.d
            *rcx_63 = &data_142d54998
            *(rcx_63 + 0x24) = 0
            __builtin_memset(&rcx_63[1], 0, 0x14)
            int64_t var_4e0
            sub_1405d1550(&var_4e0, 0)
        
        uint128_t* r15_4 = (sx.q(i_1) << 7) + *arg8
        int32_t i_3 = *(r15_4 + 0x6c)
        uint8_t rcx_68 = *(r15_4 + 0x7c)
        char rbx_16 = *(r15_4 + 0x7a)
        int64_t* rdi_6 = r15_4[3].q
        uint8_t rax_69 = *(r15_4 + 0x79)
        int64_t rax_70 = data_14395da18
        uint8_t r13_1 = rax_69 & 0x10
        
        if (r13_1 != 0)
            rax_70 = data_1439b5548
        
        int64_t var_660_1 = rax_70
        int64_t* r12_1 = r15_4[5].q
        int64_t var_918
        
        if (r12_1 != 0)
            void*** rcx_226 = (rsi[6] + 7) & 0xfffffffffffffff8
            void* rax_219 = &rcx_226[2]
            
            if (rax_219 u> rsi[7])
                sub_140b0e3d0(&rsi[6], 0x18)
                rcx_226 = (rsi[6] + 7) & 0xfffffffffffffff8
                rax_219 = &rcx_226[2]
            
            rsi[6] = rax_219
            int64_t* rax_220 = rsi[1]
            *(rsi + 0x14) += 1
            *rax_220 = rcx_226
            rsi[1] = &rcx_226[1]
            rcx_226[1] = 0
            *rcx_226 = &data_142d549b8
            *(rsi + 0x1c4) = 0
            rsi[0x2f].w = 0
            void*** rcx_232 = (rsi[6] + 7) & 0xfffffffffffffff8
            void* rax_222 = &rcx_232[5]
            
            if (rax_222 u> rsi[7])
                sub_140b0e3d0(&rsi[6], 0x30)
                rcx_232 = (rsi[6] + 7) & 0xfffffffffffffff8
                rax_222 = &rcx_232[5]
            
            r15 = arg3
            rsi[6] = rax_222
            int64_t* rax_223 = rsi[1]
            *(rsi + 0x14) += 1
            *rax_223 = rcx_232
            rsi[1] = &rcx_232[1]
            rcx_232[1] = 0
            *rcx_232 = &data_142f18bc8
            rcx_232[2].b = 0
            *(rcx_232 + 0x14) = 0
            *(rcx_232 + 0x1c) = 0
            int64_t rax_225 = *r15
            var_918 = 0
            (*(*r12_1 + 8))(r12_1, rsi, (*(rax_225 + 8))(r15))
            r12 = arg1
            i_2 = 0
            var_9b0 = 0
        else
            uint128_t zmm3_1 = data_142d4cc00
            uint128_t zmm4_1 = data_142d4cc20
            uint128_t zmm5_1 = data_142d4cc30
            zmm6 = r15_4[2].d
            zmm7 = *(r15_4 + 0x24)
            uint128_t zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
            zmm9 = arg9[1]
            zmm8 = *arg9
            zmm10 = arg9[2]
            zmm11 = arg9[3]
            zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm8)
            int32_t var_830_1 = r12_1.d
            uint128_t var_868_1
            __builtin_memcpy(&var_868_1, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00", 
                0x30)
            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm11)
            int32_t var_82c_1 = 0x3f800000
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm9)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm10)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm9)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm10)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm8)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            uint128_t var_6e8 = zmm2_1
            zmm2_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm8)
            zmm4_1 = _mm_mul_ps(zmm4_1, zmm11)
            zmm0_3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm9)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
            zmm5_1 = _mm_mul_ps(zmm5_1, zmm11)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
            uint128_t var_6d8_1 = zmm3_1
            zmm3_1.d = zmm6.d
            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm5_1)
            zmm3_1.d = zmm7.d
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            uint128_t var_838 = zmm3_1
            zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            uint128_t var_6c8_1 = zmm2_1
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm8)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm9)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm10)
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
            zmm3_1 = _mm_mul_ps(zmm3_1, zmm11)
            uint128_t var_6b8_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm1_1), zmm3_1)
            r12 = arg1
            int32_t var_a20
            var_a20.q = arg4
            int32_t var_a28
            var_a28.q = r15_4
            sub_141b6af30(rsi, &var_9c8, &var_9b0, arg3, var_a28, var_a20, arg6, &var_918, 
                &var_920, var_9d6, &var_698, r12 + 0x70, &var_6e8, 0)
            int32_t rcx_70 = *(r15_4 + 0x68)
            int32_t var_9b8_1
            int32_t rdx_27
            
            if (*(r15_4 + 0x7b) != 1)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = muls.dp.d(0x55555556, rcx_70)
                rdx_27 = temp3_1
                var_9b8_1 = rcx_70 s/ 3
            else
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(rcx_70)
                rdx_27 = temp5_1
                var_9b8_1 = (temp6_1 - rdx_27) s>> 1
            
            int32_t var_9a8_1
            
            if (rdi_6 == 0)
                var_9a8_1 = 4
                
                if (rbx_16 == 6)
                    goto label_141b564d4
                
                goto label_141b56532
            
            int32_t rax_82 = (*(*rdi_6 + 0x10))(rdi_6, rdx_27)
            var_9a8_1 = rax_82
            int128_t var_678_1
            
            if (rax_82 != 2 && rbx_16 != 6)
            label_141b56532:
                var_a28.b = rcx_68
                void var_6a8
                int64_t* rax_87 = sub_141b60060(r12, &var_6a8, var_7b8, rbx_16, var_a28.b)
                int64_t rdx_30 = data_14395da00
                int128_t zmm0_4 = *rax_87
                int64_t rcx_77
                
                if ((rax_69 & 1) == 0)
                    rcx_77 = data_1439c29c0
                    
                    if ((rax_69 & 2) != 0)
                        rcx_77 = data_1439b68f8
                    
                    int64_t var_668_2 = rcx_77
                else
                    rcx_77 = rdx_30
                    int64_t var_668_1 = rdx_30
                
                int64_t rax_89
                
                if (r13_1 != 0 || *(arg9 + 0x55) != r13_1)
                    rax_89 = data_1439b5548
                    
                    if (*(arg9 + 0x55) != 0)
                        rcx_77 = rdx_30
                    
                    int64_t var_668_3 = rcx_77
                else
                    rax_89 = data_14395da18
                
                int64_t var_660_2 = rax_89
                var_698.q = data_1439ec2a8
                int64_t rax_91 = 0
                
                if (rdi_5 != 0)
                    int64_t rdx_31 = sx.q(*(rdi_5 + 0x10c))
                    void* var_738
                    int64_t* rbx_17 = *(var_738 + 0x10)
                    int64_t rax_93 = rbx_17[3]
                    
                    if (*(rax_93 + (rdx_31 << 3)) == 0)
                        sub_1419ccf30(rbx_17, rdx_31.d)
                        rax_93 = rbx_17[3]
                    
                    rax_91 = *(rax_93 + (rdx_31 << 3))
                
                void* r13_2 = zmm0_4.q
                var_698:8.q = rax_91
                int64_t rax_94 = 0
                
                if (r13_2 != 0)
                    int64_t rdx_32 = sx.q(*(r13_2 + 0x10c))
                    int64_t* rbx_18 = *(zmm0_4:8.q + 0x10)
                    int64_t rax_96 = rbx_18[3]
                    
                    if (*(rax_96 + (rdx_32 << 3)) == 0)
                        sub_1419ccf30(rbx_18, rdx_32.d)
                        rax_96 = rbx_18[3]
                    
                    rax_94 = *(rax_96 + (rdx_32 << 3))
                
                var_678_1.q = rax_94
                int32_t rax_97 = 0
                
                if (*(r15_4 + 0x7b) == 1)
                    rax_97 = 2
                
                int32_t var_640_1 = rax_97
                sub_1419870b0(rsi, &var_698, 2)
                int32_t rbx_19 = var_9c8
                void*** rcx_84 = (rsi[6] + 7) & 0xfffffffffffffff8
                void* rax_98 = &rcx_84[3]
                
                if (rax_98 u> rsi[7])
                    sub_140b0e3d0(&rsi[6], 0x20)
                    rcx_84 = (rsi[6] + 7) & 0xfffffffffffffff8
                    rax_98 = &rcx_84[3]
                
                rsi[6] = rax_98
                *(rsi + 0x14) += 1
                *rsi[1] = rcx_84
                rsi[1] = &rcx_84[1]
                rcx_84[1] = 0
                rcx_84[2].d = rbx_19
                int64_t* rbx_20 = var_970
                *rcx_84 = &data_142f18bb8
                void* const r12_4 = *(data_143f10dc8 + 0x10)
                
                if (rdi_6 != 0)
                    char rdx_34 = 1
                    void* const rbx_21 = rdi_6[1]
                    
                    if (var_9a8_1 != 1)
                        if (rbx_21 == 0)
                            rbx_21 = r12_4
                        
                        r12_4 = rbx_21
                    else if (rbx_21 != 0)
                        void* r12_5 = *(rbx_21 + 0x78)
                        void* const var_928
                        
                        if (r12_5 == 0)
                            var_928 = nullptr
                            r12_4 = nullptr
                        else
                            *(r12_5 + 0x28) = data_143dbb3b8
                            r12_4 = *(r12_5 + 0x10)
                            var_928 = r12_4
                            
                            if (r12_4 != 0)
                                *(r12_4 + 8) += 1
                        
                        sub_1405d1550(&var_928)
                        uint32_t rcx_89 = zx.d(*(rbx_21 + 0x5d))
                        rdx_34 = 0
                        
                        if (rcx_89 == 0)
                            rdx_34 = 0
                        else if (rcx_89 == 1)
                            rdx_34 = 1
                        else if (rcx_89 == 2)
                            rdx_34 = 2
                        else
                            uint64_t rax_102 = zx.q(*(rbx_21 + 0x5f))
                            
                            if (rax_102.d s< *(arg1 + 0xc0))
                                rdx_34 = *(rax_102 * 0x54 + *(arg1 + 0xb8) + 0x18)
                    
                    uint32_t rcx_92 = zx.d(rdx_34)
                    
                    if ((rax_69 & 0x60) != 0x60)
                        if ((rax_69 & 0x20) == 0)
                            if ((rax_69 & 0x40) == 0)
                                if (rcx_92 == 0)
                                    rbx_20 = data_14395fa10
                                else if (rcx_92 == 2)
                                    rbx_20 = data_1439b5ec0
                                else if (rcx_92 == 3)
                                    rbx_20 = data_1439ec440
                                else if (rcx_92 == 4)
                                    rbx_20 = data_1439ec458
                                else
                                    rbx_20 = data_14395f4d0
                            else if (rcx_92 == 0)
                                rbx_20 = data_1439ec3e0
                            else if (rcx_92 == 2)
                                rbx_20 = data_1439ec410
                            else if (rcx_92 == 3)
                                rbx_20 = data_1439ec3f8
                            else if (rcx_92 == 4)
                                rbx_20 = data_1439ec428
                            else
                                rbx_20 = data_14396f010
                        else if (rcx_92 == 0)
                            rbx_20 = data_1439ec380
                        else if (rcx_92 == 2)
                            rbx_20 = data_1439ec3b0
                        else if (rcx_92 == 3)
                            rbx_20 = data_1439ec398
                        else if (rcx_92 == 4)
                            rbx_20 = data_1439ec3c8
                        else
                            rbx_20 = data_14396eff8
                    else if (rcx_92 == 0)
                        rbx_20 = data_1439b54b8
                    else if (rcx_92 == 2)
                        rbx_20 = data_1439ec350
                    else if (rcx_92 == 3)
                        rbx_20 = data_1439ec338
                    else if (rcx_92 == 4)
                        rbx_20 = data_1439ec368
                    else
                        rbx_20 = data_14396ee58
                
                int32_t var_a28_1 = 0
                int64_t var_7a8 = rsi[0x31]
                sub_1405eb5d0(rsi, &var_7a8, rdi_5 + 0x118, &var_6e8, var_a28_1)
                int32_t zmm0_6
                
                zmm0_6 = var_9d6 == 0 ? zmm12.d : zmm14
                
                int64_t var_7a0 = rsi[0x31]
                int32_t var_950 = zmm0_6
                sub_1405eb490(rsi, &var_7a0, rdi_5 + 0x124, &var_950, 0)
                int64_t* var_798 = rbx_20
                
                if (rbx_20 != 0)
                    rbx_20[1].d += 1
                
                int64_t rdi_8 = rsi[0x34]
                
                if (*(r13_2 + 0x11a) u> 0)
                    uint32_t r13_3 = zx.d(*(r13_2 + 0x118))
                    void*** rcx_105 = (rsi[6] + 7) & 0xfffffffffffffff8
                    void* rax_107 = &rcx_105[5]
                    
                    if (rax_107 u> rsi[7])
                        sub_140b0e3d0(&rsi[6], 0x30)
                        rcx_105 = (rsi[6] + 7) & 0xfffffffffffffff8
                        rax_107 = &rcx_105[5]
                    
                    rsi[6] = rax_107
                    void**** rax_108 = rsi[1]
                    *(rsi + 0x14) += 1
                    *rax_108 = rcx_105
                    rsi[1] = &rcx_105[1]
                    rcx_105[1] = 0
                    rcx_105[3].d = r13_3
                    *rcx_105 = &data_142d5a070
                    rcx_105[2] = rdi_8
                    rcx_105[4] = r12_4
                
                if (*(r13_2 + 0x11e) u> 0)
                    uint32_t r12_6 = zx.d(*(r13_2 + 0x11c))
                    
                    if ((*(*rbx_20 + 8))(rbx_20) == 0)
                        void*** rcx_112 = (rsi[6] + 7) & 0xfffffffffffffff8
                        void* rax_112 = &rcx_112[5]
                        
                        if (rax_112 u> rsi[7])
                            sub_140b0e3d0(&rsi[6], 0x30)
                            rcx_112 = (rsi[6] + 7) & 0xfffffffffffffff8
                            rax_112 = &rcx_112[5]
                        
                        rsi[6] = rax_112
                        void**** rax_113 = rsi[1]
                        *(rsi + 0x14) += 1
                        *rax_113 = rcx_112
                        rsi[1] = &rcx_112[1]
                        rcx_112[1] = 0
                        *rcx_112 = &data_142d5a080
                        rcx_112[2] = rdi_8
                        rcx_112[3].d = r12_6
                        rcx_112[4] = rbx_20
                
                sub_1405d1550(&var_798)
                int64_t var_790 = rsi[0x34]
                sub_1405d0e10(rsi, &var_790, r13_2 + 0x120, r15_4, 0)
                uint8_t rax_116 = rax_69 u>> 2
                float zmm0_7
                
                if (rax_69 s< 0)
                    zmm0_7 = zmm12.d / zmm15_1
                else if ((rax_116 & 1) == 0)
                    zmm0_7 = zmm13_1
                else
                    zmm0_7 = zmm12.d
                
                if ((rax_116 & 1) == 0)
                    zmm3_1 = var_988
                else
                    zmm3_1 = zmm12
                
                if ((rcx_68 & 8) == 0)
                    zmm2_1 = zx.o(0)
                else
                    zmm2_1 = zmm12
                
                int32_t var_8e0_1 = zmm2_1.d
                float zmm1_2 = zmm12.d / zmm0_7
                int64_t var_788 = rsi[0x34]
                var_a28 = 0
                int32_t var_8dc_1 = zmm3_1.d
                float var_8e4_1 = zmm1_2
                float var_8e8 = zmm1_2 * 2.20000005f
                int64_t r9_7 = sub_1405d0e10(rsi, &var_788, r13_2 + 0x126, &var_8e8, var_a28)
                uint64_t rax_118 = zx.q(*(r15_4 + 0x5c))
                void*** rcx_122 = (rsi[6] + 7) & 0xfffffffffffffff8
                int64_t rdi_9 = *(arg1 + 0x30)
                void* rax_119 = &rcx_122[5]
                
                if (rax_119 u> rsi[7])
                    r9_7 = sub_140b0e3d0(&rsi[6], 0x30)
                    rcx_122 = (rsi[6] + 7) & 0xfffffffffffffff8
                    rax_119 = &rcx_122[5]
                
                rsi[6] = rax_119
                *(rsi + 0x14) += 1
                *rsi[1] = rcx_122
                rsi[1] = &rcx_122[1]
                rcx_122[1] = 0
                *rcx_122 = &data_142d56618
                rcx_122[2].d = 0
                rcx_122[3] = rdi_9
                rcx_122[4].d = (rax_118 * 5).d << 3
                int64_t rbx_24 = *(arg1 + 0x58)
                int32_t rdi_10 = r15_4[7].d
                int32_t r12_7 = r15_4[6].d
                int32_t r15_5 = *(r15_4 + 0x64)
                
                if (rbx_24 == 0)
                    sub_140af98a0("Unknown", 0xbc8, 
                        Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_7)
                    sub_140afbb40()
                
                void*** rcx_128 = (rsi[6] + 7) & 0xfffffffffffffff8
                void* rax_122 = &rcx_128[6]
                
                if (rax_122 u> rsi[7])
                    sub_140b0e3d0(&rsi[6], 0x38)
                    rcx_128 = (rsi[6] + 7) & 0xfffffffffffffff8
                    rax_122 = &rcx_128[6]
                
                rsi[6] = rax_122
                void**** rax_123 = rsi[1]
                *(rsi + 0x14) += 1
                *rax_123 = rcx_128
                rsi[1] = &rcx_128[1]
                rcx_128[1] = 0
                rcx_128[2] = rbx_24
                i_2 = 0
                *rcx_128 = &data_142f11598
                *(rcx_128 + 0x24) = r12_7
                r12 = arg1
                rcx_128[5].d = var_9b8_1
                rcx_128[3] = 0
                rcx_128[4].d = r15_5
                *(rcx_128 + 0x2c) = rdi_10
            else
            label_141b564d4:
                int32_t rax_84
                
                if (data_143f5b298 != 0 && rdi_6 != 0)
                    rax_84 = (*(*rdi_6 + 0x10))(rdi_6)
                
                if (data_143f5b298 != 0 && rdi_6 != 0 && rax_84 == 2)
                    if (rbx_16 == 6)
                        goto label_141b57568
                    
                    int32_t rax_85 = sx.d(*(r15_4 + 0x78))
                    int32_t rdx_28 = rax_85
                    
                    if (rax_85.b == 0xff)
                        rdx_28 = rax_14
                    else if (rdx_28 s>= *(*(r12 + 0x98) + 0x248))
                        rdx_28 = rax_14
                    
                    void* rcx_132 = &var_380
                    
                    if (var_368 != 0)
                        rcx_132 = var_368
                    
                    void* rbx_25 = *(rcx_132 + (sx.q(rdx_28) << 3))
                    
                    if (rbx_25 == 0)
                        i_2 = 0
                    else
                        int64_t* rcx_133 = rdi_6[1]
                        
                        if (rcx_133 == 0)
                            i_2 = 0
                        else
                            int64_t* rax_130 = (*(*rcx_133 + 0x280))(rcx_133)
                            uint64_t rdx_40 = zx.q(*(rbx_25 + 0x1548))
                            void* r12_8 = nullptr
                            int64_t var_780 = 0
                            int64_t r9_8 = *rax_130
                            void* rax_131 = (*(r9_8 + 0x40))(rax_130, rdx_40, &var_780, r9_8)
                            var_9a8_1.q = rax_131
                            void* rax_132 = sub_1405948b0(rax_131)
                            uint32_t rdx_41 = zx.d(rbx_16)
                            void* r13_5 = nullptr
                            
                            if (rdx_41 == 0)
                                r13_5 = sub_1419cec70(*(rax_132 + 0x28), &data_143f2e3b8, 0)
                                r12_8 = rax_132
                            else if (rdx_41 == 1)
                                r13_5 = sub_1419cec70(*(rax_132 + 0x28), &data_143f2e518, 0)
                                r12_8 = rax_132
                            else if (rdx_41 == 2)
                                r13_5 = sub_1419cec70(*(rax_132 + 0x28), &data_143f2e678, 0)
                                r12_8 = rax_132
                            else if (rdx_41 == 3)
                                r13_5 = sub_1419cec70(*(rax_132 + 0x28), &data_143f2e7d8, 0)
                                r12_8 = rax_132
                            else if (rdx_41 == 5)
                                r13_5 = sub_1419cec70(*(rax_132 + 0x28), &data_143f2e258, 0)
                                r12_8 = rax_132
                            
                            void* rbx_26
                            
                            if (r15_4[7].d s<= 0 || *(r15_4 + 0x38) == 0)
                                rbx_26.b = 0
                            else
                                rbx_26.b = 1
                            
                            char var_9d8_2 = rbx_26.b
                            void* rax_134 = sub_1405948b0(var_9a8_1.q)
                            void* rdx_46 = &data_143f2df98
                            
                            if (rbx_26.b == 0)
                                rdx_46 = &data_143f2e0f8
                            
                            void* rax_135 = sub_1419cec70(*(rax_134 + 0x28), rdx_46, 0)
                            
                            if (rax_135 == 0 || r13_5 == 0)
                                r12 = arg1
                                i_2 = 0
                            else
                                int64_t* rax_136 = var_9a8_1.q
                                int64_t rdx_47 = *rax_136
                                int32_t rax_137 = (*(rdx_47 + 0x1d8))(rax_136, rdx_47)
                                int64_t rdx_48 = data_1439ec278
                                int64_t rax_140
                                int64_t var_668_5
                                
                                if (rax_137 - 1 u> 5)
                                    rax_140 = data_14395da00
                                    var_668_5 = rax_140
                                else
                                    switch (rax_137)
                                        case 1
                                            rax_140 = data_14395da00
                                            var_668_5 = rax_140
                                        case 2
                                            rax_140 = rdx_48
                                            int64_t var_668_4 = rdx_48
                                        case 3
                                            rax_140 = data_1439b54a0
                                            var_668_5 = rax_140
                                        case 4
                                            rax_140 = data_1439ec290
                                            var_668_5 = rax_140
                                        case 5
                                            rax_140 = data_1439b68f8
                                            var_668_5 = rax_140
                                        case 6
                                            rax_140 = data_1439b6910
                                            var_668_5 = rax_140
                                int64_t rcx_142 = rdi_6[3]
                                int128_t var_940
                                var_940.q = rcx_142
                                
                                if (rcx_142 != 0)
                                    rax_140 = rdx_48
                                
                                int64_t var_668_6 = rax_140
                                int64_t rax_141 = data_1439ec2a8
                                
                                if (var_9d8_2 != 0)
                                    rax_141 = data_1439ec2c0
                                
                                var_698.q = rax_141
                                int64_t rdx_49 = sx.q(*(rax_135 + 0x10c))
                                int64_t* rbx_29 = *(rax_134 + 0x10)
                                int64_t rax_142 = rbx_29[3]
                                
                                if (*(rax_142 + (rdx_49 << 3)) == 0)
                                    sub_1419ccf30(rbx_29, rdx_49.d)
                                    rax_142 = rbx_29[3]
                                
                                var_698:8.q = *(rax_142 + (rdx_49 << 3))
                                int64_t rdx_50 = sx.q(*(r13_5 + 0x10c))
                                int64_t* rbx_30 = *(r12_8 + 0x10)
                                int64_t rax_144 = rbx_30[3]
                                
                                if (*(rax_144 + (rdx_50 << 3)) == 0)
                                    sub_1419ccf30(rbx_30, rdx_50.d)
                                    rax_144 = rbx_30[3]
                                
                                var_678_1.q = *(rax_144 + (rdx_50 << 3))
                                int32_t rax_146 = 0
                                
                                if (*(r15_4 + 0x7b) == 1)
                                    rax_146 = 2
                                
                                int32_t var_640_2 = rax_146
                                sub_1419870b0(rsi, &var_698, 2)
                                int32_t rbx_31 = var_9c8
                                void*** rcx_148 = (rsi[6] + 7) & 0xfffffffffffffff8
                                void* rax_147 = &rcx_148[3]
                                
                                if (rax_147 u> rsi[7])
                                    sub_140b0e3d0(&rsi[6], 0x20)
                                    rcx_148 = (rsi[6] + 7) & 0xfffffffffffffff8
                                    rax_147 = &rcx_148[3]
                                
                                rsi[6] = rax_147
                                int64_t* rax_148 = rsi[1]
                                *(rsi + 0x14) += 1
                                int32_t var_a28_4 = 0
                                *rax_148 = rcx_148
                                rsi[1] = &rcx_148[1]
                                rcx_148[2].d = rbx_31
                                rcx_148[1] = 0
                                *rcx_148 = &data_142f18bb8
                                int64_t var_7f8 = rsi[0x31]
                                sub_1405eb5d0(rsi, &var_7f8, rax_135 + 0x130, &var_6e8, var_a28_4)
                                int32_t zmm0_8
                                
                                zmm0_8 = var_9d6 == 0 ? zmm12.d : zmm14
                                
                                int64_t var_7f0 = rsi[0x31]
                                int32_t var_948 = zmm0_8
                                sub_1405eb490(rsi, &var_7f0, rax_135 + 0x136, &var_948, 0)
                                int64_t* var_a10_1
                                var_a10_1.d = 0
                                int64_t r12_9 = var_9a8_1.q
                                var_a20.q = rbx_25
                                int32_t var_a28_5
                                var_a28_5.q = r12_9
                                sub_141439ac0(rax_135, rsi, rsi[0x31], rax_130, var_a28_5, var_a20, 
                                    rbx_25.d + 0x10)
                                int64_t rbx_33 = rsi[0x34]
                                int64_t var_7e8 = rbx_33
                                sub_1405d0e10(rsi, &var_7e8, r13_5 + 0x13c, r15_4, 0)
                                var_a10_1.d = 0xd
                                var_a20.q = rbx_25
                                int32_t var_a28_6
                                var_a28_6.q = r12_9
                                zmm12, zmm13_1, zmm14, zmm15_1 = sub_141439ac0(r13_5, rsi, rbx_33, 
                                    rax_130, var_a28_6, var_a20, rbx_25.d + 0x10)
                                uint8_t rax_154 = rax_69 u>> 2
                                float zmm0_9
                                
                                if (rax_69 s< 0)
                                    zmm0_9 = zmm12.d / zmm15_1
                                else if ((rax_154 & 1) == 0)
                                    zmm0_9 = zmm13_1
                                else
                                    zmm0_9 = zmm12.d
                                
                                if ((rax_154 & 1) == 0)
                                    zmm2_1 = var_988
                                else
                                    zmm2_1 = zmm12
                                
                                int32_t var_8cc_1 = zmm2_1.d
                                float zmm1_3 = zmm12.d / zmm0_9
                                int32_t var_8d0_1 = 0
                                int64_t var_7e0 = rsi[0x34]
                                int32_t var_a28_7 = 0
                                float var_8d4_1 = zmm1_3
                                float var_8d8 = zmm1_3 * 2.20000005f
                                sub_1405d0e10(rsi, &var_7e0, r13_5 + 0x130, &var_8d8, var_a28_7)
                                int64_t var_8c4_1 = 0
                                int32_t var_8bc_1 = 0
                                var_a28 = 0
                                int64_t rax_158 = rsi[0x34]
                                uint128_t zmm0_10 = _mm_cvtepi32_ps(zx.o(rcx_68 u>> 5) & 1)
                                int64_t var_7d8 = rax_158
                                int32_t var_8c8 = zmm0_10.d
                                int64_t r9_16 =
                                    sub_1405d0e10(rsi, &var_7d8, r13_5 + 0x136, &var_8c8, var_a28)
                                void* rdx_59 = var_940.q
                                
                                if (rdx_59 != 0)
                                    void* rdx_60 = *(rdx_59 + 8)
                                    int64_t var_960 = 0
                                    sub_1405d16e0(&var_960, rdx_60)
                                    int64_t* rax_159 = var_970
                                    int64_t* var_7c8 = rax_159
                                    
                                    if (rax_159 != 0)
                                        rax_159[1].d += 1
                                    
                                    int64_t* rbx_34 = var_970
                                    int64_t rdi_14 = rsi[0x34]
                                    var_940.q = var_960
                                    
                                    if (*(r13_5 + 0x148) u> 0)
                                        uint32_t r12_10 = zx.d(*(r13_5 + 0x146))
                                        void*** rcx_163 = (rsi[6] + 7) & 0xfffffffffffffff8
                                        void* rax_161 = &rcx_163[5]
                                        
                                        if (rax_161 u> rsi[7])
                                            sub_140b0e3d0(&rsi[6], 0x30)
                                            rcx_163 = (rsi[6] + 7) & 0xfffffffffffffff8
                                            rax_161 = &rcx_163[5]
                                        
                                        rsi[6] = rax_161
                                        void**** rax_162 = rsi[1]
                                        *(rsi + 0x14) += 1
                                        *rax_162 = rcx_163
                                        rsi[1] = &rcx_163[1]
                                        rcx_163[1] = 0
                                        *rcx_163 = &data_142d5a070
                                        rcx_163[4] = var_940.q
                                        rcx_163[2] = rdi_14
                                        rcx_163[3].d = r12_10
                                    
                                    if (*(r13_5 + 0x144) u> 0)
                                        uint32_t r12_11 = zx.d(*(r13_5 + 0x142))
                                        
                                        if ((*(*rbx_34 + 8))(rbx_34) == 0)
                                            void*** rcx_170 = (rsi[6] + 7) & 0xfffffffffffffff8
                                            void* rax_167 = &rcx_170[5]
                                            
                                            if (rax_167 u> rsi[7])
                                                sub_140b0e3d0(&rsi[6], 0x30)
                                                rcx_170 = (rsi[6] + 7) & 0xfffffffffffffff8
                                                rax_167 = &rcx_170[5]
                                            
                                            rsi[6] = rax_167
                                            void**** rax_168 = rsi[1]
                                            *(rsi + 0x14) += 1
                                            *rax_168 = rcx_170
                                            rsi[1] = &rcx_170[1]
                                            rcx_170[1] = 0
                                            *rcx_170 = &data_142d5a080
                                            rcx_170[2] = rdi_14
                                            rcx_170[3].d = r12_11
                                            rcx_170[4] = rbx_34
                                    
                                    sub_1405d1550(&var_7c8)
                                    r9_16 = sub_1405d1550(&var_960)
                                
                                if (var_9d8_2 == 0)
                                    void*** rcx_191 = (rsi[6] + 7) & 0xfffffffffffffff8
                                    void* rax_179 = &rcx_191[5]
                                    
                                    if (rax_179 u> rsi[7])
                                        r9_16 = sub_140b0e3d0(&rsi[6], 0x30)
                                        rcx_191 = (rsi[6] + 7) & 0xfffffffffffffff8
                                        rax_179 = &rcx_191[5]
                                    
                                    r12 = arg1
                                    rsi[6] = rax_179
                                    *(rsi + 0x14) += 1
                                    *rsi[1] = rcx_191
                                    rsi[1] = &rcx_191[1]
                                    rcx_191[1] = 0
                                    *rcx_191 = &data_142d56618
                                    rcx_191[2].d = 1
                                    rcx_191[3] = 0
                                    rcx_191[4].d = 0
                                    uint64_t rax_182 = zx.q(*(r15_4 + 0x5c))
                                    int64_t rdi_17 = *(r12 + 0x30)
                                    void*** rcx_197 = (rsi[6] + 7) & 0xfffffffffffffff8
                                    void* rax_183 = &rcx_197[5]
                                    
                                    if (rax_183 u> rsi[7])
                                        r9_16 = sub_140b0e3d0(&rsi[6], 0x30)
                                        rcx_197 = (rsi[6] + 7) & 0xfffffffffffffff8
                                        rax_183 = &rcx_197[5]
                                    
                                    rsi[6] = rax_183
                                    *(rsi + 0x14) += 1
                                    *rsi[1] = rcx_197
                                    rsi[1] = &rcx_197[1]
                                    rcx_197[1] = 0
                                    *rcx_197 = &data_142d56618
                                    rcx_197[2].d = 0
                                    rcx_197[3] = rdi_17
                                    rcx_197[4].d = (rax_182 * 5).d << 3
                                    int64_t rbx_40 = *(r12 + 0x58)
                                    int32_t rdi_18 = r15_4[6].d
                                    int32_t r15_7 = *(r15_4 + 0x64)
                                    
                                    if (rbx_40 == 0)
                                        sub_140af98a0("Unknown", 0xbc8, 
                                            Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
                                            r9_16)
                                        sub_140afbb40()
                                    
                                    void*** rcx_203 = (rsi[6] + 7) & 0xfffffffffffffff8
                                    void* rax_186 = &rcx_203[6]
                                    
                                    if (rax_186 u> rsi[7])
                                        sub_140b0e3d0(&rsi[6], 0x38)
                                        rcx_203 = (rsi[6] + 7) & 0xfffffffffffffff8
                                        rax_186 = &rcx_203[6]
                                    
                                    rsi[6] = rax_186
                                    void**** rax_187 = rsi[1]
                                    *(rsi + 0x14) += 1
                                    *rax_187 = rcx_203
                                    rsi[1] = &rcx_203[1]
                                    rcx_203[1] = 0
                                    *rcx_203 = &data_142f11598
                                    rcx_203[5].d = var_9b8_1
                                    *(rcx_203 + 0x2c) = 1
                                    rcx_203[2] = rbx_40
                                    rcx_203[3] = 0
                                    rcx_203[4].d = r15_7
                                    *(rcx_203 + 0x24) = rdi_18
                                    i_2 = 0
                                else
                                    int64_t* rcx_176 = *(r15_4 + 0x38)
                                    int32_t r12_12 = r15_4[7].d
                                    int64_t r9_18 =
                                        (*(*rcx_176 + 8))(rcx_176, rsi, 1, zx.q(*(r15_4 + 0x74)))
                                    uint64_t rax_171 = zx.q(*(r15_4 + 0x5c))
                                    void*** rcx_179 = (rsi[6] + 7) & 0xfffffffffffffff8
                                    int64_t rdi_15 = *(arg1 + 0x30)
                                    void* rax_172 = &rcx_179[5]
                                    
                                    if (rax_172 u> rsi[7])
                                        r9_18 = sub_140b0e3d0(&rsi[6], 0x30)
                                        rcx_179 = (rsi[6] + 7) & 0xfffffffffffffff8
                                        rax_172 = &rcx_179[5]
                                    
                                    rsi[6] = rax_172
                                    *(rsi + 0x14) += 1
                                    *rsi[1] = rcx_179
                                    rsi[1] = &rcx_179[1]
                                    rcx_179[1] = 0
                                    *rcx_179 = &data_142d56618
                                    rcx_179[2].d = 0
                                    rcx_179[3] = rdi_15
                                    rcx_179[4].d = (rax_171 * 5).d << 3
                                    int64_t rbx_37 = *(arg1 + 0x58)
                                    int32_t rdi_16 = r15_4[6].d
                                    int32_t r15_6 = *(r15_4 + 0x64)
                                    
                                    if (rbx_37 == 0)
                                        sub_140af98a0("Unknown", 0xbc8, 
                                            Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
                                            r9_18)
                                        sub_140afbb40()
                                    
                                    void*** rcx_185 = (rsi[6] + 7) & 0xfffffffffffffff8
                                    void* rax_175 = &rcx_185[6]
                                    
                                    if (rax_175 u> rsi[7])
                                        sub_140b0e3d0(&rsi[6], 0x38)
                                        rcx_185 = (rsi[6] + 7) & 0xfffffffffffffff8
                                        rax_175 = &rcx_185[6]
                                    
                                    rsi[6] = rax_175
                                    int64_t* rax_176 = rsi[1]
                                    *(rsi + 0x14) += 1
                                    *rax_176 = rcx_185
                                    rsi[1] = &rcx_185[1]
                                    rcx_185[1] = 0
                                    rcx_185[2] = rbx_37
                                    i_2 = 0
                                    *rcx_185 = &data_142f11598
                                    *(rcx_185 + 0x2c) = r12_12
                                    r12 = arg1
                                    rcx_185[5].d = var_9b8_1
                                    rcx_185[3] = 0
                                    rcx_185[4].d = r15_6
                                    *(rcx_185 + 0x24) = rdi_16
                else if (rbx_16 != 6)
                    i_2 = 0
                else
                label_141b57568:
                    void*** rcx_209 = (rsi[6] + 7) & 0xfffffffffffffff8
                    void* rax_190 = &rcx_209[2]
                    
                    if (rax_190 u> rsi[7])
                        sub_140b0e3d0(&rsi[6], 0x18)
                        rcx_209 = (rsi[6] + 7) & 0xfffffffffffffff8
                        rax_190 = &rcx_209[2]
                    
                    rsi[6] = rax_190
                    int64_t* rax_191 = rsi[1]
                    *(rsi + 0x14) += 1
                    zmm0_3 = data_142d3f7e0
                    *rax_191 = rcx_209
                    rsi[1] = &rcx_209[1]
                    rcx_209[1] = 0
                    *rcx_209 = &data_142d549b8
                    *(rsi + 0x1c4) = 0
                    rsi[0x2f].w = 0
                    int64_t* rcx_213 = *arg5
                    int64_t* var_358 = nullptr
                    int32_t var_350_1 = 0xbf800000
                    int32_t var_34c_1 = 0xbf800000
                    uint128_t var_348_1 = zmm0_3
                    int32_t var_338_1 = 0xbf800000
                    int32_t var_334_1 = 0xbf800000
                    int64_t var_328_1 = 0
                    uint128_t* var_318_1 = nullptr
                    int64_t var_2e8_1 = 0
                    uint128_t* var_2d8_1 = nullptr
                    int64_t* rax_194 = (*(*rcx_213 + 8))(rcx_213)
                    int64_t* rbx_41 = var_358
                    var_358 = rax_194
                    
                    if (rax_194 != 0)
                        rax_194[1].d += 1
                    
                    if (rbx_41 != 0)
                        rbx_41[1].d -= 1
                        
                        if (rbx_41[1].d == 1)
                            char rax_196
                            
                            if (rbx_41[2].b == 0 && data_143f0f1d0 == 0)
                                rax_196 = sub_1405949a0()
                            
                            if (rbx_41[2].b != 0 || (data_143f0f1d0 == 0 && rax_196 != 0))
                                (**rbx_41)(rbx_41, 1)
                            else
                                bool z_1
                                
                                if (0 == *(rbx_41 + 0xc))
                                    *(rbx_41 + 0xc) = 1
                                    z_1 = true
                                else
                                    *(rbx_41 + 0xc)
                                    z_1 = false
                                
                                if (z_1)
                                    sub_1405dcc10(&data_143f02390, rbx_41)
                    
                    void* rcx_215 = *arg5
                    zmm2_1 = 0.o
                    uint64_t rax_199 = zx.q(*(rcx_215 + 0x60))
                    uint128_t var_858_1
                    var_858_1:8.q = r15_4
                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                    void* var_820_1 = r12
                    zmm0_3.d = float.s(rax_199)
                    int64_t var_298_1 = 0
                    zmm1_1.d = float.s(zx.q(*(rcx_215 + 0x64)))
                    zmm2_1.d = zmm0_3.d
                    zmm0_3 = *r15_4
                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0x27)
                    var_348_1 = zmm0_3
                    zmm2_1.d = zmm1_1.d
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x39)
                    var_350_1.o = zmm2_1
                    int32_t var_330_1 = *(rcx_215 + 0x60)
                    var_868_1.q = &var_9c8
                    var_868_1:8.q = &var_9b0
                    var_858_1.q = arg3
                    uint128_t var_848_1
                    var_848_1.q = arg4
                    var_848_1:8.q = arg6
                    var_838.q = &var_918
                    var_830_1.q = &var_920
                    int32_t var_32c_1 = *(rcx_215 + 0x64)
                    char* var_828_1 = &var_9d6
                    int64_t var_8b8_1
                    var_8b8_1.o = zmm2_1
                    int64_t var_9a0
                    var_9a0.o = zmm0_3
                    uint128_t* rax_205 = sub_140a82f30(0x60, 8, arg9)
                    uint128_t zmm0_11 = var_868_1
                    *rax_205 = &data_14306d088
                    *(rax_205 + 8) = zmm0_11
                    *(rax_205 + 0x18) = var_858_1
                    *(rax_205 + 0x28) = var_848_1
                    *(rax_205 + 0x38) = var_838
                    *(rax_205 + 0x48) = var_828_1.o
                    *(rax_205 + 0x58) = arg9
                    int128_t zmm5_2 = var_328_1.o
                    uint64_t (* var_2a8)(int64_t* arg1, void* arg2, void* arg3)
                    uint64_t (* rax_206)(int64_t* arg1, void* arg2, void* arg3) = var_2a8
                    int128_t zmm4_2 = var_318_1.o
                    
                    if (rax_205 != -8)
                        rax_206 = j_sub_141b4b670
                    
                    uint128_t var_308
                    zmm3_1 = var_308
                    uint128_t var_2f8
                    zmm2_1 = var_2f8
                    var_328_1.o = rax_206.o
                    int128_t var_178_1 = zmm5_2
                    int128_t var_168_1 = zmm4_2
                    uint128_t var_158_1 = zmm3_1
                    uint128_t var_148_1 = zmm2_1
                    var_318_1.o = rax_205.o
                    var_2a8.o = zmm5_2
                    uint128_t var_288
                    var_308 = var_288
                    uint128_t var_278
                    var_2f8 = var_278
                    uint128_t* var_298_2
                    var_298_2.o = zmm4_2
                    var_288 = zmm3_1
                    var_278 = zmm2_1
                    
                    if (zmm5_2.q != 0)
                        uint128_t* rcx_218 = &var_288
                        
                        if (var_298_2 != 0)
                            rcx_218 = var_298_2
                        
                        (*(*rcx_218 + 0x10))(rcx_218, &data_14306d088)
                    
                    zmm5_2 = var_2e8_1.o
                    zmm4_2 = var_2d8_1.o
                    int32_t* var_728_1 = &var_9c8
                    uint128_t var_2c8
                    zmm3_1 = var_2c8
                    void** const var_248 = &data_142d42ed8
                    uint128_t var_2b8
                    zmm2_1 = var_2b8
                    int128_t var_138_1 = zmm5_2
                    int128_t var_128_1 = zmm4_2
                    uint128_t var_118_1 = zmm3_1
                    uint128_t var_108_1 = zmm2_1
                    var_2d8_1.o = nullptr.o
                    uint128_t var_240_1 = rsi.o
                    int64_t (* var_268_1)(int64_t* arg1)
                    var_268_1.o = zmm5_2
                    var_2e8_1.o = j_sub_141b4b560.o
                    var_2c8 = var_248.o
                    var_2b8 = var_240_1
                    void*** var_258_1
                    var_258_1.o = zmm4_2
                    var_248.o = zmm3_1
                    var_240_1 = zmm2_1
                    
                    if (zmm5_2.q != 0)
                        void** const* rcx_219 = &var_248
                        
                        if (var_258_1 != 0)
                            rcx_219 = var_258_1
                        
                        (*rcx_219)[2](rcx_219)
                    
                    int64_t* rcx_220 = *(r12 + 0x88)
                    zmm0_11 = *(r15_4 + 0x14)
                    int32_t var_900 = int.d(fconvert.t(r15_4[1].d))
                    int32_t var_8f8_1 = zmm0_11.d
                    int32_t var_8fc_1 = int.d(fconvert.t(*(r15_4 + 0x18)))
                    var_a28.q = &var_358
                    zmm12, zmm13_1, zmm14, zmm15_1 =
                        sub_141b4d850(rcx_220, rsi, rax_9, &var_900, var_a28)
                    
                    if (var_2e8_1 != 0)
                        uint128_t* rcx_221 = &var_2c8
                        
                        if (var_2d8_1 != 0)
                            rcx_221 = var_2d8_1
                        
                        (*(*rcx_221 + 0x10))(rcx_221)
                    
                    if (var_328_1 != 0)
                        uint128_t* rcx_222 = &var_308
                        
                        if (var_318_1 != 0)
                            rcx_222 = var_318_1
                        
                        (*(*rcx_222 + 0x10))(rcx_222)
                    
                    sub_1405d1550(&var_358)
                    i_2 = 0
            r15 = arg3
        i_1 = i_3
    while (i_1 != 0xffffffff)

if (*(r12 + 0xa9) != 0 && data_143f2d368 != 0 && data_143f2d36c s> 0)
    if (*(rsi + 0x1c4) != 0)
        sub_141096650(rsi)
    
    zmm0_3 = data_142d3f7e0
    int64_t rax_227 = *r15
    int64_t var_228 = 0
    int32_t var_220_1 = 0xbf800000
    int32_t var_21c_1 = 0xbf800000
    uint128_t var_218_1 = zmm0_3
    int32_t var_208_1 = 0xbf800000
    int32_t var_204_1 = 0xbf800000
    int64_t var_1f8_1 = 0
    int64_t var_1e8_1 = 0
    int64_t var_1b8_1 = 0
    int64_t var_1a8_1 = 0
    sub_1405d16e0(&var_228, *(*(rax_227 + 8))(r15))
    int64_t var_9a0_1 = 0
    void var_718
    uint128_t zmm6_1 = zx.o(*((*(*r15 + 0x18))(r15, &var_718) + 4))
    int64_t rax_231 = *r15
    zmm6_1 = _mm_cvtepi32_ps(zmm6_1)
    float zmm1_4[0x4] = var_9a0_1.o
    void var_710
    uint128_t zmm0_12 = zx.o(*(*(rax_231 + 0x18))(r15, &var_710))
    int64_t rax_233 = *r15
    zmm1_4 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0xd2)
    zmm1_4[0] = _mm_cvtepi32_ps(zmm0_12).d
    zmm1_4 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0x27)
    zmm1_4[0] = zmm6_1.d
    zmm1_4 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0x39)
    var_9a0_1.o = zmm1_4
    var_220_1.o = zmm1_4
    int64_t var_9a0_2 = 0
    void var_708
    zmm6_1 = zx.o(*((*(rax_233 + 0x18))(r15, &var_708) + 4))
    int64_t rax_235 = *r15
    zmm6_1 = _mm_cvtepi32_ps(zmm6_1)
    zmm1_4 = var_9a0_2.o
    void var_700
    zmm0_12 = zx.o(*(*(rax_235 + 0x18))(r15, &var_700))
    int64_t rax_237 = *r15
    zmm1_4 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0xd2)
    zmm1_4[0] = _mm_cvtepi32_ps(zmm0_12).d
    zmm1_4 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0x27)
    zmm1_4[0] = zmm6_1.d
    var_218_1 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0x39)
    void var_6f8
    int32_t* rax_238 = (*(rax_237 + 0x18))(r15, &var_6f8)
    int32_t var_200_1 = *rax_238
    int32_t var_1fc_1 = rax_238[1]
    sub_141b4fe50(*(r12 + 0x88), rsi, rax_9, &var_228, zmm6_1)
    void var_4c8
    sub_1414bfe70(&var_4c8, *arg4, 5, 0, false, 0xffffffff)
    int64_t var_408_1 = *arg6
    void var_3c0
    sub_1405d1550(&var_3c0)
    sub_141b4abb0(&var_228)

void*** rcx_253 = (rsi[6] + 7) & 0xfffffffffffffff8
void* rax_242 = &rcx_253[5]

if (rax_242 u> rsi[7])
    sub_140b0e3d0(&rsi[6], 0x30)
    rcx_253 = (rsi[6] + 7) & 0xfffffffffffffff8
    rax_242 = &rcx_253[5]

rsi[6] = rax_242
int64_t* rax_243 = rsi[1]
*(rsi + 0x14) += 1
*rax_243 = rcx_253
rsi[1] = &rcx_253[1]
rcx_253[1] = 0
*rcx_253 = &data_142f18bc8
rcx_253[2].b = 0
*(rcx_253 + 0x14) = 0
*(rcx_253 + 0x1c) = 0
int64_t var_658_1 = data_14395d9e8

if (rax_14 + 1 s> 0)
    void* rcx_257 = var_390
    
    do
        void* rax_248 = &var_3a8
        
        if (rcx_257 != 0)
            rax_248 = rcx_257
        
        int64_t* rdi_20 = *(rax_248 + (i_2 << 3))
        
        if (rdi_20 != 0)
            sub_1422dbba0(rdi_20)
            j_sub_140a74f90(rdi_20)
            rcx_257 = var_390
        
        i_2 += 1
    while (i_2 s< sx.q(rax_14 + 1))

int32_t var_360_3 = 0

if (var_35c != 0)
    sub_141b657b0(&var_380, 0)

int32_t var_388_3 = 0

if (var_384 != 0)
    sub_141b657b0(&var_3a8, 0)

void*** rcx_264 = (rsi[6] + 7) & 0xfffffffffffffff8
void* rax_249 = &rcx_264[5]

if (rax_249 u> rsi[7])
    sub_140b0e3d0(&rsi[6], 0x30)
    rcx_264 = (rsi[6] + 7) & 0xfffffffffffffff8
    rax_249 = &rcx_264[5]

rsi[6] = rax_249
int64_t* rax_250 = rsi[1]
*(rsi + 0x14) += 1
*rax_250 = rcx_264
rsi[1] = &rcx_264[1]
*rcx_264 = &data_142f18bc8
rcx_264[2].b = 0
*(rcx_264 + 0x14) = 0
*(rcx_264 + 0x1c) = 0
rcx_264[1] = 0
int64_t result = sub_1405d1550(&var_970)

if (var_390 != 0)
    result = sub_140a74f90(var_390)

if (var_368 != 0)
    result = sub_140a74f90(var_368)

__security_check_cookie(rax_1 ^ &var_a48)
return result
