// 函数: sub_141a16f30
// 地址: 0x141a16f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_818
int64_t rax_1 = __security_cookie ^ &var_818
int32_t rax_2 = data_14399fa50
int64_t* rdi = arg2
int64_t* r13 = arg1
int64_t* r14 = nullptr
uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm8
uint128_t var_68 = zmm8
int64_t* var_5e0
uint128_t var_5d8
int64_t var_5c8
uint128_t zmm0
float zmm3[0x4]

if (data_143f28d8c != rax_2 && data_143f287c4 == 0)
    int32_t r10_1 = (data_1439cc118).d
    void* r9 = &data_1439cc100
    data_143f28d8c = rax_2
    int32_t rcx = 0
    int32_t var_638_1 = 0
    int32_t r8 = 0
    int32_t var_634_1 = 1
    void* var_630_1 = &data_1439cc100
    int32_t var_628_1 = 0xffffffff
    int64_t var_624_1 = 0
    
    if (r10_1 != 0)
        void* rax_3 = data_1439cc110
        
        if (rax_3 != 0)
            r9 = rax_3
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9
        
        if (rdx_2 != 0)
        label_141a17062:
            int32_t rax_10 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_634_2 = rax_10
            int32_t var_408_1 = temp0_1
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_1
            
            int32_t rax_12 = r8 - rax_11 + 0x1f
            
            if (rax_12 s> r10_1)
                rax_12 = r10_1
            
            var_624_1.d = rax_12
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_624_1:4.d = r8
                var_638_1 = rcx
                
                if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    var_624_1.d = r10_1
                    break
                
                rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                int32_t var_628_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141a17062
    
    int64_t* var_190_1 = &data_1439cc0f0
    var_5e0 = &data_1439cc0f0
    var_5c8 = 0xffffffff
    int64_t* var_528_1 = &data_1439cc0f0
    var_5d8 = var_638_1.o
    int16_t var_520_1 = 0
    zmm3 = var_5d8
    void* rax_13 = zmm3[0].q
    float var_558[0x4] = var_5e0.o
    zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    uint128_t var_198_1 = zmm0
    
    if (0 s< *(rax_13 + 0x18))
        float i = zmm3[3]
        
        do
            if (sub_140d3e110(sx.q(i) * 0x2c + *var_558[0].q) == 0)
                sub_141a13310(zmm0:8.q, i)
                data_1439cc0e0 += 1
                var_520_1.b = 1
            
            zmm3[2] &= not.d(var_558[3])
            sub_14059bdd0(&var_558[2])
            i = zmm3[3]
        while (i s< *(zmm3[0].q + 0x18))
        
        if (var_520_1.b != 0 && var_520_1:1.b != 0)
            sub_141a06460(var_528_1, var_528_1[1].d - *(var_528_1 + 0x34), 1)

uint128_t zmm1
float zmm2[0x4]

