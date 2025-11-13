// 函数: sub_14218e220
// 地址: 0x14218e220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (data_143de5480 == 0)
    rdi.b = 0
else
    rdi.b = GetCurrentThreadId() != data_143de5470

void* rax_2 = arg1[0x15]

if (rax_2 == 0)
    rax_2, arg2 = sub_141ee69e0(arg1)

void var_100
sub_142076cb0(&var_100, rax_2, 0, (rdi * 2).b, *(arg1 + 0x431) u>> 7)
char rdx_1 = *(arg1 + 0x433)

if ((rdx_1 & 4) != 0)
    void* rax_3 = arg1[0xb4]
    void* rcx_5 = (sx.q(arg1[0xb5].d) << 7) + rax_3
    
    if (rax_3 != rcx_5)
        do
            *(rax_3 + 0x7c) = 0
            rax_3 -= -0x80
        while (rax_3 != rcx_5)
        
        rdx_1 = *(arg1 + 0x433)

*(arg1 + 0x433) = rdx_1 & 0xfb
int64_t* rcx_6 = arg1[0xca]
arg1[0xca] = 0
int64_t* r8

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        r8, arg2 = sub_140a2f6e0(rcx_6)

char rax_6 = *(arg1 + 0x433)

if ((rax_6 & 0x10) != 0)
    *(arg1 + 0x433) = rax_6 & 0xef
    
    if (data_143f4d2c8 == 0)
        int32_t rdx_2 = arg1[0xc1].d
        int32_t rdi_1 = 0
        
        if (rdx_2 s> 0)
            int64_t rsi_1 = 0
            
            do
                r8 = arg1[0xc0]
                int64_t* rcx_7 = *(r8 + rsi_1)
                
                if (rcx_7 != 0 && (rcx_7[0x1c].b & 1) != 0)
                    if (rdi_1 + 1 s< rdx_2)
                        *(rsi_1 + r8 + 8)
                    
                    if (rcx_7[2] != 0)
                        void* rax_9 = rcx_7[5]
                        
                        if (rax_9 != 0 && (*(rax_9 + 0x2c) & 1) != 0)
                            (*(*rcx_7 + 0x140))(rcx_7, arg1[0xcb].d, arg1[0x86].b u>> 1 & 1)
                
                rdx_2 = arg1[0xc1].d
                rdi_1 += 1
                rsi_1 += 8
            while (rdi_1 s< rdx_2)
        
        void* rax_11 = arg1[0x15]
        
        if (rax_11 != 0)
        label_14218e3cb:
            int64_t* rdi_2 = *(rax_11 + 0xf8)
            
            if (rdi_2 != 0)
                if (arg1[0xa1].d s> 0)
                    (*(*rdi_2 + 0x628))(rdi_2, arg1, &arg1[0xa0])
                
                if (arg1[0xa3].d s> 0)
                    (*(*rdi_2 + 0x630))(rdi_2, arg1, &arg1[0xa2])
                
                if (arg1[0xa5].d s> 0)
                    (*(*rdi_2 + 0x638))(rdi_2, arg1, &arg1[0xa4])
                
                if (arg1[0xa7].d s> 0)
                    (*(*rdi_2 + 0x640))(rdi_2, arg1, &arg1[0xa6])
        else
            rax_11, r8, arg2 = sub_141ee69e0(arg1)
            
            if (rax_11 != 0)
                goto label_14218e3cb
    
    int32_t i_2 = arg1[0xa9].d
    
    if (i_2 != 0)
        int64_t* rdi_4 = arg1[0xa8] + 0x28
        int32_t i
        
        do
            int64_t rcx_13 = *rdi_4
            
            if (rcx_13 != 0)
                r8, arg2 = sub_140a74f90(rcx_13)
            
            rdi_4 = &rdi_4[7]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg1[0xa9].d = 0
    
    if (*(arg1 + 0x54c) != 0)
        r8, arg2 = sub_1408cf3a0(&arg1[0xa8], 0)
    
    *(arg1 + 0x431) &= 0xfb
    void* rax_16 = arg1[0x15]
    
    if (rax_16 == 0)
        rax_16, r8, arg2 = sub_141ee69e0(arg1)
    
    int32_t zmm1 = *(rax_16 + 0x520)
    
    if ((*(arg1 + 0x8a) & 1) != 0 && (arg1[0x86].b & 0x10) == 0 && *(arg1 + 0x431) s< 0
            && arg1[0xcc].d == 0)
        arg2 = *(arg1[0x81] + 0xbc) f+ arg1[0x99].d
    
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    int128_t zmm14_1
    
    if ((*(arg1 + 0x8a) & 1) == 0 || (arg1[0x86].b & 0x10) != 0 || *(arg1 + 0x431) s>= 0
            || arg1[0xcc].d != 0 || zmm1 f< arg2)
        arg1[0x99].d = zmm1
        char rax_18
        rax_18, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 =
            sub_142193fd0(arg1, arg2)
        
        if (rax_18 != 0 && (arg1[0x86].b & 1) == 0)
            zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 =
                sub_142188ca0(arg1)
        
        arg1[0x86].b &= 0xfe
        arg1[0x86].b |= rax_18
    else
        r8.b = 1
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 =
            sub_142196000(arg1, 0, r8, 0, arg2)
    
    float zmm0[0x4]
    float zmm1_1[0x4]
    int32_t zmm3_1
    float zmm4_1[0x4]
    
    if ((*(arg1 + 0x432) & 2) == 0 && (arg1[0x86].b & 1) == 0 && (*(arg1[0x81] + 0xb0) & 2) == 0)
        char rax_20 = *(arg1 + 0x433)
        
        if ((rax_20 & 1) == 0)
            zmm0 = arg1[0xcb].d
            zmm0[0] = zmm0[0] f+ *(arg1 + 0x4bc)
            bool cond:5_1 = zmm0[0] f<= arg1[0x98].d
            *(arg1 + 0x4bc) = zmm0[0]
            
            if (cond:5_1)
                int32_t i_1 = 0
                float var_28_1[0x4] = zmm6_1
                uint64_t rbp
                rbp.b = 0
                zmm6_1 = data_143dbb200
                float var_38_1[0x4] = zmm7_1
                zmm7_1 = data_143dbb1fc
                float var_48_1[0x4] = zmm8_1
                zmm8_1 = data_143dbb1f8
                float var_58_1[0x4] = zmm9_1
                zmm9_1 = zmm7_1
                float var_68_1[0x4] = zmm10_1
                zmm10_1 = zmm6_1
                float var_78_1[0x4] = zmm11_1
                zmm11_1 = zmm8_1
                float var_88_1[0x4] = zmm12_1
                float var_98_1[0x4] = zmm13_1
                int128_t var_a8_1 = zmm14_1
                float zmm2_1[0x4]
                
                if (arg1[0xc1].d s> 0)
                    int64_t* rdi_6 = nullptr
                    
                    do
                        int64_t* rcx_19 = *(rdi_6 + arg1[0xc0])
                        
                        if (rcx_19 != 0 && rcx_19[2] != 0)
                            void* rax_22 = rcx_19[5]
                            
                            if (rax_22 != 0 && (*(rax_22 + 0x2c) & 1) != 0)
                                void var_d0
                                float (* rax_24)[0x4] = (*(*rcx_19 + 0x60))(rcx_19, &var_d0)
                                
                                if (rbp.b == 0)
                                    if ((*rax_24)[6].b != 0)
                                        zmm1_1 = zx.o(rax_24[1][0].q)
                                        zmm2_1 = *rax_24
                                        float rax_25 = (*rax_24)[6]
                                        rbp = zx.q(rax_25.b)
                                        zmm7_1 = zmm1_1.d
                                        zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                        int96_t var_f0_1 = zmm2_1[0].12
                                        float var_d8_1 = rax_25
                                        zmm10_1 = var_f0_1:8.d
                                        zmm6_1 = zmm0
                                        zmm9_1 = var_f0_1:4.d
                                        zmm11_1 = var_f0_1.d
                                        zmm8_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                                else if ((*rax_24)[6].b != 0)
                                    zmm0 = *rax_24
                                    
                                    if (not(zmm11_1[0] <= zmm0[0]))
                                        zmm11_1 = zmm0
                                    
                                    zmm0 = (*rax_24)[1]
                                    
                                    if (not(zmm9_1[0] <= zmm0[0]))
                                        zmm9_1 = zmm0
                                    
                                    zmm0 = (*rax_24)[2]
                                    
                                    if (not(zmm10_1[0] <= zmm0[0]))
                                        zmm10_1 = zmm0
                                    
                                    zmm0 = (*rax_24)[3]
                                    
                                    if (not(zmm8_1[0] >= zmm0[0]))
                                        zmm8_1 = zmm0
                                    
                                    zmm0 = rax_24[1][0]
                                    
                                    if (not(zmm7_1[0] >= zmm0[0]))
                                        zmm7_1 = zmm0
                                    
                                    zmm0 = (*rax_24)[5]
                                    
                                    if (not(zmm6_1[0] >= zmm0[0]))
                                        zmm6_1 = zmm0
                        
                        i_1 += 1
                        rdi_6 = &rdi_6[1]
                    while (i_1 s< arg1[0xc1].d)
                
                zmm2_1 = *(arg1 + 0x10c)
                zmm14_1 = arg1[0x20].d
                zmm1_1 = arg1[0x22].d
                zmm2_1[0] = zmm2_1[0] f+ zmm14_1.d
                zmm0 = *(arg1 + 0x114)
                zmm14_1.d = zmm14_1.d f- zmm2_1[0]
                zmm4_1 = *(arg1 + 0x104)
                zmm3_1 = arg1[0x21].d
                zmm1_1[0] = zmm1_1[0] + zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] - zmm1_1[0]
                float zmm5_1 = zmm0[0] f+ zmm3_1
                zmm3_1 = zmm3_1 f- zmm0[0]
                
                if (zmm11_1[0] f<= zmm14_1.d || zmm11_1[0] >= zmm2_1[0] || zmm9_1[0] <= zmm4_1[0]
                        || zmm9_1[0] >= zmm1_1[0] || zmm10_1[0] f<= zmm3_1 || zmm10_1[0] >= zmm5_1
                        || zmm8_1[0] f<= zmm14_1.d || zmm8_1[0] >= zmm2_1[0]
                        || zmm7_1[0] <= zmm4_1[0] || zmm7_1[0] >= zmm1_1[0] || zmm6_1[0] f<= zmm3_1
                        || not(zmm6_1[0] < zmm5_1))
                    *(arg1 + 0x433) |= 1
            else
                *(arg1 + 0x433) = rax_20 | 1
    
    if ((*(arg1 + 0x433) & 1) != 0)
        sub_1405c6ac0(arg1, 0, 0)
        *(arg1 + 0x433) &= 0xfe
        *(arg1 + 0x4bc) = 0
    
    float rax_26
    
    if (arg1[0x92].b == 0)
        zmm4_1 = *(arg1 + 0x1d0)
        arg1[0x94] = data_143dbb1f8.q
        rax_26 = data_143dbb200
    else
        zmm0 = arg1[0xcb].d
        zmm3_1 = (zx.o(0)).d
        
        if (not(zmm0[0] f<= zmm3_1))
            zmm3_1 = 1f / zmm0[0]
        
        zmm4_1 = *(arg1 + 0x1d0)
        zmm4_1[0] = zmm4_1[0] f- *(arg1 + 0x494)
        zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        zmm0[0] = zmm0[0] f- *(arg1 + 0x49c)
        zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        zmm1_1[0] = zmm1_1[0] f- arg1[0x93].d
        zmm4_1[0] = zmm4_1[0] f* zmm3_1
        zmm0[0] = zmm0[0] f* zmm3_1
        zmm1_1[0] = zmm1_1[0] f* zmm3_1
        rax_26 = zmm0[0]
        arg1[0x94] = (_mm_unpacklo_ps(zmm4_1, zmm1_1[0].q)).q
    
    arg1[0x95].d = rax_26
    float var_104_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)[0]
    zmm0 = _mm_unpacklo_ps(zmm4_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)[0].q)
    *(arg1 + 0x494) = zmm0.q
    *(arg1 + 0x49c) = var_104_1
    char rax_28 = *(arg1 + 0x432)
    arg1[0x92].b = 1
    
    if ((rax_28 & 0x40) != 0)
        if (arg1[0xca] != 0)
            zmm0 = sub_1421a5650(arg1, 1, 1, zmm0[0])
            rax_28 = *(arg1 + 0x432)
        
        if ((rax_28 & 0x40) != 0)
            sub_142187c60(arg1, arg1[0x81], zmm0[0])
            sub_141ee8490(arg1)
            rax_28 = *(arg1 + 0x432)
    
    if ((rax_28 & 8) == 0)
        sub_141ee8470(arg1)

return sub_142079870(&var_100)
