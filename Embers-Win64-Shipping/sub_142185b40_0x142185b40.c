// 函数: sub_142185b40
// 地址: 0x142185b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char r14 = arg2
sub_140b33630("Effects")
void* rcx = arg1[0xca]
int128_t zmm8 = zx.o(0)
int128_t zmm6
float zmm7[0x4]

if (rcx != 0)
    int64_t rax_2 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_2 = *(rcx + 8)
    
    if (((rax_2 u>> 0x1a).b & 1) == 0)
        int32_t zmm0_2 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_2 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm6, zmm7, zmm8 = sub_14218e220(arg1, zmm0_2)

if (sub_140d23dc0(arg1, 0x30) != 1 && (arg1[0x11].b & 1) != 0)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
        arg1[0x92].b = 0
        *(arg1 + 0x494) = data_143dbb1f8.q
        *(arg1 + 0x49c) = data_143dbb200
        uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
        arg1[0x94] = zmm0_1.q
        void* rdi_1 = arg1[0x15]
        arg1[0x95].d = data_143dbb200
        
        if (rdi_1 == 0)
            void* rax_11
            rax_11, zmm0_1 = sub_141ee69e0(arg1)
            rdi_1 = rax_11
        
        char rax_12 = sub_14243ade0(rdi_1)
        
        if (data_143a2ed00 != 0 && zx.d(arg1[0x2a].b) s<= data_143a30368:4.d && arg1[0x81] != 0)
            char r15_1 = *(arg1 + 0x433)
            bool cond:0_1 = (*(arg1 + 0x431) & 0x20) == 0
            *(arg1 + 0x433) = r15_1 & 0xfd
            
            if (not(cond:0_1) && rax_12 != 0)
                int64_t* rax_14 = sub_140d3c6e0(&arg1[0xaa])
                
                if (rax_14 == 0)
                    zmm0_1 = sub_1421888a0(arg1, 1, rdi_1)
                else
                    void* rdx_1 = arg1[0x18]
                    
                    if (rdx_1 == 0 || rdx_1 != rax_14 || arg1[0x19] != arg1[0xab])
                    label_142185d92:
                        *(arg1 + 0x433) &= 0xfd
                        *(arg1 + 0x433) |= r15_1 & 2
                        rdx_1.b = 1
                        sub_1421888a0(arg1, rdx_1.b, rdi_1)
                        int32_t rax_16 = *(arg1 + 0x124)
                        int64_t r9_1 = arg1[0xab]
                        *(arg1 + 0x564) = *(arg1 + 0x11c)
                        int64_t zmm0_3 = arg1[0x25]
                        *(arg1 + 0x56c) = rax_16
                        int32_t rax_17 = arg1[0x26].d
                        arg1[0xae] = zmm0_3
                        arg1[0xaf].d = rax_17
                        int32_t rax_18 = *(arg1 + 0x13c)
                        *(arg1 + 0x57c) = *(arg1 + 0x134)
                        *(arg1 + 0x584) = rax_18
                        char var_e8 = arg1[0xac].b
                        char var_e7_1 = *(arg1 + 0x561)
                        char var_e6_1 = *(arg1 + 0x562)
                        uint8_t var_e5_1 = *(arg1 + 0x431) u>> 6 & 1
                        zmm0_1, zmm6, zmm7, zmm8 = sub_141f32b40(arg1, rax_14, &var_e8, r9_1)
                    else
                        int64_t* rcx_11 = *(rdx_1 + 0xd0)
                        rdx_1 = &rcx_11[sx.q(*(rdx_1 + 0xd8))]
                        
                        if (rcx_11 == rdx_1)
                            goto label_142185d92
                        
                        while (*rcx_11 != arg1)
                            rcx_11 = &rcx_11[1]
                            
                            if (rcx_11 == rdx_1)
                                goto label_142185d92
                    
                    *(arg1 + 0x433) |= 2
                    r14 = 1
            
            bool cond:1_1 = (*(arg1 + 0x8a) & 1) != 0
            *(arg1 + 0x4c4) = 0
            
            if (not(cond:1_1))
                arg1[0x99].d = *(rdi_1 + 0x520)
                *(arg1 + 0x43e) = 0
                zmm0_1 = sub_142187040(&data_143a2ed18, arg1, 1)
            
            void var_a0
            sub_142076cb0(&var_a0, rdi_1, 0, 0, *(arg1 + 0x431) u>> 7)
            
            if (r14 != 0)
                *(arg1 + 0x431) |= 4
            
            arg1[0x86].b &= 0xec
            sub_141ef4e60(arg1, 1)
            arg1[0x86].b &= 0xdf
            (*(*arg1 + 0x340))(arg1, 1)
            float zmm1_1[0x4]
            
            if (rax_12 == 0 || data_143a2ed01 != 1)
                *(arg1 + 0x432) |= 0x20
            else
                zmm1_1 = *(arg1 + 0x1d0)
                int64_t rax_26 = *arg1
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_e0 = zmm1_1[0]
                float var_88_1[0x4] = zmm1_1
                float var_d8_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                int32_t var_dc_1 = zmm0_1.d
                int32_t rax_27 = (*(rax_26 + 0x9a8))(arg1, &var_e0)
                int64_t r8_6 = *arg1
                (*(r8_6 + 0x9b0))(arg1, zx.q(rax_27), r8_6)
            
            uint64_t rax_33 = zx.q(arg1[0xc1].d)
            int64_t r8_5
            
            if (rax_33.d == 0
                    || (rax_12 != 0 && (*(arg1 + 0x89) s>= 0 || (*(arg1 + 0x431) & 8) != 0)))
                rax_33, r8_5, zmm0_1, zmm6, zmm7, zmm8 = sub_142195230(arg1)
            else if (rax_33.d s> 0 && rax_12 == 0)
                int32_t i = 0
                
                if (rax_33.d s> 0)
                    int64_t* rdi_2 = nullptr
                    
                    do
                        int64_t* rcx_20 = *(rdi_2 + arg1[0xc0])
                        
                        if (rcx_20 != 0)
                            (*(*rcx_20 + 0x58))(rcx_20)
                            int64_t* rcx_21 = *(rdi_2 + arg1[0xc0])
                            (*(*rcx_21 + 0xf8))(rcx_21, 0)
                            int64_t* rcx_22 = *(rdi_2 + arg1[0xc0])
                            rax_33, r8_5 = (*(*rcx_22 + 0x100))(rcx_22, 0)
                        
                        i += 1
                        rdi_2 = &rdi_2[1]
                    while (i s< arg1[0xc1].d)
            
            *(arg1 + 0x431) |= 8
            bool cond:3_1 = (*(arg1 + 0x432) & 4) == 0
            *(arg1 + 0x664) = 0
            bool cond:2_1
            
            if (cond:3_1)
                rax_33 = arg1[0x81]
                
                if (rax_33 != 0)
                    cond:2_1 = *(rax_33 + 0xb3) != 1
                    goto label_142186021
            else
                cond:2_1 = *(arg1 + 0x43d) != 1
            label_142186021:
                rax_33.b = cond:2_1
                
                if (rax_33.b != 0)
                    zmm1_1 = *(arg1 + 0x1d0)
                    int64_t rax_34 = *arg1
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    float var_d0 = zmm1_1[0]
                    float var_78_1[0x4] = zmm1_1
                    float var_c8_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    int32_t var_cc_1 = zmm0_1.d
                    int32_t rax_35
                    rax_35, r8_5 = (*(rax_34 + 0x9a8))(arg1, &var_d0)
                    
                    if (data_143a2ed01 == 1)
                        if (rax_35 != *(arg1 + 0x4b4))
                            sub_141ef4e60(arg1, 1)
                            int64_t r8_7 = *arg1
                            (*(r8_7 + 0x340))(arg1, 1, r8_7)
                        
                        (*(*arg1 + 0x9b0))(arg1, zx.q(rax_35))
            
            if (not(zmm8.d f== *(arg1 + 0x4ac)))
                char rbp_3 = *(arg1 + 0x432)
                void* rcx_28 = arg1[0xca]
                int128_t var_38_1 = zmm6
                float var_48_1[0x4] = zmm7
                *(arg1 + 0x432) = rbp_3 | 0xa
                
                if (rcx_28 != 0)
                    int64_t rax_38 = 0
                    
                    if (0 == *(rcx_28 + 8))
                        *(rcx_28 + 8) = 0
                    else
                        rax_38 = *(rcx_28 + 8)
                    
                    if (((rax_38 u>> 0x1a).b & 1) == 0)
                        float zmm0_4 = sub_14218eae0(&data_143a2edd8)
                        int64_t performanceCount_2
                        QueryPerformanceCounter(&performanceCount_2)
                        
                        while (*(arg1 + 0x434) != 0)
                            zmm0_4 = sub_140b732d0(zmm8.d)
                        
                        int64_t performanceCount_3
                        QueryPerformanceCounter(&performanceCount_3)
                        r8_5, zmm8 = sub_14218e220(arg1, zmm0_4)
                
                int32_t i_1 = 0
                
                if (arg1[0xc1].d s> 0)
                    int64_t* rdi_4 = nullptr
                    
                    do
                        int64_t* rcx_32 = *(rdi_4 + arg1[0xc0])
                        
                        if (rcx_32 != 0)
                            (*(*rcx_32 + 0x90))(rcx_32)
                        
                        i_1 += 1
                        rdi_4 = &rdi_4[1]
                    while (i_1 s< arg1[0xc1].d)
                
                zmm1_1 = arg1[0x96].d
                zmm6 = zmm8
                zmm7 = 0x3d03126f
                zmm0_1 = *(arg1 + 0x4ac)
                
                if (not(zmm1_1[0] f<= zmm8.d))
                    zmm7 = _mm_min_ss(zmm1_1[0], zmm0_1.d)
                
                if (not(zmm0_1.d f<= zmm8.d))
                    do
                        (*(*arg1 + 0x338))(arg1, zmm7, 2, 0)
                        zmm6.d = zmm6.d f+ zmm7[0]
                    while (zmm6.d f< *(arg1 + 0x4ac))
                
                char rax_45 = *(arg1 + 0x432) & 0xfd
                *(arg1 + 0x4ac) = 0
                *(arg1 + 0x432) = ((rbp_3 ^ rax_45) & 8) ^ rax_45
            
            if (*(arg1 + 0x431) s< 0)
                void* rcx_34 = arg1[0x81]
                
                if (*(rcx_34 + 0x108) u< *(arg1 + 0x43e) && not(zmm8.d f!= *(rcx_34 + 0xbc)))
                    r8_5.b = 1
                    sub_142196000(arg1, 0, r8_5, 0, zmm0_1)
            
            sub_142079870(&var_a0)
        
        int32_t zmm0_5 = sub_141ee8490(arg1)
        void* rax_47 = arg1[0x15]
        
        if (rax_47 == 0)
            rax_47, zmm0_5 = sub_141ee69e0(arg1)
        
        if ((arg1[0x86].b & 0x11) == 0 && rax_47 != 0)
            sub_141f25960(arg1, *(rax_47 + 0x520), zmm0_5)

int64_t result = sub_140b37f60("Effects")
__security_check_cookie(rax_1 ^ &var_118)
return result
