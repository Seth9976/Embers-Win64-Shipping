// 函数: sub_1403f43c0
// 地址: 0x1403f43c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
float zmm6[0x4]
float var_58[0x4] = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int128_t __saved_zmm8_1
int128_t __saved_zmm8 = __saved_zmm8_1
int128_t __saved_zmm9_1
int128_t __saved_zmm9 = __saved_zmm9_1
int128_t zmm10
int128_t var_98 = zmm10
int128_t zmm11
int128_t var_a8 = zmm11
int128_t zmm12
int128_t var_b8 = zmm12
int32_t var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rax_2 = *arg1
int64_t r15 = sx.q(*(arg1 + 0xc))
int64_t rdi = sx.q(arg3)
int64_t rsi = *(rax_2 + 0x20)
int64_t r14 = sx.q(*(rax_2 + 8))
int32_t rcx = *(rax_2 + 4)
int32_t var_1e4 = rdi.d
int64_t var_150 = arg2
int64_t r12 = rdi
int32_t i_33 = r15.d
int64_t var_190 = rsi
int64_t rdx = 0
int32_t rdi_1 = 0
int64_t var_168

do
    int64_t rax_3 = sx.q(rdi_1)
    rdx += 1
    rdi_1 += rcx + 0x800
    void* rcx_1 = arg1 + ((rax_3 + 0x16) << 2)
    (&var_168)[rdx] = rcx_1
    (&var_150)[rdx] = rcx_1 + ((0x800 - rdi) << 2)
while (rdx s< r15)

int32_t rdi_2 = *(arg1 + 0x34)
int64_t r8_2 = sx.q(arg1[3].d)
void* rcx_4 = arg1 + ((sx.q((rcx + 0x800) * r15.d) + 0x16) << 2)
int32_t var_178 = r8_2.d
void* rbx_1 = rcx_4 + (sx.q((r15 * 3).d << 3) << 2)
int32_t rax_11 = *(arg1 + 0x14)
void* var_198 = rbx_1 + sx.q((r14 * 2).d) * 0xc
int32_t rax_12
int32_t rdx_1

if (rdi_2 s>= 5 || r8_2.d != 0)
    rdx_1 = 1
    rax_12 = r12.d * i_33
else
    rax_12 = r12.d
    rdx_1 = 0

int64_t rax_15 = sx.q(rax_12) << 2
int64_t rcx_6 = rax_15 + 0xf

if (rcx_6 u<= rax_15)
    rcx_6 = 0xffffffffffffff0

int64_t rcx_7 = rcx_6 & 0xfffffffffffffff0
__chkstk(rcx_7)
void var_248
void* rsp_1 = &var_248 - rcx_7
void* rax_17 = rsp_1 + 0x60
void var_148
void* rsp_2
void* r13_1
void var_160

