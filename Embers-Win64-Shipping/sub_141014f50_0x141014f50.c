// 函数: sub_141014f50
// 地址: 0x141014f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
int32_t rax_2 = *(arg2 + 0x130)
uint64_t rbx = 0
int32_t r13 = 0x20
uint64_t var_4c0 = 0

if (rax_2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_2)
    r13 = temp0_1

int64_t* rax_3 = *(arg2 + 0x128)
int32_t r11 = 0
int32_t r12 = *(arg1 + 0x50)
int32_t i = 0
int64_t* r14 = *(*(*(arg2 + 0x138) + 0x20) + 0x38)

if (r12 u>= 8)
    int64_t r11_1 = *(arg1 + 0x48)
    int32_t zmm4[0x4] = zx.o(0)
    int32_t zmm5[0x4] = zx.o(0)
    uint128_t zmm3
    
    do
        int64_t i_2 = sx.q(i)
        i += 8
        zmm4 = _mm_add_epi32(
            _mm_unpacklo_epi32(
                _mm_unpacklo_epi32(zx.o(*(i_2 * 0xa0 + r11_1 + 0x70)), 
                    zx.q(*(i_2 * 0xa0 + r11_1 + 0x1b0))), 
                _mm_unpacklo_epi32(zx.o(*(i_2 * 0xa0 + r11_1 + 0x110)), 
                zx.q(*(i_2 * 0xa0 + r11_1 + 0x250))).q), 
            zmm4)
        zmm3 = _mm_add_epi32(
            _mm_unpacklo_epi32(
                _mm_unpacklo_epi32(zx.o(*(i_2 * 0xa0 + r11_1 + 0x2f0)), 
                    zx.q(*(i_2 * 0xa0 + r11_1 + 0x430))), 
                _mm_unpacklo_epi32(zx.o(*(i_2 * 0xa0 + r11_1 + 0x390)), 
                zx.q(*(i_2 * 0xa0 + r11_1 + 0x4d0))).q), 
            zmm5)
        zmm5 = zmm3
    while (i u< r12 - (r12 & 7))
    
    zmm4 = _mm_add_epi32(zmm4, zmm3)
    zmm4 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
    r11 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0]

int32_t rdx_4 = 0
int32_t r8_5 = 0

if (i u< r12)
    if (r12 - i u>= 2)
        int64_t r9_1 = *(arg1 + 0x48)
        
        do
            int64_t i_1 = sx.q(i)
            i += 2
            rdx_4 += *(i_1 * 0xa0 + r9_1 + 0x70)
            r8_5 += *(i_1 * 0xa0 + r9_1 + 0x110)
        while (i u< r12 - 1)
    
    if (i u< r12)
        r11 += *(sx.q(i) * 0xa0 + *(arg1 + 0x48) + 0x70)
    
    r11 += rdx_4 + r8_5

int64_t var_400 = 0
int64_t var_328
__builtin_memset(&var_328, 0, 0x18)
int32_t var_410 = 0
int32_t var_404 = 0
int32_t r8
int32_t var_40c = r8
(*(*r14 + 0x1f8))(r14, &var_410, &var_328, 0)
uint64_t rax_21 = zx.q(r13)
void* rax_23 = arg1 + ((rax_21 + 4) << 3)
sub_141019190(rax_23, &var_4c0, rax_3, r13.b, &var_328)
uint64_t rsi_4 = var_4c0
int64_t (* r14_1)(int64_t* arg1, int64_t* arg2, int16_t* arg3, int16_t* arg4, char* arg5) =
    *(rsi_4 + 0x78)
sub_14105c1a0(r14_1, arg2 + 0x1c0)
void* rax_24 = sub_141023fa0(arg2 + 0x1c0, r14_1)
int32_t rax_25 = sub_1410626f0(rax_24, 0)
int64_t* var_528
int64_t (* var_4e8)(int64_t* arg1, int64_t* arg2, int16_t* arg3, int16_t* arg4, char* arg5)

if (rax_25 == 0xffffffff)
    var_4e8 = r14_1
    void* r14_2 = *(arg2 + 0x1c8)
    int64_t var_4e0_1 = 8
    int64_t r15_3 = sx.q(*(r14_2 + 0xc0))
    int32_t rax_26 = (r15_3 + 1).d
    *(r14_2 + 0xc0) = rax_26
    
    if (rax_26 s> *(r14_2 + 0xc4))
        sub_1405a4f90(r14_2 + 0xb8)
    
    *(*(r14_2 + 0xb8) + r15_3 * 0x10) = var_4e8.o
    sub_141069360(rax_24, 0, 8)
