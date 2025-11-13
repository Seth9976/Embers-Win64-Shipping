// 函数: sub_1409a5e20
// 地址: 0x1409a5e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
void* r10 = *arg1
int64_t* r13 = arg3
uint32_t rcx_1 = *(r10 + 8) u>> 2
int32_t var_40c = *(r10 + 4)
void* rsi = *(*(r10 + 0x28) + ((zx.q(rcx_1) & 0xf) << 3))
int32_t rdi = ((zx.q(*(rsi + 0x14)) << 1) + 1).d
uint64_t rax_4

if (arg4 == 0 || arg5 == 0)
    rax_4.b = 0
else
    rax_4.b = 1

char var_418 = rax_4.b
int32_t var_2a0 = rdi
int32_t var_29c = 0x21
int32_t j_12 = 0
void* var_210 = nullptr
void var_298
void* var_2a8 = &var_298

if (rdi u> 0x21)
    void* rax_6 = j_sub_140a82f30(zx.q(rdi) << 2)
    var_210 = rax_6
    var_2a8 = rax_6
    int32_t var_29c_1 = rdi

int32_t rbx_1 = ((zx.q(rax_4.b) << 1) + 1).d * rdi
void var_1f8
void* r9 = &var_1f8
void* rdx_1 = nullptr
void* var_3e8 = &var_1f8
void* var_208 = &var_1f8
int32_t var_1fc = 0x63
void* var_68 = nullptr
int32_t var_200 = rbx_1

if (rbx_1 u> 0x63)
    void* rax_7 = j_sub_140a82f30(zx.q(rbx_1) << 2)
    rdx_1 = rax_7
    var_68 = rax_7
    r9 = rax_7
    var_3e8 = rax_7
    void* var_208_1 = rax_7
    int32_t var_1fc_1 = rbx_1

bool cond:0 = *(rsi + 8) s<= 0
int64_t rcx_7 = sx.q(*(rsi + 0x14))
int64_t rax_8 = sx.q(rdi)
void* var_3c0 = r9
void* r14 = r9 + 4 + (rcx_7 << 2)
void* var_3b8 = r9 + 4
void* r15 = r9 + (rax_8 << 2)
void* rcx_8 = r15 + (rax_8 << 2)
void* rbx_2 = r9 + 4 + (rax_8 << 2)
void* rdi_1 = r14 + (rax_8 << 2)
void* var_398 = r15
void* rcx_9 = rbx_2 + (rax_8 << 2)
void* r10_1 = rdi_1 + (rax_8 << 2)
int32_t i = 0
void* var_318 = rcx_8
void* var_3b0 = r14
int64_t var_3a8 = 0
int32_t j_18 = 0
char var_39c = 0
void* var_390 = rbx_2
void* var_388 = rdi_1
int64_t var_380 = 0
int32_t j_13 = 0
char var_374 = 0
void* var_310 = rcx_9
void* var_308 = r10_1
int64_t var_300 = 0
int32_t var_2f8 = 0
char var_2f4 = 0
void* var_338 = rsi
void* var_330 = rsi
int32_t i_1 = 0