if (rdx_1 == 0)
    __saved_zmm8_1 = 0x3f800000
    int32_t rax_50
    int64_t* r8_10
    
    if (rdi_2 != 0)
        r8_10 = arg1
        __saved_zmm9_1 = 0x3f4ccccd
        rax_50 = r8_10[6].d
    else
        __chkstk(0x1000)
        rsp_1 -= 0x1000
        int32_t rdi_12 = *(arg1 + 0x24)
        *(rsp_1 + 0x20) = rdi_12
        sub_140400fe0(&var_160, rsp_1 + 0x60, 0x800, zx.q(i_33))
        *(rsp_1 + 0x28) = rdi_12
        *(rsp_1 + 0x20) = &var_1e8
        __saved_zmm8_1, __saved_zmm9_1 =
            __acrt_GetStringTypeA(rsp_1 + 0x600, rsp_1 + 0x60, 0x530, 0x26c)
        r8_10 = arg1
        rax_50 = 0x2d0 - var_1e8
        r8_10[6].d = rax_50
    
    int64_t r13_2 = sx.q(rcx)
    var_1e8 = rax_50
    int64_t rcx_31 = r13_2 << 2
    int64_t rax_51 = rcx_31 + 0xf
    
    if (rax_51 u<= rcx_31)
        rax_51 = 0xffffffffffffff0
    
    int64_t rax_52 = rax_51 & 0xfffffffffffffff0
    __chkstk(rax_52)
    void* rsp_3 = rsp_1 - rax_52
    __chkstk(0x1000)
    int64_t r11_3 = sx.q(rdi_2)
    zmm11 = 0x80000000
    zmm12 = 0x3f800347
    zmm10 = 0x3e4ccccd
    rsp_2 = rsp_3 - 0x1000
    void* r14_6 = *(rax_2 + 0x48)
    uint64_t r9_8 = zx.q(rcx)
    int64_t rdi_13 = 0
    int64_t var_198_1 = 0
    var_168 = r11_3
    int32_t r10_2 = 0
    int32_t var_1e0_1 = 0
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_8.d)
    var_178.q = sx.q((temp3_1 - temp2_1) s>> 1)
    
    do
        void* rbx_9 = *(&var_160 + (rdi_13 << 3))
        void* rcx_34 = rbx_9 + 0x1004
        void* rdx_17 = rsp_2 + 0x60 - rbx_9
        int64_t i_27 = 0x80
        int64_t i
        
        do
            int32_t rax_61 = *(rcx_34 - 4)
            rcx_34 += 0x20
            *(rdx_17 + rcx_34 - 0x1024) = rax_61
            *(rdx_17 + rcx_34 - 0x1020) = *(rcx_34 - 0x20)
            *(rdx_17 + rcx_34 - 0x101c) = *(rcx_34 - 0x1c)
            *(rdx_17 + rcx_34 - 0x1018) = *(rcx_34 - 0x18)
            *(rdx_17 + rcx_34 - 0x1014) = *(rcx_34 - 0x14)
            *(rdx_17 + rcx_34 - 0x1010) = *(rcx_34 - 0x10)
            *(rdx_17 + rcx_34 - 0x100c) = *(rcx_34 - 0xc)
            *(rdx_17 + rcx_34 - 0x1008) = *(rcx_34 - 8)
            i = i_27
            i_27 -= 1
        while (i != 1)
        int32_t var_138
        
        if (r11_3 == 0)
            *(rsp_2 + 0x30) = *(r8_10 + 0x24)
            *(rsp_2 + 0x28) = 0x400
            *(rsp_2 + 0x20) = 0x18
            sub_140409b10(rsp_2 + 0x60, &var_138, r14_6, r9_8)
            int32_t i_1 = 1
            int32_t zmm3_1[0x4] = data_142e11d00
            float zmm4_1[0x4] = data_1436fddb0
            void var_134
            void* rcx_36 = &var_134
            uint128_t i_30
            i_30.d = var_138.d f* zmm12.d
            var_138 = i_30.d
            
            do
                float zmm2_1[0x4] = *rcx_36
                i_30 = zx.o(i_1)
                int32_t rax_70 = i_1 + 4
                i_1 += 8
                rcx_36 += 0x20
                float temp0_5[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(i_30, 0), zmm3_1))
                *(rcx_36 - 0x20) = _mm_sub_ps(zmm2_1, 
                    _mm_mul_ps(_mm_mul_ps(_mm_mul_ps(zmm2_1, zmm4_1), temp0_5), temp0_5))
                zmm2_1 = *(rcx_36 - 0x10)
                float temp0_12[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_70), 0), zmm3_1))
                *(rcx_36 - 0x10) = _mm_sub_ps(zmm2_1, 
                    _mm_mul_ps(_mm_mul_ps(_mm_mul_ps(zmm2_1, zmm4_1), temp0_12), temp0_12))
            while (i_1 s<= 0x18)
            
            __saved_zmm8_1 = sub_140409ea0(rcx_4 + (sx.q(var_1e0_1) << 2), &var_138, 0x18)
            r10_2 = var_1e0_1
        
        uint64_t r9_9 = 0x400
        int64_t i_2 = 0
        int32_t rax_73 = var_1e8 * 2
        
        if (rax_73 s< 0x400)
            r9_9 = zx.q(rax_73)
        
        int64_t rdi_14 = sx.q(r9_9.d)
        int64_t r8_13 = neg.q(rdi_14)
        void* rdx_21 = rbx_9 + ((r8_13 + 0x7fe) << 2)
        void var_158
        void var_154
        void var_144
        void var_140
        void var_13c
        
        do
            int32_t rax_74 = *(rdx_21 + 4)
            i_2 += 8
            rdx_21 -= 0x20
            *(&var_158 + (i_2 << 2)) = rax_74
            *(&var_154 + (i_2 << 2)) = *(rdx_21 + 0x20)
            *(&var_150 + (i_2 << 2)) = *(rdx_21 + 0x1c)
            *(&var_150:4 + (i_2 << 2)) = *(rdx_21 + 0x18)
            *(&var_148 + (i_2 << 2)) = *(rdx_21 + 0x14)
            *(&var_144 + (i_2 << 2)) = *(rdx_21 + 0x10)
            *(&var_140 + (i_2 << 2)) = *(rdx_21 + 0xc)
            *(&var_13c + (i_2 << 2)) = *(rdx_21 + 8)
        while (i_2 s< 0x18)
        
        void* r15_7 = rcx_4 + (sx.q(r10_2) << 2)
        void* rcx_39 = rsp_2 + 0x60 + ((r8_13 + 0x400) << 2)
        *(rsp_2 + 0x28) = &var_138
        *(rsp_2 + 0x20) = 0x18
        float zmm6_1 = sub_14040a160(rcx_39, r15_7, rcx_39, r9_9)
        int64_t rdi_15 = rdi_14 s>> 1
        float zmm2_2 = __saved_zmm8_1.d
        float zmm3_2 = __saved_zmm8_1.d
        int64_t r10_3 = 0
        int64_t zmm0_1
        float zmm1_2
        
        if (rdi_15 s>= 4)
            int64_t r8_17 = neg.q(rdi_15)
            int64_t rdx_25 = neg.q(rdi_15)
            int64_t i_26 = ((rdi_15 - 4) u>> 2) + 1
            void* rax_84 = rsp_2 + 0x60 + ((r8_17 + 0x401) << 2)
            r10_3 = i_26 << 2
            int64_t i_3
            
            do
                zmm0_1 = *(rax_84 - 4)
                zmm1_2 = *(rax_84 + (rdx_25 << 2) - 4)
                rax_84 += 0x10
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm2_2 = zmm2_2 f+ zmm0_1.d
                zmm0_1 = *(rax_84 - 0x10)
                zmm3_2 = zmm3_2 + zmm1_2 * zmm1_2
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm1_2 = *(rax_84 + (neg.q(rdi_15) << 2) - 0x10)
                zmm2_2 = zmm2_2 f+ zmm0_1.d
                zmm0_1 = *(rax_84 - 0xc)
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm3_2 = zmm3_2 + zmm1_2 * zmm1_2
                zmm1_2 = *(rax_84 + (rdx_25 << 2) - 0xc)
                zmm2_2 = zmm2_2 f+ zmm0_1.d
                zmm0_1 = *(rax_84 - 8)
                zmm3_2 = zmm3_2 + zmm1_2 * zmm1_2
                zmm1_2 = *(rax_84 + (r8_17 << 2) - 8)
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm2_2 = zmm2_2 f+ zmm0_1.d
                zmm3_2 = zmm3_2 + zmm1_2 * zmm1_2
                i_3 = i_26
                i_26 -= 1
            while (i_3 != 1)
        
        if (r10_3 s< rdi_15)
            int64_t* rcx_42 = rsp_2 + 0x60 + ((r10_3 + ((0x200 - rdi_15) << 1)) << 2)
            int64_t i_28 = rdi_15 - r10_3
            int64_t i_4
            
            do
                zmm0_1 = *(rcx_42 + (rdi_15 << 2))
                zmm1_2 = *rcx_42
                rcx_42 += 4
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm2_2 = zmm2_2 f+ zmm0_1.d
                zmm3_2 = zmm3_2 + zmm1_2 * zmm1_2
                i_4 = i_28
                i_28 -= 1
            while (i_4 != 1)
        
        if (not(zmm3_2 > zmm2_2))
            zmm2_2 = zmm3_2
        
        zmm7.d = fconvert.s(sqrt(fconvert.d(zmm2_2 / zmm3_2)))
        memmove(rbx_9, rbx_9 + (r12 << 2), (0x800 - r12.d) << 2)
        int32_t rcx_44 = var_1e8
        int32_t rdx_27 = 0
        int64_t r10_4 = 0
        zmm1_2 = zmm7.d f* __saved_zmm9_1.d
        int64_t rdi_16 = sx.q(0x400 - rcx_44)
        int64_t r11_4 = sx.q(r12.d + rcx)
        float zmm0_3
        
        if (r11_4 s>= 4)
            int64_t i_29 = ((r11_4 - 4) u>> 2) + 1
            void* r8_19 = rbx_9 + ((0x801 - r12) << 2)
            r10_4 = i_29 << 2
            int64_t i_5
            
            do
                if (rdx_27 s>= rcx_44)
                    rdx_27 -= rcx_44
                    zmm1_2 = zmm1_2 f* zmm7.d
                
                int64_t rcx_45 = sx.q(rdx_27)
                int32_t rdx_28 = rdx_27 + 1
                *(r8_19 - 4) = zmm1_2 f* *(rsp_2 + 0x60 + ((rdi_16 + rcx_45) << 2))
                zmm0_3 = *(rbx_9 + ((rdi_16 - r12 + rcx_45) << 2) + 0x1000)
                int32_t rax_96 = var_1e8
                zmm6_1 = zmm6_1 + zmm0_3 * zmm0_3
                
                if (rdx_28 s>= rax_96)
                    rdx_28 -= rax_96
                    zmm1_2 = zmm1_2 f* zmm7.d
                
                int64_t rcx_46 = sx.q(rdx_28)
                int32_t rdx_29 = rdx_28 + 1
                *r8_19 = zmm1_2 f* *(rsp_2 + 0x60 + ((rdi_16 + rcx_46) << 2))
                zmm0_3 = *(rbx_9 + ((rdi_16 - r12 + rcx_46) << 2) + 0x1000)
                int32_t rax_101 = var_1e8
                zmm6_1 = zmm6_1 + zmm0_3 * zmm0_3
                
                if (rdx_29 s>= rax_101)
                    rdx_29 -= rax_101
                    zmm1_2 = zmm1_2 f* zmm7.d
                
                int64_t rcx_47 = sx.q(rdx_29)
                int32_t rdx_30 = rdx_29 + 1
                *(r8_19 + 4) = zmm1_2 f* *(rsp_2 + 0x60 + ((rdi_16 + rcx_47) << 2))
                zmm0_3 = *(rbx_9 + ((rdi_16 - r12 + rcx_47) << 2) + 0x1000)
                int32_t rax_106 = var_1e8
                zmm6_1 = zmm6_1 + zmm0_3 * zmm0_3
                
                if (rdx_30 s>= rax_106)
                    rdx_30 -= rax_106
                    zmm1_2 = zmm1_2 f* zmm7.d
                
                int64_t rcx_48 = sx.q(rdx_30)
                r8_19 += 0x10
                rdx_27 = rdx_30 + 1
                *(r8_19 - 8) = zmm1_2 f* *(rsp_2 + 0x60 + ((rdi_16 + rcx_48) << 2))
                rcx_44 = var_1e8
                zmm0_3 = *(rbx_9 + ((rdi_16 - r12 + rcx_48) << 2) + 0x1000)
                zmm6_1 = zmm6_1 + zmm0_3 * zmm0_3
                i_5 = i_29
                i_29 -= 1
            while (i_5 != 1)
        
        if (r10_4 s< r11_4)
            int64_t r9_15 = r11_4 - r10_4
            void* r8_23 = rbx_9 + ((r10_4 - r12 + 0x800) << 2)
            
            while (true)
                if (rdx_27 s>= rcx_44)
                    rdx_27 -= rcx_44
                    zmm1_2 = zmm1_2 f* zmm7.d
                
                int64_t rcx_49 = sx.q(rdx_27)
                r8_23 += 4
                rdx_27 += 1
                *(r8_23 - 4) = zmm1_2 f* *(rsp_2 + 0x60 + ((rdi_16 + rcx_49) << 2))
                zmm0_3 = *(rbx_9 + ((rdi_16 - r12 + rcx_49) << 2) + 0x1000)
                zmm6_1 = zmm6_1 + zmm0_3 * zmm0_3
                int64_t temp17_1 = r9_15
                r9_15 -= 1
                
                if (temp17_1 == 1)
                    break
                
                rcx_44 = var_1e8
        
        int64_t rdi_17 = 0
        void* rdx_31 = rbx_9 + ((0x7fe - r12) << 2)
        
        for (int64_t i_6 = 0; i_6 s< 0x18; )
            int32_t rax_116 = *(rdx_31 + 4)
            i_6 += 8
            rdx_31 -= 0x20
            *(&var_158 + (i_6 << 2)) = rax_116
            *(&var_154 + (i_6 << 2)) = *(rdx_31 + 0x20)
            *(&var_150 + (i_6 << 2)) = *(rdx_31 + 0x1c)
            *(&var_150:4 + (i_6 << 2)) = *(rdx_31 + 0x18)
            *(&var_148 + (i_6 << 2)) = *(rdx_31 + 0x14)
            *(&var_144 + (i_6 << 2)) = *(rdx_31 + 0x10)
            *(&var_140 + (i_6 << 2)) = *(rdx_31 + 0xc)
            *(&var_13c + (i_6 << 2)) = *(rdx_31 + 8)
        
        void* rcx_50 = rbx_9 + ((0x800 - rdi) << 2)
        *(rsp_2 + 0x28) = &var_138
        *(rsp_2 + 0x20) = 0x18
        float zmm6_2 = sub_14040a600(rcx_50, r15_7, rcx_50, zx.q(r12.d + rcx))
        int64_t rdx_33 = 0
        int128_t zmm2_3 = zx.o(0)
        int64_t r15_8 = sx.q(r12.d + rcx)
        int128_t zmm0_4
        float zmm1_3
        
        if (r15_8 s>= 4)
            void* rcx_51 = rbx_9 + ((0x801 - r12) << 2)
            int64_t i_19 = ((r15_8 - 4) u>> 2) + 1
            rdx_33 = i_19 << 2
            int64_t i_7
            
            do
                zmm0_4 = *(rcx_51 - 4)
                zmm1_3 = *rcx_51
                rcx_51 += 0x10
                zmm0_4.d = zmm0_4.d f* zmm0_4.d
                zmm2_3.d = zmm2_3.d f+ zmm0_4.d
                zmm0_4 = *(rcx_51 - 0xc)
                zmm0_4.d = zmm0_4.d f* zmm0_4.d
                zmm2_3.d = zmm2_3.d f+ zmm1_3 * zmm1_3
                zmm1_3 = *(rcx_51 - 8)
                zmm2_3.d = zmm2_3.d f+ zmm0_4.d
                zmm2_3.d = zmm2_3.d f+ zmm1_3 * zmm1_3
                i_7 = i_19
                i_19 -= 1
            while (i_7 != 1)
        
        if (rdx_33 s< r15_8)
            void* rcx_52 = rbx_9 + ((rdx_33 - r12 + 0x800) << 2)
            int64_t i_20 = r15_8 - rdx_33
            int64_t i_8
            
            do
                zmm0_4 = *rcx_52
                rcx_52 += 4
                zmm0_4.d = zmm0_4.d f* zmm0_4.d
                zmm2_3.d = zmm2_3.d f+ zmm0_4.d
                i_8 = i_20
                i_20 -= 1
            while (i_8 != 1)
        
        zmm0_4.d = zmm2_3.d f* zmm10.d
        
        if (zmm6_2 f> zmm0_4.d)
            if (not(zmm2_3.d f<= zmm6_2))
                zmm2_3.d = zmm2_3.d f+ __saved_zmm8_1.d
                zmm0_4.q = fconvert.d((zmm6_2 f+ __saved_zmm8_1.d) f/ zmm2_3.d)
                zmm2_3.d = fconvert.s(sqrt(zmm0_4.q).q)
                int128_t zmm3_3
                
                if (r13_2 s>= 4)
                    zmm3_3.d = __saved_zmm8_1.d f- zmm2_3.d
                    void* rcx_54 = rbx_9 + ((0x801 - r12) << 2)
                    int64_t i_21 = ((r13_2 - 4) u>> 2) + 1
                    rdi_17 = i_21 << 2
                    int64_t i_9
                    
                    do
                        rcx_54 += 0x10
                        zmm0_4.d = zmm3_3.d f*
                            *((r12 << 2) + -0xffffffffffffdffc - rbx_9 + r14_6 + rcx_54 - 0x10)
                        *(rcx_54 - 0x14) = (__saved_zmm8_1.d f- zmm0_4.d) f* *(rcx_54 - 0x14)
                        zmm0_4.d = zmm3_3.d f*
                            *((r12 << 2) + -0xffffffffffffe000 - rbx_9 + r14_6 + rcx_54 - 0x10)
                        *(rcx_54 - 0x10) = (__saved_zmm8_1.d f- zmm0_4.d) f* *(rcx_54 - 0x10)
                        zmm0_4.d = zmm3_3.d f*
                            *((r12 << 2) + -0xffffffffffffe004 - rbx_9 + r14_6 + rcx_54 - 0x10)
                        *(rcx_54 - 0xc) = (__saved_zmm8_1.d f- zmm0_4.d) f* *(rcx_54 - 0xc)
                        zmm0_4.d = zmm3_3.d f*
                            *((r12 << 2) + -0xffffffffffffe008 - rbx_9 + r14_6 + rcx_54 - 0x10)
                        *(rcx_54 - 8) = (__saved_zmm8_1.d f- zmm0_4.d) f* *(rcx_54 - 8)
                        i_9 = i_21
                        i_21 -= 1
                    while (i_9 != 1)
                
                if (rdi_17 s< r13_2)
                    zmm3_3.d = __saved_zmm8_1.d f- zmm2_3.d
                    void* rcx_55 = rbx_9 + ((rdi_17 - r12 + 0x800) << 2)
                    int64_t i_22 = r13_2 - rdi_17
                    int64_t i_10
                    
                    do
                        rcx_55 += 4
                        zmm0_4.d = zmm3_3.d f*
                            *((r12 << 2) + -0xffffffffffffe000 - rbx_9 + r14_6 + rcx_55 - 4)
                        *(rcx_55 - 4) = (__saved_zmm8_1.d f- zmm0_4.d) f* *(rcx_55 - 4)
                        i_10 = i_22
                        i_22 -= 1
                    while (i_10 != 1)
                
                int64_t rdx_41 = r13_2
                
                if (r13_2 s< r15_8)
                    if (r15_8 - r13_2 s>= 4)
                        void* rcx_56 = rbx_9 + ((r13_2 - r12 + 0x801) << 2)
                        int64_t i_23 = ((r15_8 - r13_2 - 4) u>> 2) + 1
                        rdx_41 = (i_23 << 2) + r13_2
                        int64_t i_11
                        
                        do
                            rcx_56 += 0x10
                            zmm0_4.d = zmm2_3.d f* *(rcx_56 - 0x14)
                            zmm1_3 = zmm2_3.d f* *(rcx_56 - 0x10)
                            *(rcx_56 - 0x14) = zmm0_4.d
                            *(rcx_56 - 0x10) = zmm1_3
                            zmm0_4.d = zmm2_3.d f* *(rcx_56 - 0xc)
                            zmm1_3 = zmm2_3.d f* *(rcx_56 - 8)
                            *(rcx_56 - 0xc) = zmm0_4.d
                            *(rcx_56 - 8) = zmm1_3
                            i_11 = i_23
                            i_23 -= 1
                        while (i_11 != 1)
                    
                    if (rdx_41 s< r15_8)
                        void* rcx_57 = rbx_9 + ((rdx_41 - r12 + 0x800) << 2)
                        int64_t i_24 = r15_8 - rdx_41
                        int64_t i_12
                        
                        do
                            rcx_57 += 4
                            zmm0_4.d = zmm2_3.d f* *(rcx_57 - 4)
                            *(rcx_57 - 4) = zmm0_4.d
                            i_12 = i_24
                            i_24 -= 1
                        while (i_12 != 1)
        else if (r15_8 s> 0)
            __builtin_memset(rbx_9 + ((0x800 - rdi) << 2), 0, r15_8 << 2)
        
        int32_t rax_155 = arg1[9].d
        uint64_t r8_28 = zx.q(arg1[7].d)
        zmm0_4 = arg1[8].d ^ zmm11
        *(rsp_2 + 0x50) = 0
        *(rsp_2 + 0x48) = 0
        *(rsp_2 + 0x40) = rax_155
        *(rsp_2 + 0x38) = rax_155
        *(rsp_2 + 0x30) = zmm0_4.d
        *(rsp_2 + 0x28) = zmm0_4.d
        *(rsp_2 + 0x20) = rcx
        __saved_zmm8_1, __saved_zmm9_1, zmm10, zmm11, zmm12 =
            sub_14037de40(rsp_3 + 0x60, rbx_9 + 0x2000, r8_28, zx.q(r8_28.d))
        int64_t r10_8 = var_178.q
        int64_t i_13 = 0
        
        if (r10_8 s>= 4)
            void* rdi_20 = rbx_9 - r14_6
            void* r8_30 = rsp_3 + 0x60 - r14_6
            void* rdx_43 = r14_6 + 4
            
            do
                rdx_43 += 0x10
                int64_t rax_158 = r13_2 - i_13
                i_13 += 4
                *(rdx_43 + rdi_20 + 0x1fec) =
                    *(r14_6 + (rax_158 << 2) - 4) f* *(rdx_43 + r8_30 - 0x14)
                    + *(rsp_3 + 0x60 + (rax_158 << 2) - 4) f* *(rdx_43 - 0x14)
                *(rdx_43 + rdi_20 + 0x1ff0) =
                    *(r14_6 + (rax_158 << 2) - 8) f* *(rdx_43 + r8_30 - 0x10)
                    + *(rsp_3 + 0x60 + (rax_158 << 2) - 8) f* *(rdx_43 - 0x10)
                *(rdx_43 + rdi_20 + 0x1ff4) =
                    *(r14_6 + (rax_158 << 2) - 0xc) f* *(rdx_43 + r8_30 - 0xc)
                    + *(rsp_3 + 0x60 + (rax_158 << 2) - 0xc) f* *(rdx_43 - 0xc)
                *(rdx_43 + rdi_20 + 0x1ff8) =
                    *(r14_6 + (rax_158 << 2) - 0x10) f* *(rdx_43 + r8_30 - 8)
                    + *(rsp_3 + 0x60 + (rax_158 << 2) - 0x10) f* *(rdx_43 - 8)
            while (i_13 s< r10_8 - 3)
        
        if (i_13 s< r10_8)
            void* rdx_44 = r14_6 + (i_13 << 2)
            
            do
                rdx_44 += 4
                int64_t rax_160 = r13_2 - i_13
                i_13 += 1
                float zmm1_4 = *(r14_6 + (rax_160 << 2) - 4) f* *(rdx_44 + rsp_3 + 0x60 - r14_6 - 4)
                    + *(rsp_3 + 0x60 + (rax_160 << 2) - 4) f* *(rdx_44 - 4)
                *(rdx_44 + rbx_9 - r14_6 + 0x1ffc) = zmm1_4
            while (i_13 s< r10_8)
        
        r8_10 = arg1
        r11_3 = var_168
        r9_8 = zx.q(rcx)
        rdi_13 = var_198_1 + 1
        r10_2 = var_1e0_1 + 0x18
        var_198_1 = rdi_13
        var_1e0_1 = r10_2
    while (rdi_13 s< r15)
    
    r13_1 = rax_17