else if (rax_25 != 8)
    var_528.d = 0
    sub_1410129f0(arg2 + 0x1c0, r14_1, rax_25, 8, var_528.d)
    sub_141069360(rax_24, 0, 8)

void* rcx_17 = *(arg1 + 0x18)

if (rcx_17 != 0 && data_1439c7a34 u> 1)
    while (*(rcx_17 + 0x20) != *(arg2 + 0x138))
        rcx_17 = *(rcx_17 + 0x90)
        
        if (rcx_17 == 0)
            break

uint64_t r14_3 = zx.q(r13)
void* rax_31 = *rax_23
int32_t var_488
int128_t var_470

if (*(r14_3 + arg1 + 0x40) == 0)
    int64_t rax_34 = *(rax_31 + 0xb0)
    int64_t var_480_1 = 0x1688
    var_488 = 0
    var_470 = zx.o(0)
    int32_t var_484_1 = 0xb
    int64_t var_478_1 = rax_34
    var_528.b = 0
    sub_141025d40(rcx_17, &var_488, rax_31 + 0x68, 4, var_528.b)
    *(r14_3 + arg1 + 0x40) = 1
else
    uint64_t r9_3 = zx.q(*(rcx_17 + 0xa4))
    
    if (*(rcx_17 + 0x64) == 1)
        *(rcx_17 + 0x70) = divu.dp.q(0:(*(rax_31 + 0xb8)), r9_3)
    
    var_528.b = 0
    sub_141025d40(rcx_17, rcx_17 + 0x60, rax_31 + 0x68, r9_3.d, var_528.b)

*(arg1 + 0xb4) = 0
uint32_t var_520
int32_t var_518
int128_t* var_510
char var_508
int32_t var_500
uint32_t var_4f0
void* r13_5

if (r12 == 0)
    r13_5 = arg2 + 0x1c0