if (data_1439cbf94 s> 0)
    void* rax_21 = (*(*r13 + 0x150))(r13)
    bool cond:3_1 = data_1439cbf98 s> 0
    int32_t r15_1 = data_1439cbf84
    uint128_t zmm13 = data_1439cbf70
    bool cond:4_1 = data_143f287bc s> 0
    float zmm7[0x4] = data_1439cbf90
    bool cond:5_1 = data_143f287c0 s> 0
    int32_t var_788_1 = zmm13.d
    int32_t var_700_1 = data_1439cbf74.d
    float var_78c_1 = zmm7[0]
    
    if (r15_1 s<= 0x400)
        r15_1 = 0x400
    
    int32_t rax_22 = data_1439cbf88
    
    if (rax_21 != 0)
        int64_t rax_23 = r13[0x50]
        uint128_t zmm15 = zx.o(0)
        
        if (rax_23 != r13[0x51])
            r13[0x51] = rax_23
            int32_t rax_24 = *(r13 + 0x29c)
            r13[0x53].d = 0
            
            if (rax_24 s< 0 && rax_24 != 0)
                sub_1405c5570(&r13[0x52], 0)
            
            int64_t* rdi_1 = r13[0x50]
            zmm6 = zx.o(0)
            r13[0x54].d = 0
            
            if (rdi_1 != 0)
                void* rax_26 = (*(*rdi_1 + 0x268))(rdi_1)
                int64_t rsi_1 = sx.q(*(rax_26 + 0x4b8))
                
                if (rsi_1.d != 0)
                    int32_t rcx_11 = r13[0x53].d
                    int32_t rdx_7 = rsi_1.d + rcx_11
                    
                    if (rdx_7 s> *(r13 + 0x29c))
                        sub_1405c5570(&r13[0x52], rdx_7)
                        rcx_11 = r13[0x53].d
                    
                    memcpy(r13[0x52] + (sx.q(rcx_11) << 3), *(rax_26 + 0x4b0), (rsi_1 << 3).d)
                    r13[0x53].d += rsi_1.d
                
                void* rax_29 = (*(*rdi_1 + 0x268))(rdi_1)
                int64_t* i_1 = *(rax_29 + 0x4b0)
                
                for (void* r9_1 = &i_1[sx.q(*(rax_29 + 0x4b8))]; i_1 != r9_1; i_1 = &i_1[1])
                    void* rax_31 = *i_1
                    
                    if (rax_31 != 0)
                        void* rdx_9 = *(rax_31 + 0x28)
                        void* rax_33 = rdx_9 + sx.q(*(rax_31 + 0x30)) * 0x48
                        
                        while (rdx_9 != rax_33)
                            zmm0 = zx.o(*(rdx_9 + 0x18))
                            rdx_9 += 0x48
                            zmm6 = _mm_max_ss(_mm_cvtepi32_ps(zmm0).d, zmm6.d)
            
            rdi = arg2
            zmm6.d = zmm6.d f* zmm6.d
            r13[0x54].d = zmm6.d
        
        int32_t rax_35 = *(*(rax_21 + 0x1b0) + 8)
        uint64_t rax_36 = zx.q(data_14401b1a0)
        TEB* gsbase
        
        if (data_143f28da0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rax_36 << 3))))
            _Init_thread_header(&data_143f28da0)
            
            if (data_143f28da0 == 0xffffffff)
                data_143f28d90 = 0
                data_143f28d98.q = 0
                atexit(sub_142cf4720)
                _Init_thread_footer(&data_143f28da0)
        
        int32_t rdx_10 = r13[0x5f].d
        bool cond:8_1 = rdx_10 s<= data_143f28d9c
        data_143f28d98 = 0
        
        if (not(cond:8_1))
            sub_1411050d0(&data_143f28d90, rdx_10)
        
        int64_t* rsi_2 = r13[0x5e]
        float zmm10[0x4] = 0x7f7fffff
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        void* r14_2 = &rsi_2[sx.q(r13[0x5f].d)]
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        float zmm14[0x4]
        float var_c8_1[0x4] = zmm14
        uint64_t var_758
        float var_750
        uint64_t var_74c
        int32_t var_744
        char var_740
        uint128_t zmm4_1
        uint128_t zmm5_1
        
        if (rsi_2 != r14_2)
            do
                int64_t* rbx_2 = *rsi_2
                
                if (rbx_2 != 0)
                    char rax_39 = sub_14243ade0(rax_21)
                    void* rcx_19
                    
                    if (rax_39 != 0)
                        rcx_19 = rbx_2[0xbb]
                    
                    if (rax_39 == 0 || *(rcx_19 + 0x18) != *(rcx_19 + 0x44))
                        int32_t var_478
                        (*(*rbx_2 + 0x480))(rbx_2, &var_478, &rbx_2[0x38])
                        int64_t rax_42 = sx.q(rdi[1].d)
                        
                        if (rax_42.d == 0)
                            zmm2 = zx.o(0)
                        else
                            zmm2 = zmm10
                        
                        uint128_t* rdx_12 = *rdi
                        int32_t var_464
                        zmm12 = var_464
                        int32_t var_468
                        zmm13 = var_468
                        int32_t var_46c
                        zmm14 = var_46c
                        int32_t var_470
                        zmm9 = var_470
                        void* rax_43 = rdx_12 + rax_42 * 0xc
                        int32_t var_474
                        zmm11 = var_474
                        zmm10 = var_478
                        
                        if (rdx_12 != rax_43)
                            zmm9[0] = zmm9[0] f- zmm12.d
                            zmm4_1.d = zmm11.d f- zmm13.d
                            zmm5_1.d = zmm10.d f- zmm14[0]
                            zmm8.d = zmm12.d f+ zmm9[0]
                            zmm6.d = zmm13.d f+ zmm11.d
                            zmm14[0] = zmm14[0] + zmm10[0]
                            
                            do
                                zmm1 = *rdx_12
                                zmm0 = zx.o(0)
                                
                                if (not(zmm1.d f>= zmm5_1.d))
                                    zmm0.d = zmm1.d f- zmm5_1.d
                                    zmm0.d = zmm0.d f* zmm0.d
                                else if (not(zmm1.d f<= zmm14[0]))
                                    zmm0.d = zmm1.d f- zmm14[0]
                                    zmm0.d = zmm0.d f* zmm0.d
                                
                                zmm1 = *(rdx_12 + 4)
                                
                                if (not(zmm1.d f>= zmm4_1.d))
                                    zmm1.d = zmm1.d f- zmm4_1.d
                                    zmm1.d = zmm1.d f* zmm1.d
                                    zmm0.d = zmm0.d f+ zmm1.d
                                else if (not(zmm1.d f<= zmm6.d))
                                    zmm1.d = zmm1.d f- zmm6.d
                                    zmm1.d = zmm1.d f* zmm1.d
                                    zmm0.d = zmm0.d f+ zmm1.d
                                
                                zmm1 = *(rdx_12 + 8)
                                
                                if (not(zmm1.d f>= zmm9[0]))
                                    zmm1.d = zmm1.d f- zmm9[0]
                                    zmm1.d = zmm1.d f* zmm1.d
                                    zmm0.d = zmm0.d f+ zmm1.d
                                else if (not(zmm1.d f<= zmm8.d))
                                    zmm1.d = zmm1.d f- zmm8.d
                                    zmm1.d = zmm1.d f* zmm1.d
                                    zmm0.d = zmm0.d f+ zmm1.d
                                
                                rdx_12 += 0xc
                                zmm2 = _mm_min_ss(zmm0.d, zmm2[0])
                            while (rdx_12 != rax_43)
                        
                        if (not(zmm2[0] f> r13[0x54].d))
                            int64_t rdi_2 = sx.q(data_143f28d98)
                            zmm0.d = zmm12.d f+ zmm9[0]
                            var_740 = 1
                            zmm9[0] = zmm9[0] f- zmm12.d
                            zmm1.d = zmm14.d f+ zmm10[0]
                            zmm6 = _mm_sqrt_ss(0, zmm2[0])
                            zmm10[0] = zmm10[0] - zmm14[0]
                            int32_t var_6f4_1 = zmm0.d
                            zmm2 = zmm13
                            zmm2[0] = zmm2[0] f+ zmm11.d
                            zmm11.d = zmm11.d f- zmm13.d
                            var_750 = zmm9[0]
                            var_744 = var_6f4_1
                            int32_t rax_46 = (rdi_2 + 1).d
                            bool cond:14_1 = rax_46 s<= data_143f28d9c
                            var_758 = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
                            var_74c = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
                            data_143f28d98 = rax_46
                            
                            if (not(cond:14_1))
                                sub_140b52a30(&data_143f28d90)
                            
                            int64_t rcx_22 = data_143f28d90
                            int64_t rdx_14 = rdi_2 * 5
                            *(rcx_22 + (rdx_14 << 3) + 0xc) = var_758.o
                            *(rcx_22 + (rdx_14 << 3)) = rbx_2
                            *(rcx_22 + (rdx_14 << 3) + 0x1c) = var_74c
                            *(rcx_22 + (rdx_14 << 3) + 0x24) = var_740.d
                            *(rcx_22 + (rdx_14 << 3) + 8) = zmm6.d
                        
                        zmm10 = 0x7f7fffff
                
                rdi = arg2
                rsi_2 = &rsi_2[1]
            while (rsi_2 != r14_2)
            
            zmm7 = var_78c_1
            zmm13 = var_788_1
        
        void** r14_3 = data_143f28d90
        void** var_728_1 = r14_3
        void* rax_49 = &r14_3[sx.q(data_143f28d98) * 5]
        
        if (r14_3 != rax_49)
            zmm11 = 0xbf000000
            zmm14 = 0x3f800000
            zmm12 = _mm_cvtepi32_ps(zx.o(r15_1))
            int32_t var_710_1 = zmm12.d
            
            do
                void* rsi_3 = *r14_3
                zmm9 = r14_3[1].d
                float var_770_1 = zmm9[0]
                void* var_760_1 = rsi_3
                
                if (*(rsi_3 + 0x5f8) != data_1439cc0e0)
                    *(rsi_3 + 0x5f0) = 0
                    
                    if (*(rsi_3 + 0x5f4) != 0)
                        sub_1413f6f70(rsi_3 + 0x5e8, 0)
                    
                    if (data_1439cc0f8 != data_1439cc124 && data_143f287c4 == 0)
                        int32_t r9_2 = (data_1439cc118).d
                        int32_t rcx_25 = 0
                        int32_t var_658_1 = 0
                        int32_t var_654_1 = 1
                        int32_t r8_8 = 0
                        void* var_650_1 = &data_1439cc100
                        int32_t var_648_1 = 0xffffffff
                        int64_t var_644_1 = 0
                        
                        if (r9_2 != 0)
                            void* rax_52 = data_1439cc110
                            void* r10_2 = &data_1439cc100
                            
                            if (rax_52 != 0)
                                r10_2 = rax_52
                            
                            int32_t temp6_1
                            int32_t temp7_1
                            temp6_1:temp7_1 = sx.q(r9_2 - 1)
                            int32_t rdx_17 = *r10_2
                            
                            if (rdx_17 != 0)
                            label_141a17842:
                                int32_t rax_59 = ((rdx_17 - 1) & rdx_17) ^ rdx_17
                                uint64_t rflags_2
                                int32_t temp0_10
                                temp0_10, rflags_2 = _bit_scan_reverse(rax_59)
                                int32_t var_654_2 = rax_59
                                int32_t var_43c_1 = temp0_10
                                int32_t rax_60
                                
                                if (rax_59 == 0)
                                    rax_60 = 0x20
                                else
                                    rax_60 = 0x1f - temp0_10
                                
                                int32_t rax_61 = r8_8 - rax_60 + 0x1f
                                
                                if (rax_61 s> r9_2)
                                    rax_61 = r9_2
                                
                                var_644_1.d = rax_61
                            else
                                while (true)
                                    int64_t rdx_18 = sx.q(rcx_25)
                                    r8_8 += 0x20
                                    rcx_25 += 1
                                    var_644_1:4.d = r8_8
                                    var_658_1 = rcx_25
                                    
                                    if (rdx_18.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                        var_644_1.d = r9_2
                                        break
                                    
                                    rdx_17 = *(r10_2 + (rdx_18 << 2) + 4)
                                    int32_t var_648_2 = 0xffffffff
                                    
                                    if (rdx_17 != 0)
                                        goto label_141a17842
                        
                        char rcx_28 = r9_2.b & 0x1f
                        int64_t* var_5a8_1
                        var_5a8_1.d = r9_2 s>> 5
                        int128_t var_590_1 = 0xffffffff
                        var_5a8_1:4.d = 1 << rcx_28
                        uint128_t var_5a0_1
                        var_5a0_1:0xc.d = r9_2
                        var_5e0.o = (&data_1439cc0f0).o
                        var_5a0_1.q = &data_1439cc100
                        var_5a0_1:8.d = 0xffffffff << rcx_28
                        var_5c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        int128_t var_430_1 = &data_1439cc0f0
                        var_590_1.d = r9_2 & 0xffffffe0
                        zmm2 = var_5a0_1
                        float var_420_1[0x4] = zmm2
                        uint128_t var_2a8_1 = (&data_1439cc0f0).o
                        var_5d8 = var_658_1.o
                        int64_t rdi_3 = zmm2[0].q
                        uint128_t var_298_1 = var_430_1
                        uint64_t var_288_1 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
                        
                        while (true)
                            int64_t rax_66 = sx.q(var_5c8:4.d)
                            
                            if (rax_66.d == (rdi_3 u>> 0x20).d && var_5d8:8.q == &data_1439cc100
                                    && var_5e0 == &data_1439cc0f0)
                                break
                            
                            int32_t* rdx_22 = *var_5e0 + 8 + rax_66 * 0x2c
                            
                            if (not(r14_3[3].d.d f< *rdx_22) && not(rdx_22[3].d f< *(r14_3 + 0xc))
                                    && not((*(r14_3 + 0x1c)).d f< rdx_22[1])
                                    && not(rdx_22[4].d f< r14_3[2].d)
                                    && not(r14_3[4].d.d f< rdx_22[2])
                                    && not(rdx_22[5].d f< *(r14_3 + 0x14)))
                                sub_1419f45f0(rsi_3 + 0x5e8, rdx_22)
                            
                            var_5c8.d &= not.d(var_5d8:4.d)
                            sub_14059bdd0(&var_5d8)
                    
                    *(rsi_3 + 0x5f8) = data_1439cc0e0
                
                int64_t* rbx_3 = r13[0x52]
                int64_t* var_720_1 = rbx_3
                void* rdi_5 = &rbx_3[sx.q(r13[0x53].d)]
                void* var_6e8_1 = rdi_5
                
                if (rbx_3 != rdi_5)
                    do
                        void* r12_2 = *rbx_3
                        void* var_768_1 = r12_2
                        
                        if (r12_2 != 0)
                            char rax_71 = sub_14243ade0(rax_21)
                            int64_t rax_73
                            
                            if (rax_71 != 0)
                                void* rbx_4 = *(rsi_3 + 0x5d8)
                                int32_t var_6d4
                                sub_1405ba560(rbx_4 + 0x10, &var_6d4, r12_2)
                                int64_t rax_72 = sx.q(var_6d4)
                                int64_t rcx_36
                                
                                if (rax_72.d == 0xffffffff)
                                    rcx_36 = 0
                                else
                                    rcx_36 = (rax_72 << 5) + *(rbx_4 + 0x10)
                                
                                rbx_3 = var_720_1
                                rax_73 = rcx_36 + 8
                                
                                if (rcx_36 == 0)
                                    rax_73 = 0
                            
                            if (rax_71 == 0 || rax_73 != 0)
                                int64_t* r14_4 = *(r12_2 + 0x28)
                                int32_t rdx_24 = -1
                                int64_t* var_778_1 = r14_4
                                int32_t r15_2 = 1
                                void* rax_75 = &r14_4[sx.q(*(r12_2 + 0x30)) * 9]
                                
                                if (r14_4 != rax_75)
                                    zmm6 = data_143f280c0
                                    
                                    do
                                        int32_t rax_76 = r14_4[3].d
                                        rdx_24 += 1
                                        
                                        if (*r14_4 != 0)
                                            zmm3 = r14_4[1].d
                                            
                                            if (not(zmm3[0] f<= zmm15.d) && rax_76 s> 0)
                                                char r11_3 = *(r14_4 + 0xc)
                                                char var_7b8_1 = r11_3
                                                zmm8 = _mm_cvtepi32_ps(zx.o(rax_76))
                                                zmm0 = zmm8
                                                zmm8.d = zmm8.d f* var_700_1
                                                zmm0.d = zmm0.d f* zmm13.d
                                                zmm8.d = zmm8.d f* zmm7[0]
                                                zmm0.d = zmm0.d f* zmm7[0]
                                                float var_708_1 = zmm8.d
                                                int32_t var_6d0_1 = zmm0.d
                                                
                                                if (r11_3 == 0 || not(zmm9[0] f> zmm8.d))
                                                    void* r10_3 = r13[0x26]
                                                    zmm3[0] = zmm3[0] f* data_1439cbf8c
                                                    zmm4_1 = zx.o(*(r10_3 + 0x134))
                                                    zmm5_1 = zmm4_1.q:4.d
                                                    int32_t var_35c_1 = zmm5_1.d
                                                    float var_364_1 = zmm3[0]
                                                    int32_t var_360_1 = zmm4_1.d
                                                    int32_t var_358_1 = (*(r10_3 + 0x13c)).d
                                                    int32_t* rax_78
                                                    
                                                    if (r10_3 == 0)
                                                        int32_t var_610_2 = data_143dbb200
                                                        uint64_t var_618
                                                        rax_78 = &var_618
                                                        var_618 = data_143dbb1f8.q
                                                    else
                                                        zmm1 = *(r10_3 + 0x1d0)
                                                        int32_t var_6fc
                                                        rax_78 = &var_6fc
                                                        var_6fc = zmm1.d
                                                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                                        uint128_t var_278_1 = zmm1
                                                        int32_t var_6f4_2 =
                                                            _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                                                        int32_t var_6f8_1 = zmm0.d
                                                    
                                                    zmm2 = zmm5_1
                                                    int32_t rax_80 = rax_78[2]
                                                    int32_t rcx_38 = *(rsi_3 + 0x408)
                                                    int32_t r8_11 = *(rsi_3 + 0x40c)
                                                    int32_t rdx_25 = r13[0x47].d
                                                    int32_t r9_4 = *(r13 + 0x23c)
                                                    uint64_t var_354_1 = *rax_78
                                                    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_38))
                                                    int32_t var_34c_1 = rax_80
                                                    int32_t rax_81 = *(rsi_3 + 0x410)
                                                    int32_t var_308_1 = rcx_38
                                                    int32_t var_304_1 = r8_11
                                                    zmm0.d = zmm0.d f* zmm4_1.d
                                                    int32_t var_2f8_1 = rax_81
                                                    int32_t var_300_1 = rdx_25
                                                    int32_t var_2fc_1 = r9_4
                                                    int32_t var_2ec_1 = 0
                                                    int32_t var_2e0_1 = 0
                                                    int32_t var_2f4_1 = zmm0.d
                                                    zmm1.d =
                                                        _mm_cvtepi32_ps(zx.o(r8_11)).d f* zmm5_1.d
                                                    int32_t var_2d4_1 = 0
                                                    zmm0 = _mm_cvtepi32_ps(zx.o(rax_81))
                                                    int32_t var_2f0_1 = zmm1.d
                                                    zmm1.d = zmm4_1.d f* zmm0.d
                                                    zmm2[0] = zmm2[0] f* zmm0.d
                                                    int32_t var_2e8_1 = zmm1.d
                                                    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_38 - rdx_25))
                                                    float var_2e4_1 = zmm2[0]
                                                    zmm2[0] = zmm2[0] f* zmm1.d
                                                    zmm0.d = zmm0.d f* zmm4_1.d
                                                    zmm2[0] = zmm2[0] * zmm3[0]
                                                    int32_t var_2dc_1 = zmm0.d
                                                    zmm2[0] = zmm2[0] * 9.99999997e-07f
                                                    zmm0.d = _mm_cvtepi32_ps(zx.o(r8_11 - r9_4)).d
                                                        f* zmm5_1.d
                                                    int32_t var_2d8_1 = zmm0.d
                                                    zmm0 = _mm_sqrt_ss(0, 
                                                        __andps_xmmxud_memxud(zmm2, data_142d3f770)[
                                                            0])
                                                    zmm2 = *(r10_3 + 0x1c0)
                                                    zmm0.d = zmm0.d f+ zmm0.d
                                                    zmm3 = _mm_add_ps(zmm2, zmm2)
                                                    zmm1.d = zmm11.d f- zmm0.d
                                                    int32_t rax_82 = int.d(zmm1.d)
                                                    zmm1 = _mm_mul_ps(zmm2, zmm3)
                                                    int32_t rax_83 = rax_82 s>> 1
                                                    int32_t rcx_41 = neg.d(rax_83)
                                                    int32_t var_2d0_1 = rcx_41
                                                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 1)
                                                    bool var_368_1 = rax_83 != 0
                                                    zmm1 = _mm_add_ps(
                                                        _mm_shuffle_ps(zmm1, zmm1, 0x1a), zmm0)
                                                    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 4)
                                                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                                                    zmm5_1 = _mm_sub_ps(zmm6, zmm1)
                                                    zmm1 = _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                                                    zmm3 = _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm3, zmm3, 0x12), zmm2)
                                                    zmm4_1 = _mm_add_ps(zmm3, zmm1)
                                                    zmm1 = _mm_sub_ps(zmm1, zmm3)
                                                    zmm5_1 = __andps_xmmxud_memxud(zmm5_1, 
                                                        data_143f280d0)
                                                    zmm2 = zmm1
                                                    zmm3 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(zmm4_1, zmm5_1, 0), 
                                                        _mm_shuffle_ps(zmm1, zmm5_1, 0x32), 0x82)
                                                    zmm0 = _mm_shuffle_ps(zmm4_1, zmm5_1, 0x31)
                                                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm1, 0x12)
                                                    int32_t r8_13 = 1
                                                    zmm1 = *(r10_3 + 0x1d0)
                                                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm5_1, 0xe8)
                                                    zmm2 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(zmm2, zmm5_1, 0x10), zmm0, 
                                                        0x88)
                                                    zmm0.q = zmm1 u>> 0x40
                                                    zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0xc4)
                                                    uint128_t var_238_1 = zmm1
                                                    uint128_t var_318_1 = zmm1
                                                    float var_268_1[0x4] = zmm3
                                                    float var_258_1[0x4] = zmm2
                                                    uint128_t var_248_1 = zmm4_1
                                                    float var_348_1[0x4] = zmm3
                                                    float var_338_1[0x4] = zmm2
                                                    uint128_t var_328_1 = zmm4_1
                                                    int32_t var_7b4_1 = 1
                                                    
                                                    if (rax_83 != 0 && rcx_41 s> 0)
                                                        zmm0 = _mm_sqrt_ss(0, zmm12.d)
                                                        zmm1.d = _mm_cvtepi32_ps(zx.o(rcx_41)).d
                                                            f/ zmm0.d
                                                        zmm1.d = zmm1.d f+ zmm1.d
                                                        zmm0.d = zmm11.d f- zmm1.d
                                                        int32_t rax_86 = neg.d(int.d(zmm0.d) s>> 1)
                                                        
                                                        if (rax_86 s>= 1)
                                                            r8_13 = 0x10
                                                            
                                                            if (rax_86 s< 0x10)
                                                                r8_13 = rax_86
                                                            
                                                            var_7b4_1 = r8_13
                                                        else
                                                            var_7b4_1 = 1
                                                    
                                                    int32_t temp0_49 =
                                                        divs.dp.d(sx.q(rcx_41), r8_13)
                                                    int32_t rax_90 = temp0_49 * temp0_49
                                                    
                                                    if (r11_3 != 0 || zmm9[0] f<= zmm8.d)
                                                        zmm13 = *(rsi_3 + 0x4c0)
                                                        zmm1 = zx.o(*(rsi_3 + 0x4d0))
                                                        zmm2 = zmm14
                                                        zmm4_1 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                                        zmm14 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                                                        int32_t rdi_6 = 0
                                                        uint64_t var_398_1 = zmm1.q
                                                        zmm1.d = zmm1.d f- zmm4_1.d
                                                        uint128_t var_3b8_1 = zmm4_1
                                                        zmm14[0] = zmm14[0] f- zmm13.d
                                                        int32_t var_7ac_1 = 0
                                                        zmm0 = _mm_cvtepi32_ps(zx.o(r8_13))
                                                        int96_t var_3a8_1 = zmm13.12
                                                        zmm2[0] = zmm2[0] f/ zmm0.d
                                                        zmm14[0] = zmm14[0] * zmm2[0]
                                                        zmm5_1.d = zmm2.d f* zmm1.d
                                                        int32_t var_734_1 = zmm5_1.d
                                                        
                                                        if (r8_13 s> 0)
                                                            zmm7 = var_398_1:4.d
                                                            zmm1 = var_3a8_1:8.d
                                                            float var_730_1 = zmm7[0]
                                                            int32_t var_72c_1 = zmm1.d
                                                            
                                                            do
                                                                int32_t rbx_5 = 0
                                                                int32_t var_7a0_1 = 0
                                                                
                                                                do
                                                                    zmm6 = zmm9
                                                                    
                                                                    if (cond:3_1 == 0)
                                                                        if (*(rsi_3 + 0x5f0) == 0)
                                                                            goto label_141a1811b
                                                                        
                                                                        goto label_141a17f4e
                                                                    
                                                                    if (r8_13 s<= 1
                                                                            && *(rsi_3 + 0x5f0) == 0)
                                                                        goto label_141a1811b
                                                                    
                                                                label_141a17f4e:
                                                                    int32_t var_370_1 = zmm1.d
                                                                    zmm2 = _mm_cvtepi32_ps(zx.o(rdi_6 + 1))
                                                                    char var_3e8_1 = 1
                                                                    zmm0.d = _mm_cvtepi32_ps(zx.o(rdi_6)).d
                                                                        f* zmm14[0]
                                                                    int32_t var_3f8_1 = var_370_1
                                                                    zmm1 = _mm_cvtepi32_ps(zx.o(rbx_5 + 1))
                                                                    zmm0.d = zmm0.d f+ zmm13.d
                                                                    zmm2[0] = zmm2[0] * zmm14[0]
                                                                    zmm3 = _mm_cvtepi32_ps(zx.o(rbx_5))
                                                                    zmm1.d = zmm1.d f* zmm5_1.d
                                                                    zmm2[0] = zmm2[0] f+ zmm13.d
                                                                    zmm3[0] = zmm3[0] f* zmm5_1.d
                                                                    zmm1.d = zmm1.d f+ zmm4_1.d
                                                                    float var_380_1 = zmm7[0]
                                                                    zmm3[0] = zmm3[0] f+ zmm4_1.d
                                                                    float var_3ec_1 = var_380_1
                                                                    uint64_t var_400 =
                                                                        (_mm_unpacklo_ps(zmm0, zmm3[0].q)).q
                                                                    uint64_t var_3f4_1 =
                                                                        (_mm_unpacklo_ps(zmm2, zmm1.q)).q
                                                                    uint64_t var_228[0x4]
                                                                    uint64_t* rax_97
                                                                    rax_97, zmm6 = sub_140ae2c60(&var_400, 
                                                                        &var_228, rsi_3 + 0x1c0)
                                                                    r8_13 = var_7b4_1
                                                                    var_758.o = *rax_97
                                                                    var_740.d = rax_97[3].d
                                                                    var_74c = rax_97[2]
                                                                    
                                                                    if (cond:3_1 == 0 || r8_13 s<= 1)
                                                                        r11_3 = var_7b8_1
                                                                    label_141a1811b:
                                                                        zmm7 = var_744
                                                                        zmm8 = var_74c:4.d
                                                                        zmm9 = var_74c.d
                                                                        zmm10 = var_750
                                                                        zmm11 = var_758:4.d
                                                                        zmm12 = var_758.d
                                                                    else
                                                                        int64_t rax_99 = sx.q(arg2[1].d)
                                                                        
                                                                        zmm2 = rax_99.d == 0 ? zmm15 : zmm10
                                                                        
                                                                        uint128_t* rdx_28 = *arg2
                                                                        zmm7 = var_744
                                                                        zmm8 = var_74c:4.d
                                                                        zmm9 = var_74c.d
                                                                        zmm10 = var_750
                                                                        void* rax_100 = rdx_28 + rax_99 * 0xc
                                                                        zmm11 = var_758:4.d
                                                                        zmm12 = var_758.d
                                                                        
                                                                        while (rdx_28 != rax_100)
                                                                            zmm1 = *rdx_28
                                                                            zmm0 = zmm15
                                                                            
                                                                            if (not(zmm1.d f>= zmm12.d))
                                                                                zmm0.d = zmm1.d f- zmm12.d
                                                                                zmm0.d = zmm0.d f* zmm0.d
                                                                            else if (not(zmm1.d f<= zmm9[0]))
                                                                                zmm0.d = zmm1.d f- zmm9[0]
                                                                                zmm0.d = zmm0.d f* zmm0.d
                                                                            
                                                                            zmm1 = *(rdx_28 + 4)
                                                                            
                                                                            if (not(zmm1.d f>= zmm11.d))
                                                                                zmm1.d = zmm1.d f- zmm11.d
                                                                                zmm1.d = zmm1.d f* zmm1.d
                                                                                zmm0.d = zmm0.d f+ zmm1.d
                                                                            else if (not(zmm1.d f<= zmm8.d))
                                                                                zmm1.d = zmm1.d f- zmm8.d
                                                                                zmm1.d = zmm1.d f* zmm1.d
                                                                                zmm0.d = zmm0.d f+ zmm1.d
                                                                            
                                                                            zmm1 = *(rdx_28 + 8)
                                                                            
                                                                            if (not(zmm1.d f>= zmm10[0]))
                                                                                zmm1.d = zmm1.d f- zmm10[0]
                                                                                zmm1.d = zmm1.d f* zmm1.d
                                                                                zmm0.d = zmm0.d f+ zmm1.d
                                                                            else if (not(zmm1.d f<= zmm7[0]))
                                                                                zmm1.d = zmm1.d f- zmm7[0]
                                                                                zmm1.d = zmm1.d f* zmm1.d
                                                                                zmm0.d = zmm0.d f+ zmm1.d
                                                                            
                                                                            rdx_28 += 0xc
                                                                            zmm2 = _mm_min_ss(zmm0.d, zmm2[0])
                                                                        
                                                                        r11_3 = var_7b8_1
                                                                        zmm6 = _mm_sqrt_ss(0, zmm2[0])
                                                                    
                                                                    int32_t rax_102 = rax_90 + r15_2
                                                                    
                                                                    if (r11_3 != 0)
                                                                        rax_102 = r15_2
                                                                    
                                                                    r15_2 = rax_102
                                                                    
                                                                    if (not(zmm6.d f> var_708_1))
                                                                        uint128_t var_6b8 = data_1430219f0
                                                                        zmm0 = data_143021a00
                                                                        int32_t var_684
                                                                        __builtin_memset(&var_684, 0, 0x14)
                                                                        int32_t var_66c_1 = 0
                                                                        int32_t rax_103 = data_14399fa50
                                                                        uint128_t var_698 = zmm0
                                                                        int128_t var_6a8_1 = zx.o(0)
                                                                        int32_t var_688_1 = 0xffffffff
                                                                        int16_t var_660_1 = 1
                                                                        int32_t var_670_1 = rax_103
                                                                        int64_t performanceCount
                                                                        QueryPerformanceCounter(
                                                                            &performanceCount)
                                                                        zmm0.q = float.d(performanceCount)
                                                                        zmm0.q = zmm0.q f* data_143d796f8
                                                                        zmm0.q = zmm0.q f+ 16777216.0
                                                                        uint64_t var_668_1 = zmm0.q
                                                                        sub_140d3a3a0(&var_6b8, rsi_3)
                                                                        sub_140d3a3a0(&var_6b8:8, r12_2)
                                                                        var_6a8_1.d = var_7b4_1
                                                                        var_6a8_1:4.d = r15_1
                                                                        r15_2.b = 0
                                                                        var_698.d = *(r12_2 + 0x30)
                                                                        var_698:4.d = rdx_24
                                                                        var_6a8_1:8.d = rdi_6
                                                                        var_6a8_1:0xc.d = rbx_5
                                                                        int32_t var_704
                                                                        sub_141a0a5b0(&r13[0x64], &var_704, 
                                                                            &var_6b8)
                                                                        int64_t rax_108 = sx.q(var_704)
                                                                        void* var_680
                                                                        int64_t var_678_1
                                                                        void* const rdi_8
                                                                        
                                                                        if (rax_108.d == 0xffffffff)
                                                                            rdi_8 = nullptr
                                                                        else
                                                                            int64_t rdi_7 = rax_108 * 0x68
                                                                            rdi_8 = rdi_7 + r13[0x64]
                                                                            
                                                                            if (rdi_7 != neg.q(r13[0x64]))
                                                                                char rax_109 =
                                                                                    sub_140d3e110(rdi_8 + 0x30)
                                                                                
                                                                                if (rax_109 == 0)
                                                                                    int32_t r9_5 = data_1439cc0e0
                                                                                    
                                                                                    if (*(rdi_8 + 0x4c) != r9_5
                                                                                            && *(rdi_8 + 0x59) == rax_109
                                                                                            && *(rdi_8 + 0x58) == rax_109)
                                                                                        int32_t* rbx_6 = *(rsi_3 + 0x5e8)
                                                                                        void* r14_6 =
                                                                                            sx.q(*(rsi_3 + 0x5f0)) * 0x1c + rbx_6
                                                                                        
                                                                                        if (rbx_6 != r14_6)
                                                                                            do
                                                                                                if (not(zmm9[0] f< *rbx_6)
                                                                                                        && not(zmm12.d f> rbx_6[3])
                                                                                                        && not(zmm8.d f< rbx_6[1])
                                                                                                        && not(zmm11.d f> rbx_6[4])
                                                                                                        && not(zmm7[0] f< rbx_6[2])
                                                                                                        && not(zmm10[0] f> rbx_6[5]))
                                                                                                    int64_t rsi_4 = sx.q(var_678_1.d)
                                                                                                    int32_t rax_111 = (rsi_4 + 1).d
                                                                                                    var_678_1.d = rax_111
                                                                                                    
                                                                                                    if (rax_111 s> var_678_1:4.d)
                                                                                                        sub_1405c50f0(&var_680)
                                                                                                    
                                                                                                    uint128_t* rcx_52 =
                                                                                                        rsi_4 * 0x1c + var_680
                                                                                                    *rcx_52 = *rbx_6
                                                                                                    rcx_52[1].q = *(rbx_6 + 0x10)
                                                                                                    *(rcx_52 + 0x18) = rbx_6[6]
                                                                                                
                                                                                                rbx_6 = &rbx_6[7]
                                                                                            while (rbx_6 != r14_6)
                                                                                            
                                                                                            r9_5 = data_1439cc0e0
                                                                                        
                                                                                        int32_t i_7 = var_678_1.d
                                                                                        
                                                                                        if (i_7 != *(rdi_8 + 0x40))
                                                                                        label_141a183c2:
                                                                                            r15_2.b = 1
                                                                                            r14_4 = var_778_1
                                                                                            rbx_5 = var_7a0_1
                                                                                            var_688_1.q = *(rdi_8 + 0x28)
                                                                                            *(rdi_8 + 0x59) = 1
                                                                                        else
                                                                                            if (i_7 != 0)
                                                                                                void* rax_113 = var_680
                                                                                                void* rdx_34 = *(rdi_8 + 0x38) - rax_113
                                                                                                void* rcx_53 = rax_113 + 0x14
                                                                                                int32_t i_2
                                                                                                
                                                                                                do
                                                                                                    if ((*(rcx_53 + rdx_34 - 0x14)).d f!=
                                                                                                            *(rcx_53 - 0x14))
                                                                                                        goto label_141a183c2
                                                                                                    
                                                                                                    if ((*(rcx_53 + rdx_34 - 0x10)).d f!=
                                                                                                            *(rcx_53 - 0x10))
                                                                                                        goto label_141a183c2
                                                                                                    
                                                                                                    if ((*(rcx_53 + rdx_34 - 0xc)).d f!=
                                                                                                            *(rcx_53 - 0xc))
                                                                                                        goto label_141a183c2
                                                                                                    
                                                                                                    if ((*(rcx_53 + rdx_34 - 8)).d f!=
                                                                                                            *(rcx_53 - 8))
                                                                                                        goto label_141a183c2
                                                                                                    
                                                                                                    if ((*(rcx_53 + rdx_34 - 4)).d f!=
                                                                                                            *(rcx_53 - 4))
                                                                                                        goto label_141a183c2
                                                                                                    
                                                                                                    if ((*(rcx_53 + rdx_34)).d f!= *rcx_53)
                                                                                                        goto label_141a183c2
                                                                                                    
                                                                                                    rcx_53 += 0x1c
                                                                                                    i_2 = i_7
                                                                                                    i_7 -= 1
                                                                                                while (i_2 != 1)
                                                                                            
                                                                                            r14_4 = var_778_1
                                                                                            rbx_5 = var_7a0_1
                                                                                            *(rdi_8 + 0x4c) = r9_5
                                                                                
                                                                                goto label_141a183fa
                                                                        
                                                                        if (zmm6.d f<= var_6d0_1)
                                                                            if (arg4 != 0 || (
                                                                                    *arg3 s< data_1439cbfa0
                                                                                    && r13[0x6f].d s< rax_22))
                                                                                uint128_t* i_3 = *(rsi_3 + 0x5e8)
                                                                                
                                                                                for (void* rsi_7 =
                                                                                        sx.q(*(rsi_3 + 0x5f0)) * 0x1c + i_3; 
                                                                                        i_3 != rsi_7; i_3 += 0x1c)
                                                                                    if (not(zmm9[0] f< *i_3)
                                                                                            && not(zmm12.d f> *(i_3 + 0xc))
                                                                                            && not(zmm8.d f< *(i_3 + 4))
                                                                                            && not(zmm11.d f> i_3[1].d)
                                                                                            && not(zmm7[0] f< *(i_3 + 8))
                                                                                            && not(zmm10[0] f> *(i_3 + 0x14)))
                                                                                        int64_t rdi_10 = sx.q(var_678_1.d)
                                                                                        int32_t rax_129 = (rdi_10 + 1).d
                                                                                        var_678_1.d = rax_129
                                                                                        
                                                                                        if (rax_129 s> var_678_1:4.d)
                                                                                            sub_1405c50f0(&var_680)
                                                                                        
                                                                                        void* rcx_67 = rdi_10 * 0x1c + var_680
                                                                                        *rcx_67 = *i_3
                                                                                        *(rcx_67 + 0x10) = i_3[1].q
                                                                                        *(rcx_67 + 0x18) = *(i_3 + 0x18)
                                                                                
                                                                                goto label_141a18870
                                                                            
                                                                        label_141a1842d:
                                                                            void* rcx_55 = var_680
                                                                            
                                                                            if (rcx_55 != 0)
                                                                                sub_140a74f90(rcx_55)
                                                                            
                                                                            r12_2 = var_768_1
                                                                        else
                                                                            if (rdi_8 == 0)
                                                                                goto label_141a1842d
                                                                            
                                                                        label_141a183fa:
                                                                            *(rdi_8 + 0x48) = data_14399fa50
                                                                            int64_t performanceCount_1
                                                                            QueryPerformanceCounter(
                                                                                &performanceCount_1)
                                                                            zmm0.q = float.d(performanceCount_1)
                                                                            zmm0.q = zmm0.q f* data_143d796f8
                                                                            zmm0.q = zmm0.q f+ 16777216.0
                                                                            *(rdi_8 + 0x50) = zmm0.q
                                                                            
                                                                            if (r15_2.b == 0)
                                                                                goto label_141a1842d
                                                                            
                                                                        label_141a18870:
                                                                            int32_t var_66c_2 = data_1439cc0e0
                                                                            *arg3 += 1
                                                                            int64_t var_4d8 = *(var_760_1 + 0x18)
                                                                            int64_t var_3e0
                                                                            sub_140b63b70(&var_4d8, &var_3e0)
                                                                            int64_t var_2c8
                                                                            int64_t* rax_134 =
                                                                                sub_140a35790(&var_3e0, &var_2c8)
                                                                            
                                                                            if (rax_134[1].d != 0)
                                                                                *rax_134
                                                                            
                                                                            int64_t var_4d0 = *(var_768_1 + 0x18)
                                                                            int64_t var_3d0
                                                                            sub_140b63b70(&var_4d0, &var_3d0)
                                                                            int64_t var_2b8
                                                                            int64_t* rax_137 =
                                                                                sub_140a35790(&var_3d0, &var_2b8)
                                                                            int16_t* const r8_17
                                                                            
                                                                            if (rax_137[1].d == 0)
                                                                                r8_17 = &data_142d40450
                                                                            else
                                                                                r8_17 = *rax_137
                                                                            
                                                                            int32_t var_7e8_1 = rdx_24
                                                                            int32_t var_7f0_1 = var_7a0_1
                                                                            int32_t var_7f8_1 = var_7ac_1
                                                                            int16_t* var_458
                                                                            sub_140a2e390(&var_458, %s%s%d %d %d", 
                                                                                r8_17)
                                                                            int16_t* const rdx_41 = &data_142d40450
                                                                            int32_t var_450
                                                                            
                                                                            if (var_450 != 0)
                                                                                rdx_41 = var_458
                                                                            
                                                                            void var_188
                                                                            sub_1408f2b40(&var_188, rdx_41)
                                                                            int32_t rbx_10 = -1
                                                                            char* var_100
                                                                            char i_4 = *var_100
                                                                            void* r9_7 = &var_100[1]
                                                                            
                                                                            while (i_4 != 0)
                                                                                r9_7 += 1
                                                                                int32_t rdx_43 = *(&data_1439a0500
                                                                                    + ((zx.q(i_4) ^ zx.q(rbx_10.b)) << 2))
                                                                                    ^ rbx_10 u>> 8
                                                                                int32_t r8_19 = *(
                                                                                    &data_1439a0500 + (zx.q(rdx_43.b) << 2))
                                                                                    ^ rdx_43 u>> 8
                                                                                int32_t rdx_46 = *(
                                                                                    &data_1439a0500 + (zx.q(r8_19.b) << 2))
                                                                                    ^ r8_19 u>> 8
                                                                                i_4 = *(r9_7 - 1)
                                                                                rbx_10 = *(
                                                                                    &data_1439a0500 + (zx.q(rdx_46.b) << 2))
                                                                                    ^ rdx_46 u>> 8
                                                                            
                                                                            int32_t rbx_13 = not.d(rbx_10)
                                                                            int64_t var_108
                                                                            
                                                                            if (var_108 != 0)
                                                                                sub_140a74f90(var_108)
                                                                            
                                                                            int16_t* rcx_79 = var_458
                                                                            
                                                                            if (rcx_79 != 0)
                                                                                sub_140a74f90(rcx_79)
                                                                            
                                                                            int64_t rcx_80 = var_2b8
                                                                            
                                                                            if (rcx_80 != 0)
                                                                                sub_140a74f90(rcx_80)
                                                                            
                                                                            int64_t rcx_81 = var_3d0
                                                                            
                                                                            if (rcx_81 != 0)
                                                                                sub_140a74f90(rcx_81)
                                                                            
                                                                            int64_t rcx_82 = var_2c8
                                                                            
                                                                            if (rcx_82 != 0)
                                                                                sub_140a74f90(rcx_82)
                                                                            
                                                                            int64_t rcx_83 = var_3e0
                                                                            
                                                                            if (rcx_83 != 0)
                                                                                sub_140a74f90(rcx_83)
                                                                            
                                                                            int32_t rsi_8 = 1
                                                                            
                                                                            if (rbx_13 != 0)
                                                                                rsi_8 = rbx_13
                                                                            
                                                                            r13[1].d &= 0xfffffff7
                                                                            int32_t var_440_1 = 0
                                                                            int64_t var_5f8_1 = 0
                                                                            char r15_4 =
                                                                                *(sub_140d21d80(r13) + 0x28) & 1
                                                                            
                                                                            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                                                                                sub_140d19010(r13, 
                                                                                    NewObject with empty name can't be used "
                                                                                "to create default subobjects (inside of "
                                                                                "UObject derived class constructor) as "
                                                                                "it produces incon")
                                                                            
                                                                            var_7e8_1.b = 0
                                                                            var_7f0_1.q = 0
                                                                            int64_t* rax_147 = sub_140d2dfc0(
                                                                                sub_1424c3700(), r13, 0, 0x40, 0, 
                                                                                var_7f0_1, var_7e8_1.b, 0, 0)
                                                                            sub_140d3a3a0(&var_698:8, rax_147)
                                                                            void var_444
                                                                            sub_1419f65a0(&r13[0x64], &var_444, 
                                                                                &var_6b8, nullptr)
                                                                            int64_t rax_148 = *rax_147
                                                                            *(rax_147 + 0x14f) = 0
                                                                            (*(rax_148 + 0x8a0))(rax_147, *r14_4)
                                                                            int32_t rax_149 = *(r14_4 + 0x1c)
                                                                            *(rax_147 + 0x20b) &= 0xfa
                                                                            void* ThreadLocalStoragePointer =
                                                                                gsbase->ThreadLocalStoragePointer
                                                                            rax_147[0x87].d = rax_149
                                                                            *(rax_147 + 0x20a) ^= (r14_4[8].b << 3
                                                                                ^ *(rax_147 + 0x20a)) & 8
                                                                            
                                                                            if (data_143f28db0 s> *(0x14 + *(
                                                                                    ThreadLocalStoragePointer
                                                                                    + (rax_36 << 3))))
                                                                                _Init_thread_header(&data_143f28db0)
                                                                                
                                                                                if (data_143f28db0 == 0xffffffff)
                                                                                    sub_140b58260(&data_143f28da8, 
                                                                                        NoCollision", 1)
                                                                                    _Init_thread_footer(&data_143f28db0)
                                                                            
                                                                            int64_t r8_22
                                                                            r8_22.b = 1
                                                                            (*(*rax_147 + 0x620))(rax_147, 
                                                                                data_143f28da8, r8_22)
                                                                            rax_147[0xbb].b = 1
                                                                            sub_141ef5320(rax_147, 0)
                                                                            rax_147[0x98].d = rsi_8
                                                                            *(rax_147 + 0x212) = *(r14_4 + 0x3f)
                                                                            char rax_155 = *(rax_147 + 0x20b) & 0x7f
                                                                            *(rax_147 + 0x20b) = rax_155
                                                                            char rcx_93
                                                                            
                                                                            if (*(r14_4 + 0x41) == 0
                                                                                    || cond:5_1 != 0)
                                                                                rcx_93 = 0
                                                                            else
                                                                                rcx_93 = 8
                                                                            
                                                                            rax_155 = (rax_155 & 0xf7) | rcx_93
                                                                            *(rax_147 + 0x20b) = rax_155
                                                                            
                                                                            if (*(r14_4 + 0x41) == 0
                                                                                    || cond:5_1 != 0)
                                                                                rcx_93 = 0
                                                                            else
                                                                                rcx_93 = 0x40
                                                                            
                                                                            *(rax_147 + 0x20b) =
                                                                                (rax_155 & 0xbf) | rcx_93
                                                                            void* rax_156 = sub_1419edf30(var_760_1)
                                                                            int32_t var_608
                                                                            uint128_t zmm0_1
                                                                            
                                                                            if (*(r14_4 + 0x3e) != 0
                                                                                    && sub_1423660e0(*r14_4) s> 0
                                                                                    && rax_156 != 0 && *rax_156 != 0)
                                                                                int32_t rax_158 = sub_1423660e0(*r14_4)
                                                                                sub_142397ac0(rax_147, 
                                                                                    sub_1423660e0(*r14_4), rax_158)
                                                                                int64_t* rax_160 =
                                                                                    j_sub_140a82f30(0x100)
                                                                                int64_t* rbx_15 = rax_160
                                                                                
                                                                                if (rax_160 == 0)
                                                                                    rbx_15 = nullptr
                                                                                else
                                                                                    int64_t* rcx_99 = *rax_156
                                                                                    void* rax_162 =
                                                                                        (*(*rcx_99 + 0x38))(rcx_99)
                                                                                    *rbx_15 = &data_14301e9c8
                                                                                    rbx_15[1] = 0
                                                                                    int64_t r15_5 = sx.q(*(rax_162 + 0x10))
                                                                                    int64_t r13_2 = *(rax_162 + 8)
                                                                                    rbx_15[2].d = r15_5.d
                                                                                    
                                                                                    if (r15_5.d != 0)
                                                                                        sub_1405a4be0(&rbx_15[1], r15_5.d, 0)
                                                                                        memcpy(rbx_15[1], r13_2, (r15_5 << 4).d)
                                                                                    else
                                                                                        *(rbx_15 + 0x14) = 0
                                                                                    
                                                                                    rbx_15[3].b = *(rax_162 + 0x18)
                                                                                    int32_t rcx_102 = *(rax_162 + 0x1c)
                                                                                    *rbx_15 = &data_14301ea10
                                                                                    *(rbx_15 + 0x1c) = rcx_102
                                                                                    *(rbx_15 + 0x20) = *(rax_162 + 0x20)
                                                                                    rbx_15[6] = *(rax_162 + 0x30)
                                                                                    rbx_15[7] = *(rax_162 + 0x38)
                                                                                    rbx_15[8] = *(rax_162 + 0x40)
                                                                                    rbx_15[9] = *(rax_162 + 0x48)
                                                                                    *(rbx_15 + 0x50) = *(rax_162 + 0x50)
                                                                                    *(rbx_15 + 0x60) = *(rax_162 + 0x60)
                                                                                    *(rbx_15 + 0x70) = *(rax_162 + 0x70)
                                                                                    *(rbx_15 + 0x80) = *(rax_162 + 0x80)
                                                                                    *(rbx_15 + 0x90) = *(rax_162 + 0x90)
                                                                                    *(rbx_15 + 0xa0) = *(rax_162 + 0xa0)
                                                                                    *(rbx_15 + 0xb0) = *(rax_162 + 0xb0)
                                                                                    *(rbx_15 + 0xc0) = *(rax_162 + 0xc0)
                                                                                    rbx_15[0x1a] = *(rax_162 + 0xd0)
                                                                                    rbx_15[0x1b] = *(rax_162 + 0xd8)
                                                                                    *(rbx_15 + 0xe0) = *(rax_162 + 0xe0)
                                                                                    rbx_15[0x1e].d = *(rax_162 + 0xf0)
                                                                                    *rbx_15 = &data_14301ea10
                                                                                    rbx_15[0x1a].d = data_143dbb1f0.d.d
                                                                                    *(rbx_15 + 0xd4) = data_143dbb1f0:4.d.d
                                                                                    rbx_15[0x1b].d = data_143dbb1f0.d.d
                                                                                    *(rbx_15 + 0xdc) = data_143dbb1f0:4.d.d
                                                                                    *(rbx_15 + 0x1c) = rcx_102 + 1
                                                                                
                                                                                int64_t* rsi_10
                                                                                
                                                                                if (*(rax_156 + 8) == 0)
                                                                                    rsi_10 = nullptr
                                                                                else
                                                                                    int64_t* rax_170 = j_sub_140a82f30(0x50)
                                                                                    rsi_10 = rax_170
                                                                                    
                                                                                    if (rax_170 == 0)
                                                                                        rsi_10 = rax_170
                                                                                    else
                                                                                        int64_t* rcx_103 = *(rax_156 + 8)
                                                                                        void* rax_172 =
                                                                                            (*(*rcx_103 + 0x30))(rcx_103)
                                                                                        *rsi_10 = &data_143020090
                                                                                        rsi_10[1] = 0
                                                                                        int64_t r12_6 = sx.q(*(rax_172 + 0x10))
                                                                                        int64_t r13_3 = *(rax_172 + 8)
                                                                                        rsi_10[2].d = r12_6.d
                                                                                        
                                                                                        if (r12_6.d != 0)
                                                                                            sub_1405a4be0(&rsi_10[1], r12_6.d, 0)
                                                                                            memcpy(rsi_10[1], r13_3, (r12_6 << 4).d)
                                                                                        else
                                                                                            *(rsi_10 + 0x14) = 0
                                                                                        
                                                                                        int32_t rcx_106 = *(rax_172 + 0x18)
                                                                                        *rsi_10 = &data_1430200d0
                                                                                        rsi_10[3].d = rcx_106
                                                                                        rsi_10[4] = *(rax_172 + 0x20)
                                                                                        rsi_10[5] = *(rax_172 + 0x28)
                                                                                        rsi_10[6] = *(rax_172 + 0x30)
                                                                                        rsi_10[7].d = *(rax_172 + 0x38)
                                                                                        zmm0_1 = *(rax_172 + 0x40)
                                                                                        *rsi_10 = &data_1430200d0
                                                                                        *(rsi_10 + 0x40) = zmm0_1
                                                                                        rsi_10[5].d = data_143dbb1f0.d.d
                                                                                        *(rsi_10 + 0x2c) = data_143dbb1f0:4.d.d
                                                                                        rsi_10[6].d = data_143dbb1f0.d.d
                                                                                        *(rsi_10 + 0x34) = data_143dbb1f0:4.d.d
                                                                                        rsi_10[3].d = rcx_106 + 1
                                                                                
                                                                                void* r13_4 = rax_147[0x8c]
                                                                                void* r12_9 =
                                                                                    sx.q(rax_147[0x8d].d) * 0x90 + r13_4
                                                                                
                                                                                if (r13_4 != r12_9)
                                                                                    void** r14_9 = r13_4 + 0x18
                                                                                    
                                                                                    do
                                                                                        int64_t rax_177 = j_sub_140a82f30(0x38)
                                                                                        int64_t* r15_7
                                                                                        
                                                                                        if (rax_177 == 0)
                                                                                            r15_7 = nullptr
                                                                                        else
                                                                                            r15_7 = sub_1420f37f0(rax_177)
                                                                                        
                                                                                        int64_t* var_5f0 = r15_7
                                                                                        
                                                                                        if (r14_9 != &var_5f0)
                                                                                            int64_t* rax_179 = *r14_9
                                                                                            var_608.q = rax_179
                                                                                            *r14_9 = r15_7
                                                                                            var_5f0 = nullptr
                                                                                            
                                                                                            if (rax_179 != 0)
                                                                                                DepFile::~DepFile(rax_179)
                                                                                                j_sub_140a74f90(var_608.q)
                                                                                        else if (r15_7 != 0)
                                                                                            DepFile::~DepFile(r15_7)
                                                                                            j_sub_140a74f90(r15_7)
                                                                                        
                                                                                        int64_t* rax_180 = *r14_9
                                                                                        int64_t* rcx_111 = *rax_180
                                                                                        *rax_180 = rbx_15
                                                                                        
                                                                                        if (rbx_15 != 0)
                                                                                            *(rbx_15 + 0x1c) += 1
                                                                                        
                                                                                        if (rcx_111 != 0)
                                                                                            int32_t temp21_1 = *(rcx_111 + 0x1c)
                                                                                            *(rcx_111 + 0x1c) -= 1
                                                                                            
                                                                                            if (temp21_1 == 1)
                                                                                                (*(*rcx_111 + 0x40))()
                                                                                        
                                                                                        void* rax_182 = *r14_9
                                                                                        int64_t* rcx_112 = *(rax_182 + 8)
                                                                                        *(rax_182 + 8) = rsi_10
                                                                                        
                                                                                        if (rsi_10 != 0)
                                                                                            rsi_10[3].d += 1
                                                                                        
                                                                                        if (rcx_112 != 0)
                                                                                            rcx_112[3].d -= 1
                                                                                            
                                                                                            if (rcx_112[3].d == 1)
                                                                                                (*(*rcx_112 + 0x38))()
                                                                                        
                                                                                        void* rcx_113 = *r14_9
                                                                                        r13_4 += 0x90
                                                                                        r14_9 = &r14_9[0x12]
                                                                                        *(rcx_113 + 0x30) = *(rax_156 + 0x30)
                                                                                    while (r13_4 != r12_9)
                                                                                
                                                                                if (rsi_10 != 0)
                                                                                    rsi_10[3].d -= 1
                                                                                    
                                                                                    if (rsi_10[3].d == 1)
                                                                                        (*(*rsi_10 + 0x38))(rsi_10)
                                                                                
                                                                                if (rbx_15 != 0)
                                                                                    int32_t temp20_1 = *(rbx_15 + 0x1c)
                                                                                    *(rbx_15 + 0x1c) -= 1
                                                                                    
                                                                                    if (temp20_1 == 1)
                                                                                        (*(*rbx_15 + 0x40))(rbx_15)
                                                                                
                                                                                r13 = arg1
                                                                                r14_4 = var_778_1
                                                                            
                                                                            int32_t rax_190
                                                                            
                                                                            if (arg2[1].d == 0 || cond:4_1 != 0)
                                                                                *(rax_147 + 0x4c4) = 0
                                                                                rax_190 = 0
                                                                            else
                                                                                zmm0_1.d =
                                                                                    _mm_cvtepi32_ps(zx.o(*(r14_4 + 0x14))).d
                                                                                    f* var_78c_1
                                                                                *(rax_147 + 0x4c4) = int.d(zmm0_1.d)
                                                                                uint128_t zmm1_1
                                                                                zmm1_1.d =
                                                                                    _mm_cvtepi32_ps(zx.o(r14_4[3].d)).d
                                                                                    f* var_78c_1
                                                                                rax_190 = int.d(zmm1_1.d)
                                                                            
                                                                            rax_147[0x99].d = rax_190
                                                                            *(rax_147 + 0x20b) &= 0xdf
                                                                            var_608 = 0
                                                                            sub_141f32b40(rax_147, r13[0x26], 
                                                                                &data_143f3f280, 0)
                                                                            void* rax_191 = r13[0x26]
                                                                            float zmm5_2[0x4] = data_143f280f0
                                                                            int32_t var_7f8_2
                                                                            var_7f8_2.b = 0
                                                                            float zmm6_1[0x4] = *(rax_191 + 0x1c0)
                                                                            float var_1b8[0x4] = zmm6_1
                                                                            float var_1a8_1[0x4] =
                                                                                *(rax_191 + 0x1d0)
                                                                            float var_198_2[0x4] =
                                                                                __andps_xmmxud_memxud(data_143f280c0, 
                                                                                data_143f280d0)
                                                                            float zmm1_2[0x4] =
                                                                                _mm_mul_ps(zmm6_1, zmm6_1)
                                                                            zmm1_2 = _mm_add_ps(zmm1_2, 
                                                                                _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                                                            float zmm4_2[0x4] = _mm_add_ps(
                                                                                _mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), 
                                                                                zmm1_2)
                                                                            zmm1_2 = _mm_rsqrt_ps(zmm4_2)
                                                                            float zmm3_1[0x4] =
                                                                                _mm_mul_ps(zmm5_2, zmm4_2)
                                                                            float zmm2_1[0x4] = _mm_add_ps(
                                                                                _mm_mul_ps(
                                                                                    _mm_sub_ps(zmm5_2, 
                                                                                        _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), 
                                                                                            zmm3_1)), 
                                                                                    zmm1_2), 
                                                                                zmm1_2)
                                                                            zmm5_2 = _mm_sub_ps(zmm5_2, 
                                                                                _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), 
                                                                                    zmm3_1))
                                                                            float zmm0_2[0x4] =
                                                                                _mm_cmpeq_ps(data_143f28100, zmm4_2, 2)
                                                                            var_1b8 = _mm_and_ps(
                                                                                _mm_mul_ps(
                                                                                    _mm_add_ps(_mm_mul_ps(zmm5_2, zmm2_1), 
                                                                                        zmm2_1), 
                                                                                    zmm6_1) ^ data_143f280e0, 
                                                                                zmm0_2) ^ data_143f280e0
                                                                            zmm13, zmm14, zmm15 = sub_141f4a580(
                                                                                rax_147, &var_1b8, 0, 0, var_7f8_2.b)
                                                                            int64_t rsi_11 = sx.q(r13[0x63].d)
                                                                            int32_t rax_192 = (rsi_11 + 1).d
                                                                            r13[0x63].d = rax_192
                                                                            
                                                                            if (rax_192 s> *(r13 + 0x31c))
                                                                                sub_1405a4d70(&r13[0x62])
                                                                            
                                                                            *(r13[0x62] + (rsi_11 << 3)) = rax_147
                                                                            char* rax_194 = j_sub_140a82f30(0x220)
                                                                            char* rsi_12
                                                                            
                                                                            if (rax_194 == 0)
                                                                                r12_2 = var_768_1
                                                                                rsi_12 = nullptr
                                                                            else
                                                                                int32_t rcx_120 = rax_102 - rax_90
                                                                                
                                                                                if (var_7b8_1 != 0)
                                                                                    rcx_120 = 0
                                                                                
                                                                                r12_2 = var_768_1
                                                                                char var_7d8_1
                                                                                var_7d8_1.d = var_7ac_1
                                                                                int64_t var_7e0_1
                                                                                var_7e0_1.d = var_7b4_1
                                                                                var_7e8_1.q = rax_147
                                                                                var_7f8_2.q = r14_4
                                                                                char* rax_195
                                                                                rax_195, zmm13, zmm14, zmm15 =
                                                                                    sub_1419fa200(rax_194, r13, var_760_1, 
                                                                                    r12_2, var_7f8_2, rax_35, var_7e8_1, 
                                                                                    var_7e0_1.d, var_7d8_1, var_7a0_1.b, 
                                                                                    rcx_120, &var_680)
                                                                                rsi_12 = rax_195
                                                                            
                                                                            if (*rsi_12 == 0)
                                                                                int64_t rcx_131 = *(rsi_12 + 0x208)
                                                                                
                                                                                if (rcx_131 != 0)
                                                                                    sub_140a74f90(rcx_131)
                                                                                
                                                                                sub_1419fd970(&rsi_12[0x1b8])
                                                                                int64_t rcx_133 = *(rsi_12 + 0x1a8)
                                                                                
                                                                                if (rcx_133 != 0)
                                                                                    sub_140a74f90(rcx_133)
                                                                                
                                                                                sub_1405970a0(&rsi_12[0xa0])
                                                                                j_sub_140a74f90(rsi_12)
                                                                            else
                                                                                void*** rax_196 = j_sub_140a82f30(0x58)
                                                                                void*** rbx_16 = rax_196
                                                                                
                                                                                if (rax_196 == 0)
                                                                                    rbx_16 = nullptr
                                                                                else
                                                                                    *rbx_16 = &data_143020638
                                                                                    rbx_16[1] = rsi_12
                                                                                    *(rbx_16 + 0x10) = var_6b8
                                                                                    *(rbx_16 + 0x20) = var_6a8_1
                                                                                    rbx_16[6] = var_698.q
                                                                                    sub_140d3a3a0(&rbx_16[7], rax_147)
                                                                                    rbx_16[8].d = 0
                                                                                    rbx_16[9] = 0
                                                                                    rbx_16[0xa] = 0
                                                                                
                                                                                int64_t rax_197 = data_143db7ac8
                                                                                rbx_16[8].d += 1
                                                                                void*** rcx_127 = rbx_16[9]
                                                                                rbx_16[0xa] = rax_197
                                                                                
                                                                                if (rax_197 == 0)
                                                                                    sub_140a4fc50(rcx_127)
                                                                                    void* rcx_129 = rbx_16[1]
                                                                                    rbx_16[9] = 0
                                                                                    zmm13, zmm14, zmm15 =
                                                                                        sub_141a01300(rcx_129)
                                                                                    rbx_16[8].d -= 1
                                                                                else
                                                                                    if (rcx_127 == 0)
                                                                                        rcx_127.b = 1
                                                                                        void*** rax_198 =
                                                                                            sub_140a491d0(rcx_127.b)
                                                                                        rcx_127 = rax_198
                                                                                        rbx_16[9] = rax_198
                                                                                    
                                                                                    (*rcx_127)[3](rcx_127)
                                                                                    int64_t* rcx_128 = rbx_16[0xa]
                                                                                    (*(*rcx_128 + 0x10))(rcx_128, rbx_16)
                                                                                
                                                                                int64_t r14_10 = sx.q(r13[0x6f].d)
                                                                                int32_t rax_201 = (r14_10 + 1).d
                                                                                r13[0x6f].d = rax_201
                                                                                
                                                                                if (rax_201 s> *(r13 + 0x37c))
                                                                                    sub_1405a4d70(&r13[0x6e])
                                                                                
                                                                                *(r13[0x6e] + (r14_10 << 3)) = rbx_16
                                                                            
                                                                            sub_141ef1390(rax_147)
                                                                            r13[1].d |= 8
                                                                            sub_140ce9db0(sub_140d21d80(r13), r15_4)
                                                                            void* rcx_139 = var_680
                                                                            
                                                                            if (rcx_139 != 0)
                                                                                sub_140a74f90(rcx_139)
                                                                            
                                                                            rbx_5 = var_7a0_1
                                                                        
                                                                        r11_3 = var_7b8_1
                                                                        r15_2 = rax_102
                                                                        rdi_6 = var_7ac_1
                                                                        r8_13 = var_7b4_1
                                                                    
                                                                    zmm4_1 = var_3b8_1
                                                                    rbx_5 += 1
                                                                    zmm5_1 = var_734_1
                                                                    zmm9 = var_770_1
                                                                    zmm7 = var_730_1
                                                                    zmm1 = var_72c_1
                                                                    zmm10 = 0x7f7fffff
                                                                    r14_4 = var_778_1
                                                                    rsi_3 = var_760_1
                                                                    var_7a0_1 = rbx_5
                                                                while (rbx_5 s< r8_13)
                                                                
                                                                rdi_6 += 1
                                                                var_7ac_1 = rdi_6
                                                            while (rdi_6 s< r8_13)
                                                            
                                                            zmm6 = data_143f280c0
                                                            zmm11 = 0xbf000000
                                                            zmm12 = var_710_1
                                                        
                                                        zmm14 = 0x3f800000
                                                    else
                                                        r15_2 += rax_90 * r8_13 * r8_13
                                        
                                        zmm7 = var_78c_1
                                        r14_4 = &r14_4[9]
                                        zmm10 = 0x7f7fffff
                                        zmm13 = var_788_1
                                        var_778_1 = r14_4
                                    while (r14_4 != rax_75)
                                    
                                    rbx_3 = var_720_1
                                    rdi_5 = var_6e8_1
                        
                        zmm7 = var_78c_1
                        rbx_3 = &rbx_3[1]
                        zmm10 = 0x7f7fffff
                        zmm13 = var_788_1
                        var_720_1 = rbx_3
                    while (rbx_3 != rdi_5)
                    
                    r14_3 = var_728_1
                
                zmm7 = var_78c_1
                r14_3 = &r14_3[5]
                zmm10 = 0x7f7fffff
                zmm13 = var_788_1
                var_728_1 = r14_3
            while (r14_3 != rax_49)
        
        r14 = nullptr

