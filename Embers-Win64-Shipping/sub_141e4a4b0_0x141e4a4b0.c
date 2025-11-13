// 函数: sub_141e4a4b0
// 地址: 0x141e4a4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int128_t zmm11 = *(arg4 + 0x88)
int64_t* r13 = arg1
float* rbx = *(arg2 + 0x28)
uint32_t zmm10[0x4] = *(arg2 + 0x24)
uint64_t rdi = arg2
float i_9 = zmm11.d f* *(arg2 + 0x10)
float var_170 = sub_141e23210(rbx, *(arg2 + 0x20), zmm11.d)
float zmm0_2
int512_t zmm7
zmm0_2, zmm7 = sub_141e23210(&rbx[0xa], zmm10, zmm11.d)
zmm7.o = zx.o(0)
uint32_t i_11[0x4]
float i_19[0x4]
int32_t zmm7_1
i_11, i_19, zmm7_1 = sub_141e23210(&rbx[0x14], zx.o(0), zmm11.d)
uint32_t var_168 = i_11[0]
int32_t rax_3 = (*(*r13 + 0x290))(r13)
uint32_t zmm12[0x4] = 0x7fffffff
float i_21[0x4] = 0x3f800000

if (rax_3 != 0)
    float zmm4_1 = var_170
    i_11 = i_19
    i_11[0] = i_11[0] f- zmm4_1
    uint32_t zmm9[0x4] = var_168
    float zmm1_3 = 1f
    
    if (_mm_and_ps(i_11, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_141e4a60c:
        
        if (rax_3 != 1)
            if (rax_3 == 2 && not(zmm0_2 f== zmm7_1))
                zmm1_3 = zmm10[0] / zmm0_2
        else if (not(zmm4_1 f== zmm7_1))
            zmm1_3 = i_19[0] / zmm4_1
    else
        zmm10[0] = zmm10[0] f- zmm0_2
        
        if (_mm_and_ps(zmm10, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141e4a60c
        
        if (not(_mm_and_ps(zmm9 ^ data_142d3f780, 0x7fffffff)[0] f<= 9.99999975e-05f))
            goto label_141e4a60c
    
    i_19 = r13[0x1f].d
    
    if (not(zmm4_1 < i_19[0]))
        i_19 = _mm_min_ss((*(r13 + 0xfc))[0], zmm4_1)
    
    float i_18[0x4] = r13[0x23].d
    
    if (not(zmm0_2 < i_18[0]))
        i_18 = _mm_min_ss((*(r13 + 0x11c))[0], zmm0_2)
    
    float zmm2_3[0x4] = r13[0x27].d
    
    if (not(zmm9[0] f< zmm2_3[0]))
        zmm2_3 = _mm_min_ss((*(r13 + 0x13c))[0], zmm9[0])
    
    i_11 = i_19
    i_11[0] = i_11[0] f- zmm4_1
    
    if (_mm_and_ps(i_11, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_141e4a6b5:
        
        if (rax_3 != 1)
            if (rax_3 == 2 && not(i_18[0] f== zmm7_1))
                zmm1_3 = zmm1_3 * zmm0_2 / i_18[0]
        else if (not(i_19[0] f== zmm7_1))
            zmm1_3 = zmm1_3 * zmm4_1 / i_19[0]
    else
        i_11 = i_18
        i_11[0] = i_11[0] f- zmm0_2
        
        if (_mm_and_ps(i_11, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141e4a6b5
        
        zmm2_3[0] = zmm2_3[0] f- zmm9[0]
        
        if (not(_mm_and_ps(zmm2_3, 0x7fffffff)[0] <= 9.99999975e-05f))
            goto label_141e4a6b5
    
    i_11 = i_9
    i_11[0] = i_11[0] f* zmm1_3
    i_9 = i_11[0]

char var_1b8 = 0
char* var_138 = &var_1b8
void*** (* var_140)() = j_sub_141e3a360
void* rax_4 = sub_140a756e0(&var_140, &data_143a2d2b4)
char var_1b7 = 0
void*** (* var_130)() = j_sub_141e3a360
int64_t* r15 = rax_4 + 0x10
int64_t* var_180 = r15
char* var_128 = &var_1b7
void* rax_5 = sub_140a756e0(&var_130, &data_143a2d2b4)
sub_141e34d30(r15, *(rdi + 0x30))
int32_t rax_7 = r15[1].d
uint64_t r12 = 0
int32_t rbx_1 = 0

if (rax_7 s> 0)
    int32_t r14_1 = 1
    int32_t* rdi_1 = nullptr
    
    do
        int64_t rdx_1 = *r15
        int32_t rcx_7 = *(rdi_1 + rdx_1)
        
        if (rcx_7 s< 0 || rcx_7 s>= r13[0x1a].d)
            int64_t r15_2 = sx.q(rbx_1) << 6
            int64_t rcx_8 = *(r15_2 + rdx_1 + 0x30)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int32_t rax_8 = var_180[1].d
            int32_t rcx_10 = rax_8 - rbx_1
            
            if (rcx_10 == 1)
                r15 = var_180
            else
                int64_t rax_9 = *var_180
                memmove(r15_2 + rax_9, (sx.q(r14_1) << 6) + rax_9, (rcx_10 - 1) << 6)
                r15 = var_180
                rax_8 = r15[1].d
            
            r15[1].d = rax_8 - 1
            sub_1407c3fe0(r15)
            rax_7 = r15[1].d
            rbx_1 -= 1
            r14_1 -= 1
            rdi_1 -= 0x40
        
        rbx_1 += 1
        r14_1 += 1
        rdi_1 = &rdi_1[0x10]
    while (rbx_1 s< rax_7)
    
    rdi = arg2

sub_141e47a50(*(rdi + 0x30), 0)
int64_t* rbx_2 = rax_5 + 0x20
int64_t* r14_2 = *(rdi + 0x30)
char rax_11
float i_10[0x4]
float i_15[0x4]
rax_11, i_10, i_15 = sub_141e42e50(r13, &var_170, rbx_2)

if (rax_11 != 0)
    bool cond:0_1 = i_10[0] f>= r13[0x15].d
    float i_16 = 0f
    float i_13[0x4] = i_10
    int64_t var_1b0
    float i_6
    float i_22[0x4]
    
    if (cond:0_1)
        sub_141e34d30(r14_2, rbx_2)
    else
        sub_141e3e490(r13, rbx_2)
        char rax_12
        rax_12, i_10, i_13, zmm12, i_21, i_22 = sub_141e43f70(r13, i_15, r15, rbx_2, r14_2)
        
        if (rax_12 != 0)
            i_10 = sub_141e653f0(r14_2)
        else if (r14_2 != rbx_2)
            int32_t i_4 = r14_2[1].d
            
            if (i_4 != 0)
                int64_t* rbx_4 = *r14_2 + 0x30
                int32_t i
                
                do
                    int64_t rcx_19 = *rbx_4
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    rbx_4 = &rbx_4[8]
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            int32_t r8_4 = *(r14_2 + 0xc)
            rbx_2 = zx.q(*(rax_5 + 0x28))
            void* rdi_3 = *(rax_5 + 0x20)
            r14_2[1].d = rbx_2.d
            i_6 = rbx_2.d
            
            if (rbx_2.d != 0 || r8_4 != 0)
                sub_1407c35c0(r14_2, rbx_2.d, r8_4)
                void* rcx_21 = *r14_2
                void* var_1c0_1 = rcx_21
                
                if (rbx_2.d != 0)
                    float i_5 = i_6
                    rbx_2 = rcx_21 + 0x3c
                    void* rdi_4 = rdi_3 + 8
                    float i_1
                    
                    do
                        *rcx_21 = *(rdi_4 - 8)
                        *(rbx_2 - 0x34) = *rdi_4
                        *(rbx_2 - 0x2c) = *(rdi_4 + 8)
                        rbx_2[-5].d = *(rdi_4 + 0xc)
                        *(rbx_2 - 0x24) = *(rdi_4 + 0x10)
                        rbx_2[-4].d = *(rdi_4 + 0x14)
                        *(rbx_2 - 0x1c) = *(rdi_4 + 0x18)
                        *(rbx_2 - 0xc) = 0
                        int64_t r15_3 = sx.q(*(rdi_4 + 0x30))
                        var_1b0 = *(rdi_4 + 0x28)
                        *(rbx_2 - 4) = r15_3.d
                        
                        if (r15_3.d != 0)
                            sub_140638750(rbx_2 - 0xc, r15_3.d, 0)
                            memcpy(*(rbx_2 - 0xc), var_1b0, (r15_3 << 2).d)
                            rcx_21 = var_1c0_1
                        else
                            *rbx_2 = 0
                        
                        rcx_21 += 0x40
                        rbx_2 = &rbx_2[8]
                        rdi_4 += 0x40
                        var_1c0_1 = rcx_21
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    r13 = arg1
            else
                *(r14_2 + 0xc) = 0
            
            rdi = arg2
    
    if (r13[0x18].d == 0xffffffff || (arg4[0x9a] == 0 && (*(rdi + 0x40) == 0 || arg4[0x98] == 0)))
        rbx_2 = nullptr
    else
        rbx_2.b = 1
        void* i_2 = *var_180
        
        for (void* r9_3 = (sx.q(var_180[1].d) << 6) + i_2; i_2 != r9_3; i_2 += 0x40)
            void* j = *r14_2
            
            for (void* r8_7 = (sx.q(r14_2[1].d) << 6) + j; j != r8_7; j += 0x40)
                int64_t rax_14 = *(i_2 + 8)
                
                if (rax_14 != 0 && rax_14 == *(j + 8))
                    *(j + 0x14) = *(i_2 + 0x14)
                    *(j + 0x18) = *(i_2 + 0x18)
                    *(j + 0x20) = *(i_2 + 0x20)
    
    float i_12[0x4] = sub_141e3e490(r13, r14_2)
    bool cond:1_1 = i_13[0] <= i_10[0]
    i_16 = i_12[0]
    float i_8[0x4]
    
    if (not(cond:1_1) && not(i_12[0] <= i_10[0]))
        i_8 = i_9
        i_13[0] = i_13[0] / i_12[0]
        i_8[0] = i_8[0] * i_13[0]
        i_9 = i_8[0]
    
    float (* r15_4)[0x4] = *(rdi + 8)
    i_13 = *r15_4
    int64_t* var_1e8
    char var_188
    uint64_t rdx_18
    
    if (arg4[0x99] == 0)
        bool rax_38
        rax_38, rdx_18 = sub_140b5b8a0(*(arg4 + 0x58), 0)
        int32_t rcx_36
        rcx_36.b = rax_38 == 0
        int32_t rcx_37
        
        if ((*(arg4 + 0x5c) != 0 | rcx_36.b) != 0)
            rax_38, rdx_18 = sub_140b5b8a0(*(arg4 + 0x60), 0)
            rcx_37.b = rax_38 == 0
        
        if ((*(arg4 + 0x5c) != 0 | rcx_36.b) == 0 || (*(arg4 + 0x64) != 0 | rcx_37.b) == 0)
            rax_38 = false
        else
            rax_38 = true
        
        rax_38 &= rbx_2.b
        
        if (rax_38 == 0)
            i_13 = *(arg4 + 0x90)
            i_12 = *(arg4 + 0x94)
            var_188 = 0
        else
            int32_t rax_39 = sub_141e41560(r14_2)
            int64_t r8_14 = r13[0x19]
            int64_t rcx_41 = (sx.q(rax_39) << 6) + *r14_2
            bool cond:2_1 = i_10[0] f== *(arg4 + 0x88)
            var_1b0 = rcx_41
            var_188.q = r8_14
            rdx_18 = sx.q(*rcx_41) * 3
            i_6.q = rdx_18
            
            if (not(cond:2_1))
                int32_t* rax_41 = *(rdi + 0x38)
                
                if (*rax_41 == 0xfffffffe || rax_41[2] == 0xfffffffe)
                    i_12 = *(*(r8_14 + (rdx_18 << 3)) + 0x90)
                    i_12[0] = i_12[0] * *r15_4
                    *(rcx_41 + 0x14) = i_12[0]
                
                int32_t i_3 = 0
                
                if (r14_2[1].d s> 0)
                    int64_t r15_5 = 0
                    void* rbx_8 = nullptr
                    
                    do
                        void* r8_15 = *r14_2
                        
                        if (r15_5 != -1)
                            int64_t* rcx_43 = *(r13[0x19] + sx.q(*(rbx_8 + r8_15)) * 0x18)
                            
                            if (rcx_43[0x30].d s> 0)
                                sub_141e4b260(rcx_43, r8_15 + 0x20 + rbx_8, &arg4[0x48], 
                                    r8_15 + 0x14 + rbx_8, r8_15 + 0x18 + rbx_8, 
                                    (*(arg4 + 0x8c))[0], 1)
                        
                        i_3 += 1
                        r15_5 += 1
                        rbx_8 += 0x40
                    while (i_3 s< r14_2[1].d)
                    
                    rcx_41 = var_1b0
                    rdx_18 = i_6.q
                    r8_14 = var_188.q
                
                rdi = arg2
            
            **(rdi + 0x38) = *(rcx_41 + 0x20)
            i_12 = *(rcx_41 + 0x14)
            i_12[0] = i_12[0] f/ *(*(r8_14 + (rdx_18 << 3)) + 0x90)
            var_188.d = zx.d(rax_38)
        
        *r15_4 = i_12[0]
    else
        *(arg4 + 0x90) = i_13[0]
        float i_7
        
        if (rbx_2.b == 0)
            i_7 = -nanf
        else
            i_7 = sub_141e41340(r14_2, &r13[0x19])
        
        uint32_t rdx_14 = 0
        i_6 = i_7
        
        if (i_7 != 0xffffffff)
            rdx_14 = zx.d(rbx_2.b)
        
        var_188.d = rdx_14
        
        if (rdx_14.b == 0)
            i_12[0] = i_12[0] * *r15_4
            i_6 = i_12[0]
            rdx_18, i_10, i_13 = sub_141de1490(rdi + 0x1c, &i_9, &i_6, &i_16)
            i_12 = i_16
            
            if (i_12[0] == i_10[0])
                i_8 = i_10
            else
                i_8 = i_6
                i_8[0] = i_8[0] / i_12[0]
            
            *r15_4 = i_8[0]
            *(arg4 + 0x94) = i_8[0]
            i_12 = *r15_4
        else
            int64_t r10_1 = r13[0x19]
            int32_t* rbx_7 = (sx.q(i_7) << 6) + *r14_2
            int64_t var_1c0_3 = r10_1
            char var_1c8_1 = 0
            int64_t rcx_27 = sx.q(*rbx_7) * 3
            int32_t* rax_26 = *(rdi + 0x38)
            var_1b0 = rcx_27
            void* rdi_5
            
            if (*rax_26 == 0xfffffffe || rax_26[2] == 0xfffffffe)
                rbx_7[8] = 0xfffffffe
                rdi_5 = &rbx_7[8]
                *(rdi_5 + 8) = 0xfffffffe
                var_1c8_1 = 1
                i_12 = *(*(r10_1 + (rcx_27 << 3)) + 0x90)
                i_12[0] = i_12[0] * *r15_4
                rbx_7[5] = i_12[0]
            else
                rdi_5 = &rbx_7[8]
                
                if (rbx_7[8] == 0xfffffffe || *(rdi_5 + 8) == 0xfffffffe)
                    int32_t rcx_28
                    rcx_28.b = sub_140b5b8a0(*(arg4 + 0x58), 0) == 0
                    
                    if ((*(arg4 + 0x5c) != 0 | rcx_28.b) != 0)
                        int32_t rcx_29
                        rcx_29.b = sub_140b5b8a0(*(arg4 + 0x60), 0) == 0
                        
                        if ((*(arg4 + 0x64) != 0 | rcx_29.b) != 0)
                            int64_t* rcx_31 = *(var_1c0_3 + (var_1b0 << 3))
                            int32_t var_1e0
                            var_1e0.q = &rbx_7[5]
                            void* r8_10
                            r8_10.b = 1
                            (*(*rcx_31 + 0x2f8))(rcx_31, &arg4[0x58], r8_10, rdi_5, &rbx_7[0xa], 
                                var_1e0)
                    
                    rcx_27 = var_1b0
                    r10_1 = var_1c0_3
            
            void* rax_31 = *(r10_1 + (rcx_27 << 3))
            i_8 = *(arg2 + 0x10)
            i_8[0] = i_8[0] f* *(arg4 + 0x88)
            i_8[0] = i_8[0] f* *(r10_1 + (rcx_27 << 3) + 0x14)
            i_8[0] = i_8[0] f* *(rax_31 + 0x94)
            
            if (not(_mm_and_ps(i_8, zmm12)[0] <= 9.99999994e-09f))
                *(arg4 + 0x8c) = i_8[0]
                sub_141e4b310(*(r10_1 + (rcx_27 << 3)), rdi_5, &arg4[0x48], &rbx_7[5], &rbx_7[6], 
                    i_8[0], 1)
                var_1e8.b = var_1c8_1
                sub_141e4b4b0(r13, r14_2, i_6, arg4, var_1e8.b)
                rax_31 = *(var_1c0_3 + (var_1b0 << 3))
            
            i_12 = rbx_7[5]
            i_12[0] = i_12[0] f/ *(rax_31 + 0x90)
            *r15_4 = i_12[0]
            **(arg2 + 0x38) = *rdi_5
            *(arg4 + 0x94) = (*r15_4)[0]
            i_12 = *r15_4
    
    bool cond:5_1 = i_13[0] >= i_10[0]
    void* rbx_9 = nullptr
    uint64_t var_160 = 0
    int32_t var_158_1 = 0
    int32_t var_154_1 = 0
    float i_14[0x4]
    
    if (cond:5_1)
        i_14 = _mm_min_ss(i_13[0], i_21[0])
    else
        i_14 = i_10
    
    if (i_12[0] >= i_10[0])
        i_15 = _mm_min_ss(i_12[0], i_21[0])
    else
        i_15 = i_10
    
    char rax_50 = *(r13 + 0xac)
    
    if (i_12[0] == i_13[0] || rax_50 == 2)
        rdx_18.b = 0
    else
        rdx_18.b = 1
    
    char var_1c8_2 = rdx_18.b
    
    if (rax_50 != 1 || r14_2[1].d s<= 0)
        rax_50 = 0
    
    int32_t rax_51
    
    if (rdx_18.b == 0 || rax_50 == 0)
        rax_51 = -1
    else
        rax_51 = sub_141e41560(r14_2)
        rdx_18 = zx.q(var_1c8_2)
    
    if (r14_2[1].d s> 0)
        zmm12 = 0x3727c5ac
        int64_t rcx_45 = 0
        int64_t r8_17 = sx.q(rax_51)
        float i_23[0x4] = i_22
        i_22 = 0xbf800000
        int64_t var_150_1 = r8_17
        int64_t var_1c0_4 = 0
        
        do
            int64_t rdi_6 = *r14_2
            int64_t rax_52 = sx.q(*(rbx_9 + rdi_6))
            
            if (rax_52.d s>= 0 && rax_52.d s< r13[0x1a].d
                    && not(zmm12[0] f>= *(rbx_9 + rdi_6 + 0x10)))
                int64_t r13_1 = r13[0x19]
                int64_t r15_6 = rax_52 * 3
                void* rax_53 = *(r13_1 + (r15_6 << 3))
                
                if (rax_53 != 0)
                    i_8 = *(rax_53 + 0x94)
                    i_8[0] = i_8[0] f* *(r13_1 + (r15_6 << 3) + 0x14)
                    float i_20[0x4]
                    float i_24[0x4]
                    
                    if (var_188 == 0 || *(rax_53 + 0x180) == 0)
                        i_8[0] - i_10[0]
                        bool cond:10_1 = i_8[0] < i_10[0]
                        float i_17[0x4]
                        
                        if (i_8[0] < i_10[0])
                            i_17 = i_21
                            i_17[0] = i_17[0] - i_14[0]
                        else
                            i_17 = i_14
                        
                        if (cond:10_1)
                            i_12 = i_21
                            i_12[0] = i_12[0] - i_15[0]
                        else
                            i_12 = i_15
                        
                        i_24 = *(rax_53 + 0x90)
                        i_20 = i_24
                        i_24[0] = i_24[0] * i_17[0]
                        i_20[0] = i_20[0] * i_12[0]
                        *(rbx_9 + rdi_6 + 0x14) = i_20[0]
                    else
                        i_24 = *(rbx_9 + rdi_6 + 0x18)
                        i_20 = *(rbx_9 + rdi_6 + 0x14)
                    
                    i_8[0] = i_8[0] * i_9
                    i_20[0] = i_20[0] - i_24[0]
                    var_1b0.d = i_24[0]
                    i_6 = i_20[0]
                    i_20[0] = i_20[0] * i_8[0]
                    
                    if (not(i_20[0] >= i_10[0]))
                        i_8[0] - i_10[0]
                        
                        if (not(i_8[0] <= i_10[0]))
                            i_12 = i_21
                        else if (i_8[0] >= i_10[0])
                            i_12 = i_10
                        else
                            i_12 = i_22
                        
                        i_12[0] = i_12[0] f* *(*(r13_1 + (r15_6 << 3)) + 0x90)
                        i_12[0] = i_12[0] + i_20[0]
                        i_6 = i_12[0]
                        i_20 = i_12
                    
                    if (rdx_18.b != 0 && (rax_50 == 0 || rcx_45 == r8_17))
                        i_20, i_10, i_24 = sub_141e3e1a0(*(r13_1 + (r15_6 << 3)), &var_1b0, &i_6, 
                            *(arg2 + 0x1c), i_20, &var_160)
                        rcx_45 = var_1c0_4
                    
                    if (*(arg4 + 0x40) == 2)
                        int64_t* rcx_47 = *(r13_1 + (r15_6 << 3))
                        
                        if (*(rcx_47 + 0x16d) != 0)
                            i_13 = *(rbx_9 + rdi_6 + 0x10)
                            
                            if (i_13[0] >= i_10[0])
                                i_13 = _mm_min_ss(i_13[0], i_21[0])
                            else
                                i_13 = i_10
                            
                            var_1b0.d = i_13[0]
                            var_1e8.b = *(arg2 + 0x1c)
                            float var_118[0x4]
                            float (* rax_58)[0x4]
                            rax_58, i_10, i_13, i_14, i_15, zmm12, i_21, i_22 =
                                sub_141e1f160(rcx_47, &var_118, i_24, i_20, var_1e8.b)
                            bool cond:12_1 = *arg4 == 0
                            float zmm5_1[0x4] = var_1b0.d
                            float temp0_15[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                            float temp0_16[0x4] = _mm_mul_ps(*rax_58, temp0_15)
                            
                            if (cond:12_1)
                                i_8 = rax_58[1]
                                i_12 = rax_58[2]
                                *arg4 = 1
                                float temp0_30[0x4] = _mm_mul_ps(i_8, temp0_15)
                                float temp0_31[0x4] = _mm_mul_ps(i_12, temp0_15)
                                *(arg4 + 0x10) = temp0_16
                                *(arg4 + 0x20) = temp0_30
                                *(arg4 + 0x30) = temp0_31
                            else
                                float temp0_17[0x4] = __mulps_xmmps_memps(temp0_16, *(arg4 + 0x10))
                                float temp0_18[0x4] = _mm_sub_ps(zx.o(0), temp0_16)
                                float temp0_20[0x4] =
                                    _mm_add_ps(temp0_17, _mm_shuffle_ps(temp0_17, temp0_17, 0x4e))
                                *(arg4 + 0x10) = __addps_xmmps_memps(
                                    _mm_and_ps(
                                        _mm_cmpeq_ps(zx.o(0), 
                                            _mm_add_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x39), 
                                                temp0_20), 
                                            2), 
                                        temp0_18 ^ temp0_16) ^ temp0_18, 
                                    *(arg4 + 0x10))
                                *(arg4 + 0x20) = __addps_xmmps_memps(
                                    _mm_mul_ps(rax_58[1], temp0_15), *(arg4 + 0x20))
                                *(arg4 + 0x30) = __addps_xmmps_memps(
                                    _mm_mul_ps(rax_58[2], temp0_15), *(arg4 + 0x30))
                                i_13[0] = i_13[0] f+ *(arg4 + 4)
                            
                            i_12 = data_143a2d2d8
                            float zmm3_2[0x4] = data_143a2d2d0
                            float temp0_32[0x4] = _mm_unpacklo_ps(data_143a2d2d4, i_10[0].q)
                            *(arg4 + 0x30) =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_2, i_12[0].q), temp0_32[0].q)
                            *(arg4 + 4) = i_13[0]
                        
                        rcx_45 = var_1c0_4
                
                r13 = arg1
            
            rdx_18 = zx.q(var_1c8_2)
            rcx_45 += 1
            r8_17 = var_150_1
            r12 = zx.q(r12.d + 1)
            rbx_9 += 0x40
            var_1c0_4 = rcx_45
        while (r12.d s< r14_2[1].d)
        
        rbx_9 = zx.q(var_158_1)
        r12 = var_160
    
    if (var_1c8_2 != 0 && rbx_9.d s> 0)
        sub_141e13c40(arg3, arg4[0x99], &var_160, (*(arg2 + 0x14))[0])
        r12 = var_160
    
    if (r12 != 0)
        sub_140a74f90(r12)
    
    rbx_2 = rax_5 + 0x20

sub_141e47a50(var_180, 0)
int64_t result = sub_141e47a50(rbx_2, 0)
__security_check_cookie(rax_1 ^ &var_208)
return result
