// 函数: sub_1403ee690
// 地址: 0x1403ee690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3328)
uint128_t zmm8
uint128_t var_78 = zmm8
void var_3368
int64_t rax_1 = __security_cookie ^ &var_3368
uint64_t r15 = zx.q(arg9)
int32_t* rsi = arg5
int32_t* r14 = arg2
uint64_t rdx_1 = zx.q(arg11 + 4)
uint32_t rcx = (r15 * 2).d
uint32_t rbx_1 = (rdx_1 * 5).d << 3
int32_t* var_3308 = rsi
int32_t var_3318 = r15.d
uint32_t r9 = rdx_1.d * r15.d * 5
uint32_t rax_5 = (r15 * 5).d
uint32_t rax_7 = (r15 * 9).d * 2
int64_t var_32b0
void var_3268
int16_t var_9b8[0x140]
uint128_t zmm0
uint128_t zmm1
int32_t var_2524[0x95]
void var_5f8

if (r15.d == 0x10)
    int32_t rcx_1 = r9 - 1
    int64_t rax_9 = sx.q(rcx_1)
    
    if (rcx_1 s>= 0)
        int128_t* rdx_2 = arg1 + (rax_9 << 2)
        void* r8 = &var_5f8 + (rax_9 << 1)
        int32_t temp3_1
        
        do
            zmm1 = *rdx_2
            int16_t rax_11
            
            if (int.d(zmm1.d.d) s> 0x7fff)
                rax_11 = 0x7fff
            else if (int.d(zmm1.d.d) s>= 0xffff8000)
                rax_11 = (int.d(zmm1.d.d)).w
            else
                rax_11 = -0x8000
            
            *r8 = rax_11
            r8 -= 2
            rdx_2 -= 4
            temp3_1 = rcx_1
            rcx_1 -= 1
        while (temp3_1 - 1 s>= 0)
    
    var_32b0 = 0
    sub_140410460(&var_32b0, &var_9b8, &var_5f8, r9)
    int64_t rcx_3 = sx.q(rbx_1 - 1)
    
    if (rbx_1 - 1 s>= 0)
        if (rcx_3 + 1 s>= 4)
            uint64_t i_25 = (rcx_3 + 1) u>> 2
            void* rdx_4 = &var_3268 + (rcx_3 << 2) + 0xd38
            void* r8_2 = &var_3268 + (rcx_3 << 1) + 0x28ac
            rcx_3 -= i_25 << 2
            uint64_t i
            
            do
                int32_t rax_15 = sx.d(*(r8_2 + 4))
                rdx_4 -= 0x10
                r8_2 -= 8
                int32_t rax_16 = sx.d(*(r8_2 + 0xa))
                *(rdx_4 + 0x18) = _mm_cvtepi32_ps(zx.o(rax_15)).d
                zmm0 = zx.o(sx.d(*(r8_2 + 8)))
                int32_t rax_18 = sx.d(*(r8_2 + 6))
                *(rdx_4 + 0x14) = _mm_cvtepi32_ps(zx.o(rax_16)).d
                *(rdx_4 + 0x10) = _mm_cvtepi32_ps(zmm0).d
                *(rdx_4 + 0xc) = _mm_cvtepi32_ps(zx.o(rax_18)).d
                i = i_25
                i_25 -= 1
            while (i != 1)
        
        if (rcx_3 s>= 0)
            int64_t temp1_1
            
            do
                int32_t rax_19 = sx.d(var_9b8[rcx_3])
                temp1_1 = rcx_3
                rcx_3 -= 1
                var_2524[rcx_3] = _mm_cvtepi32_ps(zx.o(rax_19)).d
            while (temp1_1 - 1 s>= 0)
else if (r15.d != 0xc)
    int32_t rcx_7 = rbx_1 - 1
    int64_t rax_31 = sx.q(rcx_7)
    
    if (rcx_7 s>= 0)
        void* rdx_8 = arg1 + (rax_31 << 2)
        int16_t* r8_6 = &var_9b8[rax_31]
        int32_t temp6_1
        
        do
            zmm1 = *rdx_8
            int16_t rax_33
            
            if (int.d(zmm1.d.d) s> 0x7fff)
                rax_33 = 0x7fff
            else if (int.d(zmm1.d.d) s>= 0xffff8000)
                rax_33 = (int.d(zmm1.d.d)).w
            else
                rax_33 = -0x8000
            
            *r8_6 = rax_33
            r8_6 -= 2
            rdx_8 -= 4
            temp6_1 = rcx_7
            rcx_7 -= 1
        while (temp6_1 - 1 s>= 0)