else
    var_470:4.q = 0x10001
    int512_t zmm0_2
    zmm0_2.o = zx.o(0)
    var_488 = 1
    int128_t var_308 = zmm0_2.o
    zmm0_2.o = data_143dbb1e0
    int64_t var_480_2 = 0
    int32_t var_2e4_1 = 1 << r13.b
    int128_t var_2f4_1 = zmm0_2.o
    uint32_t rax_37 = r11 << 6
    zmm0_2.o = var_488.o
    var_510 = &var_308
    int128_t var_3b8 = zmm0_2.o
    var_518 = 8
    var_470.d = 1
    var_470:0xc.q = 1
    int32_t var_45c_1 = 1
    zmm0_2.o = 0x1000100000001
    var_520 = rax_37
    int128_t var_398_1 = 0x1000100000001
    var_528.d = 0x40
    int32_t var_2f8_1 = 1
    char var_2e0_1 = 0
    int64_t var_2d8_1 = 0
    int32_t var_2d0_1 = 0
    int64_t var_388_1 = 4.q
    uint64_t rax_38
    int512_t zmm0_3
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    rax_38, zmm0_3, zmm6_1, zmm7_1, zmm8_1 =
        sub_140fffee0(rax_3, nullptr, &var_3b8, 0x10, zmm0_2, var_528.d, var_520, var_518, var_510)
    rbx = rax_38
    
    if (rax_38 != 0)
        int64_t rdx_15 = *(rax_38 + 0x28)
        (*(rdx_15 + 8))(rax_38 + 0x28, rdx_15)
    
    var_4f0 = rax_37
    int32_t var_500_1 = 0
    int64_t* rcx_21 = *(rax_3[2] + 0x20)
    uint64_t var_4d8 = rbx
    int64_t r15_4 = *rcx_21
    int64_t r12_2
    int64_t* r14_4
    
    if ((*(rbx + 0x20) & 6) == 0)
        int64_t (* rax_42)(int64_t* arg1, int64_t* arg2, int16_t* arg3, int16_t* arg4, 
            char* arg5) = *(rbx + 0x30)
        var_4e8 = rax_42
        int64_t rax_43
        rax_43, zmm0_3, zmm6_1, zmm7_1, zmm8_1 =
            sub_1410130c0(rax_42 + 0x7c0, rax_37, 0x200, rbx + 0xf8)
        r12_2 = rax_43
    else if ((*(rbx + 0x168) & 4) == 0)
        r14_4 = *(rbx + 0x30)
        sub_14103f450(&var_488, r14_4)
        uint64_t rcx_23 = var_4d8
        int64_t rax_41
        int512_t zmm0_4
        rax_41, zmm0_4, zmm6_1, zmm7_1, zmm8_1 = sub_141012e10(
            *(r15_4 + (zx.q(r14_4[3].d) << 3) + 0x4a0), *(rcx_23 + 0x1c), *(rcx_23 + 0xd8), 
            &var_488, zmm0_3)
        r12_2 = rax_41
        zmm0_3 = j_sub_141059a80(&var_488, sub_14105a0a0(var_4d8, &var_488, zmm0_4))
    else
        r12_2 = *(rbx + 0xb0)
    
    *(rbx + 0x160) = var_500_1
    r14_4.b = 0
    int32_t r13_1 = 0
    *(rbx + 0x164) = var_4f0
    var_508 = 0
    int32_t var_4d0_1 = 0
    *(rbx + 0x168) = (*(rbx + 0x168) & 0xfffffffb) | 1
    int32_t rax_49 = 0
    int64_t var_378
    __builtin_memset(&var_378, 0, 0x2c)
    int32_t var_34c_1 = 0x80
    int32_t var_348_1 = 0xffffffff
    int32_t var_344_1 = 0
    int64_t var_338_1 = 0
    int32_t var_330_1 = 0
    var_500 = 0
    uint64_t var_4c8
    
    if (r12 u> 0)
        void* rsi_5 = arg1
        int128_t var_48_1 = zmm6_1
        int128_t var_58_1 = zmm7_1
        int128_t var_68_1 = zmm8_1
        int128_t zmm9
        int128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        
        do
            int64_t var_2c8_1 = 0
            zmm12 = zx.o(0)
            int64_t var_2c0_1 = 0
            zmm13 = zx.o(0)
            int64_t rcx_28 = sx.q(rax_49)
            int64_t* r15_7 = rcx_28 * 0xa0 + *(rsi_5 + 0x48)
            uint64_t r8_12 = *r15_7
            int32_t rdx_23 =
                ((*(*(rsi_5 + 0xa0) + (rcx_28 << 2)) * *(rsi_5 + 0x98)) & 0xffffff) | 0x2000000
            uint32_t r14_6 = zx.d(r15_7[0x13].b) << 0x18
            bool cond:2_1 = *(r15_7 + 0x99) != 0
            var_4c8 = r8_12
            var_4d8 = r8_12
            int32_t var_294_1 = rdx_23
            
            if (cond:2_1 || data_143e2c1bc != 0)
                rdx_23 |= 0x4000000
                int32_t var_294_2 = rdx_23
            
            if (*(r15_7 + 0x9a) != 0 || data_143e2c1c8 != 0)
                int32_t var_294_3 = rdx_23 | 0x1000000
            
            void* rcx_29 = *(r8_12 + (rax_21 << 3) + 0x50)
            int64_t var_290_1 = *(rcx_29 + 0xb0)
            sub_14105c1a0(*(rcx_29 + 0x78), arg2 + 0x1c0)
            char var_507 = 0
            void var_3f8
            void* rdx_27
            rdx_27, zmm0_3 = sub_140812a70(&var_378, &var_3f8, &var_4d8, &var_507)
            
            if (var_507 == 0)
                void* r13_4 = (rax_21 << 4) + rsi_5
                uint32_t rcx_32 = *(r13_4 + 0x60)
                var_4f0 = rcx_32
                *(r13_4 + 0x60) = rcx_32 + 1
                
                if (rcx_32 + 1 s> *(r13_4 + 0x64))
                    zmm0_3 = sub_1405a4d70(r13_4 + 0x58)
                    rcx_32 = var_4f0
                
                rdx_27 = *(var_4c8 + (rax_21 << 3) + 0x50)
                *(*(r13_4 + 0x58) + (sx.q(rcx_32) << 3)) = rdx_27
                
                if (rdx_27 != 0)
                    (*(*(rdx_27 + 0x20) + 8))(rdx_27 + 0x20)
                
                r13_1 = var_500
            
            uint64_t rax_56 = r15_7[0xf]
            int32_t r11_2 = r15_7[0x12].d
            int32_t r9_7 = r15_7[0xe].d
            rdx_27.b = rax_56 != 0
            var_4d8 = rax_56
            int32_t r10
            
            if (r11_2 != 1)
                r10 = 0
            else
                void* rcx_36 = &r15_7[0x10]
                void* rax_57 = *(rcx_36 + 8)
                
                if (rax_57 != 0)
                    rcx_36 = rax_57
                
                r10 = *rcx_36
            
            var_508 |= rdx_27.b
            int32_t rdx_30 = 0
            
            if (r9_7 != 0)
                zmm11 = var_2c8_1.o
                uint64_t rsi_6 = var_4d8
                
                do
                    int64_t r8_15 = sx.q(rdx_30)
                    int32_t rax_59
                    
                    if (r11_2 s<= 1)
                        rax_59 = r10
                    else
                        void* rcx_37 = &r15_7[0x10]
                        void* rax_58 = *(rcx_37 + 8)
                        
                        if (rax_58 != 0)
                            rcx_37 = rax_58
                        
                        rax_59 = *(rcx_37 + (r8_15 << 2))
                    
                    r14_6 ^= (rax_59 ^ r14_6) & 0xffffff
                    
                    if (rsi_6 == 0)
                        void* rax_62 = r15_7[0xa]
                        void* rcx_38 = &r15_7[2]
                        
                        if (rax_62 != 0)
                            rcx_38 = rax_62
                        
                        void* rcx_39 = rcx_38 + (r8_15 << 6)
                        zmm0_3.o = *(rcx_39 + 0xc)
                        int32_t zmm1_2 = *(rcx_39 + 0x1c)
                        zmm11 = *rcx_39
                        zmm12 = *(rcx_39 + 4)
                        zmm13 = *(rcx_39 + 8)
                        int32_t zmm2_2 = *(rcx_39 + 0x10)
                        int32_t zmm5_1 = *(rcx_39 + 0x14)
                        zmm8_1 = *(rcx_39 + 0x18)
                        int32_t zmm3_1 = *(rcx_39 + 0x20)
                        zmm6_1 = *(rcx_39 + 0x24)
                        zmm9 = *(rcx_39 + 0x28)
                        int32_t zmm4_1 = *(rcx_39 + 0x30)
                        zmm7_1 = *(rcx_39 + 0x34)
                        zmm10 = *(rcx_39 + 0x38)
                        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
                        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xe1)
                        zmm11[0] = zmm2_2
                        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
                        zmm12[0] = zmm5_1
                        zmm13[0] = zmm8_1.d
                        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xc6)
                        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xc6)
                        zmm11[0] = zmm3_1
                        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xc6)
                        zmm12[0] = zmm6_1.d
                        zmm13[0] = zmm9.d
                        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0x27)
                        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x27)
                        zmm11[0] = zmm4_1
                        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0x27)
                        zmm12[0] = zmm7_1.d
                        zmm13[0] = zmm10.d
                        int32_t var_458_2 = zmm0_3.d
                        zmm0_3.o = *(rcx_39 + 0x2c)
                        int32_t var_454_1 = zmm1_2
                        zmm1_2 = *(rcx_39 + 0x3c)
                        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0x39)
                        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x39)
                        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0x39)
                        var_488.o = zmm11
                        uint32_t var_478_2 = zmm12[0]
                        var_470 = zmm13
                        int32_t var_450_1 = zmm0_3.d
                        int32_t var_44c_1 = zmm1_2
                    
                    zmm0_3.o = r14_6.o
                    rdx_30 += 1
                    uint64_t rax_63 = zx.q(r13_1)
                    r13_1 += 1
                    uint64_t rax_64 = rax_63 << 6
                    *(rax_64 + r12_2) = zmm11
                    *(rax_64 + r12_2 + 0x10) = zmm12
                    *(rax_64 + r12_2 + 0x20) = zmm13
                    *(rax_64 + r12_2 + 0x30) = zmm0_3.o
                while (rdx_30 u< r9_7)
                
                rsi_5 = arg1
                var_500 = r13_1
            
            *(rsi_5 + 0xb4) += *(var_4c8 + 0x24) * r9_7
            rax_49 = var_4d0_1 + 1
            var_4d0_1 = rax_49
        while (rax_49 u< r12)
        
        rbx = rax_38
        rsi_4 = var_4c0
        r14_4 = zx.q(var_508)
    
    sub_141008650(rax_3[2], nullptr, rbx, zmm0_3)
    r13_5 = arg2 + 0x1c0
    sub_14105c1a0(*(rbx + 0x80), r13_5)
    
    if (r14_4.b != 0)
        void var_288
        sub_141961860(&var_288, (1 << (data_1439c7a34).b) - 1)
        int64_t* rcx_45 = data_143f0f180
        void* var_268_1 = arg2
        void* var_260_1 = arg2
        char var_200_1 = 0
        var_520.b = 0
        var_528.b = 0
        (*(*rcx_45 + 0x5a8))(rcx_45, &var_4c8, &data_143f02b98, rbx, var_528, var_520)
        int64_t (* rdi_3)(int64_t* arg1, int64_t* arg2, int16_t* arg3, int16_t* arg4, char* arg5) =
            *(rbx + 0x80)
        sub_14105c1a0(rdi_3, r13_5)
        void* rax_71 = sub_141023fa0(r13_5, rdi_3)
        int32_t rax_72 = sub_1410626f0(rax_71, 0)
        
        if (rax_72 == 0xffffffff)
            var_4e8 = rdi_3
            void* rdi_4 = *(r13_5 + 8)
            int64_t var_4e0_2 = 8
            int64_t r14_7 = sx.q(*(rdi_4 + 0xc0))
            int32_t rax_73 = (r14_7 + 1).d
            *(rdi_4 + 0xc0) = rax_73
            
            if (rax_73 s> *(rdi_4 + 0xc4))
                sub_1405a4f90(rdi_4 + 0xb8)
            
            *(*(rdi_4 + 0xb8) + r14_7 * 0x10) = var_4e8.o
            sub_141069360(rax_71, 0, 8)
        else if (rax_72 != 8)
            var_528.d = 0
            sub_1410129f0(r13_5, rdi_3, rax_72, 8, var_528.d)
            sub_141069360(rax_71, 0, 8)
        
        void* var_258
        void*** rcx_56 = (var_258 + 7) & 0xfffffffffffffff8
        void* rax_75 = &rcx_56[2]
        int64_t var_250
        
        if (rax_75 u> var_250)
            sub_140b0e3d0(&var_258, 0x18)
            rcx_56 = (var_258 + 7) & 0xfffffffffffffff8
            rax_75 = &rcx_56[2]
        
        int32_t var_274
        int32_t var_274_1 = var_274 + 1
        int32_t r15_9 = 0
        int32_t rdi_5 = 0
        var_258 = rax_75
        int64_t* var_280
        *var_280 = rcx_56
        void** var_280_1 = &rcx_56[1]
        rcx_56[1] = 0
        *rcx_56 = &data_142da7758
        
        if (r12 != 0)
            do
                void* rcx_62 = sx.q(rdi_5) * 0xa0 + *(arg1 + 0x48)
                int32_t r14_8 = *(rcx_62 + 0x70)
                
                if (r14_8 != 0)
                    int64_t r9_9 = *(rcx_62 + 0x78)
                    
                    if (r9_9 != 0)
                        int64_t var_480_3 = r9_9
                        int32_t* var_4e0_3 = &var_488
                        var_488.q = &var_288
                        uint64_t rax_79 = var_4c8
                        var_520.q = &var_4e8
                        uint64_t var_478_3 = rax_79
                        var_4e8 = sub_141016000
                        var_528 = rax_79
                        sub_141018770(&var_288, r14_8, r15_9)
                
                r15_9 += r14_8
                rdi_5 += 1
            while (rdi_5 u< r12)
            
            rsi_4 = var_4c0
            r13_5 = arg2 + 0x1c0
        
        void* rcx_66 = (var_258 + 7) & 0xfffffffffffffff8
        void* rax_80 = rcx_66 + 0x10
        
        if (rax_80 u> var_250)
            sub_140b0e3d0(&var_258, 0x18)
            rcx_66 = (var_258 + 7) & 0xfffffffffffffff8
            rax_80 = rcx_66 + 0x10
        
        int32_t var_274_2 = var_274_1 + 1
        var_258 = rax_80
        *var_280_1 = rcx_66
        void* var_280_2 = rcx_66 + 8
        *(rcx_66 + 8) = 0
        *rcx_66 = &data_142da7768
        sub_1405d1550(&var_4c8)
        sub_1419628c0(&var_288)
    
    int64_t (* rdi_6)(int64_t* arg1, int64_t* arg2, int16_t* arg3, int16_t* arg4, char* arg5) =
        *(rbx + 0x80)
    sub_14105c1a0(rdi_6, r13_5)
    void* rax_83 = sub_141023fa0(r13_5, rdi_6)
    int32_t rax_84 = sub_1410626f0(rax_83, 0)
    
    if (rax_84 != 0xffffffff)
        int32_t r14_10 = 0x40
        int32_t rcx_79 = rax_84 | 0x40
        
        if ((rcx_79 & 0xac3) == rcx_79)
            r14_10 = rcx_79
        
        if (rax_84 != r14_10)
            var_528.d = 0
            sub_1410129f0(r13_5, rdi_6, rax_84, r14_10, var_528.d)
            sub_141069360(rax_83, 0, r14_10)
    else
        var_4e8 = rdi_6
        void* rdi_7 = *(r13_5 + 8)
        int64_t var_4e0_4 = 0x40
        int64_t r14_9 = sx.q(*(rdi_7 + 0xc0))
        int32_t rax_85 = (r14_9 + 1).d
        *(rdi_7 + 0xc0) = rax_85
        
        if (rax_85 s> *(rdi_7 + 0xc4))
            sub_1405a4f90(rdi_7 + 0xb8)
        
        *(*(rdi_7 + 0xb8) + r14_9 * 0x10) = var_4e8.o
        sub_141069360(rax_83, 0, 0x40)
    
    int32_t var_330_2 = 0
    
    if (var_338_1 != 0)
        sub_140a74f90(var_338_1)
    
    int64_t var_370
    var_370.d = 0
    int32_t var_348_2 = 0xffffffff
    int32_t var_344_2 = 0
    int64_t var_368
    sub_14059a8e0(&var_368, 0)
    int64_t var_358
    
    if (var_358 != 0)
        sub_140a74f90(var_358)
    
    int64_t rcx_86 = var_378
    
    if (rcx_86 != 0)
        sub_140a74f90(rcx_86)

