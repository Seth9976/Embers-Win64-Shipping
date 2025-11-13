// 函数: sub_141f2a260
// 地址: 0x141f2a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_658
int64_t rax_1 = __security_cookie ^ &var_658
void* r13 = arg1[0x14]
int64_t* rsi = arg1
void* var_610 = r13
char result

if (r13 == 0 || (((*(r13 + 0x5c) & 0x60) - 0x20) & 0xdf) == 0)
    int64_t r15_1 = 0
    char var_617_1 = 1
    int32_t rax_4
    
    if ((*(arg1 + 0x209) & 1) != 0)
        rax_4 = (*(*arg1 + 0x4c8))() - 1
    
    float (* var_638)[0x4]
    int32_t var_630
    void* var_628
    void* var_620
    void* var_608
    char r12_7
    
    if ((*(arg1 + 0x209) & 1) != 0 && (rax_4 & 0xfffffffd) == 0)
        var_617_1 = 0
        
        if (r13 != 0)
            void* rdi_1 = *(r13 + 0x130)
            uint32_t zmm6[0x4] = *(rsi + 0x1e0)
            float zmm7[0x4] = *(rsi + 0x1c0)
            float zmm8[0x4] = *(rsi + 0x1d0)
            void* var_600 = rdi_1
            
            if (arg2 != 0)
                int32_t i_5 = arg2[1].d
                
                if (i_5 s> 0)
                    int64_t rbx_1 = 0
                    uint64_t i_4 = zx.q(i_5)
                    uint64_t i
                    
                    do
                        zmm6 = sub_141f082e0(rsi, *arg2 + rbx_1, arg3)
                        rbx_1 += 0x8c
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                    r13 = var_610
                    rdi_1 = var_600
            
            int32_t rax_5 = *(rsi + 0xc)
            void* var_260_1 = nullptr
            int32_t var_258_1 = 0
            int32_t var_254_1 = 3
            void* var_558_1 = nullptr
            int32_t var_550_1 = 0
            int32_t var_54c_1 = 8
            void* const rax_11
            
            if (rax_5 s>= data_143e1d9b4)
                rax_11 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_5)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_7 = temp1_1 + rdx_3
                rax_11 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_7.w) - rdx_3) * 0x18
            
            void var_598
            void var_548
            
            if (((*(rax_11 + 8) u>> 0x1d).b & 1) == 0 && (*(rsi + 0x209) & 1) != 0)
                float zmm0[0x4]
                float zmm1[0x4]
                
                if (arg4 == 0 || data_143a2d74c == 0)
                label_141f2a600:
                    void* rbx_3 = rsi[0x15]
                    var_608 = rbx_3
                    
                    if (rbx_3 == 0)
                        void* rax_26 = sub_141ee69e0(rsi)
                        rbx_3 = rax_26
                        var_608 = rax_26
                    
                    uint64_t rdx_10 = zx.q(data_14401b1a0)
                    TEB* gsbase
                    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                    void* const var_5f8 = nullptr
                    int32_t var_5f0_1 = 0
                    
                    if (data_143f3b220 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx_10 << 3))))
                        _Init_thread_header(&data_143f3b220)
                        
                        if (data_143f3b220 == 0xffffffff)
                            sub_140b58170(&data_143f3b218, "UpdateOverlaps", 1)
                            _Init_thread_footer(&data_143f3b220)
                    
                    void* const rax_27 = nullptr
                    
                    if (rdi_1 == rsi)
                        rax_27 = r13
                    
                    void var_616
                    sub_141eb54c0(&var_548, data_143f3b218, &var_616, 0, rax_27)
                    char var_534_1 = 1
                    void var_5b8
                    sub_142259c00(&var_5b8)
                    sub_142277d10(&var_5b8, 2)
                    (*(*rsi + 0x718))(rsi, &var_548, &var_5b8)
                    zmm1 = *(rsi + 0x1d0)
                    int64_t rax_29 = *rsi
                    float var_5c8[0x4] = *(rsi + 0x1c0)
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float var_5e0 = zmm1[0]
                    float var_5d8_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    float var_5dc_1 = zmm0[0]
                    var_620 = &data_143f3a680
                    var_628 = &var_548
                    var_630 = (*(rax_29 + 0x4d8))(rsi)
                    var_638 = &var_5c8
                    (*(*rsi + 0x540))(rsi, &var_5f8, rbx_3, &var_5e0, var_638, var_630, var_628, 
                        var_620, arg3, var_610, var_608)
                    int32_t r13_2 = 0
                    void var_408
                    
                    if (var_5f0_1 s> 0)
                        int64_t r12_1 = 0
                        
                        do
                            int32_t* r14_4 = var_5f8 + r12_1
                            void* rax_31 = sub_140d3c6e0(&r14_4[2])
                            
                            if (rax_31 != 0 && rax_31 != rsi && (*(rax_31 + 0x209) & 1) != 0)
                                void* rax_32 = j_sub_140d3c6e0(r14_4)
                                
                                if (rax_32 != 0 && var_608 != 0
                                        && rax_32 != sub_142437e30(var_608, 0, 1)
                                        && (*(rax_32 + 0x5b) & 0x20) != 0)
                                    int64_t rdi_6 = sx.q(var_258_1)
                                    int32_t rax_34 = (rdi_6 + 1).d
                                    var_258_1 = rax_34
                                    
                                    if (rax_34 s> var_254_1)
                                        sub_141f229d0(&var_408, rdi_6.d)
                                    
                                    void* r9_2 = &var_408
                                    
                                    if (var_260_1 != 0)
                                        r9_2 = var_260_1
                                    
                                    sub_141f2d540(rdi_6 * 0x8c + r9_2, rax_31, r14_4[4])
                            
                            r13_2 += 1
                            r12_1 += 0x18
                        while (r13_2 s< var_5f0_1)
                        
                        r15_1 = 0
                    
                    int64_t rbx_5 = sx.q(var_258_1)
                    int32_t rcx_31 = var_550_1
                    
                    if (rbx_5.d s> rcx_31)
                        var_550_1 = rbx_5.d
                        
                        if (rbx_5.d s> var_54c_1)
                            sub_1407752f0(&var_598, rcx_31)
                    else if (rbx_5.d s< var_550_1)
                        int32_t rdi_8 = var_550_1 - rbx_5.d
                        
                        if (var_550_1 != rbx_5.d)
                            int32_t rcx_34 = var_550_1 - rbx_5.d
                            
                            if (rcx_34 != rdi_8)
                                void* r9_3 = &var_598
                                
                                if (var_558_1 != 0)
                                    r9_3 = var_558_1
                                
                                memmove(r9_3 + (rbx_5 << 3), r9_3 + (sx.q(rbx_5.d + rdi_8) << 3), 
                                    (rcx_34 - rdi_8) << 3)
                            
                            var_550_1 -= rdi_8
                            sub_141f22c20(&var_598)
                    
                    int32_t r9_4 = 0
                    
                    if (rbx_5.d s> 0)
                        int64_t r8_12 = 0
                        
                        do
                            void* rdx_19 = &var_408
                            
                            if (var_260_1 != 0)
                                rdx_19 = var_260_1
                            
                            void* rdx_20 = rdx_19 + sx.q(r9_4) * 0x8c
                            void* rcx_40 = &var_598
                            
                            if (var_558_1 != 0)
                                rcx_40 = var_558_1
                            
                            r9_4 += 1
                            *(rcx_40 + (r8_12 << 3)) = rdx_20
                            r8_12 += 1
                        while (r8_12 s< rbx_5)
                    
                    int64_t var_4e8
                    
                    if (var_4e8 != 0)
                        sub_140a74f90(var_4e8)
                    
                    int64_t var_508
                    
                    if (var_508 != 0)
                        sub_140a74f90(var_508)
                    
                    void* const rcx_43 = var_5f8
                    
                    if (rcx_43 != 0)
                        sub_140a74f90(rcx_43)
                    
                    r13 = var_610
                else
                    zmm8 = __subps_xmmps_memps(zmm8, *(rsi + 0x1d0))
                    uint32_t zmm3[0x4] = data_143f3ade0
                    var_608.d = 0x38d1b717
                    float zmm2[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(zmm8, zmm3), 1)) != 0)
                        goto label_141f2a600
                    
                    zmm0 = *(rsi + 0x1c0)
                    zmm1 = _mm_sub_ps(zmm7, zmm0)
                    zmm7 = _mm_add_ps(zmm7, zmm0)
                    uint32_t temp0_11 =
                        _mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(zmm1, zmm3), 1))
                    zmm7 = _mm_and_ps(zmm7, zmm3)
                    uint32_t temp0_14
                    
                    if (temp0_11 != 0)
                        temp0_14 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, zmm7, 1))
                    
                    if (temp0_11 != 0 && temp0_14 != 0)
                        goto label_141f2a600
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                            _mm_and_ps(__subps_xmmps_memps(zmm6, *(rsi + 0x1e0)), zmm3), 1)) != 0)
                        goto label_141f2a600
                    
                    if (arg2 == 0 || arg2[1].d s<= 0)
                        int64_t rbx_2 = sx.q(arg4[1].d)
                        int32_t temp4_1 = rbx_2.d
                        
                        if (temp4_1 s> 0)
                            var_550_1 = rbx_2.d
                            
                            if (rbx_2.d s> 8)
                                sub_1407752f0(&var_598, 0)
                        else if (temp4_1 s< 0)
                            int32_t rdi_4 = neg.d(rbx_2.d)
                            
                            if (rdi_4 != 0)
                                int32_t rcx_12 = neg.d(rbx_2.d + rdi_4)
                                
                                if (rcx_12 != 0)
                                    memmove(&var_598 + (rbx_2 << 3), &var_598, rcx_12 << 3)
                                
                                var_550_1 -= rdi_4
                                sub_141f22c20(&var_598)
                        
                        int32_t r9 = 0
                        
                        if (rbx_2.d s> 0)
                            int64_t r8_4 = 0
                            
                            do
                                void* rax_25 = &var_598
                                int64_t rcx_16 = sx.q(r9) * 0x8c + *arg4
                                
                                if (var_558_1 != 0)
                                    rax_25 = var_558_1
                                
                                r9 += 1
                                *(rax_25 + (r8_4 << 3)) = rcx_16
                                r8_4 += 1
                            while (r8_4 s< rbx_2)
                    else
                        int32_t rax_18 = arg4[1].d
                        
                        if (rax_18 s> 8)
                            sub_140775b80(&var_598, rax_18)
                            rax_18 = arg4[1].d
                        
                        void* i_1 = *arg4
                        
                        for (void* r14_2 = sx.q(rax_18) * 0x8c + i_1; i_1 != r14_2; i_1 += 0x8c)
                            int64_t* rax_20 = sub_140d3c6e0(i_1 + 0x74)
                            
                            if (rax_20 != 0 && (*(rax_20 + 0x209) & 1) != 0
                                    && (*(rsi + 0x209) & 1) != 0
                                    && sub_141f3be00(rsi, rax_20) == 1)
                                int64_t rdi_2 = sx.q(var_550_1)
                                int32_t rax_22 = (rdi_2 + 1).d
                                var_550_1 = rax_22
                                
                                if (rax_22 s> var_54c_1)
                                    sub_1407752f0(&var_598, rdi_2.d)
                                
                                void* rcx_9 = &var_598
                                
                                if (var_558_1 != 0)
                                    rcx_9 = var_558_1
                                
                                *(rcx_9 + (rdi_2 << 3)) = i_1
            
            if (rsi[0x54].d s> 0)
                void* r8_13 = nullptr
                void* var_508_1 = nullptr
                int32_t rdi_9 = 0
                int32_t var_500_1 = 0
                int32_t var_4fc_1 = 8
                
                if (var_600 != rsi)
                    int64_t rbx_7 = sx.q(rsi[0x54].d)
                    int32_t temp3_1 = rbx_7.d
                    
                    if (temp3_1 s> 0)
                        var_500_1 = rbx_7.d
                        rdi_9 = rbx_7.d
                        
                        if (rbx_7.d s> 8)
                            sub_1407752f0(&var_548, 0)
                            r8_13 = var_508_1
                            rdi_9 = var_500_1
                    else if (temp3_1 s< 0)
                        int32_t r14_6 = neg.d(rbx_7.d)
                        
                        if (r14_6 != 0)
                            int32_t rcx_50 = neg.d(rbx_7.d + r14_6)
                            
                            if (rcx_50 != 0)
                                memmove(&var_548 + (rbx_7 << 3), &var_548, rcx_50 << 3)
                                rdi_9 = var_500_1
                            
                            var_500_1 = rdi_9 - r14_6
                            sub_141f22c20(&var_548)
                            r8_13 = var_508_1
                            rdi_9 = var_500_1
                    
                    int32_t r9_5 = 0
                    
                    if (rbx_7.d s> 0)
                        int64_t rdx_25 = 0
                        
                        while (true)
                            void* rax_49 = &var_548
                            int64_t rcx_54 = sx.q(r9_5) * 0x8c + rsi[0x53]
                            
                            if (r8_13 != 0)
                                rax_49 = r8_13
                            
                            r9_5 += 1
                            *(rax_49 + (rdx_25 << 3)) = rcx_54
                            rdx_25 += 1
                            
                            if (rdx_25 s>= rbx_7)
                                break
                            
                            r8_13 = var_508_1
                        
                        rdi_9 = var_500_1
                        r8_13 = var_508_1
                else
                    sub_140d3a3a0(&var_600, r13)
                    int32_t rax_41 = rsi[0x54].d
                    rdi_9 = var_500_1
                    void* rbx_6 = var_600
                    var_610 = rbx_6
                    int32_t rdx_22 = rdi_9 + rax_41
                    
                    if (rdx_22 s> var_4fc_1)
                        sub_140775b80(&var_548, rdx_22)
                        rax_41 = rsi[0x54].d
                        rdi_9 = var_500_1
                    
                    void* i_2 = rsi[0x53]
                    
                    for (void* r12_3 = sx.q(rax_41) * 0x8c + i_2; i_2 != r12_3; i_2 += 0x8c)
                        int64_t rax_43 = *(i_2 + 0x6c)
                        
                        if (rbx_6.d != rax_43.d || var_610:4.d != (rax_43 u>> 0x20).d)
                            var_500_1 = rdi_9 + 1
                            
                            if (rdi_9 + 1 s> var_4fc_1)
                                sub_1407752f0(&var_548, rdi_9)
                            
                            void* rcx_47 = &var_548
                            
                            if (var_508_1 != 0)
                                rcx_47 = var_508_1
                            
                            *(rcx_47 + (sx.q(rdi_9) << 3)) = i_2
                            rdi_9 = var_500_1
                    
                    r8_13 = var_508_1
                
                int32_t rbx_8 = 0
                
                if (rdi_9 s> 0)
                    int64_t r14_7 = 0
                    
                    do
                        int64_t rcx_55 = sx.q(var_550_1)
                        
                        if (rcx_55.d s<= 0)
                            break
                        
                        void* rax_50 = &var_548
                        void* r10_2 = &var_598
                        
                        if (r8_13 != 0)
                            rax_50 = r8_13
                        
                        if (var_558_1 != 0)
                            r10_2 = var_558_1
                        
                        void* r9_6 = r10_2
                        void* rax_51 = *(rax_50 + r14_7)
                        void* r11_1 = r10_2 + (rcx_55 << 3)
                        
                        if (r10_2 != r11_1)
                            do
                                void* rdx_27 = *r9_6
                                
                                if (*(rax_51 + 0x74) == *(rdx_27 + 0x74)
                                        && *(rax_51 + 0x78) == *(rdx_27 + 0x78)
                                        && *(rax_51 + 0x60) == *(rdx_27 + 0x60))
                                    int32_t r9_8 = ((r9_6 - r10_2) s>> 3).d
                                    
                                    if (r9_8 != 0xffffffff)
                                        int32_t rax_54 = var_550_1 - r9_8 - 1
                                        
                                        if (rax_54 s>= 1)
                                            rax_54 = 1
                                        
                                        if (rax_54 != 0)
                                            memcpy(r10_2 + (sx.q(r9_8) << 3), 
                                                r10_2 + (sx.q(var_550_1 - rax_54) << 3), 
                                                rax_54 << 3)
                                            r8_13 = var_508_1
                                            rdi_9 = var_500_1
                                        
                                        var_550_1 -= 1
                                        int32_t rax_59 = rdi_9 - rbx_8 - 1
                                        
                                        if (rax_59 s>= 1)
                                            rax_59 = 1
                                        
                                        if (rax_59 != 0)
                                            void* rcx_61 = &var_548
                                            
                                            if (r8_13 != 0)
                                                rcx_61 = r8_13
                                            
                                            memcpy(rcx_61 + (sx.q(rbx_8) << 3), 
                                                rcx_61 + (sx.q(rdi_9 - rax_59) << 3), rax_59 << 3)
                                            r8_13 = var_508_1
                                            rdi_9 = var_500_1
                                        
                                        rdi_9 -= 1
                                        rbx_8 -= 1
                                        var_500_1 = rdi_9
                                        r14_7 -= 8
                                    
                                    break
                                
                                r9_6 += 8
                            while (r9_6 != r11_1)
                        
                        rbx_8 += 1
                        r14_7 += 8
                    while (rbx_8 s< rdi_9)
                    
                    rsi = arg1
                    
                    if (rdi_9 s> 0)
                        void* var_a0_1 = nullptr
                        void* r10_3 = nullptr
                        int32_t var_94_1 = 3
                        void var_248
                        
                        if (rdi_9 s> 3)
                            sub_141f229d0(&var_248, 0)
                            r8_13 = var_508_1
                            r10_3 = var_a0_1
                        
                        if (rdi_9 s> 0)
                            int64_t i_3 = 0
                            int64_t r9_9 = 0
                            
                            do
                                void* rax_62 = &var_548
                                void* rdx_30 = &var_248
                                
                                if (r8_13 != 0)
                                    rax_62 = r8_13
                                
                                r9_9 += 0x8c
                                
                                if (r10_3 != 0)
                                    rdx_30 = r10_3
                                
                                float (* rcx_64)[0x4] = *(rax_62 + (i_3 << 3))
                                i_3 += 1
                                *(rdx_30 + r9_9 - 0x8c) = *rcx_64
                                *(rdx_30 + r9_9 - 0x7c) = rcx_64[1]
                                *(rdx_30 + r9_9 - 0x6c) = rcx_64[2]
                                *(rdx_30 + r9_9 - 0x5c) = rcx_64[3]
                                *(rdx_30 + r9_9 - 0x4c) = rcx_64[4]
                                *(rdx_30 + r9_9 - 0x3c) = rcx_64[5]
                                *(rdx_30 + r9_9 - 0x2c) = rcx_64[6]
                                *(rdx_30 + r9_9 - 0x1c) = rcx_64[7]
                                *(rdx_30 + r9_9 - 0xc) = rcx_64[8][0].q
                                *(rdx_30 + r9_9 - 4) = (*rcx_64)[0x22]
                                r8_13 = var_508_1
                                r10_3 = var_a0_1
                            while (i_3 s< sx.q(rdi_9))
                        
                        void* rbx_10 = &var_248
                        
                        if (r10_3 != 0)
                            rbx_10 = r10_3
                        
                        void* r12_6 = sx.q(rdi_9) * 0x8c + rbx_10
                        
                        if (rbx_10 != r12_6)
                            do
                                if (sub_140d3e110(rbx_10 + 0x74) == 0)
                                    int32_t r14_8 = *(rsi + 0x2a4)
                                    int64_t r10_4 = sx.q(sub_141f020c0(&rsi[0x53], rbx_10))
                                    
                                    if (r10_4.d != 0xffffffff)
                                        int32_t rdx_32 = rsi[0x54].d
                                        int32_t rcx_70 = rdx_32 - r10_4.d - 1
                                        
                                        if (rcx_70 s>= 1)
                                            rcx_70 = 1
                                        
                                        if (rcx_70 != 0)
                                            memcpy(r10_4 * 0x8c + rsi[0x53], 
                                                sx.q(rdx_32 - rcx_70) * 0x8c + rsi[0x53], 
                                                rcx_70 * 0x8c)
                                            rdx_32 = rsi[0x54].d
                                        
                                        rsi[0x54].d = rdx_32 - 1
                                        
                                        if (r14_8 s>= 0x18)
                                            sub_141f22cb0(&rsi[0x53])
                                else
                                    sub_141f11260(rsi, rbx_10, arg3, 0)
                                
                                rbx_10 += 0x8c
                            while (rbx_10 != r12_6)
                            
                            r8_13 = var_508_1
                            r15_1 = 0
                            r10_3 = var_a0_1
                        
                        if (r10_3 != 0)
                            sub_140a74f90(r10_3)
                            r8_13 = var_508_1
                
                if (r8_13 != 0)
                    sub_140a74f90(r8_13)
            
            void* rbx_11 = &var_598
            int64_t rdi_13 = 0
            
            if (var_558_1 != 0)
                rbx_11 = var_558_1
            
            int64_t r14_9 = sx.q(var_550_1) << 3
            uint64_t r14_10 = r14_9 u>> 3
            
            if (rbx_11 u> rbx_11 + r14_9)
                r14_10 = 0
            
            if (r14_10 != 0)
                do
                    sub_141f082e0(rsi, *rbx_11, arg3)
                    rdi_13 += 1
                    rbx_11 += 8
                while (rdi_13 != r14_10)
                
                r15_1 = 0
            
            if (var_558_1 != 0)
                sub_140a74f90(var_558_1)
            
            if (var_260_1 != 0)
                sub_140a74f90(var_260_1)
        
        r12_7 = arg3
    else if (rsi[0x54].d s<= 0)
        r12_7 = arg3
    else
        r12_7 = arg3
        sub_141f09de0(rsi, r12_7, 0)
    
    int64_t rbx_12 = sx.q(rsi[0x1b].d)
    void* rdx_39 = nullptr
    void* var_418_1 = nullptr
    int32_t r9_10 = 0
    int32_t var_410_1 = 0
    int32_t rax_72 = 0
    int32_t var_40c_1 = 0x18
    void var_4d8
    
    if (rbx_12.d != 0)
        if (rbx_12.d s> 0x18)
            sub_141dd5f20(&var_4d8, rbx_12.d)
            r9_10 = var_410_1
            rdx_39 = var_418_1
        
        void* rcx_80 = &var_4d8
        
        if (rdx_39 != 0)
            rcx_80 = rdx_39
        
        memcpy(rcx_80 + (sx.q(r9_10) << 3), rsi[0x1a], (rbx_12 << 3).d)
        rdx_39 = var_418_1
        rax_72 = var_410_1 + rbx_12.d
        int32_t var_410_2 = rax_72
    
    void* rdi_14 = &var_4d8
    
    if (rdx_39 != 0)
        rdi_14 = rdx_39
    
    int64_t r14_11 = sx.q(rax_72) << 3
    uint64_t r14_12 = r14_11 u>> 3
    
    if (rdi_14 u> r14_11 + rdi_14)
        r14_12 = 0
    
    if (r14_12 != 0)
        char rsi_1 = var_617_1
        
        do
            rbx_12 = *rdi_14
            
            if (rbx_12 != 0)
                uint8_t rax_78
                
                if (*(rbx_12 + 0x178) s<= 0)
                    if (data_143a2d7b4 == 1)
                        rax_78 = *(rbx_12 + 0x14c)
                    
                    if (data_143a2d7b4 != 1 || (rax_78 & 2) == 0)
                        char rax_80 = (*(*rbx_12 + 0x468))(rbx_12, 0, zx.q(r12_7), 0, var_638, 
                            var_630, var_628, var_620, arg3, var_610, var_608)
                        *(rbx_12 + 0x14c) ^= ((rax_80 * 2) ^ *(rbx_12 + 0x14c)) & 2
                        rax_78 = *(rbx_12 + 0x14c)
                else
                    void* rdx_42 = *(*(rbx_12 + 0x170) + (sx.q(*(rbx_12 + 0x178)) << 3) - 8)
                    *(rdx_42 + 0x350) |= 2
                    *(rdx_42 + 0x10) = 3
                    *(rdx_42 + 0x74) = 0xffffffff
                    rax_78 = *(rbx_12 + 0x14c)
                
                rsi_1 &= rax_78 u>> 1 & 1
            
            rdi_14 += 8
            r15_1 += 1
        while (r15_1 != r14_12)
        
        rdx_39 = var_418_1
        var_617_1 = rsi_1
        rsi = arg1
    
    if ((*(rsi + 0x14d) & 2) == 0)
        rbx_12 = zx.q(var_617_1)
    else
        (*(*rsi + 0x4a8))(rsi, zx.q(r12_7))
        rdx_39 = var_418_1
        rbx_12.b = 0
    
    if (rdx_39 != 0)
        sub_140a74f90(rdx_39)
    
    result = rbx_12.b
else
    result = 0

__security_check_cookie(rax_1 ^ &var_658)
return result