int64_t var_208 = 0
int32_t var_200 = 0
int32_t var_1dc = 0x80
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x1c)
int32_t var_1d8 = 0xffffffff
int32_t var_1d4 = 0
int64_t var_1c8 = 0
int32_t var_1c0 = 0
int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
int32_t rax_116 = data_1439cbf58
zmm6.q = float.d(performanceCount_2)
int64_t* r13_1 = &r13[0x64]
int32_t r12_3 = data_14399fa50
int64_t* var_728_2 = r13_1
int32_t var_580 = 0
zmm6.q = zmm6.q f* data_143d796f8
zmm8 = 0x4170000000000000
int32_t r12_4 = r12_3 - rax_116 * data_1439cbf78
int32_t var_570 = 0xffffffff
bool cond:2 = r13_1[5].d == 0
zmm6.q = zmm6.q f+ zmm8.q
int64_t var_56c = 0
int32_t var_57c = 1
zmm6.q = zmm6.q f- _mm_cvtps_pd(data_1439cbf80.q).q

if (not(cond:2))
    sub_14059bdd0(&var_580)

zmm2 = var_570.o
int64_t* r15_3 = r13_1
float var_420_2[0x4] = zmm2
zmm1 = var_580.o
uint128_t var_518 = r13_1.o
uint32_t rax_119 = (zmm2[0].q u>> 0x20).d
uint64_t var_4f8 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
uint128_t var_508 = zmm1