sub_14105c1a0(*(*rax_23 + 0x78), r13_5)
sub_14105c1a0(*(rsi_4 + 0x78), r13_5)
int64_t var_3d0 = var_400
int128_t var_3e0 = var_410.o
int64_t rax_89

if (rbx == 0)
    rax_89 = 0
else
    rax_89 = *(rbx + 0xb8)

int64_t var_3d0_1 = rax_89
int64_t* rdi_10 = *(arg2 + 0x1c8) + 0x120
int64_t var_3e8 = *(*rax_23 + 0xb0)
int64_t var_3c0 = *(rsi_4 + 0xb0)
int64_t var_3c8 = 0
int32_t rax_92 = rdi_10[1].d + 1
rdi_10[1].d = rax_92

if (rax_92 s> *(rdi_10 + 0xc))
    sub_1405c4e40(rdi_10)
    rax_92 = rdi_10[1].d

int64_t rax_93 = *rdi_10
int64_t rcx_93 = sx.q(rax_92) << 5
*(rcx_93 + rax_93 - 0x20) = 2
*(rcx_93 + rax_93 - 0x18) = 0
void* rcx_94 = *(*(arg2 + 0x1c8) + 0x20)
*(rcx_94 + 0x3b8c) += 1
void* rdi_11 = *(arg2 + 0x1c8)
int32_t rdx_46 = *(rdi_11 + 0x128)
int64_t* rcx_95 = *(rdi_11 + 0x30)

