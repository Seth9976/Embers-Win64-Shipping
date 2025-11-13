// 函数: sub_14299a830
// 地址: 0x14299a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
int32_t zmm6[0x4]
int32_t var_38[0x4] = zmm6
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm11
int128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* rbp = arg1
int64_t rax_2
int64_t rdx_2
rdx_2:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x40) - *(arg1 + 0x38))
int64_t r15_1 = rdx_2 s>> 2
int64_t r15_2 = r15_1 + (r15_1 u>> 0x3f)
int64_t var_1a8 = r15_2
int32_t rdi = *(arg1 + 0x30)
uint128_t zmm7
zmm7.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* 0.125f
uint64_t rbx = zx.q(int.d(ceilf(zmm7.d).d))
int32_t var_1c8 = rbx.d
int32_t r14 = *(rbp + 0x34)
uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o(r14)).d f* 0.125f
uint64_t rsi = zx.q(int.d(ceilf(zmm0_1.d)))
int32_t var_1b0 = rsi.d
uint32_t j_16 = rdi - (rbx << 3).d + 8
int32_t r14_2 = r14 - (rsi << 3).d + 8
uint64_t rdi_2 = zx.q(int.d(floorf(zmm7.d)))
int32_t var_1d0 = rdi_2.d
int16_t* r13 = *(rbp + 0x18)
int16_t* var_198 = r13
int64_t* var_150
sub_142995aa0(&var_150, r15_2)
int64_t rax_7
int64_t rdx_4
rdx_4:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbp + 0x40) - *(rbp + 0x38))
int64_t rdx_5 = rdx_4 s>> 2
int64_t var_178
sub_142995b80(&var_178, rdx_5 + (rdx_5 u>> 0x3f))
int64_t rax_10
int64_t rdx_7
rdx_7:rax_10 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rbp + 0x40) - *(rbp + 0x38))
int64_t rdx_8 = rdx_7 s>> 2
int64_t rdx_9 = rdx_8 + (rdx_8 u>> 0x3f)
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if ((*(rbp + 0x58) - *(rbp + 0x50)) s>> 2 != rdx_9)
    sub_142c99e10(&exceptionObject, "Row pointers and types mismatch in count")
    _CxxThrowException(&exceptionObject, &data_143946868)
    noreturn

if (((rdx_9 - 1) & 0xfffffffffffffffd) != 0)
    sub_142996c30(&exceptionObject, "Only 1 and 3 channel encoding is supported")
    _CxxThrowException(&exceptionObject, &data_1439468a0)
    noreturn

void* r12 = rbp + 0x68
int64_t i_10 = sx.q(r15_2.d)
int64_t i_11 = i_10
sub_142992a30(r12, i_10, r12)
int64_t rax_17 = j_sub_140a82f30((sx.q((rbx.d * r15_2.d) << 6) << 1) + 0x20)
int64_t rdx_11 = rax_17

if (((rax_17 + 1).b & 0xf) == 0)
    rdx_11 = rax_17 + 1

if (((rax_17 + 2).b & 0xf) == 0)
    rdx_11 = rax_17 + 2

if (((rax_17 + 3).b & 0xf) == 0)
    rdx_11 = rax_17 + 3

if (((rax_17 + 4).b & 0xf) == 0)
    rdx_11 = rax_17 + 4

if (((rax_17 + 5).b & 0xf) == 0)
    rdx_11 = rax_17 + 5

if (((rax_17 + 6).b & 0xf) == 0)
    rdx_11 = rax_17 + 6

if (((rax_17 + 7).b & 0xf) == 0)
    rdx_11 = rax_17 + 7

if (((rax_17 + 8).b & 0xf) == 0)
    rdx_11 = rax_17 + 8

if (((rax_17 + 9).b & 0xf) == 0)
    rdx_11 = rax_17 + 9

if (((rax_17 + 0xa).b & 0xf) == 0)
    rdx_11 = rax_17 + 0xa

if (((rax_17 + 0xb).b & 0xf) == 0)
    rdx_11 = rax_17 + 0xb

if (((rax_17 + 0xc).b & 0xf) == 0)
    rdx_11 = rax_17 + 0xc

if (((rax_17 + 0xd).b & 0xf) == 0)
    rdx_11 = rax_17 + 0xd

if (((rax_17 + 0xe).b & 0xf) == 0)
    rdx_11 = rax_17 + 0xe