if (rax_119 s< r13_1[2 + 3].d)
    int32_t rsi_5 = var_508:0xc.d
    
    while (true)
        int32_t* rbx_8 = sx.q(rsi_5) * 0x68 + *var_518.q
        int64_t rax_122 = sub_140d3c6e0(&rbx_8[0xa])
        int64_t var_4a0 = rax_122
        int64_t rax_123 = sub_140d3c6e0(&rbx_8[0xc])
        bool cond:12_1 = rbx_8[0x16].b != 0
        int64_t var_498 = rax_123
        int64_t rax_124
        int64_t rax_125
        
        if (not(cond:12_1))
            rax_124 = sub_140d3c6e0(rbx_8)
            
            if (rax_124 != 0)
                rax_125 = sub_140d3c6e0(&rbx_8[2])
        
        if (not(cond:12_1) && (rax_124 == 0 || rax_125 == 0 || rax_122 == 0
                || (rbx_8[0x12] u< r12_4 && not(zmm6.q f<= *(rbx_8 + 0x50)))))
            zmm1 = sub_141a13680(r15_3, rsi_5)
        else if (rax_122 != 0 || rax_123 != 0)
            if (var_200 == var_1d4)
                int32_t rbx_18 = arg1[0x65].d - *(arg1 + 0x354)
                
                if (rbx_18 s> 0)
                    sub_1410339f0(&var_208, rbx_18)
                    int32_t rdx_71
                    
                    if (rbx_18 u< 4)
                        rdx_71 = 1
                    else
                        uint32_t rbx_19 = rbx_18 u>> 1
                        uint64_t rflags_3
                        int32_t temp0_86
                        temp0_86, rflags_3 = _bit_scan_reverse(rbx_19 + 8)
                        int32_t var_47c_1 = temp0_86
                        int32_t rcx_141
                        
                        if (rbx_19 == 0xfffffff8)
                            rcx_141 = 0x20
                        else
                            rcx_141 = 0x1f - temp0_86
                        
                        int32_t rcx_143 = rcx_141 << 0x1a s>> 0x1f
                        uint64_t rflags_4
                        int32_t temp0_87
                        temp0_87, rflags_4 = _bit_scan_reverse(rbx_19 + 7)
                        int32_t var_480_1 = temp0_87
                        char rdx_70
                        
                        if (rcx_143 == 0)
                            rdx_70 = 0x20
                        else
                            rdx_70 = 0x1f - temp0_87.b
                        
                        rdx_71 = 1 << ((not.d(rcx_143)).b & (0x20 - rdx_70))
                    
                    if (var_1c0 == 0 || var_1c0 s< rdx_71)
                        var_1c0 = rdx_71
                        zmm1 = sub_1408370c0(&var_208)
            
            void var_4b0
            
            if (rax_122 != 0)
                zmm1 = sub_140812a70(&var_208, &var_4b0, &var_4a0, nullptr)
            void var_4b4
            
            if (rax_123 != 0)
                zmm1 = sub_140812a70(&var_208, &var_4b4, &var_498, nullptr)
        
        var_508:8.d &= not.d(var_518:0xc.d)
        sub_14059bdd0(&var_518:8)
        rsi_5 = var_508:0xc.d
        
        if (rsi_5 s>= *(var_508.q + 0x18))
            break
        
        r15_3 = r13_1
    
    r14 = nullptr

