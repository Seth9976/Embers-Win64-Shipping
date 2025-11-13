// 函数: sub_141c9a540
// 地址: 0x141c9a540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_58 = zmm7
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
arg2.q f- 0.0
int32_t* rdi = arg3
int32_t r8 = *arg3
int128_t zmm6 = arg2
int32_t result = arg3[4] - r8

if (result s> 0)
    uint64_t rcx = zx.q(data_14401b1a0)
    zmm7 = 0x4170000000000000
    int128_t* var_2e8
    int64_t* var_2e0 = &var_2e8
    int64_t var_2b8_1 = 0
    int64_t rsi_1 = 0
    int64_t var_2b0_1 = 0
    void* rbx_1 = arg1 + 0x30
    TEB* gsbase
    void* rax_4 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3))
    int64_t r14_1 = 0
    void* var_2a8_1 = rbx_1
    
    while (true)
        *rdi = r8 + 1
        int64_t* r13_2 = sx.q(r8) * 0xc8 + *(rdi + 8)
        int64_t* var_208_1 = r13_2
        void* rax_7 = &r13_2[0x12]
        int128_t* rax_8 = sub_141c9a400(rbx_1, r13_2[0x12])
        int64_t var_138_1 = r14_1
        int64_t var_130_1 = rsi_1
        *rax_8 = *(r13_2 + 0x98)
        rax_8[1] = *(r13_2 + 0xa8)
        rax_8[2] = *(r13_2 + 0xb8)
        int64_t var_148 = r13_2[0x12]
        int64_t var_140_1 = 0
        int128_t* rax_10 = sub_141c9a300(rbx_1, &var_148)
        var_2e8 = rax_10
        sub_141c95e10(&var_2e0, &rax_10[2])
        void* var_298 = &rax_10[3]
        sub_141c95e10(&var_2e0, &rax_10[3])
        sub_141c95e10(&var_2e0, &rax_10[6])
        sub_141c95e10(&var_2e0, &rax_10[5])
        sub_141c95e10(&var_2e0, &rax_10[4])
        bool cond:9_1 = *(rax_10 + 0x2c) == 0
        *(rax_10 + 0x28) = 0
        
        if (not(cond:9_1))
            sub_1405c5570(&rax_10[2], 0)
        
        bool cond:0_1 = *(rax_10 + 0x3c) == 0
        *(rax_10 + 0x38) = 0
        
        if (not(cond:0_1))
            sub_1405c5570(&rax_10[3], 0)
        
        int32_t i = 0
        *(rax_10 + 0x68) = 0
        
        if (*(rax_10 + 0x6c) != 0)
            sub_1405c5570(&rax_10[6], 0)
        
        *(rax_10 + 0x58) = 0
        
        if (*(rax_10 + 0x5c) != 0)
            sub_1405c5570(&rax_10[5], 0)
        
        *(rax_10 + 0x48) = 0
        
        if (*(rax_10 + 0x4c) != 0)
            sub_1405c5570(&rax_10[4], 0)
        
        uint128_t var_e0
        double var_d0[0x2]
        
        if (data_143f35548 s> *(rax_4 + 0x14))
            _Init_thread_header(&data_143f35548)
            
            if (data_143f35548 == 0xffffffff)
                sub_140b58260(&var_e0, u"/Script/CoreUObject", 1)
                sub_140b58260(&var_e0:8, u"/Script/Engine", 1)
                sub_140b58260(&var_d0, u"/Script/BlueprintGraph", 1)
                zmm6 = sub_140b58260(&var_d0[1], u"/Script/UnrealEd", 1)
                data_143f35538 = 0
                data_143f35540 = 4
                sub_1405c4a00(&data_143f35538, 4, 0)
                uint128_t* rax_103 = data_143f35538
                *rax_103 = var_e0
                rax_103[1] = var_d0
                atexit(sub_142cf7380)
                _Init_thread_footer(&data_143f35548)
        
        int32_t var_8c_1 = 0x80
        int64_t var_b8 = 0
        int32_t var_b0_1 = 0
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x1c)
        int32_t var_84_1 = 0
        void* var_78_1 = nullptr
        int32_t var_70_1 = 0
        int32_t var_88_1 = 0xffffffff
        void var_80
        
        if (r13_2[1].d s> 0)
            do
                int32_t var_2d4_1 = 0
                int32_t j = not.d(i)
                int32_t rcx_13 = 0
                int32_t var_2d8 = 0
                bool cond:1_1 = j s>= 0
                int128_t* rbx_8
                
                if (j == 0)
                    rbx_8 = var_2d8.q
                else
                    int64_t* rbx_5
                    
                    do
                        if (cond:1_1)
                            rbx_5 = (sx.q(j - 1) << 7) + r13_2[2]
                        else
                            rbx_5 = sx.q(not.d(j)) * 0x38 + *r13_2
                        
                        j = rbx_5[1].d
                        cond:1_1 = j s>= 0
                    while (j != 0)
                    
                    rbx_8 = *rbx_5
                    var_2d8.q = rbx_8
                    rcx_13 = var_2d8
                
                for (int64_t* j_1 = data_143f35538; j_1 != &j_1[sx.q(data_143f35540)]; 
                        j_1 = &j_1[1])
                    if (*j_1 == rbx_8)
                        goto label_141c9a92b
                
                if (var_b0_1 == var_84_1)
                label_141c9a8f3:
                    var_2e8.d = 2
                    int32_t* var_128 = &var_2d8
                    int128_t** var_120_1 = &var_2e8
                    void var_1f8
                    sub_140bd2b60(&var_b8, &var_1f8, &var_128, nullptr)
                else
                    var_2e8 = rbx_8
                    void* rcx_17 = &var_80
                    int64_t rdx_9 = sx.q(var_70_1 - 1) & sx.q(sub_140b5ead0(rcx_13) + var_2e8:4.d)
                    
                    if (var_78_1 != 0)
                        rcx_17 = var_78_1
                    
                    int32_t rax_24 = *(rcx_17 + (rdx_9 << 2))
                    
                    if (rax_24 == 0xffffffff)
                        goto label_141c9a8f3
                    
                    int64_t r8_7 = var_b8
                    
                    while (true)
                        int64_t rdx_10 = sx.q(rax_24) * 5
                        
                        if (*(r8_7 + (rdx_10 << 2)) == rbx_8)
                            break
                        
                        rax_24 = *(r8_7 + (rdx_10 << 2) + 0xc)
                        
                        if (rax_24 == 0xffffffff)
                            goto label_141c9a8f3
                    
                    if (rax_24 == 0xffffffff)
                        goto label_141c9a8f3
                
            label_141c9a92b:
                i += 1
            while (i s< r13_2[1].d)
        
        int64_t r15_2 = 0
        int64_t* rdi_2 = r13_2[6]
        uint64_t r12_3 = sx.q(r13_2[7].d) << 3 u>> 3
        
        if (rdi_2 u> &rdi_2[r13_2[7]])
            r12_3 = 0
        
        int128_t* var_258
        
        if (r12_3 != 0)
            do
                int128_t* rbx_9 = *rdi_2
                var_258 = rbx_9
                
                if (var_b0_1 == var_84_1)
                label_141c9a9e2:
                    var_2e8.d = 1
                    int128_t** var_178 = &var_258
                    int128_t** var_170_1 = &var_2e8
                    void var_1d8
                    sub_140bd2b60(&var_b8, &var_1d8, &var_178, nullptr)
                else
                    var_2e8 = rbx_9
                    void* rcx_23 = &var_80
                    int64_t rdx_13 = sx.q(var_70_1 - 1) & sx.q(sub_140b5ead0(rbx_9.d) + var_2e8:4.d)
                    
                    if (var_78_1 != 0)
                        rcx_23 = var_78_1
                    
                    int32_t rax_32 = *(rcx_23 + (rdx_13 << 2))
                    
                    if (rax_32 == 0xffffffff)
                        goto label_141c9a9e2
                    
                    int64_t r8_9 = var_b8
                    
                    while (true)
                        int64_t rdx_14 = sx.q(rax_32) * 5
                        
                        if (*(r8_9 + (rdx_14 << 2)) == rbx_9)
                            break
                        
                        rax_32 = *(r8_9 + (rdx_14 << 2) + 0xc)
                        
                        if (rax_32 == 0xffffffff)
                            goto label_141c9a9e2
                    
                    if (rax_32 == 0xffffffff)
                        goto label_141c9a9e2
                
                rdi_2 = &rdi_2[1]
                r15_2 += 1
            while (r15_2 != r12_3)
        
        void* r12_4 = &r13_2[8]
        var_e0:4.d = 1
        int32_t r11_1 = *(r12_4 + 0x28)
        void* r15_3 = r12_4 + 0x10
        void* var_200_1 = r12_4
        int32_t rcx_26 = 0
        var_e0.d = 0
        int32_t r8_11 = 0
        void* var_d8_1 = r15_3
        var_d0[0].d = 0xffffffff
        var_d0[0] = 0
        
        if (r11_1 != 0)
            void* rax_33 = *(r15_3 + 0x10)
            void* r9_1 = r15_3
            
            if (rax_33 != 0)
                r9_1 = rax_33
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r11_1 - 1)
            int32_t rdx_18 = *r9_1
            
            if (rdx_18 != 0)
            label_141c9aad1:
                int32_t rax_40 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_40)
                var_e0:4.d = rax_40
                int32_t rax_41
                
                if (rax_40 == 0)
                    rax_41 = 0x20
                else
                    rax_41 = 0x1f - temp0_2
                
                var_d0[0]:4.d = r8_11 - rax_41 + 0x1f
                
                if (r8_11 - rax_41 + 0x1f s> r11_1)
                    var_d0[0]:4.d = r11_1
            else
                while (true)
                    int64_t rdx_19 = sx.q(rcx_26)
                    r8_11 += 0x20
                    rcx_26 += 1
                    int32_t var_c8_1 = r8_11
                    var_e0.d = rcx_26
                    
                    if (rdx_19.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_18 = *(r9_1 + (rdx_19 << 2) + 4)
                    var_d0[0].d = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_141c9aad1
                
                var_d0[0]:4.d = r11_1
        
        int32_t rdx_20 = *(r12_4 + 0x28)
        uint128_t zmm0_2 = var_e0
        void* var_288 = r12_4
        double zmm2[0x2] = var_d0
        uint128_t var_280_1 = zmm0_2
        int32_t r8_14 = rdx_20 s>> 5
        zmm0_2 = var_288.o
        int32_t r9_3 = rdx_20 & 0xffffffe0
        var_2e8.d = rdx_20
        int64_t var_1a8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        double zmm1_1[0x2] = var_280_1
        uint128_t var_1c8 = zmm0_2
        
        if (rdx_20 != r11_1)
            void* rax_43 = *(r15_3 + 0x10)
            void* r10_1 = r15_3
            
            if (rax_43 != 0)
                r10_1 = rax_43
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_24 = *(r10_1 + (sx.q(r8_14) << 2)) & 0xffffffff << (rdx_20.b & 0x1f)
            
            if (rdx_24 != 0)
            label_141c9abab:
                int32_t rax_50 = neg.d(rdx_24) & rdx_24
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_50)
                int32_t rax_51
                
                if (rax_50 == 0)
                    rax_51 = 0x20
                else
                    rax_51 = 0x1f - temp0_4
                
                var_2e8.d = r9_3 - rax_51 + 0x1f
                
                if (r9_3 - rax_51 + 0x1f s> r11_1)
                    var_2e8.d = r11_1
            else
                while (true)
                    int64_t rcx_31 = sx.q(r8_14)
                    r9_3 += 0x20
                    r8_14 += 1
                    
                    if (rcx_31.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_24 = *(r10_1 + (rcx_31 << 2) + 4)
                    
                    if (rdx_24 != 0)
                        goto label_141c9abab
                
                var_2e8.d = r11_1
        
        int32_t rsi_2 = var_2e8.d
        char var_2f8
        
        while (true)
            int64_t rcx_33 = sx.q(zmm1_1[1]:4.d)
            int64_t rax_52 = var_1c8.q
            
            if (rcx_33.d == rsi_2 && zmm1_1[0] == r15_3 && rax_52 == r12_4)
                break
            
            int32_t* r14_4 = (rcx_33 << 5) + *rax_52
            int32_t rax_53 = *r14_4
            void* rbx_11
            int64_t rdi_3
            
            if (rax_53 s> 0)
                rbx_11 = *rax_7
                void* var_2c0_1 = rbx_11
                int64_t var_108
                int64_t var_f8
                int64_t* rax_56 = sub_140baa460(&var_108, sub_140b63b70(rax_7, &var_f8))
                int16_t* rdx_28
                
                if (rax_56[1].d == 0)
                    rdx_28 = &data_142d40450
                else
                    rdx_28 = *rax_56
                
                void var_e8
                int64_t* rax_57
                rax_57, zmm6 = sub_140b58260(&var_e8, rdx_28, 1)
                int64_t rcx_37 = var_108
                rdi_3 = *rax_57
                int64_t var_2d0_1 = rdi_3
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
                
                int64_t rcx_38 = var_f8
                
                if (rcx_38 != 0)
                    sub_140a74f90(rcx_38)
            else if (rax_53 s>= 0)
                rdi_3 = 0
                rbx_11 = nullptr
            else
                int64_t rdx_32 = *r13_2
                int64_t* rbx_13 = sx.q(0xffffffff - rax_53) * 0x38 + rdx_32
                int32_t i_1 = rbx_13[1].d
                bool cond:7_1 = i_1 s>= 0
                
                if (i_1 == 0)
                    rbx_11 = *rbx_13
                    rdi_3 = 0
                    void* var_2c0_3 = rbx_11
                else
                    rdi_3 = *rbx_13
                    int64_t var_2d0_2 = rdi_3
                    void** rbx_15
                    
                    do
                        if (cond:7_1)
                            rbx_15 = (sx.q(i_1 - 1) << 7) + r13_2[2]
                        else
                            rbx_15 = sx.q(not.d(i_1)) * 0x38 + rdx_32
                        
                        i_1 = rbx_15[1].d
                        cond:7_1 = i_1 s>= 0
                    while (i_1 != 0)
                    
                    rbx_11 = *rbx_15
                    void* var_2c0_2 = rbx_11
            
            int64_t r13_3 = 0
            int64_t* r12_5 = *(r14_4 + 8)
            uint64_t rcx_40 = sx.q(r14_4[4]) << 3 u>> 3
            
            if (r12_5 u> &r12_5[sx.q(r14_4[4])])
                rcx_40 = 0
            
            if (rcx_40 != 0)
                do
                    zmm2[0] = *r12_5
                    var_288 = rbx_11
                    var_280_1.q = 0
                    var_280_1:8.q = rdi_3
                    int128_t* rax_61 = sub_141c9a300(var_2a8_1, &var_288)
                    
                    if (rax_61 != 0)
                        var_2f8 = 0
                        char* var_160_1 = &var_2f8
                        var_258.o = rax_61.o
                        sub_1405a7050(&rax_10[4], &var_258)
                        var_258 = rax_10
                        sub_1405a7050(&rax_61[7], &var_258)
                    
                    r12_5 = &r12_5[1]
                    r13_3 += 1
                while (r13_3 != rcx_40)
                
                rsi_2 = var_2e8.d
                r15_3 = var_d8_1
            
            zmm1_1[1].d &= not.d(var_1c8:0xc.d)
            sub_14059bdd0(&var_1c8:8)
            r13_2 = var_208_1
            r12_4 = var_200_1
        
        var_e0:4.d = 1
        var_e0.d = 0
        int32_t rcx_47 = 0
        int64_t* var_d8_2 = &var_a8
        int32_t r8_15 = 0
        var_d0[0].d = 0xffffffff
        var_d0[0] = 0
        int32_t var_90
        
        if (var_90 != 0)
            int64_t* r9_5 = &var_a8
            int64_t* var_98
            
            if (var_98 != 0)
                r9_5 = var_98
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(var_90 - 1)
            int32_t rdx_35 = *r9_5
            
            if (rdx_35 != 0)
            label_141c9ae91:
                int32_t rax_75 = neg.d(rdx_35) & rdx_35
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_75)
                var_e0:4.d = rax_75
                int32_t rax_76
                
                if (rax_75 == 0)
                    rax_76 = 0x20
                else
                    rax_76 = 0x1f - temp0_5
                
                int32_t rax_77 = r8_15 - rax_76 + 0x1f
                
                if (rax_77 s> var_90)
                    rax_77 = var_90
                
                var_d0[0]:4.d = rax_77
            else
                while (true)
                    int64_t rdx_36 = sx.q(rcx_47)
                    r8_15 += 0x20
                    rcx_47 += 1
                    int32_t var_c8_2 = r8_15
                    var_e0.d = rcx_47
                    
                    if (rdx_36.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        var_d0[0]:4.d = var_90
                        break
                    
                    rdx_35 = *(r9_5 + (rdx_36 << 2) + 4)
                    var_d0[0].d = 0xffffffff
                    
                    if (rdx_35 != 0)
                        goto label_141c9ae91
        
        zmm2 = var_d0
        void* r14_6 = var_298
        void* r13_4 = &rax_10[6]
        uint128_t var_280_2 = var_e0
        var_288 = &var_b8
        zmm0_2 = var_288.o
        double var_270_2[0x2] = zmm2
        zmm1_1 = var_280_2
        var_280_2:8.d = 0xffffffff << (var_90.b & 0x1f)
        var_280_2:0xc.d = var_90
        int64_t r12_6 = var_280_2:8.q
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        uint128_t var_1a0 = zmm0_2
        int64_t var_180_1 = zmm2.q
        
        while (true)
            int64_t rax_78 = sx.q(zmm1_1[1]:4.d)
            int64_t* rdx_38 = var_1a0.q
            
            if (rax_78.d == (r12_6 u>> 0x20).d && zmm1_1[0] == &var_a8 && rdx_38 == &var_b8)
                break
            
            int64_t rcx_51 = rax_78 * 5
            int64_t var_230_1 = 0
            int64_t rax_79 = *rdx_38
            int64_t var_228_1 = 0
            __builtin_memset(&var_280_2, 0, 0x18)
            char r15_5 = (*(rax_79 + (rcx_51 << 2) + 8)).b
            var_288 = *(rax_79 + (rcx_51 << 2))
            int64_t* rax_81 = sub_141c9a300(var_2a8_1, &var_288)
            
            if (rax_81 != 0)
                rax_81[5].d
                
                if (rax_81[0xf].d + rax_81[0xd].d + rax_81[0xb].d + rax_81[9].d + rax_81[7].d
                        == neg.d(rax_81[5].d))
                    int32_t rcx_59
                    rcx_59.b = sub_140b5b8a0(*rax_81, 0) == 0
                    
                    if ((*(rax_81 + 4) != 0 | rcx_59.b) != 0)
                        int32_t rcx_60
                        rcx_60.b = sub_140b5b8a0(rax_81[2].d, 0) == 0
                        int32_t rcx_61
                        
                        if ((*(rax_81 + 0x14) != 0 | rcx_60.b) != 0)
                            rcx_61.b = sub_140b5b8a0(rax_81[3].d, 0) == 0
                        
                        if ((*(rax_81 + 0x14) != 0 | rcx_60.b) == 0
                                || (*(rax_81 + 0x1c) != 0 | rcx_61.b) != 0)
                            int32_t rcx_62
                            rcx_62.b = sub_140b5b8a0(rax_81[3].d, 0) == 0
                            
                            if ((*(rax_81 + 0x1c) != 0 | rcx_62.b) == 0)
                                int16_t* var_220
                                sub_140b63b70(rax_81, &var_220)
                                char rax_86
                                rax_86, zmm6, zmm7 = sub_140bace20(&var_220)
                                
                                if (rax_86 != 0)
                                    int16_t* rdx_41 = &data_142d40450
                                    int32_t var_218
                                    
                                    if (var_218 != 0)
                                        rdx_41 = var_220
                                    
                                    void* rax_87
                                    rax_87, zmm6, zmm7 = sub_140d1fe00(nullptr, rdx_41)
                                    
                                    if (rax_87 != 0)
                                        void* rax_88 = sub_141c9a400(var_2a8_1, *rax_81)
                                        *(rax_88 + 8) = *(rax_87 + 0x30)
                                
                                int16_t* rcx_66 = var_220
                                
                                if (rcx_66 != 0)
                                    sub_140a74f90(rcx_66)
                
                char* var_150_1 = &var_2f8
                var_298.o = rax_81.o
                var_2f8 = 0
                
                if ((r15_5 & 2) != 0)
                    sub_1405a7050(&rax_10[2], &var_298)
                
                if ((r15_5 & 1) != 0)
                    if (var_2f8 == 0)
                        sub_1405a7050(r14_6, &var_298)
                    else
                        int64_t rdi_5 = sx.q(*(r14_6 + 8))
                        int32_t rax_89 = (rdi_5 + 1).d
                        *(r14_6 + 8) = rax_89
                        
                        if (rax_89 s> *(r14_6 + 0xc))
                            sub_1405a4d70(r14_6)
                        
                        *(*r14_6 + (rdi_5 << 3)) = rax_81
                
                if ((r15_5 & 0x10) != 0)
                    if (var_2f8 == 0)
                        sub_1405a7050(r13_4, &var_298)
                    else
                        r13_4 = &rax_10[6]
                        int64_t rdi_6 = sx.q(*(r13_4 + 8))
                        int32_t rax_91 = (rdi_6 + 1).d
                        *(r13_4 + 8) = rax_91
                        
                        if (rax_91 s> *(r13_4 + 0xc))
                            sub_1405a4d70(r13_4)
                        
                        *(*r13_4 + (rdi_6 << 3)) = rax_81
                
                if ((r15_5 & 8) != 0)
                    if (var_2f8 == 0)
                        sub_1405a7050(&rax_10[5], &var_298)
                    else
                        int64_t rdi_7 = sx.q(*(rax_10 + 0x58))
                        int32_t rax_93 = (rdi_7 + 1).d
                        *(rax_10 + 0x58) = rax_93
                        
                        if (rax_93 s> *(rax_10 + 0x5c))
                            sub_1405a4d70(&rax_10[5])
                        
                        *(rax_10[5].q + (rdi_7 << 3)) = rax_81
                
                if ((r15_5 & 4) != 0)
                    if (var_2f8 == 0)
                        sub_1405a7050(&rax_10[4], &var_298)
                    else
                        int64_t rdi_8 = sx.q(*(rax_10 + 0x48))
                        int32_t rax_96 = (rdi_8 + 1).d
                        *(rax_10 + 0x48) = rax_96
                        
                        if (rax_96 s> *(rax_10 + 0x4c))
                            sub_1405a4d70(&rax_10[4])
                        
                        *(rax_10[4].q + (rdi_8 << 3)) = rax_81
                
                var_298 = rax_10
                sub_1405a7050(&rax_81[0xe], &var_298)
            
            zmm1_1[1].d &= not.d(var_1a0:0xc.d)
            sub_14059bdd0(&var_1a0:8)
        
        rsi_1 = var_2b8_1
        r14_1 = var_2b0_1
        
        if (arg2.q f< 0.0 == 0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            zmm1_1 = zx.o(0)
            zmm1_1[0] = float.d(performanceCount)
            zmm0_2 = *(arg1 + 0x558)
            zmm1_1[0] = zmm1_1[0] f* data_143d796f8
            zmm0_2 = _mm_cvtps_pd(zmm0_2.q)
            zmm1_1[0] = zmm1_1[0] f+ zmm7.q
            zmm1_1[0] = zmm1_1[0] f- zmm6.q
            
            if (zmm1_1[0] f> zmm0_2.q)
                result = sub_1405ae200(&var_b8)
                goto label_141c9b2bd
        
        sub_1405ae200(&var_b8)
        rdi = arg3
        r8 = *rdi
        result = rdi[4] - r8
        
        if (result s<= 0)
            break
        
        rbx_1 = var_2a8_1

if (r8 s> 0)
    result = sub_141caab70(&rdi[2], 0, r8, 1)
    *rdi = 0

label_141c9b2bd:
__security_check_cookie(rax_1 ^ &var_318)
return result