if (rdx_46 != 0)
    (*(*rcx_95 + 0xd0))(rcx_95, rdx_46, *(rdi_11 + 0x120))
    *(rdi_11 + 0x128) = 0
    rdi_11 = *(arg2 + 0x1c8)

int64_t* rcx_96 = *(rdi_11 + 0x48)
(*(*rcx_96 + 0x240))(rcx_96, &var_3e8, 0, 0, var_528, var_520, var_518, var_510, var_508, var_500, 
    r12, var_4f0)
int64_t* rdi_13 = *(arg2 + 0x1c8) + 0x120
int32_t rax_97 = rdi_13[1].d + 1
rdi_13[1].d = rax_97

if (rax_97 s> *(rdi_13 + 0xc))
    sub_1405c4e40(rdi_13)
    rax_97 = rdi_13[1].d

int64_t rax_98 = *rdi_13
int64_t rcx_99 = sx.q(rax_97) << 5
*(rcx_99 + rax_98 - 0x20) = 2
*(rcx_99 + rax_98 - 0x18) = 0
void* rcx_100 = *(*(arg2 + 0x1c8) + 0x20)
*(rcx_100 + 0x3b8c) += 1
int64_t result = (*(*(rsi_4 + 0x20) + 0x10))(rsi_4 + 0x20)

if (rbx != 0)
    result = (*(*(rbx + 0x28) + 0x10))(rbx + 0x28)

__security_check_cookie(rax_1 ^ &var_548)
return result