else
    int64_t rdx_2 = sx.q(*(arg1 + 0x1c))
    int32_t rdi_3 = *(rax_2 + 0xc)
    int32_t rax_19 = rdi_3
    
    if (rdx_2.d s< rdi_3)
        rax_19 = rdx_2.d
    
    int32_t var_1e0
    
    if (r8_2.d s<= rax_19)
        if (rdx_2.d s< rdi_3)
            rdi_3 = rdx_2.d
        
        var_1e0 = rdi_3
    else
        var_1e0 = r8_2.d
    
    int64_t rcx_10 = sx.q(r12.d * i_33) << 2
    int64_t rax_22 = rcx_10 + 0xf
    
    if (rax_22 u<= rcx_10)
        rax_22 = 0xffffffffffffff0
    
    int64_t rax_23 = rax_22 & 0xfffffffffffffff0
    __chkstk(rax_23)
    rsp_2 = rsp_1 - rax_23
    void* rdi_4 = rsp_2 + 0x60
    int64_t var_180 = r8_2
    void* var_1a8_1 = rdi_4
    
    if (rdi_2 s< 5)
        float zmm2[0x4]
        
        zmm2 = rdi_2 != 0 ? 0x3f000000 : 0x3fc00000
        
        int64_t rax_25 = r15
        int64_t r9 = 0
        int64_t r10_1 = 0
        void* r11_1 = rbx_1 + (r8_2 << 2)
        
        do
            int64_t rdx_3 = r8_2
            
            if (r8_2 s< rdx_2)
                uint128_t zmm0
                
                if (rdx_2 - r8_2 s>= 4)
                    void* rax_28 = r11_1
                    int64_t i_25 = ((rdx_2 - r8_2 - 4) u>> 2) + 1
                    rdx_3 = r8_2 + (i_25 << 2)
                    int64_t i_14
                    
                    do
                        zmm0 = *rax_28
                        float zmm1 = *(rax_28 + 4)
                        rax_28 += 0x10
                        zmm0.d = zmm0.d f- zmm2[0]
                        zmm1 = zmm1 - zmm2[0]
                        *(rax_28 - 0x10) = zmm0.d
                        zmm0 = *(rax_28 - 8)
                        *(rax_28 - 0xc) = zmm1
                        zmm0.d = zmm0.d f- zmm2[0]
                        zmm1 = *(rax_28 - 4) - zmm2[0]
                        *(rax_28 - 8) = zmm0.d
                        *(rax_28 - 4) = zmm1
                        i_14 = i_25
                        i_25 -= 1
                    while (i_14 != 1)
                
                if (rdx_3 s< rdx_2)
                    void* rcx_15 = rbx_1 + ((rdx_3 + r10_1) << 2)
                    int64_t i_17 = rdx_2 - rdx_3
                    int64_t i_15
                    
                    do
                        zmm0 = *rcx_15
                        rcx_15 += 4
                        zmm0.d = zmm0.d f- zmm2[0]
                        *(rcx_15 - 4) = zmm0.d
                        i_15 = i_17
                        i_17 -= 1
                    while (i_15 != 1)
                
                rax_25 = r15
            
            r9 += 1
            r10_1 += r14
            r11_1 += r14 << 2
        while (r9 s< rax_25)
        
        rdi_4 = var_1a8_1
        var_198 = rbx_1
    
    int64_t* rax_36 = arg1
    uint64_t i_32 = zx.q(i_33)
    int64_t r9_1 = sx.q(var_1e0)
    int32_t rbx_2 = rax_36[5].d
    int64_t r14_1 = r9_1
    
    if (i_32.d s> 0)
        zmm6 = 0x3f800000
        int32_t rdx_4 = 0
        uint64_t i_18 = zx.q(i_32.d)
        uint64_t i_31 = i_32
        int32_t rcx_16 = r12.d
        var_1e8 = 0
        uint64_t i_16
        
        do
            int64_t r12_1 = r8_2
            
            if (r8_2 s< r14_1)
                do
                    int32_t rax_31 = sx.d(*(rsi + (r12_1 << 1)))
                    char rcx_17 = arg4.b
                    int32_t j_2 = (sx.d(*(rsi + (r12_1 << 1) + 2)) - rax_31) << rcx_17
                    int32_t r14_4 = (rax_31 << rcx_17) + rdx_4
                    int64_t j_1 = sx.q(j_2)
                    
                    if (j_2 s> 0)
                        void* rdi_6 = rdi_4 + (sx.q(r14_4) << 2)
                        int64_t j
                        
                        do
                            int32_t rax_33 = sub_1404047c0(rbx_2)
                            rdi_6 += 4
                            rbx_2 = rax_33
                            *(rdi_6 - 4) = _mm_cvtepi32_ps(zx.o(rax_33 s>> 0x14)).d
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        rdi_4 = var_1a8_1
                    
                    zmm6 = sub_14040b790(rdi_4 + (sx.q(r14_4) << 2), j_2, zmm6)
                    r9_1 = sx.q(var_1e0)
                    rsi = var_190
                    rdx_4 = var_1e8
                    r12_1 += 1
                    r14_1 = r9_1
                while (r12_1 s< r9_1)
                
                r8_2 = var_180
                i_18 = i_31
                rcx_16 = var_1e4
            
            rdx_4 += rcx_16
            i_16 = i_18
            i_18 -= 1
            i_31 = i_18
            var_1e8 = rdx_4
        while (i_16 != 1)
        r12 = rdi
        rax_36 = arg1
    
    rax_36[5].d = rbx_2
    *(rsp_2 + 0x38) = 1 << arg4.b
    *(rsp_2 + 0x30) = i_33
    *(rsp_2 + 0x28) = r9_1.d
    *(rsp_2 + 0x20) = var_178
    sub_140405430(rax_2, rdi_4, rax_17, var_198)
    int64_t r8_4 = 0
    int64_t r9_3 = 0
    
    do
        int32_t rdi_8 = sx.d(*(rsi + (r14_1 << 1))) << arg4.b
        
        if (rax_11 != 1)
            int32_t temp0_2 = divs.dp.d(sx.q(var_1e4), rax_11)
            
            if (rdi_8 s>= temp0_2)
                rdi_8 = temp0_2
        
        int64_t rdx_9 = sx.q(rdi_8)
        
        if (rdx_9 s< r12)
            __builtin_memset(rax_17 + ((rdx_9 + r9_3) << 2), 0, (r12 - rdx_9) << 2)
        
        r8_4 += 1
        r9_3 += r12
    while (r8_4 s< r15)
    
    int64_t rdi_10 = 0
    
    do
        int64_t rcx_26 = *(&var_160 + (rdi_10 << 3))
        memmove(rcx_26, rcx_26 + (r12 << 2), ((rcx s>> 1) - var_1e4 + 0x800) << 2)
        rdi_10 += 1
    while (rdi_10 s< r15)
    
    void* r8_6 = rax_2
    int32_t r14_5 = *(r8_6 + 4)
    int32_t rsi_2 = *(r8_6 + 0x28) - arg4
    r13_1 = rax_17
    int32_t rbx_7 = *(r8_6 + 0x30) << arg4.b
    int64_t r12_2 = 0
    void* r15_6 = r8_6 + 0x50
    int32_t rdi_11 = 0
    
    do
        int64_t r9_4 = *(r8_6 + 0x48)
        int64_t r8_7 = *(&var_148 + (r12_2 << 3))
        *(rsp_2 + 0x30) = 1
        *(rsp_2 + 0x28) = rsi_2
        *(rsp_2 + 0x20) = r14_5
        sub_140401ea0(r15_6, (sx.q(rdi_11) << 2) + r13_1, r8_7, r9_4)
        r8_6 = rax_2
        r12_2 += 1
        rdi_11 += rbx_7
    while (r12_2 s< r15)
int64_t rdx_45 = var_150
*(rsp_2 + 0x38) = r13_1
*(rsp_2 + 0x30) = &arg1[0xa]
*(rsp_2 + 0x28) = rax_2 + 0x10
*(rsp_2 + 0x20) = rax_11
sub_1403f6ac0(&var_148, rdx_45, zx.q(var_1e4), zx.q(i_33))
*(arg1 + 0x34) = rdi_2 + 1
__security_check_cookie(rax_1 ^ &var_1e8)
return rdi_2 + 1