if (((rax_17 + 0xf).b & 0xf) == 0)
    rdx_11 = rax_17 + 0xf

if (((rax_17 + 0x10).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x10

if (((rax_17 + 0x11).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x11

if (((rax_17 + 0x12).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x12

if (((rax_17 + 0x13).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x13

if (((rax_17 + 0x14).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x14

if (((rax_17 + 0x15).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x15

if (((rax_17 + 0x16).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x16

if (((rax_17 + 0x17).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x17

if (((rax_17 + 0x18).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x18

if (((rax_17 + 0x19).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x19

if (((rax_17 + 0x1a).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x1a

if (((rax_17 + 0x1b).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x1b

if (((rax_17 + 0x1c).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x1c

if (((rax_17 + 0x1d).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x1d

if (((rax_17 + 0x1e).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x1e

if (((rax_17 + 0x1f).b & 0xf) == 0)
    rdx_11 = rax_17 + 0x1f

int64_t var_b8[0x2]
var_b8[0] = rdx_11

if (i_10 s> 1)
    int64_t rdx_12 = 1
    
    do
        void var_c0
        var_b8[rdx_12] = *(&var_c0 + (rdx_12 << 3)) + (sx.q(rbx.d << 6) << 1)
        rdx_12 += 1
    while (rdx_12 s< i_10)

int64_t* r9 = var_150
*r9 = *(rbp + 0x20)

if (r15_2.d u> 1)
    void* rdx_13 = &r9[1]
    int64_t* r8_6 = r9
    uint64_t i_5 = zx.q((r15_2 - 1).d)
    uint64_t i
    
    do
        *rdx_13 = *r8_6 + (sx.q(rsi.d * rbx.d) << 1)
        r8_6 = &r8_6[1]
        rdx_13 += 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    r9 = var_150

uint64_t r8_7 = 0
int32_t var_1cc = 0

if (rsi.d s> 0)
    int64_t r10_2 = 0
    int64_t var_188_1 = 0
    int32_t rcx_13 = (rsi - 1).d
    zmm7 = 0x3eb504fa
    zmm8 = zx.o(0)
    
    do
        int32_t rax_54 = 8
        
        if (r8_7.d == rcx_13)
            rax_54 = r14_2
        
        uint32_t j_12 = 8
        uint32_t j_11 = 8
        int32_t rcx_14 = 0
        int32_t var_1e0_1 = 0
        int32_t (* var_1d8)[0x4]
        int32_t var_1b8
        int32_t zmm0_4[0x4]
        
        if (rbx.d s> 0)
            int32_t r8_8 = (rbx - 1).d
            var_1b8 = r8_8
            int32_t (* rsi_1)[0x4] = nullptr
            var_1d8 = nullptr
            int64_t rbx_1 = 0
            int64_t var_1c0_1 = 0
            
            do
                uint32_t j_14 = j_16
                
                if (rcx_14 != r8_8)
                    j_14 = j_12
                
                uint32_t j_13 = j_14
                j_14.b = 1
                char j_15 = 1
                
                if (r15_2.d != 0)
                    int64_t* rbx_2 = nullptr
                    int64_t* r14_3 = r9
                    uint64_t i_7 = zx.q(r15_2.d)
                    int64_t r9_1 = var_178
                    uint64_t i_1
                    
                    do
                        int32_t (* rdx_15)[0x4] = *(rbx_2 + r9_1)
                        __builtin_memset(&rdx_15[1], 0, 0x70)
                        int16_t* rax_55 = *r14_3
                        uint32_t rcx_15 = zx.d(*rax_55)
                        *r14_3 = &rax_55[1]
                        *rdx_15 = _mm_insert_epi16(zx.o(0), rcx_15, 0)
                        *(rbp + 0x10) += 1
                        int16_t* j_1 = *(rbx_2 + r9_1)
                        int32_t j_6 = 0
                        
                        for (int32_t j = 1; j s< 0x40; )
                            int16_t rax_57 = *r13
                            
                            if (rax_57 == 0xff00)
                                j = 0x40
                            else if ((rax_57 & 0xff00) != 0xff00)
                                j_6 = j
                                j_1[sx.q(j)] = rax_57
                                j += 1
                            else
                                j += zx.d(rax_57.b)
                            
                            *(rbp + 0xc) += 1
                            r13 = &r13[1]
                        
                        var_198 = r13
                        
                        if (*(rbp + 8) == 0)
                            for (j_1 = nullptr; j_1 s< 0x80; j_1 = &j_1[1])
                                int64_t rdx_17 = *(rbx_2 + r9_1)
                                int16_t rax_60 = *(j_1 + rdx_17)
                                *(j_1 + rdx_17) = (rax_60 & 0xff00) | zx.w(rax_60.b)
                        
                        if (j_6 != 0)
                            j_15 = 0
                            data_143b86aa8(*(rbx_2 + r9_1), *(rbx_2 + *r12), j_1)
                            int64_t rcx_21 = *(rbx_2 + *r12)
                            
                            if (j_6 s< 2)
                                data_143b86ae8(rcx_21)
                            else if (j_6 s< 3)
                                data_143b86ae0(rcx_21)
                            else if (j_6 s< 9)
                                data_143b86ad8()
                            else if (j_6 s< 0xa)
                                data_143b86ad0()
                            else if (j_6 s< 0x14)
                                data_143b86ac8()
                            else if (j_6 s< 0x15)
                                data_143b86ac0()
                            else if (j_6 s>= 0x23)
                                data_143b86ab0()
                            else
                                data_143b86ab8()
                            
                            r9_1 = var_178
                        else
                            int64_t rcx_18 = *r12
                            **(rbx_2 + rcx_18) =
                                (*((zx.q(**(rbx_2 + r9_1)) << 2) + &data_1436bbc50))[0]
                            int32_t (* rax_64)[0x4] = *(rbx_2 + rcx_18)
                            zmm0_4 = *rax_64
                            zmm0_4[0] = zmm0_4[0] f* zmm7.d
                            zmm0_4[0] = zmm0_4[0] f* zmm7.d
                            zmm0_4 = _mm_shuffle_ps(zmm0_4, zmm0_4, 0)
                            *rax_64 = zmm0_4
                            rax_64[1] = zmm0_4
                            rax_64[2] = zmm0_4
                            rax_64[3] = zmm0_4
                            rax_64[4] = zmm0_4
                            rax_64[5] = zmm0_4
                            rax_64[6] = zmm0_4
                            rax_64[7] = zmm0_4
                            rax_64[8] = zmm0_4
                            rax_64[9] = zmm0_4
                            rax_64[0xa] = zmm0_4
                            rax_64[0xb] = zmm0_4
                            rax_64[0xc] = zmm0_4
                            rax_64[0xd] = zmm0_4
                            rax_64[0xe] = zmm0_4
                            rax_64[0xf] = zmm0_4
                        
                        r14_3 = &r14_3[1]
                        rbx_2 = &rbx_2[2]
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    rsi_1 = var_1d8
                    j_14 = zx.d(j_15)
                    rbx_1 = var_1c0_1
                    r15_2 = var_1a8
                    i_10 = i_11
                
                if (i_10 == 3)
                    if (j_14.b != 0)
                        int64_t* rax_65 = *r12
                        int128_t* r8_10 = rax_65[4]
                        int32_t* rdx_21 = rax_65[2]
                        int32_t (* rcx_24)[0x4] = *rax_65
                        int32_t zmm4_1[0x4] = *rcx_24
                        int32_t zmm3[0x4] = *rdx_21
                        int32_t zmm2[0x4] = *r8_10
                        zmm2[0] = zmm2[0] f* 1.5747f
                        zmm2[0] = zmm2[0] f+ zmm4_1[0]
                        *rcx_24 = zmm2[0]
                        zmm3[0] = zmm3[0] f* 0.187299997f
                        zmm4_1[0] = zmm4_1[0] f- zmm3[0]
                        zmm2[0] = zmm2[0] f* 0.468199998f
                        zmm4_1[0] = zmm4_1[0] f- zmm2[0]
                        *rdx_21 = zmm4_1[0]
                        zmm3[0] = zmm3[0] f* 1.8556f
                        zmm3[0] = zmm3[0] f+ zmm4_1[0]
                        *r8_10 = zmm3[0]
                    else
                        int64_t* rcx_22 = *r12
                        zmm7, zmm8 = sub_142999cd0(*rcx_22, rcx_22[2], rcx_22[4])
                
                if (r15_2.d != 0)
                    int64_t* rdi_3 = nullptr
                    int64_t (* r14_4)[0x2] = &var_b8
                    uint64_t i_8 = zx.q(r15_2.d)
                    uint64_t i_2
                    
                    do
                        if (j_15 != 0)
                            int64_t rbx_3 = *r14_4
                            zmm0_4 = **(rdi_3 + *r12)
                            var_1d8.d = zmm0_4[0]
                            zmm0_4[0] f- zmm8.d
                            uint16_t rdx_25
                            
                            if (is_unordered.d(zmm0_4[0], zmm8.d) || zmm0_4[0] f!= zmm8.d)
                                int32_t rcx_27 = var_1d8.d
                                int16_t r8_11 = *((zx.q(rcx_27) u>> 0x17 << 1) + &data_1436fbc50)
                                
                                if (r8_11 == 0)
                                    rdx_25 = sub_142c998f0(rcx_27)
                                else
                                    int32_t rcx_28 = rcx_27 & 0x7fffff
                                    rdx_25 =
                                        ((rcx_28 + 0xfff + (rcx_28 u>> 0xd & 1)) u>> 0xd).w + r8_11
                            else
                                rdx_25 = (var_1d8.d u>> 0x10).w
                            
                            zmm0_4 = zx.o(sx.d(rdx_25))
                            zmm0_4 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm0_4, zmm0_4[0].q), 0)
                            *(rsi_1 + rbx_3) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x10) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x20) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x30) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x40) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x50) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x60) = zmm0_4
                            *(rsi_1 + rbx_3 + 0x70) = zmm0_4
                            rbx_1 = var_1c0_1
                        else
                            data_143b86aa0(*r14_4 + rbx_1, *(rdi_3 + *r12))
                        
                        r14_4 = &(*r14_4)[1]
                        rdi_3 = &rdi_3[2]
                        i_2 = i_8
                        i_8 -= 1
                    while (i_2 != 1)
                    rbp = arg1
                    r13 = var_198
                    r15_2 = var_1a8
                    i_10 = i_11
                
                rcx_14 = var_1e0_1 + 1
                var_1e0_1 = rcx_14
                rbx_1 -= -0x80
                var_1c0_1 = rbx_1
                rsi_1 -= -0x80
                var_1d8 = rsi_1
                j_12 = j_13
                r8_8 = var_1b8
                r9 = var_150
            while (rcx_14 s< var_1c8)
            
            j_11 = j_12
            rdi_2 = zx.q(var_1d0)
            r8_7 = zx.q(var_1cc)
            r10_2 = var_188_1
            rsi = zx.q(var_1b0)
        
        if (i_10 s> 0)
            uint32_t rsi_2 = (r8_7 << 3).d
            var_1d8.d = rsi_2
            int32_t rbx_4 = rsi_2 + rax_54
            int32_t var_1dc_2 = rbx_4
            int64_t r11_1 = sx.q(rbx_4)
            int64_t r13_2 = r10_2 << 3
            int64_t* r9_2 = nullptr
            var_1b8.q = 0
            int64_t (* r15_3)[0x2] = &var_b8
            int64_t (* var_158_1)[0x2] = &var_b8
            int64_t i_6 = i_10
            int64_t i_9 = i_10
            int64_t i_3
            
            do
                r8_7.b = 1
                int64_t rdx_28 = r13_2
                char rcx_30
                
                if (r13_2 s< r11_1)
                    do
                        rcx_30 = 0
                        
                        if ((*(*(r9_2 + *(rbp + 0x38)) + (rdx_28 << 3)) & 0xf) == 0)
                            rcx_30 = r8_7.b
                        
                        r8_7 = zx.q(rcx_30)
                        rdx_28 += 1
                    while (rdx_28 s< r11_1)
                
                if (r13_2 s>= r11_1 || rcx_30 != 0)
                    uint32_t rcx_50 = rsi_2
                    uint32_t var_1e0_2 = rcx_50
                    
                    if (rsi_2 s< rbx_4)
                        r8_7 = *r15_3
                        uint64_t var_180_1 = r8_7
                        int64_t rdx_30 = r13_2 << 3
                        int64_t var_160_1 = rdx_30
                        
                        do
                            int32_t (* r15_4)[0x4] = *(rdx_30 + *(r9_2 + *(rbp + 0x38)))
                            int64_t r14_5 = r8_7 + (zx.q((rcx_50 & 7) << 3) << 1)
                            
                            if (rdi_2.d s> 0)
                                uint64_t j_9 = zx.q(rdi_2.d)
                                uint64_t j_2
                                
                                do
                                    zmm0_4 = *r14_5
                                    int64_t r9_3 = *(rbp + 0x28)
                                    uint32_t rdx_31 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 0)) << 1)))
                                    uint32_t r8_12 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 1)) << 1)))
                                    uint32_t r10_5 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 2)) << 1)))
                                    uint32_t r11_3 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 3)) << 1)))
                                    uint32_t rbx_5 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 4)) << 1)))
                                    uint32_t rdi_4 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 5)) << 1)))
                                    uint32_t rsi_3 =
                                        zx.d(*(r9_3 + (zx.q(_mm_extract_epi16(zmm0_4, 6)) << 1)))
                                    uint64_t rcx_58 = zx.q(_mm_extract_epi16(zmm0_4, 7))
                                    *r15_4 = _mm_insert_epi16(
                                        _mm_insert_epi16(
                                            _mm_insert_epi16(
                                                _mm_insert_epi16(
                                                    _mm_insert_epi16(
                                                        _mm_insert_epi16(
                                                            _mm_insert_epi16(
                                                                _mm_insert_epi16(zx.o(0), rdx_31, 0), 
                                                                r8_12, 1), 
                                                            r10_5, 2), 
                                                        r11_3, 3), 
                                                    rbx_5, 4), 
                                                rdi_4, 5), 
                                            rsi_3, 6), 
                                        zx.d(*(r9_3 + (rcx_58 << 1))), 7)
                                    r14_5 += 0x80
                                    r15_4 = &r15_4[1]
                                    j_2 = j_9
                                    j_9 -= 1
                                while (j_2 != 1)
                                rcx_50 = var_1e0_2
                                rdx_30 = var_160_1
                                rbx_4 = var_1dc_2
                                r9_2 = var_1b8.q
                                r8_7 = var_180_1
                                rdi_2 = zx.q(var_1d0)
                            
                            rcx_50 += 1
                            var_1e0_2 = rcx_50
                            rdx_30 += 8
                            var_160_1 = rdx_30
                        while (rcx_50 s< rbx_4)
                        
                        r15_3 = var_158_1
                        rsi_2 = var_1d8.d
                        i_6 = i_9
                else
                    uint32_t r10_4 = rsi_2
                    
                    if (rsi_2 s< rbx_4)
                        int64_t r11_2 = r13_2 << 3
                        
                        do
                            r8_7 = *(r11_2 + *(r9_2 + *(rbp + 0x38)))
                            
                            if (rdi_2.d s> 0)
                                int16_t* rdx_29 = *r15_3 + (zx.q((r10_4 & 7) << 3) << 1)
                                uint64_t j_7 = zx.q(rdi_2.d)
                                uint64_t j_3
                                
                                do
                                    *r8_7 = *(*(rbp + 0x28) + (zx.q(*rdx_29) << 1))
                                    *(r8_7 + 2) = *(*(rbp + 0x28) + (zx.q(rdx_29[1]) << 1))
                                    *(r8_7 + 4) = *(*(rbp + 0x28) + (zx.q(rdx_29[2]) << 1))
                                    *(r8_7 + 6) = *(*(rbp + 0x28) + (zx.q(rdx_29[3]) << 1))
                                    *(r8_7 + 8) = *(*(rbp + 0x28) + (zx.q(rdx_29[4]) << 1))
                                    *(r8_7 + 0xa) = *(*(rbp + 0x28) + (zx.q(rdx_29[5]) << 1))
                                    *(r8_7 + 0xc) = *(*(rbp + 0x28) + (zx.q(rdx_29[6]) << 1))
                                    *(r8_7 + 0xe) = *(*(rbp + 0x28) + (zx.q(rdx_29[7]) << 1))
                                    r8_7 += 0x10
                                    rdx_29 = &rdx_29[0x40]
                                    j_3 = j_7
                                    j_7 -= 1
                                while (j_3 != 1)
                                r9_2 = var_1b8.q
                            
                            r10_4 += 1
                            r11_2 += 8
                        while (r10_4 s< rbx_4)
                
                if (rdi_2.d != var_1c8)
                    uint32_t r10_6 = rsi_2
                    
                    if (rsi_2 s< rbx_4)
                        int64_t rsi_4 = *r15_3
                        uint32_t rdi_5 = (rdi_2 << 3).d
                        int64_t r11_4 = r13_2 << 3
                        uint64_t j_10 = zx.q(j_11)
                        
                        do
                            int16_t* rdx_32 = rsi_4 + (sx.q(((r10_6 & 7) + rdi_5) << 3) << 1)
                            r8_7 = *(r11_4 + *(r9_2 + *(rbp + 0x38))) + (sx.q(rdi_5) << 1)
                            
                            if (j_10.d s> 0)
                                uint64_t j_8 = j_10
                                uint64_t j_4
                                
                                do
                                    *r8_7 = *(*(rbp + 0x28) + (zx.q(*rdx_32) << 1))
                                    r8_7 += 2
                                    rdx_32 = &rdx_32[1]
                                    j_4 = j_8
                                    j_8 -= 1
                                while (j_4 != 1)
                                r9_2 = var_1b8.q
                            
                            r10_6 += 1
                            r11_4 += 8
                        while (r10_6 s< rbx_4)
                        
                        rdi_2 = zx.q(var_1d0)
                        i_6 = i_9
                
                r15_3 = &(*r15_3)[1]
                var_158_1 = r15_3
                r9_2 = &r9_2[3]
                var_1b8.q = r9_2
                i_3 = i_6
                i_6 -= 1
                i_9 = i_6
                r11_1 = sx.q(rbx_4)
                rsi_2 = var_1d8.d
            while (i_3 != 1)
            r12 = rbp + 0x68
            r13 = var_198
            i_10 = i_11
            r8_7 = zx.q(var_1cc)
            r10_2 = var_188_1
            rsi = zx.q(var_1b0)
        
        r8_7 = zx.q(r8_7.d + 1)
        var_1cc = r8_7.d
        r10_2 += 1
        var_188_1 = r10_2
        r15_2 = var_1a8
        rbx = zx.q(var_1c8)
        r9 = var_150
        rcx_13 = (rsi - 1).d
    while (r8_7.d s< rsi.d)