else
    int32_t rcx_4 = r9 - 1
    int64_t rax_20 = sx.q(rcx_4)
    
    if (rcx_4 s>= 0)
        void* rdx_5 = arg1 + (rax_20 << 2)
        int16_t* r8_3 = &var_5f8 + (rax_20 << 1)
        int32_t temp9_1
        
        do
            zmm1 = *rdx_5
            int16_t rax_22
            
            if (int.d(zmm1.d.d) s> 0x7fff)
                rax_22 = 0x7fff
            else if (int.d(zmm1.d.d) s>= 0xffff8000)
                rax_22 = (int.d(zmm1.d.d)).w
            else
                rax_22 = -0x8000
            
            *r8_3 = rax_22
            r8_3 -= 2
            rdx_5 -= 4
            temp9_1 = rcx_4
            rcx_4 -= 1
        while (temp9_1 - 1 s>= 0)
    
    __builtin_memset(&var_32b0, 0, 0x18)
    sub_140410560(&var_32b0, &var_9b8, &var_5f8, r9)
    int64_t rcx_6 = sx.q(rbx_1 - 1)
    
    if (rbx_1 - 1 s>= 0)
        if (rcx_6 + 1 s>= 4)
            uint64_t i_26 = (rcx_6 + 1) u>> 2
            void* rdx_7 = &var_3268 + (rcx_6 << 2) + 0xd38
            void* r8_5 = &var_3268 + (rcx_6 << 1) + 0x28ac
            rcx_6 -= i_26 << 2
            uint64_t i_1
            
            do
                int32_t rax_26 = sx.d(*(r8_5 + 4))
                rdx_7 -= 0x10
                r8_5 -= 8
                int32_t rax_27 = sx.d(*(r8_5 + 0xa))
                *(rdx_7 + 0x18) = _mm_cvtepi32_ps(zx.o(rax_26)).d
                zmm0 = zx.o(sx.d(*(r8_5 + 8)))
                int32_t rax_29 = sx.d(*(r8_5 + 6))
                *(rdx_7 + 0x14) = _mm_cvtepi32_ps(zx.o(rax_27)).d
                *(rdx_7 + 0x10) = _mm_cvtepi32_ps(zmm0).d
                *(rdx_7 + 0xc) = _mm_cvtepi32_ps(zx.o(rax_29)).d
                i_1 = i_26
                i_26 -= 1
            while (i_1 != 1)
        
        if (rcx_6 s>= 0)
            int64_t temp7_1
            
            do
                int32_t rax_30 = sx.d(var_9b8[rcx_6])
                temp7_1 = rcx_6
                rcx_6 -= 1
                var_2524[rcx_6] = _mm_cvtepi32_ps(zx.o(rax_30)).d
            while (temp7_1 - 1 s>= 0)
var_32b0 = 0
int16_t var_738[0xa0]
sub_140410460(&var_32b0, &var_738, &var_9b8, rbx_1)
int32_t i_3 = ((zx.q((rdx_1 * 5).d) << 2) + -ffffffffffffffff).d
int64_t i_19 = sx.q(i_3)
bool cond:0 = i_3 s<= 0

if (i_3 s>= 0)
    if (i_19 + 1 s>= 4)
        uint64_t i_27 = (i_19 + 1) u>> 2
        void* rdx_10 = &var_3268 + (i_19 << 2) + 0xab8
        void* r8_8 = &var_3268 + (i_19 << 1) + 0x2b2c
        i_19 -= i_27 << 2
        uint64_t i_2
        
        do
            int32_t rax_36 = sx.d(*(r8_8 + 4))
            rdx_10 -= 0x10
            r8_8 -= 8
            int32_t rax_37 = sx.d(*(r8_8 + 0xa))
            *(rdx_10 + 0x18) = _mm_cvtepi32_ps(zx.o(rax_36)).d
            zmm0 = zx.o(sx.d(*(r8_8 + 8)))
            int32_t rax_39 = sx.d(*(r8_8 + 6))
            *(rdx_10 + 0x14) = _mm_cvtepi32_ps(zx.o(rax_37)).d
            *(rdx_10 + 0x10) = _mm_cvtepi32_ps(zmm0).d
            *(rdx_10 + 0xc) = _mm_cvtepi32_ps(zx.o(rax_39)).d
            i_2 = i_27
            i_27 -= 1
        while (i_2 != 1)
    
    if (i_19 s>= 0)
        int64_t i_35
        
        do
            int32_t rax_40 = sx.d(var_738[i_19])
            i_35 = i_19
            i_19 -= 1
            int32_t var_27a4[0x47]
            var_27a4[i_19] = _mm_cvtepi32_ps(zx.o(rax_40)).d
        while (i_35 - 1 s>= 0)
    
    cond:0 = i_3 s<= 0