int64_t* r15_8 = arg1
int32_t rcx_150 = r15_8[0x63].d

if (var_200 - var_1d4 s< rcx_150)
    int32_t i_5 = 0
    
    if (rcx_150 s> 0)
        do
            int64_t* rbx_21 = *(r14 + r15_8[0x62])
            void var_4b8
            
            if (*sub_1408296b0(&var_208, &var_4b8, rbx_21) == 0xffffffff)
                if (rbx_21 != 0)
                    (*(*rbx_21 + 0x940))(rbx_21)
                    int64_t rax_218 = *rbx_21
                    int32_t var_784 = 0
                    (*(rax_218 + 0x400))(rbx_21, &var_784)
                    (*(*rbx_21 + 0x3a0))(rbx_21, 0)
                
                int32_t rdx_78 = r15_8[0x63].d
                int32_t rax_222 = rdx_78 - i_5 - 1
                
                if (rax_222 s>= 1)
                    rax_222 = 1
                
                if (rax_222 != 0)
                    int64_t rcx_155 = r15_8[0x62]
                    memcpy(rcx_155 + (sx.q(i_5) << 3), rcx_155 + (sx.q(rdx_78 - rax_222) << 3), 
                        rax_222 << 3)
                    rdx_78 = r15_8[0x63].d
                
                r15_8[0x63].d = rdx_78 - 1
                sub_1405c53d0(&r15_8[0x62])
                i_5 -= 1
                r14 -= 8
                
                if (arg4 == 0)
                    break
            
            i_5 += 1
            r14 = &r14[1]
        while (i_5 s< r15_8[0x63].d)