if (not(cond:0))
    float* rbx_3 = nullptr
    void* r9_1 = nullptr
    int32_t* var_3f8_1 = nullptr
    int32_t r11_1 = 0
    int32_t var_410_1 = 0
    void* r10_2 = nullptr
    void* var_400_1 = nullptr
    char r8 = var_418
    float zmm6[0x4] = zx.o(0)
    
    do
        void* rdx_2 = *(rsi + 0x150)
        uint64_t j_16 = zx.q(*(rdx_2 + r9_1))
        int32_t* rdi_2 = *(rsi + 0x168) + (sx.q(*(rdx_2 + r9_1 + 4)) << 2)
        uint32_t r9_2 = zx.d(*(r10_2 + *(rsi + 0x1b0)))
        float zmm1
        float zmm2
        
        if ((0x800 & r9_2.w) != 0 || j_16.d == 0)
            int64_t* rcx_32 = *r13
            int32_t var_2c4_1 = 0
            *(rcx_32 + rbx_3) = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
            *(rcx_32 + rbx_3 + 8) = 0
            int64_t rax_46 = *arg2
            int64_t rcx_33 = *r13
            zmm1 = *(rbx_3 + rax_46 + 4)
            zmm2 = *(rbx_3 + rax_46 + 8)
            float zmm0[0x4] = *(rbx_3 + rcx_33)
            zmm0[0] = zmm0[0] f+ *(rbx_3 + rax_46)
            zmm1 = zmm1 f+ *(rbx_3 + rcx_33 + 4)
            zmm2 = zmm2 f+ *(rbx_3 + rcx_33 + 8)
            *(rbx_3 + rcx_33) = zmm0[0]
            *(rbx_3 + rcx_33 + 4) = zmm1
            *(rbx_3 + rcx_33 + 8) = zmm2
            
            if (r8 != 0)
                float temp0_5[0x4] = _mm_unpacklo_ps(zmm6, zmm6[0].q)
                int32_t var_2b8_1 = 0
                int32_t var_2ac_1 = 0
                int64_t* rcx_34 = *arg4
                *(rcx_34 + rbx_3) = temp0_5.q
                *(rcx_34 + rbx_3 + 8) = 0
                float temp0_6[0x4] = _mm_unpacklo_ps(zmm6, zmm6[0].q)
                int64_t* rcx_35 = *arg5
                *(rcx_35 + rbx_3) = temp0_6.q
                *(rcx_35 + rbx_3 + 8) = var_2ac_1
        else
            int64_t rcx_11 = sx.q(r11_1)
            int32_t r9_4 = r9_2 u>> 7 & 0xf
            int32_t i_2 = i
            int32_t i_3 = i
            void** r8_1 = &var_3c0
            int32_t var_320_1 = *(rdx_2 + (rcx_11 << 2))
            int64_t* rdx_3 = &var_338
            int32_t var_31c_1 = *(*(rsi + 0x108) + (rcx_11 << 2))
            int32_t* rcx_13 = &var_40c
            
            if (r8 == 0)
                _kbhit_nolock(rcx_13, rdx_3, r8_1, r9_4)
            else
                zmm6 = sub_140995ec0(rcx_13, rdx_3, r8_1, &var_398, &var_318, r9_4)
                j_12 = var_380:4.d
            
            void* rcx_14 = var_2a8
            void* var_3f0_1 = rcx_14
            void* r13_1 = rcx_14 + (sx.q(j_16.d) << 2)
            
            if (j_16.d s> 0)
                uint64_t j_7 = j_16
                uint64_t j
                
                do
                    int64_t r8_2 = *(rsi + 0x78)
                    int64_t rdx_4 = sx.q(*rdi_2 * 2)
                    int32_t rax_18 = *(r8_2 + (rdx_4 << 2))
                    
                    if (rax_18 == i)
                        rax_18 = *(r8_2 + (rdx_4 << 2) + 4)
                    
                    *rcx_14 = rax_18
                    rdi_2 = &rdi_2[1]
                    rcx_14 += 4
                    j = j_7
                    j_7 -= 1
                while (j != 1)
            
            uint64_t j_17 = zx.q(j_18)
            char r14_1
            
            if (j_17.d != 0)
            label_1409a615b:
                int64_t rcx_15 = *(rsi + 0x108)
                int64_t rdx_5 = sx.q(*(var_3f8_1 + rcx_15 + 4))
                int32_t j_15 = *(var_3f8_1 + rcx_15)
                int16_t* r9_6 = *(rsi + 0x138) + (rdx_5 << 1)
                
                if (j_15 s> 0)
                    void* r8_4 = r13_1
                    void* r14_3 = *(rsi + 0x120) + (rdx_5 << 2) - r13_1
                    uint64_t j_6 = zx.q(j_15)
                    uint64_t j_1
                    
                    do
                        int64_t r11_2 = *(rsi + 0x18)
                        int64_t r10_3 = sx.q(*(r14_3 + r8_4) * 2)
                        int16_t rdx_6 = *r9_6 + 2
                        int32_t rcx_16 = *(r11_2 + (r10_3 << 2))
                        
                        if (zx.d(rdx_6) s>= rcx_16)
                            rdx_6 -= rcx_16.w
                        
                        r9_6 = &r9_6[1]
                        *r8_4 = *(*(rsi + 0x30)
                            + ((sx.q(*(r11_2 + (r10_3 << 2) + 4)) + zx.q(rdx_6)) << 2))
                        r8_4 += 4
                        j_1 = j_6
                        j_6 -= 1
                    while (j_1 != 1)
                
                r14_1 = var_418
            else
                r14_1 = var_418
                
                if (r14_1 != 0 && j_13 != j_17.d)
                    goto label_1409a615b
            
            float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm6[0].q)
            int32_t var_2e8_1 = 0
            int64_t* rcx_20 = *arg3
            *(rcx_20 + rbx_3) = temp0_1.q
            *(rcx_20 + rbx_3 + 8) = 0
            float zmm3_1[0x4]
            
            if (j_17.d s> 0)
                void* r8_5 = r13_1
                uint64_t j_8 = j_17
                uint64_t j_2
                
                do
                    zmm3_1 = *(r14 - r13_1 + r8_5)
                    int64_t rax_26 = sx.q(*r8_5)
                    int64_t rdx_7 = *arg3
                    r8_5 += 4
                    int64_t rcx_21 = rax_26 * 3
                    int64_t rax_27 = *arg2
                    zmm1 = *(rax_27 + (rcx_21 << 2) + 4)
                    zmm2 = *(rax_27 + (rcx_21 << 2) + 8)
                    zmm3_1[0] = zmm3_1[0] f* *(rax_27 + (rcx_21 << 2))
                    zmm2 = zmm2 * zmm3_1[0]
                    zmm1 = zmm1 * zmm3_1[0] f+ *(rbx_3 + rdx_7 + 4)
                    zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rdx_7)
                    zmm2 = zmm2 f+ *(rbx_3 + rdx_7 + 8)
                    *(rbx_3 + rdx_7 + 4) = zmm1
                    *(rbx_3 + rdx_7) = zmm3_1[0]
                    *(rbx_3 + rdx_7 + 8) = zmm2
                    j_2 = j_8
                    j_8 -= 1
                while (j_2 != 1)
            
            int32_t j_14 = var_3a8:4.d
            void* rdi_3 = var_3f0_1
            
            if (j_14 s> 0)
                int128_t* r8_6 = rdi_3
                uint64_t j_9 = zx.q(j_14)
                uint64_t j_3
                
                do
                    zmm3_1 = *(r8_6 + r9 + 4 - rdi_3)
                    int64_t rax_28 = sx.q(*r8_6)
                    int64_t rdx_8 = *arg3
                    r8_6 += 4
                    int64_t rcx_22 = rax_28 * 3
                    int64_t rax_29 = *arg2
                    zmm1 = *(rax_29 + (rcx_22 << 2) + 4)
                    zmm2 = *(rax_29 + (rcx_22 << 2) + 8)
                    zmm3_1[0] = zmm3_1[0] f* *(rax_29 + (rcx_22 << 2))
                    zmm2 = zmm2 * zmm3_1[0]
                    zmm1 = zmm1 * zmm3_1[0] f+ *(rbx_3 + rdx_8 + 4)
                    zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rdx_8)
                    zmm2 = zmm2 f+ *(rbx_3 + rdx_8 + 8)
                    *(rbx_3 + rdx_8 + 4) = zmm1
                    *(rbx_3 + rdx_8) = zmm3_1[0]
                    *(rbx_3 + rdx_8 + 8) = zmm2
                    j_3 = j_9
                    j_9 -= 1
                while (j_3 != 1)
            
            int64_t rcx_23 = *arg3
            zmm3_1 = *var_3e8
            int64_t rax_31 = *arg2
            zmm1 = *(rbx_3 + rax_31 + 4)
            zmm2 = *(rbx_3 + rax_31 + 8)
            zmm3_1[0] = zmm3_1[0] f* *(rbx_3 + rax_31)
            zmm2 = zmm2 * zmm3_1[0]
            zmm1 = zmm1 * zmm3_1[0] f+ *(rbx_3 + rcx_23 + 4)
            zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rcx_23)
            zmm2 = zmm2 f+ *(rbx_3 + rcx_23 + 8)
            *(rbx_3 + rcx_23 + 4) = zmm1
            *(rbx_3 + rcx_23) = zmm3_1[0]
            *(rbx_3 + rcx_23 + 8) = zmm2
            
            if (r14_1 == 0)
                r13 = arg3
            else
                float temp0_2[0x4] = _mm_unpacklo_ps(zmm6, zmm6[0].q)
                int32_t var_2dc_1 = 0
                int64_t* rcx_24 = *arg4
                int32_t var_2d0_1 = 0
                *(rcx_24 + rbx_3) = temp0_2.q
                *(rcx_24 + rbx_3 + 8) = 0
                int64_t* rcx_25 = *arg5
                *(rcx_25 + rbx_3) = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
                *(rcx_25 + rbx_3 + 8) = var_2d0_1
                float zmm4_1[0x4]
                
                if (j_13 s> 0)
                    uint64_t j_10 = zx.q(j_13)
                    void* r10_9 = r10_1 - r13_1
                    uint64_t j_4
                    
                    do
                        int64_t rdx_9 = *arg4
                        void* r8_7 = r10_9 + r13_1
                        zmm3_1 = *(r8_7 + rdi_1 - r10_1)
                        int64_t rcx_26 = sx.q(*r13_1) * 3
                        int64_t rax_35 = *arg2
                        zmm3_1[0] = zmm3_1[0] f* *(rax_35 + (rcx_26 << 2))
                        zmm1 = *(rax_35 + (rcx_26 << 2) + 4)
                        zmm2 = *(rax_35 + (rcx_26 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rdx_9)
                        zmm1 = zmm1 * zmm3_1[0]
                        zmm3_1[0] = zmm3_1[0] * zmm2
                        zmm1 = zmm1 f+ *(rbx_3 + rdx_9 + 4)
                        *(rbx_3 + rdx_9) = zmm3_1[0]
                        zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rdx_9 + 8)
                        *(rbx_3 + rdx_9 + 4) = zmm1
                        *(rbx_3 + rdx_9 + 8) = zmm3_1[0]
                        int64_t rax_36 = sx.q(*r13_1)
                        r13_1 += 4
                        zmm4_1 = *r8_7
                        int64_t rdx_10 = *arg5
                        zmm1 = zmm4_1[0]
                        int64_t rcx_27 = rax_36 * 3
                        int64_t rax_37 = *arg2
                        zmm2 = *(rax_37 + (rcx_27 << 2) + 4)
                        zmm3_1 = *(rax_37 + (rcx_27 << 2) + 8)
                        zmm4_1[0] = zmm4_1[0] f* *(rax_37 + (rcx_27 << 2))
                        zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                        zmm1 = zmm1 * zmm2 f+ *(rbx_3 + rdx_10 + 4)
                        zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rdx_10)
                        zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rdx_10 + 8)
                        *(rbx_3 + rdx_10 + 4) = zmm1
                        *(rbx_3 + rdx_10) = zmm4_1[0]
                        *(rbx_3 + rdx_10 + 8) = zmm4_1[0]
                        j_4 = j_10
                        j_10 -= 1
                    while (j_4 != 1)
                
                if (j_12 s> 0)
                    void* r10_11 = rcx_9 - rdi_3
                    uint64_t j_11 = zx.q(j_12)
                    uint64_t j_5
                    
                    do
                        int64_t rdx_11 = *arg4
                        void* r8_9 = rdi_3 + r10_11
                        zmm4_1 = *(r8_9 + rbx_2 - rcx_9)
                        zmm1 = zmm4_1[0]
                        int64_t rcx_28 = sx.q(*rdi_3) * 3
                        int64_t rax_39 = *arg2
                        zmm4_1[0] = zmm4_1[0] f* *(rax_39 + (rcx_28 << 2))
                        zmm2 = *(rax_39 + (rcx_28 << 2) + 4)
                        zmm3_1 = *(rax_39 + (rcx_28 << 2) + 8)
                        zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rdx_11)
                        zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                        zmm1 = zmm1 * zmm2 f+ *(rbx_3 + rdx_11 + 4)
                        *(rbx_3 + rdx_11) = zmm4_1[0]
                        zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rdx_11 + 8)
                        *(rbx_3 + rdx_11 + 4) = zmm1
                        *(rbx_3 + rdx_11 + 8) = zmm4_1[0]
                        int64_t rax_40 = sx.q(*rdi_3)
                        rdi_3 += 4
                        zmm4_1 = *r8_9
                        int64_t rdx_12 = *arg5
                        zmm1 = zmm4_1[0]
                        int64_t rcx_29 = rax_40 * 3
                        int64_t rax_41 = *arg2
                        zmm2 = *(rax_41 + (rcx_29 << 2) + 4)
                        zmm3_1 = *(rax_41 + (rcx_29 << 2) + 8)
                        zmm4_1[0] = zmm4_1[0] f* *(rax_41 + (rcx_29 << 2))
                        zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                        zmm1 = zmm1 * zmm2 f+ *(rbx_3 + rdx_12 + 4)
                        zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rdx_12)
                        zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rdx_12 + 8)
                        *(rbx_3 + rdx_12 + 4) = zmm1
                        *(rbx_3 + rdx_12) = zmm4_1[0]
                        *(rbx_3 + rdx_12 + 8) = zmm3_1[0]
                        j_5 = j_11
                        j_11 -= 1
                    while (j_5 != 1)
                
                int64_t rcx_30 = *arg4
                r13 = arg3
                zmm4_1 = *r15
                int64_t rax_43 = *arg2
                zmm1 = zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] f* *(rbx_3 + rax_43)
                zmm2 = *(rbx_3 + rax_43 + 4)
                zmm3_1 = *(rbx_3 + rax_43 + 8)
                zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rcx_30)
                zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                zmm1 = zmm1 * zmm2 f+ *(rbx_3 + rcx_30 + 4)
                *(rbx_3 + rcx_30) = zmm4_1[0]
                zmm3_1[0] = zmm3_1[0] f+ *(rbx_3 + rcx_30 + 8)
                *(rbx_3 + rcx_30 + 4) = zmm1
                *(rbx_3 + rcx_30 + 8) = zmm3_1[0]
                zmm4_1 = *rcx_8
                int64_t rax_45 = *arg2
                int64_t rcx_31 = *arg5
                zmm1 = zmm4_1[0]
                zmm2 = *(rbx_3 + rax_45 + 4)
                zmm3_1 = *(rbx_3 + rax_45 + 8)
                zmm4_1[0] = zmm4_1[0] f* *(rbx_3 + rax_45)
                zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rcx_31)
                zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                zmm1 = zmm1 * zmm2 f+ *(rbx_3 + rcx_31 + 4)
                zmm4_1[0] = zmm4_1[0] f+ *(rbx_3 + rcx_31 + 8)
                *(rbx_3 + rcx_31) = zmm4_1[0]
                *(rbx_3 + rcx_31 + 4) = zmm1
                *(rbx_3 + rcx_31 + 8) = zmm4_1[0]
            
            r11_1 = var_410_1
            r10_2 = var_400_1
            r8 = var_418
            i = i_1
        i += 1
        r9_1 = &var_3f8_1[2]
        i_1 = i
        r11_1 += 2
        var_3f8_1 = r9_1
        r10_2 += 2
        var_410_1 = r11_1
        rbx_3 = &rbx_3[3]
        var_400_1 = r10_2
    while (i s< *(rsi + 8))
    
    rdx_1 = var_68

j_sub_140a74f90(rdx_1)
void* var_208_2 = &var_1f8
int32_t var_1fc_2 = 0x63
int64_t result = j_sub_140a74f90(var_210)
__security_check_cookie(rax_1 ^ &var_448)
return result