if (not(cond:0))
    void var_27a8
    void* rcx_9 = &var_27a8 + (sx.q(i_3) << 2)
    
    do
        zmm0 = *(rcx_9 - 4)
        i_3 -= 1
        rcx_9 -= 4
        zmm0.d = zmm0.d f+ *(rcx_9 + 4)
        *(rcx_9 + 4) = zmm0.d
    while (i_3 s> 0)

int64_t i_33 = sx.q(arg11)
double zmm6[0x2]
double var_58[0x2] = zmm6
double zmm7[0x2]
double var_68[0x2] = zmm7
int64_t i_29 = i_33
int32_t var_30f8[0x4]
memset(&var_30f8, 0, i_33 * 0x254)
int32_t i_32 = i_33.d s>> 1
uint128_t zmm10 = 0x4000000000000000
int32_t var_30d8[0x40]
double i_31[0x2]
float zmm2[0x2]

if (i_32 s> 0)
    void var_2688
    void* rsi_1 = &var_2688
    uint64_t i_30 = zx.q(i_32)
    uint64_t i_4
    
    do
        void* rdi_1 = rsi_1
        void var_3208
        sub_140400670(rsi_1 + 0x20, rsi_1 - 0x100, &var_3208, 0x28, 0x41)
        int32_t var_3108
        zmm6 = _mm_cvtps_pd(var_3108[0])
        double zmm0_1[0x2] = sub_1403ed620(rsi_1 + 0x20, 0x28)
        i_31 = sub_1403ed620(rsi_1, 0x28)
        int64_t j = 9
        void var_3114
        void* rdx_12 = &var_3114
        zmm1 = var_30d8[0]
        zmm6[0] = zmm6[0] f* zmm10.q
        zmm0_1[0] = zmm0_1[0] + i_31[0]
        zmm0_1[0] = zmm0_1[0] f+ 0x4103880000000000
        zmm6[0] = zmm6[0] / zmm0_1[0]
        zmm1.d = zmm1.d f+ _mm_cvtpd_ps(zmm6)[0].d
        var_30d8[0] = zmm1.d
        void var_30fc
        
        do
            zmm1 = *(rdi_1 - 4)
            i_31 = *(rdi_1 + 0x9c)
            j += 4
            rdi_1 -= 0x10
            rdx_12 -= 0x10
            i_31 = _mm_cvtps_pd(i_31[0])
            zmm1 = _mm_cvtps_pd(zmm1.q)
            i_31[0] = i_31[0] * i_31[0]
            zmm1.q = zmm1.q f* zmm1.q
            zmm1.q = zmm1.q f- i_31[0]
            i_31 = _mm_cvtps_pd((*(rdx_12 + 0x18))[0])
            zmm0_1[0] = zmm0_1[0] f+ zmm1.q
            i_31[0] = i_31[0] f* zmm10.q
            i_31[0] = i_31[0] / zmm0_1[0]
            i_31 = _mm_cvtpd_ps(i_31)
            i_31[0].d = i_31[0].d f+ (&var_3108)[j]
            (&var_3108)[j] = i_31[0].d
            zmm2 = *(rdi_1 + 8)
            i_31 = *(rdx_12 + 0x14)
            zmm1 = _mm_cvtps_pd((*(rdi_1 + 0xa8)).q)
            zmm2 = _mm_cvtps_pd(zmm2).q
            zmm1.q = zmm1.q f* zmm1.q
            i_31 = _mm_cvtps_pd(i_31[0])
            i_31[0] = i_31[0] f* zmm10.q
            zmm0_1[0] = zmm0_1[0] f+ zmm2 f* zmm2 f- zmm1.q
            i_31[0] = i_31[0] / zmm0_1[0]
            i_31 = _mm_cvtpd_ps(i_31)
            void var_3104
            i_31[0].d = i_31[0].d f+ *(&var_3104 + (j << 2))
            *(&var_3104 + (j << 2)) = i_31[0].d
            zmm2 = *(rdi_1 + 4)
            i_31 = *(rdx_12 + 0x10)
            zmm1 = _mm_cvtps_pd((*(rdi_1 + 0xa4)).q)
            zmm2 = _mm_cvtps_pd(zmm2).q
            zmm1.q = zmm1.q f* zmm1.q
            i_31 = _mm_cvtps_pd(i_31[0])
            i_31[0] = i_31[0] f* zmm10.q
            zmm0_1[0] = zmm0_1[0] f+ zmm2 f* zmm2 f- zmm1.q
            i_31[0] = i_31[0] / zmm0_1[0]
            i_31 = _mm_cvtpd_ps(i_31)
            void var_3100
            i_31[0].d = i_31[0].d f+ *(&var_3100 + (j << 2))
            *(&var_3100 + (j << 2)) = i_31[0].d
            zmm1 = *rdi_1
            i_31 = _mm_cvtps_pd((*(rdi_1 + 0xa0))[0])
            zmm1 = _mm_cvtps_pd(zmm1.q)
            i_31[0] = i_31[0] * i_31[0]
            zmm1.q = zmm1.q f* zmm1.q
            zmm1.q = zmm1.q f- i_31[0]
            i_31 = _mm_cvtps_pd((*(rdx_12 + 0xc))[0])
            zmm0_1[0] = zmm0_1[0] f+ zmm1.q
            i_31[0] = i_31[0] f* zmm10.q
            i_31[0] = i_31[0] / zmm0_1[0]
            i_31 = _mm_cvtpd_ps(i_31)
            i_31[0].d = i_31[0].d f+ *(&var_30fc + (j << 2))
            *(&var_30fc + (j << 2)) = i_31[0].d
        while (j s<= 0x45)
        
        if (j s<= 0x48)
            void var_30e8
            void* rdx_13 = &var_30e8 - (j << 2)
            
            do
                zmm1 = *(rdi_1 - 4)
                i_31 = *(rdi_1 + 0x9c)
                rdi_1 -= 4
                j += 1
                rdx_13 -= 4
                i_31 = _mm_cvtps_pd(i_31[0])
                zmm1 = _mm_cvtps_pd(zmm1.q)
                i_31[0] = i_31[0] * i_31[0]
                zmm1.q = zmm1.q f* zmm1.q
                zmm1.q = zmm1.q f- i_31[0]
                i_31 = _mm_cvtps_pd((*(rdx_13 + 4))[0])
                zmm0_1[0] = zmm0_1[0] f+ zmm1.q
                i_31[0] = i_31[0] f* zmm10.q
                i_31[0] = i_31[0] / zmm0_1[0]
                i_31 = _mm_cvtpd_ps(i_31)
                i_31[0].d = i_31[0].d f+ *(&var_30fc + (j << 2))
                *(&var_30fc + (j << 2)) = i_31[0].d
            while (j s<= 0x48)
        
        rsi_1 += 0xa0
        i_4 = i_30
        i_30 -= 1
    while (i_4 != 1)
    rsi = var_3308
    r14 = arg2