uint64_t r12_1 = 0

if (r15_2.d != 0)
    do
        if (*(*(rbp + 0x50) + (r12_1 << 2)) == 2)
            sub_142995810(&var_b8, sx.q(*(rbp + 0x30)))
            int32_t i_4 = 0
            char* rdi_6 = var_b8[0]
            
            if (*(rbp + 0x34) s> 0)
                uint64_t r15_5 = r12_1 * 3
                uint64_t var_180_2 = r15_5
                int64_t* r14_7 = nullptr
                
                do
                    void* rbx_6 = *(r14_7 + *(*(rbp + 0x38) + (r15_5 << 3)))
                    memcpy(rdi_6, rbx_6, *(rbp + 0x30) * 2)
                    char* r9_4 = rdi_6
                    int32_t j_5 = 0
                    
                    if (*(rbp + 0x30) s> 0)
                        do
                            uint64_t rcx_64 = zx.q(*r9_4)
                            r9_4 = &r9_4[2]
                            int32_t zmm0_5 =
                                *(((zx.q(r9_4[1]) << 8 | rcx_64) << 2) + &data_1436bbc50)
                            *rbx_6 = zmm0_5.b
                            *(rbx_6 + 1) = (zmm0_5 u>> 8).b
                            *(rbx_6 + 2) = (zmm0_5 u>> 0x10).b
                            *(rbx_6 + 3) = (zmm0_5 u>> 0x18).b
                            rbx_6 += 4
                            j_5 += 1
                        while (j_5 s< *(rbp + 0x30))
                        
                        r15_5 = var_180_2
                    
                    i_4 += 1
                    r14_7 = &r14_7[1]
                while (i_4 s< *(rbp + 0x34))
                
                r15_2 = var_1a8
            
            if (rdi_6 != 0)
                char* rax_118 = rdi_6
                int64_t var_a8
                
                if (((var_a8 - rdi_6) s>> 1) * 2 u>= 0x1000)
                    rdi_6 = *(rdi_6 - 8)
                    
                    if (rax_118 - rdi_6 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rdi_6)
        
        r12_1 = zx.q(r12_1.d + 1)
    while (r12_1.d u< r15_2.d)

j_sub_140a74f90(rax_17)
sub_142996ec0(&var_178)
int64_t* rcx_70 = var_150
int64_t* rax_121 = rcx_70
int64_t var_140

if (((var_140 - rcx_70) & 0xfffffffffffffff8) u>= 0x1000)
    rcx_70 = rcx_70[-1]
    
    if (rax_121 - rcx_70 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn

int64_t result = j_sub_140a74f90(rcx_70)
__security_check_cookie(rax_1 ^ &var_208)
return result