int32_t i_6 = 0

if (r15_8[0x6f].d s> 0)
    void* rbx_22 = &r15_8[0x6e]
    int64_t** rsi_14 = nullptr
    void* var_6e0_2 = rbx_22
    
    do
        int64_t* rdi_12 = *(rsi_14 + *rbx_22)
        
        if (arg4 != 0)
            int64_t* rcx_158 = rdi_12[0xa]
            
            if (rcx_158 == 0)
                bool z_1
                
                if (0 == rdi_12[8].d)
                    rdi_12[8].d = 0
                    z_1 = true
                else
                    rdi_12[8].d
                    z_1 = false
                
                if (not(z_1))
                    zmm1, zmm8 = sub_141a01300(rdi_12[1])
                    rdi_12[8].d -= 1
                
                goto label_141a19690
            
            if ((*(*rcx_158 + 0x18))(rcx_158, rdi_12) == 0)
            label_141a19690:
                
                if (rdi_12[0xa] != 0)
                    int64_t* rcx_162 = rdi_12[9]
                    (*(*rcx_162 + 0x20))(rcx_162, 0xffffffff, 0)
                    rdi_12[0xa] = 0
            else
                zmm1, zmm8 = sub_141a01300(rdi_12[1])
                rdi_12[8].d -= 1
                int64_t* rcx_160 = rdi_12[9]
                
                if (rcx_160 != 0)
                    (*(*rcx_160 + 0x10))(rcx_160)
                
                rdi_12[0xa] = 0
        
        bool z_2
        
        if (0 == rdi_12[8].d)
            rdi_12[8].d = 0
            z_2 = true
        else
            rdi_12[8].d
            z_2 = false
        
        if (z_2)
            if (rdi_12[0xa] != 0)
                int64_t* rcx_163 = rdi_12[9]
                (*(*rcx_163 + 0x20))(rcx_163, 0xffffffff, 0)
                rdi_12[0xa] = 0
            
            int32_t rdx_82 = *(rbx_22 + 8)
            int32_t rax_236 = rdx_82 - i_6 - 1
            
            if (rax_236 s>= 1)
                rax_236 = 1
            
            if (rax_236 != 0)
                int64_t rcx_164 = *rbx_22
                memcpy(rcx_164 + (sx.q(i_6) << 3), rcx_164 + (sx.q(rdx_82 - rax_236) << 3), 
                    rax_236 << 3)
                rdx_82 = *(rbx_22 + 8)
            
            *(rbx_22 + 8) = rdx_82 - 1
            sub_1405c53d0(rbx_22)
            rsi_14 -= 8
            i_6 -= 1
            int64_t* rax_240 = sub_140d3c6e0(&rdi_12[7])
            void* r14_11 = rdi_12[1]
            int32_t r15_9 = *(r14_11 + 0x1f8)
            int32_t* rax_241
            void var_448
            
            if (rax_240 != 0)
                rax_241 = sub_1408296b0(&var_208, &var_448, rax_240)
            
            if (rax_240 == 0 || *rax_241 == 0xffffffff || r15_9 s<= 0)
                r15_8 = arg1
            else
                void* rcx_169 = rax_240[0x9d]
                
                if (rcx_169 != 0)
                    sub_1420a9f70(rcx_169, r14_11 + 0x1b8, zmm1)
                else
                    void* rdx_84
                    rdx_84.b = 1
                    zmm8 = sub_142097c30(rax_240, rdx_84.b, r14_11 + 0x1b8, *(r14_11 + 0x1a4), zmm1)
                
                void* rax_242 = rdi_12[1]
                zmm1 = sub_14204bff0(rax_240, rax_242 + 0x208, *(rax_242 + 0x218), r15_9)
                r15_8 = arg1
                
                if (arg4 != 0 && (*(*r15_8 + 0x150))(r15_8) != 0)
                    sub_141ef12d0(rax_240)
            
            int32_t var_70c
            sub_141a0a5b0(r13_1, &var_70c, &rdi_12[2])
            int64_t rax_245 = sx.q(var_70c)
            
            if (rax_245.d != 0xffffffff)
                int64_t r13_5 = rax_245 * 0x68
                void* r13_6 = r13_5 + r15_8[0x64]
                
                if (r13_5 != neg.q(r15_8[0x64]))
                    *(r13_6 + 0x58) = 0
                    
                    if (sub_140d3e110(r13_6 + 0x30) != 0)
                        int64_t* rax_247 = sub_140d3c6e0(r13_6 + 0x30)
                        
                        if (rax_247 != 0)
                            int64_t rdx_87 = *rax_247
                            (*(rdx_87 + 0x940))(rax_247, rdx_87)
                            int64_t r8_41 = *rax_247
                            int32_t var_780 = 0
                            (*(r8_41 + 0x400))(rax_247, &var_780, r8_41)
                            (*(*rax_247 + 0x3a0))(rax_247, 0)
                        
                        int32_t rbx_24 = 0
                        int32_t rcx_180 = arg1[0x63].d
                        
                        if (rcx_180 s> 0)
                            int64_t r14_12 = 0
                            int32_t rax_249
                            
                            do
                                int64_t* r9_11 = arg1[0x62]
                                rax_249 = rcx_180
                                
                                if (*(r9_11 + r14_12) == rax_247)
                                    int32_t rax_251 = rax_249 - rbx_24 - 1
                                    
                                    if (rax_251 s>= 1)
                                        rax_251 = 1
                                    
                                    if (rax_251 != 0)
                                        memcpy(&r9_11[sx.q(rbx_24)], 
                                            &r9_11[sx.q(rcx_180 - rax_251)], rax_251 << 3)
                                        rcx_180 = arg1[0x63].d
                                    
                                    arg1[0x63].d = rcx_180 - 1
                                    sub_1405c53d0(&arg1[0x62])
                                    rax_249 = arg1[0x63].d
                                    rbx_24 -= 1
                                    r14_12 -= 8
                                
                                rbx_24 += 1
                                r14_12 += 8
                                rcx_180 = rax_249
                            while (rbx_24 s< rax_249)
                        
                        int64_t var_490
                        zmm1 = sub_140d3a3a0(&var_490, nullptr)
                        r15_8 = arg1
                        *(r13_6 + 0x30) = var_490
                    
                    *(r13_6 + 0x48) = data_14399fa50
                    int64_t performanceCount_3
                    QueryPerformanceCounter(&performanceCount_3)
                    *(r13_6 + 0x50) = float.d(performanceCount_3) f* data_143d796f8 f+ zmm8.q
                
                r13_1 = var_728_2
            
            (*(*rdi_12 + 0x10))(rdi_12, 1)
            
            if (arg4 == 0)
                break
            
            rbx_22 = var_6e0_2
        
        i_6 += 1
        rsi_14 = &rsi_14[1]
    while (i_6 s< r15_8[0x6f].d)

int32_t var_1c0_1 = 0

if (var_1c8 != 0)
    sub_140a74f90(var_1c8)

void* result = sub_14100e680(&var_208)
__security_check_cookie(rax_1 ^ &var_818)
return result