int32_t i_5 = 0x48
void var_2fd8
void* rcx_14 = &var_2fd8

do
    zmm1 = *rcx_14
    i_31 = zx.o(i_5)
    i_5 -= 1
    rcx_14 -= 4
    i_31 = _mm_cvtepi32_ps(i_31)
    i_31[0].d = i_31[0].d f* zmm1.d
    i_31[0].d = i_31[0].d f* 0.000244140625f
    zmm1.d = zmm1.d f- i_31[0].d
    *(rcx_14 + 4) = zmm1.d
while (i_5 s>= 8)

int32_t i_34 = ((zx.q(arg10) << 1) + 4).d
int32_t var_3298[0xc]
sub_1403f1e90(&var_30d8, &var_3298, 0x41, i_34)
float zmm1_1 = var_30d8[0]
int64_t result

if (0.200000003f <= zmm1_1)
    int64_t r14_1 = 0
    int32_t i_36 = 0
    
    if (i_34 s> 0)
        do
            int64_t i_37 = sx.q(i_36)
            
            if (var_30d8[i_37] f<= zmm1_1 * arg7)
                i_34 = i_36
                break
            
            i_36 += 1
            var_3298[i_37] = ((zx.q(var_3298[i_37]) << 1) + 0x10).d
        while (i_36 s< i_34)
    
    int32_t j_4 = 0xb
    int16_t var_ae8[0x10]
    
    for (int32_t i_6 = 0xb; i_6 s< 0x94; )
        if (sx.q(i_6) * 2 u>= 0x12a)
            __report_rangecheckfailure()
            noreturn
        
        i_6 += 1
        var_ae8[sx.q(i_6)] = 0
    
    if (i_34 s> 0)
        int32_t (* rcx_18)[0xc] = &var_3298
        uint64_t i_21 = zx.q(i_34)
        uint64_t i_7
        
        do
            int64_t rax_50 = sx.q(*rcx_18)
            rcx_18 = &(*rcx_18)[1]
            var_ae8[rax_50] = 1
            i_7 = i_21
            i_21 -= 1
        while (i_7 != 1)
    
    int64_t i_28 = 0x83
    void var_9c4
    void* rdx_15 = &var_9c4
    int64_t i_22 = 0x83
    void var_aea
    void var_9c8
    int64_t i_8
    
    do
        int16_t* rax_51 = &var_aea - &var_9c4 + rdx_15
        rdx_15 -= 2
        *(rdx_15 + 2) += *(rax_51 + &var_9c8 - &var_aea) + rax_51[0x92]
        i_8 = i_22
        i_22 -= 1
    while (i_8 != 1)
    int32_t rsi_2 = 0
    int32_t (* rdx_16)[0xc] = &var_3298
    int32_t i_9 = 0x10
    void var_ac6
    void* rcx_20 = &var_ac6
    
    do
        if (*rcx_20 s> 0)
            *rdx_16 = i_9
            rsi_2 += 1
            rdx_16 = &(*rdx_16)[1]
        
        i_9 += 1
        rcx_20 += 2
    while (i_9 s< 0x90)
    
    void* rdx_17 = &var_9c8
    int64_t i_10
    
    do
        int16_t rax_52 = *(&var_aea - &var_9c8 + rdx_17 + 0x124)
        rdx_17 -= 2
        *(rdx_17 + 6) += rax_52 + *rdx_17 + *(rdx_17 + 2)
        i_10 = i_28
        i_28 -= 1
    while (i_10 != 1)
    int32_t i_11 = 0x10
    int32_t rbx_3 = 0
    void var_ac8
    void* rdx_18 = &var_ac8
    int16_t (* r8_13)[0x10] = &var_ae8
    
    do
        if (*rdx_18 s> 0)
            rbx_3 += 1
            r8_13 = &(*r8_13)[1]
            (*r8_13)[-1] = i_11.w - 2
        
        i_11 += 1
        rdx_18 += 2
    while (i_11 s< 0x93)
    
    memset(&var_30f8, 0, 0x950)
    void* r15_1 = arg1 + 0x280
    void var_22a8
    
    if (r15.d != 8)
        r15_1 = &var_22a8
    int64_t r12_1 = sx.q(rbx_3)
    double zmm0_3[0x2]
    
    if (i_29 s> 0)
        int64_t i_12
        
        do
            int64_t rbx_4 = 0
            zmm7 = sub_1403ed620(r15_1, 0x28)
            zmm7[0] = zmm7[0] f+ 0x3ff0000000000000
            
            if (r12_1 s> 0)
                do
                    int64_t rax_54 = sx.q(var_ae8[rbx_4])
                    void* rdi_3 = r15_1 - (rax_54 << 2)
                    zmm0_3 = sub_1403f1cf0(rdi_3, r15_1, 0x28)
                    zmm6 = zmm0_3
                    
                    if (zmm0_3[0] <= 0.0)
                        var_30f8[r14_1 + rax_54] = 0
                    else
                        zmm6[0] = zmm6[0] f* zmm10.q
                        zmm0_3 = sub_1403ed620(rdi_3, 0x28)
                        zmm0_3[0] = zmm0_3[0] + zmm7[0]
                        zmm6[0] = zmm6[0] / zmm0_3[0]
                        zmm0_3 = zx.o(0)
                        zmm0_3[0].d = fconvert.s(zmm6[0])
                        var_30f8[r14_1 + rax_54] = zmm0_3[0].d
                    
                    rbx_4 += 1
                while (rbx_4 s< r12_1)
            
            r15_1 += 0xa0
            r14_1 += 0x95
            i_12 = i_29
            i_29 -= 1
        while (i_12 != 1)
        j_4 = (i_29 + 0xb).d
    
    int32_t rbx_7 = arg6
    double zmm9[0x2] = 0xc47a0000
    uint128_t zmm14 = 0x400a934f0979a36c
    int32_t r12_2 = -1
    zmm10 = zx.o(0)
    int32_t var_3320_2 = 0
    int32_t var_3328_10 = 0xc47a0000
    int128_t zmm12
    
    if (rbx_7 s<= 0)
        zmm12 = zx.o(0)
    else
        if (var_3318 == 0xc)
            rbx_7 = rbx_7 * 2 s/ 3
        else if (var_3318 == 0x10)
            rbx_7 s>>= 1
        
        zmm0_3 = log10(_mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(rbx_7))[0])[0])
        zmm0_3[0] = zmm0_3[0] f* zmm14.q
        zmm12.d = fconvert.s(zmm0_3[0])
    
    void* const var_3300_1
    void* const rax_59
    int32_t j_3
    
    if (arg11 != 4)
        rax_59 = &data_1436fdcf0
        j_3 = 3
        var_3300_1 = &data_1436fdcf0
        j_4 = 3
    else
        rax_59 = &data_1436fdc20
        var_3300_1 = &data_1436fdc20
        
        if (var_3318 != 8 || arg10 s<= 0)
            j_3 = 3
        else
            j_3 = j_4
    
    double zmm11[0x2]
    double var_a8_1[0x2] = zmm11
    int64_t i_13 = 0
    int64_t j_5 = sx.q(j_4)
    int32_t* rcx_30
    int32_t r9_7
    
    if (rsi_2 s> 0)
        zmm11 = _mm_cvtepi32_ps(zx.o(arg11))
        zmm11[0].d = zmm11[0].d f* 0.200000003f
        
        do
            int64_t rsi_4 = sx.q(var_3298[i_13])
            void var_3238
            
            if (j_3 s> 0)
                uint64_t k_2 = zx.q(arg11)
                void* const r11_2 = rax_59
                int32_t* r9_6 = &var_3238
                uint64_t j_2 = zx.q(j_3)
                uint64_t j_1
                
                do
                    zmm0_3 = zx.o(0)
                    *r9_6 = 0
                    
                    if (k_2.d s> 0)
                        int64_t rcx_28 = 0
                        void* const rdx_22 = r11_2
                        uint64_t k_1 = k_2
                        uint64_t k
                        
                        do
                            int64_t rax_60 = sx.q(*rdx_22)
                            rdx_22 += j_5
                            int64_t rax_61 = rax_60 + rcx_28
                            rcx_28 += 0x95
                            zmm0_3[0].d = zmm0_3[0].d f+ var_30f8[rax_61 + rsi_4]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        *r9_6 = zmm0_3[0].d
                    
                    r9_6 = &r9_6[1]
                    r11_2 += 1
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rsi_4 = zx.q(var_3298[i_13])
            
            zmm6 = 0xc47a0000
            int32_t rbx_8 = 0
            int32_t rax_63 = 0
            
            if (j_3 s> 0)
                void* rcx_29 = &var_3238
                
                do
                    zmm0_3 = *rcx_29
                    
                    if (not(zmm0_3[0].d f<= zmm6[0].d))
                        zmm6 = zmm0_3
                        rbx_8 = rax_63
                    
                    rax_63 += 1
                    rcx_29 += 4
                while (rax_63 s< j_3)
            
            zmm0_3 = log10(_mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(rsi_4.d))[0])[0])
            rcx_30 = var_3308
            zmm2 = (zx.o(0)).q
            zmm1_1 = zmm11[0].d
            zmm0_3[0] = zmm0_3[0] f* zmm14.q
            zmm2[0] = fconvert.s(zmm0_3[0])
            zmm6[0].d = zmm6[0].d f- zmm1_1 * zmm2[0]
            
            if (sx.q(rbx_7) s> 0)
                zmm2[0] = zmm2[0] f- zmm12.d
                zmm11[0].d = zmm11[0].d f* *rcx_30
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm11[0].d = zmm11[0].d f* zmm2[0]
                zmm2[0] = zmm2[0] + 0.5f
                zmm11[0].d = zmm11[0].d f/ zmm2[0]
                zmm6[0].d = zmm6[0].d f- zmm11[0].d
            
            if (not(zmm6[0].d f<= zmm9[0].d))
                zmm11[0].d = zmm11[0].d f* arg8.d
            
            if (zmm6[0].d f<= zmm9[0].d || zmm6[0].d f<= zmm11[0].d)
                r9_7 = var_3320_2
            else
                zmm9 = zmm6
                zmm10 = zmm6
                r12_2 = rsi_4.d
                r9_7 = rbx_8
                var_3320_2 = rbx_8
            
            rax_59 = var_3300_1
            i_13 += 1
        while (i_13 s< sx.q(rsi_2))
    
    if (rsi_2 s<= 0 || r12_2 == 0xffffffff)
        *arg2 = 0
        *(arg2 + 8) = 0
        *var_3308 = 0
        *arg3 = 0
        *arg4 = 0
        result = 1
    else
        zmm10.d = zmm10.d f/ zmm11[0].d
        *rcx_30 = zmm10.d
        
        if (var_3318 s<= 8)
            if (arg11 s> 0)
                int32_t* r9_12 = arg2
                uint64_t i_24 = zx.q(arg11)
                void* rdx_32 = sx.q(r9_7) + var_3300_1
                uint64_t i_14
                
                do
                    int32_t rcx_48 = sx.d(*rdx_32) + r12_2
                    *r9_12 = rcx_48
                    
                    if (rcx_48 s> 0x90)
                        rcx_48 = 0x90
                    else if (rcx_48 s< 0x10)
                        rcx_48 = 0x10
                    
                    *r9_12 = rcx_48
                    r9_12 = &r9_12[1]
                    rdx_32 += j_5
                    i_14 = i_24
                    i_24 -= 1
                while (i_14 != 1)
                r9_7 = var_3320_2
            
            r12_2.w -= 0x10
            *arg3 = r12_2.w
            *arg4 = r9_7.b
        else
            uint32_t rdi_6
            
            if (var_3318 != 0xc)
                rdi_6 = r12_2 * 2
            else
                uint64_t rax_65 = zx.q(sx.d(r12_2.w))
                rdi_6 = ((rax_65 * 3).d s>> 1) + (neg.d(rax_65.d) & 1)
            
            if (rcx s<= rax_7 - 1)
                if (rdi_6 s> rax_7 - 1)
                    rdi_6 = rax_7 - 1
                else if (rdi_6 s< rcx)
                    rdi_6 = rcx
            else if (rdi_6 s> rcx)
                rdi_6 = rcx
            else if (rdi_6 s< rax_7 - 1)
                rdi_6 = rax_7 - 1
            
            int64_t r13 = sx.q(arg10)
            uint32_t rbx_9 = rcx
            uint32_t r12_3 = rax_7 - 1
            
            if (rdi_6 - 2 s> rcx)
                rbx_9 = rdi_6 - 2
            
            if (rdi_6 + 2 s< rax_7 - 1)
                r12_3 = rdi_6 + 2
            
            int32_t r15_3 = 0
            int32_t var_3338_1 = arg12
            var_3308.d = r12_3
            int32_t var_3320_3 = 0
            void var_1588
            sub_1403edf00(&var_1588, arg1, rbx_9, rax_5, arg11, r13.d)
            void var_2028
            sub_1403ee250(&var_2028, arg1, rbx_9, rax_5, arg11, r13.d)
            zmm6 = 0x3d4ccccd
            zmm6[0].d = 0.0500000007f f/ _mm_cvtepi32_ps(zx.o(rdi_6)).d
            int32_t var_331c_1
            void* const var_3300_2
            int32_t rsi_5
            int32_t r13_1
            
            if (arg11 != 4)
                rsi_5 = 0xc
                var_3300_2 = &data_1436fdcf8
                r13_1 = 0xc
                var_331c_1 = 0xc
            else
                var_3300_2 = &data_1436fdc50
                rsi_5 = sx.d(*(r13 + &data_1436fdc4c))
                r13_1 = 0x22
                var_331c_1 = 0x22
            
            int64_t r11_3 = 0
            double zmm4_1 = sub_1403ed620(arg1 + (sx.q(var_3318 * 0x14) << 2), rax_5 * arg11).q
                f+ 0x3ff0000000000000
            
            if (rbx_9 s<= r12_3)
                do
                    int32_t r8_16 = 0
                    int64_t r9_10 = 0
                    
                    if (rsi_5 s> 0)
                        int64_t r10_3 = r11_3 << 2
                        
                        do
                            double zmm2_1 = (zx.o(0)).q
                            double zmm3_1 = zmm4_1
                            int64_t rdx_28 = 0
                            uint128_t zmm0_5
                            double zmm1_2
                            
                            if (i_33 s>= 4)
                                int64_t rax_77 = r10_3
                                int64_t i_20 = ((i_33 - 4) u>> 2) + 1
                                rdx_28 = i_20 << 2
                                int64_t i_15
                                
                                do
                                    zmm1_2 = *(&var_1588 + rax_77)
                                    void var_12e0
                                    zmm0_5 = *(&var_12e0 + rax_77)
                                    rax_77 += 0xaa0
                                    zmm2_1 =
                                        _mm_cvtps_pd(zmm1_2).q + zmm2_1 f+ _mm_cvtps_pd(zmm0_5.q).q
                                    void var_1830
                                    zmm0_5 = *(&var_1830 + rax_77)
                                    void var_1ad8
                                    zmm2_1 = zmm2_1 + _mm_cvtps_pd(*(&var_1ad8 + rax_77)).q
                                    void var_2ac8
                                    zmm1_2 = *(&var_2ac8 + rax_77)
                                    zmm2_1 = zmm2_1 f+ _mm_cvtps_pd(zmm0_5.q).q
                                    void var_2820
                                    void var_2578
                                    void var_22d0
                                    zmm3_1 = _mm_cvtps_pd(zmm1_2).q
                                        + zmm3_1 f+ _mm_cvtps_pd((*(&var_2820 + rax_77)).q).q
                                        + _mm_cvtps_pd(*(&var_2578 + rax_77)).q
                                        f+ _mm_cvtps_pd((*(&var_22d0 + rax_77)).q).q
                                    i_15 = i_20
                                    i_20 -= 1
                                while (i_15 != 1)
                            
                            if (rdx_28 s< i_33)
                                int64_t rcx_43 = ((rdx_28 * 0x22 + r9_10) * 5 + r11_3) << 2
                                int64_t i_18 = i_33 - rdx_28
                                int64_t i_16
                                
                                do
                                    zmm0_5 = *(&var_1588 + rcx_43)
                                    zmm1_2 = *(&var_2028 + rcx_43)
                                    rcx_43 += 0x2a8
                                    zmm2_1 = zmm2_1 f+ _mm_cvtps_pd(zmm0_5.q).q
                                    zmm3_1 = zmm3_1 + _mm_cvtps_pd(zmm1_2).q
                                    i_16 = i_18
                                    i_18 -= 1
                                while (i_16 != 1)
                            
                            if (zmm2_1 <= 0.0)
                                zmm1_2 = (zx.o(0)).q
                            else
                                zmm0_5.d = _mm_cvtepi32_ps(zx.o(r8_16)).d f* zmm6[0].d
                                zmm1_2.d = 1f f- zmm0_5.d
                                zmm0_5.d = fconvert.s(zmm2_1 f* 0x4000000000000000 / zmm3_1)
                                zmm1_2.d = zmm1_2.d f* zmm0_5.d
                            
                            if (not(zmm1_2.d f<= var_3328_10)
                                    && sx.d(*(r9_10 + &data_1436fdc50)) + rbx_9 s<= rax_7 - 1)
                                var_3328_10 = zmm1_2.d
                                rdi_6 = rbx_9
                                r15_3 = r8_16
                            
                            r8_16 += 1
                            r9_10 += 1
                            r10_3 += 0x14
                        while (r8_16 s< rsi_5)
                        
                        r12_3 = var_3308.d
                        var_3320_3 = r15_3
                    
                    rbx_9 += 1
                    r11_3 += 1
                while (rbx_9 s<= r12_3)
                
                r13_1 = var_331c_1
            
            uint32_t rax_83
            
            if (arg11 s<= 0)
                rax_83 = rcx
            else
                int32_t* r15_4 = arg2
                void* rdx_30 = sx.q(r15_3) + var_3300_2
                uint64_t i_23 = zx.q(arg11)
                uint64_t i_17
                
                do
                    rax_83 = rcx
                    int32_t rcx_45 = sx.d(*rdx_30) + rdi_6
                    *r15_4 = rcx_45
                    
                    if (rax_83 s<= rax_7)
                        if (rcx_45 s> rax_7)
                            rcx_45 = rax_7
                        else if (rcx_45 s< rax_83)
                            rcx_45 = rax_83
                    else if (rcx_45 s> rax_83)
                        rcx_45 = rax_83
                    else if (rcx_45 s< rax_7)
                        rcx_45 = rax_7
                    
                    *r15_4 = rcx_45
                    r15_4 = &r15_4[1]
                    rdx_30 += sx.q(r13_1)
                    i_17 = i_23
                    i_23 -= 1
                while (i_17 != 1)
                r15_3 = var_3320_3
            
            rdi_6.w -= rax_83.w
            *arg3 = rdi_6.w
            *arg4 = r15_3.b
        
        result = 0
else
    memset(r14, 0, i_29 << 2)
    *rsi = 0
    *arg3 = 0
    *arg4 = 0
    result = 1

__security_check_cookie(rax_1 ^ &var_3368)
return result
