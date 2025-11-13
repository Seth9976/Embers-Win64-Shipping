// 函数: sub_14080d670
// 地址: 0x14080d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
uint64_t result = __security_cookie ^ &var_4c8
uint64_t result_1 = result
void* r14 = arg1
int32_t rcx = *(arg1 + 0x24)
uint128_t zmm7 = arg2

if (rcx != 4)
    if (rcx != 3)
        void* rdx_1 = *(r14 + 0x778)
        uint128_t zmm0
        zmm0.d = zmm7.d f+ *(r14 + 0x10)
        *(r14 + 0x10) = zmm0.d
        
        if (rcx == 2)
            result = sub_140808700(rdx_1)
            *(r14 + 0x24) = 1
        else if (*(*(r14 + 0x788) + 0xd8) != 0 || *(*(rdx_1 + 0x98) + 0xb0) != 0 || rcx == 0)
            int128_t zmm6
            int128_t var_38_1 = zmm6
            void* rax_3 = sub_140852300(*(r14 + 0x780))
            void* rdi_1 = rax_3
            int64_t i_17 = sx.q(*(*(r14 + 0x788) + 0x1d8))
            *(r14 + 0x920) = 0
            int64_t i_14 = i_17
            int64_t i_16 = i_17
            int64_t var_468
            
            if (i_17.d s> 0)
                int64_t rbx_1 = 0
                var_468 = 0
                int64_t r15_1 = 0
                int64_t i
                
                do
                    void* rdi_3 = *(r14 + 0x910) + rbx_1
                    int64_t r13_1 = *(*(r14 + 0x788) + 0x1d0)
                    *(rdi_3 + 0x50) = 0
                    int32_t rax_5 = *(rdi_3 + 0x4c)
                    *(rdi_3 + 0x48) = 0
                    
                    if (rax_5 s< 0 && rax_5 != 0)
                        sub_1408097f0(rdi_3, 0)
                    
                    *(r15_1 + r13_1 + 0x44)
                    void* rax_6 = sub_140851dd0(*(r14 + 0x780), *(rdi_3 + 0x70))
                    
                    if (rax_6 != 0)
                        void* rdx_3 = *(rdi_3 + 0x58)
                        void* rcx_8 = *(rax_6 + 0x98)
                        
                        if (rdx_3 != 0)
                            *(rdx_3 + 8) -= 1
                        
                        *(rdi_3 + 0x58) = rcx_8
                        
                        if (rcx_8 != 0)
                            *(rcx_8 + 8) += 1
                        
                        int32_t rdx_4 = 0
                        uint32_t j_7 = *(r15_1 + r13_1 + 0x30)
                        int32_t var_494_1 = 0
                        uint32_t j_5 = *(*(rax_6 + 0x98) + 0xb0)
                        
                        if (j_7 != 0)
                            uint32_t j_6 = j_5
                            j_5 = j_7
                            
                            if (j_6 s<= j_7)
                                j_5 = j_6
                        
                        if (*(r15_1 + r13_1 + 0x4c) == 0
                                || *(r15_1 + r13_1 + 0x50) u>= *(r15_1 + r13_1 + 0x2c))
                            j_7.b = 0
                        else
                            j_7.b = 1
                        
                        char j_8 = j_7.b
                        
                        if (j_5 s> 0)
                            uint64_t j_4 = zx.q(j_5)
                            uint64_t j
                            
                            do
                                int32_t rbx_3 = *(r15_1 + r13_1 + 0x2c)
                                
                                if (j_7.b != 0)
                                    int32_t rsi_1 = *(r15_1 + r13_1 + 0x50)
                                    int32_t rbx_2 = rbx_3 - rsi_1
                                    
                                    if (rbx_2 + 1 s<= 0)
                                        rbx_2 = 0
                                    else
                                        rdx_4 = var_494_1
                                        uint128_t zmm2
                                        zmm2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
                                        zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(rbx_2 + 1)).d
                                        int32_t rax_13 = int.d(zmm2.d)
                                        
                                        if (rax_13 s<= rbx_2)
                                            rbx_2 = rax_13
                                    
                                    rbx_3 = rbx_2 + rsi_1
                                
                                int32_t rax_14 = rbx_3 + rdx_4
                                
                                if (*(r14 + 0x24) == 0 && rbx_3 != 0 && rax_14 u< 0x7fffffff)
                                    int64_t rsi_2 = sx.q(*(rdi_3 + 0x48))
                                    int32_t rax_15 = (rsi_2 + 1).d
                                    *(rdi_3 + 0x48) = rax_15
                                    
                                    if (rax_15 s> *(rdi_3 + 0x4c))
                                        sub_1408090b0(rdi_3, rsi_2.d)
                                    
                                    void* rax_16 = *(rdi_3 + 0x40)
                                    void* rcx_10 = rdi_3
                                    rdx_4 = rax_14
                                    var_494_1 = rdx_4
                                    
                                    if (rax_16 != 0)
                                        rcx_10 = rax_16
                                    
                                    *(rcx_10 + (rsi_2 << 2)) = rbx_3
                                
                                j = j_4
                                j_4 -= 1
                                j_7 = zx.d(j_8)
                            while (j != 1)
                            rbx_1 = var_468
                            i_14 = i_16
                        
                        *(rdi_3 + 0x50) += rdx_4
                        *(r14 + 0x920) += rdx_4
                    
                    rbx_1 += 0x78
                    r15_1 += 0x58
                    i = i_14
                    i_14 -= 1
                    var_468 = rbx_1
                    i_16 = i_14
                while (i != 1)
                rdi_1 = rax_3
            
            int32_t r15_2 = 0
            
            if (*(r14 + 0x24) == 0)
                for (int32_t* i_1 = *(r14 + 0x48); i_1 != &i_1[sx.q(*(r14 + 0x50)) * 4]; 
                        i_1 = &i_1[4])
                    int32_t rax_17 = *i_1
                    int32_t rcx_11 = r15_2
                    r15_2 += rax_17
                    
                    if (rax_17 s<= 0)
                        r15_2 = rcx_11
            
            void* rcx_12 = *(*(r14 + 0x778) + 0x98)
            int32_t rsi_3
            
            if (rcx_12 == 0)
                rsi_3 = 0
            else
                rsi_3 = *(rcx_12 + 0xb0)
            
            int32_t var_48c_1 = rsi_3
            int32_t rax_19 = sub_1407fb000(*(r14 + 0x788))
            int32_t rbx_4 = *(r14 + 0x958)
            int32_t rcx_15 = rsi_3 + r15_2 + *(r14 + 0x920)
            int32_t var_460_1 = rcx_15
            
            if (rax_19 s>= rcx_15)
                rcx_15 = rax_19
            
            if (rcx_15 u<= rbx_4)
                rbx_4 = rcx_15
            
            int32_t var_498_1 = rbx_4
            
            if (rbx_4 s> *(r14 + 0x924))
                void* rcx_16 = *(r14 + 0x788)
                *(r14 + 0x92c) += 1
                *(r14 + 0x924) = rbx_4
                int32_t rax_20 = sub_1407e63e0(rcx_16, r14, rbx_4)
                
                if (data_143ce2aac != 0 && rax_20 s>= 5 && *(r14 + 0x92c) == 3)
                    int64_t var_3f0 = *(rdi_1 + 0x18)
                    int64_t var_3d8
                    sub_140b63b70(&var_3f0, &var_3d8)
                    int64_t var_430 = 0
                    int64_t var_428_1 = 0
                    sub_1405947f0(&var_430, 3)
                    int32_t rax_22 = var_428_1:4.d
                    int32_t var_494_2 = rax_22
                    int32_t rdi_4 = var_428_1.d + 3
                    var_428_1.d = rdi_4
                    
                    if (rdi_4 s> rax_22)
                        sub_140594770(&var_430)
                        rdi_4 = var_428_1.d
                        var_494_2 = var_428_1:4.d
                    
                    int64_t r13_2 = var_430
                    sub_1405a7220(r13_2, 3, "::", 3, 0x3f)
                    int64_t var_3e8 = *(*sub_140851dc0(sub_140852300(*(r14 + 0x780)))
                        + sx.q(*(r14 + 0xc)) * 0x30 + 0x1c)
                    int32_t var_3d0
                    
                    if (var_3d0 s> 1)
                        int32_t rdi_5
                        
                        if (rdi_4 == 0)
                            rdi_5 = 0
                        else
                            rdi_5 = rdi_4 - 1
                        
                        int32_t rax_27
                        
                        if (var_3d0 == 0)
                            rax_27 = var_3d0 + 1
                        
                        if (var_3d0 != 0 || rdi_5 == 0)
                            rax_27 = 0
                        
                        int64_t var_440 = 0
                        int32_t rcx_26 = rdi_5 + rax_27
                        int64_t rax_28 = var_3d8
                        int32_t var_434
                        
                        if (var_3d0 != 0 || rcx_26 != 0)
                            sub_1405a4c70(&var_440, rcx_26 + var_3d0, 0)
                            memcpy(var_440, rax_28, var_3d0 * 2)
                        else
                            var_434 = 0
                        
                        sub_140a20ba0(&var_440, r13_2, rdi_5)
                        rdi_4 = var_3d0
                        var_468 = var_440
                        var_494_2 = var_434
                        int32_t var_438_1
                        var_438_1.q = 0
                        var_440 = 0
                    else
                        var_468 = r13_2
                        r13_2 = 0
                        var_430 = 0
                    
                    int64_t var_328
                    int64_t* rax_31 = sub_140b63b70(&var_3e8, &var_328)
                    int64_t rdi_6
                    
                    if (rdi_4 s> 1)
                        int32_t rax_33 = rax_31[1].d
                        int32_t rcx_32 = rax_33 - 1
                        
                        if (rax_33 == 0)
                            rcx_32 = 0
                        
                        int32_t rdx_13
                        
                        if (rdi_4 == 0)
                            rdx_13 = rdi_4 + 1
                        
                        if (rdi_4 != 0 || rcx_32 == 0)
                            rdx_13 = 0
                        
                        int64_t var_400 = var_468
                        int32_t rdx_15 = rdx_13 + rcx_32 + rdi_4
                        int32_t var_3f8_1 = rdi_4
                        int32_t var_3f4_1 = var_494_2
                        
                        if (rdx_15 s> var_494_2)
                            sub_1405947f0(&var_400, rdx_15)
                        
                        sub_140a20ba0(&var_400, *rax_31, rcx_32)
                        rdi_6 = var_400
                    else
                        rdi_6 = *rax_31
                        *rax_31 = 0
                        rax_31[1] = 0
                        
                        if (var_468 != 0)
                            sub_140a74f90(var_468)
                    
                    int64_t rcx_35 = var_328
                    
                    if (rcx_35 != 0)
                        sub_140a74f90(rcx_35)
                    
                    if (r13_2 != 0)
                        sub_140a74f90(r13_2)
                    
                    if (rdi_6 != 0)
                        sub_140a74f90(rdi_6)
                    
                    int64_t rcx_38 = var_3d8
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
                    
                    rbx_4 = var_498_1
            
            int32_t rax_37 = rbx_4 - var_460_1
            
            if (rbx_4 - var_460_1 s>= 0)
                int32_t rcx_39 = *(r14 + 0x928)
                
                if (rcx_39 s< 0 || rax_37 s< rcx_39)
                    *(r14 + 0x928) = rax_37
            
            void* rdx_17 = *(r14 + 0x780)
            void* r8_12 =
                (sx.q((*(rdx_17 + 0x660) & 1) + (*(r14 + 0xc) << 1)) << 5) + *(rdx_17 + 0x650)
            *(r8_12 + 4) = *(r14 + 0x18)
            *(r8_12 + 0xc) = *(r14 + 0x10)
            *(r8_12 + 0x10) = *(*(r14 + 0x788) + 0x2c)
            void* rdi_7 = *(r14 + 0x788)
            char rax_42 = *(rdi_7 + 0xd8)
            
            if (rax_42 != 1)
                int32_t r13_3
                
                if (rax_42 != 0 || rbx_4 s<= data_14396ee74)
                label_14080df93:
                    r13_3 = var_498_1
                else
                    EnterCriticalSection(rdi_7 + 0x260)
                    *(rdi_7 + 0x25c) = 0
                    sub_1407ecd90(rdi_7 + 0x208, 0)
                    *(rdi_7 + 0x258) = 1
                    
                    if (rdi_7 != -0x260)
                        LeaveCriticalSection(rdi_7 + 0x260)
                    
                    *(r14 + 0x920) = 0
                    r13_3 = rsi_3
                    void* i_2 = *(r14 + 0x910)
                    r15_2 = 0
                    var_498_1 = rsi_3
                    
                    for (void* rdi_12 = sx.q(*(r14 + 0x918)) * 0x78 + i_2; i_2 != rdi_12; 
                            i_2 += 0x78)
                        *(i_2 + 0x48) = 0
                        
                        if (*(i_2 + 0x4c) != 0)
                            sub_1408097f0(i_2, 0)
                        
                        *(i_2 + 0x50) = 0
                
                rdx_17.b = 1
                sub_1407e7150(rdx_1, rdx_17.b)
                sub_1407e68d0(rdx_1, r13_3, 0)
                int64_t* rcx_66 = *(r14 + 0x7a8)
                int64_t* var_478_1 = rcx_66
                uint64_t rdx_25 = sx.q(*(r14 + 0x7b0)) << 3 u>> 3
                
                if (rcx_66 u> &rcx_66[sx.q(*(r14 + 0x7b0))])
                    rdx_25 = 0
                
                uint64_t var_470_2 = rdx_25
                
                if (rdx_25 != 0)
                    int64_t r13_4 = 0
                    
                    do
                        rdx_25.b = 1
                        void* rsi_4 = *rcx_66
                        int32_t rdi_14 = *(r14 + 0x920) + r15_2
                        char rbx_10 = (*(r14 + 0x818))[r13_4]
                        sub_1407e7150(rsi_4, rdx_25.b)
                        int32_t rdx_26 = var_48c_1 + rdi_14
                        
                        if (rbx_10 == 0)
                            rdx_26 = rdi_14
                        
                        sub_1407e68d0(rsi_4, rdx_26, 0)
                        r13_4 += 1
                        rcx_66 = &var_478_1[1]
                        var_478_1 = rcx_66
                    while (r13_4 != var_470_2)
                    
                    rsi_3 = var_48c_1
                
                int64_t* rdi_15 = *(r14 + 0x798)
                uint64_t rcx_71 = sx.q(*(r14 + 0x7a0)) << 3 u>> 3
                
                if (rdi_15 u> &rdi_15[sx.q(*(r14 + 0x7a0))])
                    rcx_71 = 0
                
                uint64_t var_470_3 = rcx_71
                
                if (rcx_71 != 0)
                    char* rbx_11 = nullptr
                    
                    do
                        void* r13_5 = *rdi_15
                        
                        if (rbx_11[*(r14 + 0x808)] == 0)
                            rdx_25.b = 1
                            sub_1407e7150(r13_5, rdx_25.b)
                            sub_1407e68d0(r13_5, rsi_3, 0)
                            rcx_71 = var_470_3
                        
                        rbx_11 = &rbx_11[1]
                        rdi_15 = &rdi_15[1]
                    while (rbx_11 != rcx_71)
                
                int16_t var_4a8
                void* r13_7
                
                if (rsi_3 s<= 0)
                    r13_7 = rdx_1
                else
                    *(*(rdx_1 + 0xa0) + 0xb0) = rsi_3
                    int32_t* rax_68 = *(r14 + 0x760)
                    
                    if (rax_68 != 0)
                        *rax_68 = rsi_3
                    
                    var_4a8.b = 1
                    sub_14084a050(r14 + 0x3c0, 0, rdx_1, 0, var_4a8.b)
                    int32_t rdi_16 = 1
                    void** rbx_12 = *(r14 + 0x798)
                    int64_t r13_6 = 0
                    uint64_t rcx_77 = sx.q(*(r14 + 0x7a0)) << 3 u>> 3
                    
                    if (rbx_12 u> &rbx_12[sx.q(*(r14 + 0x7a0))])
                        rcx_77 = 0
                    
                    if (rcx_77 != 0)
                        do
                            void* r8_17 = *rbx_12
                            var_4a8.b = 1
                            *(*(r8_17 + 0xa0) + 0xb0) = rsi_3
                            sub_14084a050(r14 + 0x3c0, rdi_16, r8_17, 0, var_4a8.b)
                            rdi_16 += 1
                            rbx_12 = &rbx_12[1]
                            r13_6 += 1
                        while (r13_6 != rcx_77)
                        
                        r14 = arg1
                    
                    int64_t var_208_1 = 0
                    int32_t var_200_1 = 0
                    int32_t var_1fc_1 = 0xc
                    int64_t var_1c8_1 = 0
                    int32_t var_1c0_1 = 0
                    int32_t var_1bc_1 = 0xc
                    void var_268
                    sub_1407e85f0(r14, r14 + 0x3c0, &var_268)
                    rdx_25, zmm7 = sub_14084f100(r14 + 0x3c0, rsi_3, &var_268)
                    r13_7 = rdx_1
                    
                    if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                        *(*(r13_7 + 0xa0) + 0xb0)
                        int64_t var_3c8
                        sub_140a2e390(&var_3c8, === Updated %d Particles (%d Died) ===", 
                            zx.q(rsi_3))
                        sub_1407ebce0(*(r13_7 + 0xa0), 0, rsi_3)
                        int64_t rcx_84 = var_3c8
                        
                        if (rcx_84 != 0)
                            sub_140a74f90(rcx_84)
                        
                        int32_t i_3 = 0
                        
                        if (*(r14 + 0x7a0) s> 0)
                            int64_t* rsi_5 = nullptr
                            
                            do
                                void* rdi_17 = *(rsi_5 + *(r14 + 0x798))
                                
                                if (rdi_17 != 0 && *(*(rdi_17 + 0xa0) + 0xb0) u> 0)
                                    int64_t var_3b8
                                    sub_140a2e390(&var_3b8, u"Update Script Event %d", zx.q(i_3))
                                    sub_1407ebce0(*(rdi_17 + 0xa0), 0, 0xffffffff)
                                    int64_t rcx_87 = var_3b8
                                    
                                    if (rcx_87 != 0)
                                        sub_140a74f90(rcx_87)
                                
                                i_3 += 1
                                rsi_5 = &rsi_5[1]
                            while (i_3 s< *(r14 + 0x7a0))
                            
                            rsi_3 = var_48c_1
                    
                    if (var_1c8_1 != 0)
                        sub_140a74f90(var_1c8_1)
                    
                    if (var_208_1 != 0)
                        sub_140a74f90(var_208_1)
                
                int64_t rbx_13 = sx.q(*(r13_7 + 0x68))
                int32_t var_494_3 = 0
                int32_t rax_77 = *(*(r13_7 + 0xa0) + 0xb0)
                int32_t var_48c_2 = rax_77
                var_468.d = rax_77
                int32_t temp14_1 = rbx_13.d
                
                if (temp14_1 s< 0)
                    *(r13_7 + 0x68) = 0
                    
                    if (*(r13_7 + 0x6c) s< 0)
                        sub_1405a4cf0(r13_7 + 0x60)
                    
                    memset(*(r13_7 + 0x60) + (rbx_13 << 2), 0, sx.q(neg.d(rbx_13.d)) << 2)
                    r13_7 = rdx_1
                else if (temp14_1 s> 0 && rbx_13.d != 0)
                    *(r13_7 + 0x68) = 0
                
                int32_t var_498_2 = var_498_1 - rsi_3
                
                if (*(r14 + 0x920) != neg.d(r15_2))
                    void* rdi_19 = r14 + 0x58
                    int64_t var_2b8_1 = 0
                    int32_t var_2b0_1 = 0
                    int32_t var_2ac_1 = 0xc
                    int64_t var_278_1 = 0
                    int32_t var_270_1 = 0
                    int32_t var_26c_1 = 0xc
                    void* var_410_2 = rdi_19
                    void var_318
                    sub_1407e85f0(r14, rdi_19, &var_318)
                    void* rdx_33 = *(r14 + 0x48)
                    int32_t r10_2 = var_498_2
                    void* rax_81 = (sx.q(*(r14 + 0x50)) << 4) + rdx_33
                    void* var_458_1 = rdx_33
                    
                    while (rdx_33 != rax_81)
                        int32_t r15_3 = r10_2
                        
                        if (*rdx_33 s<= r10_2)
                            r15_3 = *rdx_33
                        
                        if (r15_3 s> 0)
                            int32_t* rcx_96 = *(r14 + 0x740)
                            
                            if (rcx_96 != 0)
                                *rcx_96 = *(rdx_33 + 8)
                            
                            int32_t* rcx_97 = *(r14 + 0x748)
                            
                            if (rcx_97 != 0)
                                *rcx_97 = *(rdx_33 + 4)
                            
                            int32_t* rcx_98 = *(r14 + 0x750)
                            
                            if (rcx_98 != 0)
                                *rcx_98 = *(rdx_33 + 0xc)
                            
                            void* rcx_99 = *(r13_7 + 0xa0)
                            int32_t r9_4 = *(rcx_99 + 0xb0)
                            *(rcx_99 + 0xb0) = r15_3 + r9_4
                            void* r8_26 = *(r14 + 0x780)
                            *((sx.q((*(r8_26 + 0x660) & 1) + (*(r14 + 0xc) << 1)) << 5)
                                + *(r8_26 + 0x650) + 4) = *(r14 + 0x18)
                            *(r14 + 0x18) += r15_3
                            int32_t* rax_88 = *(r14 + 0x758)
                            
                            if (rax_88 != 0)
                                *rax_88 = r15_3
                            
                            var_4a8.b = 1
                            sub_14084a050(rdi_19, 0, r13_7, r9_4, var_4a8.b)
                            int32_t rdi_20 = 1
                            void** rbx_14 = *(r14 + 0x7a8)
                            int64_t rsi_6 = 0
                            uint64_t r13_11 = sx.q(*(r14 + 0x7b0)) << 3 u>> 3
                            
                            if (rbx_14 u> &rbx_14[sx.q(*(r14 + 0x7b0))])
                                r13_11 = 0
                            
                            if (r13_11 != 0)
                                do
                                    void* r8_28 = *rbx_14
                                    var_4a8.b = 1
                                    void* rcx_105 = *(r8_28 + 0xa0)
                                    int32_t r9_5 = *(rcx_105 + 0xb0)
                                    *(rcx_105 + 0xb0) = r9_5 + r15_3
                                    sub_14084a050(var_410_2, rdi_20, r8_28, r9_5, var_4a8.b)
                                    rdi_20 += 1
                                    rbx_14 = &rbx_14[1]
                                    rsi_6 += 1
                                while (rsi_6 != r13_11)
                                
                                r14 = arg1
                            
                            rdi_19 = r14 + 0x58
                            zmm7 = sub_14084f100(rdi_19, r15_3, &var_318)
                            
                            if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                                int64_t var_3a8
                                sub_140a2e390(&var_3a8, ===  %s Spawned %d Particles===", 
                                    Regular Spawn")
                                r13_7 = rdx_1
                                sub_1407ebce0(*(r13_7 + 0xa0), r9_4, r15_3)
                                int64_t rcx_110 = var_3a8
                                
                                if (rcx_110 != 0)
                                    sub_140a74f90(rcx_110)
                                
                                int32_t i_4 = 0
                                
                                if (*(r14 + 0x7b0) s> 0)
                                    int64_t* rsi_7 = nullptr
                                    
                                    do
                                        void* rdi_21 = *(rsi_7 + *(r14 + 0x7a8))
                                        
                                        if (rdi_21 != 0 && *(*(rdi_21 + 0xa0) + 0xb0) u> 0)
                                            int64_t var_398
                                            sub_140a2e390(&var_398, Spawn Script Event %d", 
                                                zx.q(i_4))
                                            sub_1407ebce0(*(rdi_21 + 0xa0), 0, 0xffffffff)
                                            int64_t rcx_113 = var_398
                                            
                                            if (rcx_113 != 0)
                                                sub_140a74f90(rcx_113)
                                        
                                        i_4 += 1
                                        rsi_7 = &rsi_7[1]
                                    while (i_4 s< *(r14 + 0x7b0))
                                    
                                    rdi_19 = r14 + 0x58
                            else
                                r13_7 = rdx_1
                            
                            r10_2 = var_498_2
                            rdx_33 = var_458_1
                        
                        r10_2 -= r15_3
                        rdx_33 += 0x10
                        var_498_2 = r10_2
                        var_458_1 = rdx_33
                    
                    rdx_25 = 0
                    int32_t var_480_4 = 0
                    var_48c_2 = *(*(r13_7 + 0xa0) + 0xb0)
                    
                    if (*(*(r14 + 0x788) + 0x1d8) s> 0)
                        zmm6 = 0x3f000000
                        int64_t rcx_115 = 0
                        int64_t var_470_5 = 0
                        
                        do
                            int32_t i_5 = 0
                            int32_t* r8_33 = *(r14 + 0x910) + rcx_115
                            int32_t i_13 = 0
                            int32_t* var_3e0_1 = r8_33
                            
                            if (r8_33[0x12] s> 0)
                                int64_t rdx_39 = 0
                                int64_t var_478_2 = 0
                                
                                do
                                    int32_t* rax_98 = *(r8_33 + 0x40)
                                    int32_t* rcx_116 = r8_33
                                    int32_t rbx_15 = r10_2
                                    
                                    if (rax_98 != 0)
                                        rcx_116 = rax_98
                                    
                                    if (*(rcx_116 + rdx_39) s<= r10_2)
                                        rbx_15 = *(rcx_116 + rdx_39)
                                    
                                    if (rbx_15 s> 0)
                                        var_458_1.d = *(*(r13_7 + 0xa0) + 0xb0)
                                        int32_t* rax_101 = *(r14 + 0x740)
                                        
                                        if (rax_101 != 0)
                                            *rax_101 = 0
                                        
                                        float* rax_102 = *(r14 + 0x748)
                                        
                                        if (rax_102 != 0)
                                            *rax_102 = zmm7.d f* zmm6.d
                                        
                                        int32_t* rax_103 = *(r14 + 0x750)
                                        
                                        if (rax_103 != 0)
                                            *rax_103 = 0
                                        
                                        void* rcx_117 = *(r13_7 + 0xa0)
                                        int32_t r9_7 = *(rcx_117 + 0xb0)
                                        *(rcx_117 + 0xb0) = r9_7 + rbx_15
                                        void* r8_34 = *(r14 + 0x780)
                                        *((sx.q((*(r8_34 + 0x660) & 1) + (*(r14 + 0xc) << 1)) << 5)
                                            + *(r8_34 + 0x650) + 4) = *(r14 + 0x18)
                                        *(r14 + 0x18) += rbx_15
                                        int32_t* rax_107 = *(r14 + 0x758)
                                        
                                        if (rax_107 != 0)
                                            *rax_107 = rbx_15
                                        
                                        var_4a8.b = 1
                                        sub_14084a050(rdi_19, 0, r13_7, r9_7, var_4a8.b)
                                        int32_t rsi_8 = 1
                                        void** rdi_22 = *(r14 + 0x7a8)
                                        int64_t r15_4 = 0
                                        uint64_t r13_13 = sx.q(*(r14 + 0x7b0)) << 3 u>> 3
                                        
                                        if (rdi_22 u> &rdi_22[sx.q(*(r14 + 0x7b0))])
                                            r13_13 = 0
                                        
                                        if (r13_13 != 0)
                                            do
                                                void* r8_36 = *rdi_22
                                                var_4a8.b = 1
                                                void* rcx_123 = *(r8_36 + 0xa0)
                                                int32_t r9_8 = *(rcx_123 + 0xb0)
                                                *(rcx_123 + 0xb0) = r9_8 + rbx_15
                                                sub_14084a050(var_410_2, rsi_8, r8_36, r9_8, 
                                                    var_4a8.b)
                                                rsi_8 += 1
                                                rdi_22 = &rdi_22[1]
                                                r15_4 += 1
                                            while (r15_4 != r13_13)
                                            
                                            r14 = arg1
                                        
                                        zmm6, zmm7 = sub_14084f100(r14 + 0x58, rbx_15, &var_318)
                                        
                                        if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                                            int64_t var_388
                                            sub_140a2e390(&var_388, 
                                                ===  %s Spawned %d Particles===", Event Spawn")
                                            r13_7 = rdx_1
                                            zmm6 = sub_1407ebce0(*(r13_7 + 0xa0), r9_7, rbx_15)
                                            int64_t rcx_128 = var_388
                                            
                                            if (rcx_128 != 0)
                                                sub_140a74f90(rcx_128)
                                            
                                            int32_t j_1 = 0
                                            
                                            if (*(r14 + 0x7b0) s> 0)
                                                void** rsi_9 = nullptr
                                                
                                                do
                                                    void* rbx_16 = *(rsi_9 + *(r14 + 0x7a8))
                                                    
                                                    if (rbx_16 != 0
                                                            && *(*(rbx_16 + 0xa0) + 0xb0) u> 0)
                                                        int64_t var_378
                                                        sub_140a2e390(&var_378, 
                                                            Spawn Script Event %d", zx.q(j_1))
                                                        zmm6 = sub_1407ebce0(*(rbx_16 + 0xa0), 0, 
                                                            0xffffffff)
                                                        int64_t rcx_131 = var_378
                                                        
                                                        if (rcx_131 != 0)
                                                            sub_140a74f90(rcx_131)
                                                    
                                                    j_1 += 1
                                                    rsi_9 = &rsi_9[1]
                                                while (j_1 s< *(r14 + 0x7b0))
                                        else
                                            r13_7 = rdx_1
                                        
                                        r8_33 = var_3e0_1
                                        int32_t* rcx_133 = r8_33
                                        i_5 = i_13
                                        int32_t rdx_46 = *(*(r13_7 + 0xa0) + 0xb0) - var_458_1.d
                                        int32_t* rax_115 = *(r8_33 + 0x40)
                                        var_494_3 += rdx_46
                                        
                                        if (rax_115 != 0)
                                            rcx_133 = rax_115
                                        
                                        r10_2 = var_498_2 - rdx_46
                                        var_498_2 = r10_2
                                        *(rcx_133 + var_478_2) = rdx_46
                                        rdx_39 = var_478_2
                                    
                                    i_5 += 1
                                    rdi_19 = r14 + 0x58
                                    rdx_39 += 4
                                    i_13 = i_5
                                    var_478_2 = rdx_39
                                while (i_5 s< r8_33[0x12])
                                
                                rcx_115 = var_470_5
                                rdx_25 = zx.q(var_480_4)
                            
                            rdi_19 = r14 + 0x58
                            rdx_25 = zx.q(rdx_25.d + 1)
                            rcx_115 += 0x78
                            var_480_4 = rdx_25.d
                            var_470_5 = rcx_115
                        while (rdx_25.d s< *(*(r14 + 0x788) + 0x1d8))
                    
                    if (var_278_1 != 0)
                        sub_140a74f90(var_278_1)
                    
                    if (var_2b8_1 != 0)
                        sub_140a74f90(var_2b8_1)
                
                *(*(r13_7 + 0xa0) + 0xc0) = *(*(r13_7 + 0x98) + 0xb0) - var_468.d
                *(*(r13_7 + 0xa0) + 0xc4) = *(r13_7 + 0x58)
                void* rcx_139 = *(r13_7 + 0xa0)
                
                if (0xffffffff == *(rcx_139 + 8))
                    *(rcx_139 + 8) = 0
                else
                    *(rcx_139 + 8)
                
                int64_t r9_10 = 0
                *(r13_7 + 0x98) = *(r13_7 + 0xa0)
                *(r13_7 + 0xa0) = 0
                uint64_t* r8_40 = *(r14 + 0x7a8)
                uint64_t r10_5 = sx.q(*(r14 + 0x7b0)) << 3 u>> 3
                
                if (r8_40 u> &r8_40[sx.q(*(r14 + 0x7b0))])
                    r10_5 = 0
                
                if (r10_5 != 0)
                    do
                        rdx_25 = *r8_40
                        
                        if (rdx_25 != 0)
                            void* rcx_141 = *(rdx_25 + 0xa0)
                            
                            if (rcx_141 != 0)
                                if (0xffffffff == *(rcx_141 + 8))
                                    *(rcx_141 + 8) = 0
                                else
                                    *(rcx_141 + 8)
                                
                                *(rdx_25 + 0x98) = *(rdx_25 + 0xa0)
                                *(rdx_25 + 0xa0) = 0
                        
                        r8_40 = &r8_40[1]
                        r9_10 += 1
                    while (r9_10 != r10_5)
                
                int64_t r9_11 = 0
                uint64_t* r8_41 = *(r14 + 0x798)
                uint64_t r10_7 = sx.q(*(r14 + 0x7a0)) << 3 u>> 3
                
                if (r8_41 u> &r8_41[sx.q(*(r14 + 0x7a0))])
                    r10_7 = 0
                
                if (r10_7 != 0)
                    do
                        rdx_25 = *r8_41
                        
                        if (rdx_25 != 0)
                            void* rcx_143 = *(rdx_25 + 0xa0)
                            
                            if (rcx_143 != 0)
                                if (0xffffffff == *(rcx_143 + 8))
                                    *(rcx_143 + 8) = 0
                                else
                                    *(rcx_143 + 8)
                                
                                *(rdx_25 + 0x98) = *(rdx_25 + 0xa0)
                                *(rdx_25 + 0xa0) = 0
                        
                        r8_41 = &r8_41[1]
                        r9_11 += 1
                    while (r9_11 != r10_7)
                
                if (var_494_3 u> 0)
                    if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                        int64_t var_420 = 0
                        int32_t var_418_1 = 0
                        sub_1405947f0(&var_420, 0x20)
                        int32_t rax_129 = var_418_1 + 0x20
                        var_418_1 = rax_129
                        
                        if (rax_129 s> 0)
                            sub_140594770(&var_420)
                        
                        UnDecorator::getReferenceType(var_420, Existing Data - Pre Event Alloc", 
                            0x40)
                        sub_1407ec170(r13_7, 0, 0xffffffff, &var_420)
                        int64_t rcx_149 = var_420
                        
                        if (rcx_149 != 0)
                            sub_140a74f90(rcx_149)
                    
                    rdx_25.b = 1
                    void* rax_130 = sub_1407e7150(r13_7, rdx_25.b)
                    sub_1407e68d0(r13_7, *(*(r13_7 + 0x98) + 0xb0), 1)
                    *(rax_130 + 0xb0) = *(*(r13_7 + 0x98) + 0xb0)
                
                void* rax_138 = *(r14 + 0x788)
                int32_t i_6 = 0
                int32_t i_12 = 0
                
                if (*(rax_138 + 0x1d8) s> 0)
                    int64_t* r15_5 = nullptr
                    int64_t* var_478_3 = nullptr
                    int64_t rdi_23 = 0
                    var_468 = 0
                    
                    do
                        int32_t* rsi_11 = *(r14 + 0x910) + rdi_23
                        int64_t r13_14 = sx.q(i_6) * 0x368
                        int64_t var_158_1 = 0
                        int32_t var_150_1 = 0
                        int32_t var_14c_1 = 0xc
                        int64_t var_118_1 = 0
                        int32_t var_110_1 = 0
                        int32_t var_10c_1 = 0xc
                        void var_1b8
                        sub_1407e85f0(r14, *(r14 + 0x730) + r13_14, &var_1b8)
                        
                        if (*(rsi_11 + 0x58) != 0 && rsi_11[0x12] s> 0)
                            int32_t j_2 = 0
                            int64_t r15_6 = 0
                            
                            do
                                int32_t* rax_132 = *(rsi_11 + 0x40)
                                int32_t* rcx_155 = rsi_11
                                
                                if (rax_132 != 0)
                                    rcx_155 = rax_132
                                
                                int32_t rbx_18 = *(rcx_155 + r15_6)
                                
                                if (rbx_18 s> 0)
                                    int32_t* rcx_157 = *(var_478_3 + *(r14 + 0x768))
                                    
                                    if (rcx_157 != 0)
                                        *rcx_157 = rbx_18
                                    
                                    var_4a8.b = 0
                                    sub_14084a050(*(r14 + 0x730) + r13_14, 0, rdx_1, var_48c_2, 
                                        var_4a8.b)
                                    var_4a8.b = 0
                                    sub_14084a1c0(*(r14 + 0x730) + r13_14, 1, 
                                        *(var_468 + *(r14 + 0x910) + 0x58), j_2, var_4a8.b)
                                    sub_14084f100(*(r14 + 0x730) + r13_14, rbx_18, &var_1b8)
                                    
                                    if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                                        int64_t var_368
                                        sub_140a2e390(&var_368, === Event Data %d [%d] ===", 
                                            zx.q(i_12))
                                        sub_1407ebce0(*(var_468 + *(r14 + 0x910) + 0x58), j_2, 1)
                                        int64_t rcx_167 = var_368
                                        
                                        if (rcx_167 != 0)
                                            sub_140a74f90(rcx_167)
                                        
                                        int64_t var_358
                                        sub_140a2e390(&var_358, === Event %d %d Particles ===", 
                                            zx.q(i_12))
                                        sub_1407ebce0(*(rdx_1 + 0xa0), var_48c_2, rbx_18)
                                        int64_t rcx_170 = var_358
                                        
                                        if (rcx_170 != 0)
                                            sub_140a74f90(rcx_170)
                                        
                                        *(r14 + 0x730)
                                    
                                    var_48c_2 += rbx_18
                                
                                j_2 += 1
                                r15_6 += 4
                            while (j_2 s< rsi_11[0x12])
                            
                            i_6 = i_12
                            rdi_23 = var_468
                            r15_5 = var_478_3
                        
                        if (var_118_1 != 0)
                            sub_140a74f90(var_118_1)
                        
                        if (var_158_1 != 0)
                            sub_140a74f90(var_158_1)
                        
                        rax_138 = *(r14 + 0x788)
                        i_6 += 1
                        rdi_23 += 0x78
                        i_12 = i_6
                        r15_5 = &r15_5[1]
                        var_468 = rdi_23
                        var_478_3 = r15_5
                    while (i_6 s< *(rax_138 + 0x1d8))
                    
                    r13_7 = rdx_1
                
                void* rcx_176 = *(r13_7 + 0xa0)
                
                if (rcx_176 != 0)
                    if (0xffffffff == *(rcx_176 + 8))
                        *(rcx_176 + 8) = 0
                    else
                        *(rcx_176 + 8)
                    
                    *(r13_7 + 0x98) = *(r13_7 + 0xa0)
                    *(r13_7 + 0xa0) = 0
                    rax_138 = *(r14 + 0x788)
                
                int32_t i_7 = 0
                
                if (*(rax_138 + 0x1d8) s> 0)
                    int64_t rcx_178 = 0
                    int64_t* var_448_1 = nullptr
                    int64_t var_470_6 = 0
                    int64_t* rdi_24 = nullptr
                    int64_t* var_478_4 = nullptr
                    
                    do
                        int64_t rbx_19 = *(rax_138 + 0x1d0)
                        void* rsi_12 = *(rcx_178 + *(r14 + 0x910) + 0x58)
                        int64_t r15_7 = sx.q(i_7) * 0x368
                        int64_t var_a8_1 = 0
                        int32_t var_a0_1 = 0
                        int32_t var_9c_1 = 0xc
                        int64_t var_68_1 = 0
                        int32_t var_60_1 = 0
                        int32_t var_5c_1 = 0xc
                        void var_108
                        sub_1407e85f0(r14, *(r14 + 0x730) + r15_7, &var_108)
                        
                        if (*(var_478_4 + rbx_19) != 0 && *(var_478_4 + rbx_19 + 0x28) == 0
                                && rsi_12 != 0)
                            void* r8_52 = rdx_1
                            var_468.d = *(*(r8_52 + 0x98) + 0xb0)
                            
                            if (*(rsi_12 + 0xb0) != 0)
                                int32_t j_3 = 0
                                
                                do
                                    sub_1407e7150(r8_52, 1)
                                    sub_1407e68d0(rdx_1, var_468.d, 0)
                                    int32_t rdi_25 = *(*(rdx_1 + 0x98) + 0xb0)
                                    int32_t* rcx_183 = *(var_448_1 + *(r14 + 0x768))
                                    
                                    if (rcx_183 != 0)
                                        *rcx_183 = rdi_25
                                    
                                    var_4a8.b = 1
                                    sub_14084a050(*(r14 + 0x730) + r15_7, 0, rdx_1, 0, var_4a8.b)
                                    var_4a8.b = 0
                                    sub_14084a1c0(*(r14 + 0x730) + r15_7, 1, rsi_12, j_3, var_4a8.b)
                                    sub_14084f100(*(r14 + 0x730) + r15_7, rdi_25, &var_108)
                                    r8_52 = rdx_1
                                    void* rcx_190 = *(r8_52 + 0xa0)
                                    
                                    if (0xffffffff == *(rcx_190 + 8))
                                        *(rcx_190 + 8) = 0
                                    else
                                        *(rcx_190 + 8)
                                    
                                    *(r8_52 + 0x98) = *(r8_52 + 0xa0)
                                    *(r8_52 + 0xa0) = 0
                                    
                                    if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                                        int64_t var_348
                                        sub_140a2e390(&var_348, === Event Data %d [%d] ===", 
                                            zx.q(i_7))
                                        sub_1407ebce0(rsi_12, j_3, 1)
                                        int64_t rcx_194 = var_348
                                        
                                        if (rcx_194 != 0)
                                            sub_140a74f90(rcx_194)
                                        
                                        int64_t var_338
                                        sub_140a2e390(&var_338, === Event %d %d Particles ===", 
                                            zx.q(i_7))
                                        sub_1407ebce0(*(rdx_1 + 0x98), 0, rdi_25)
                                        int64_t rcx_197 = var_338
                                        
                                        if (rcx_197 != 0)
                                            sub_140a74f90(rcx_197)
                                        
                                        *(r14 + 0x730)
                                        r8_52 = rdx_1
                                    
                                    j_3 += 1
                                while (j_3 u< *(rsi_12 + 0xb0))
                                
                                rdi_24 = var_448_1
                        
                        if (var_68_1 != 0)
                            sub_140a74f90(var_68_1)
                        
                        if (var_a8_1 != 0)
                            sub_140a74f90(var_a8_1)
                        
                        rdi_24 = &rdi_24[1]
                        rax_138 = *(r14 + 0x788)
                        rcx_178 = var_470_6 + 0x78
                        var_478_4 = &var_478_4[0xb]
                        i_7 += 1
                        var_470_6 = rcx_178
                        var_448_1 = rdi_24
                    while (i_7 s< *(rax_138 + 0x1d8))
                
                sub_140806300(r14)
                sub_140857c00(r14 + 0x58)
                sub_140857c00(r14 + 0x3c0)
                void* i_8 = *(r14 + 0x730)
                result = sx.q(*(r14 + 0x738))
                
                for (void* rdi_27 = result * 0x368 + i_8; i_8 != rdi_27; i_8 += 0x368)
                    result = sub_140857c00(i_8)
            else
                void* rcx_44 = *(r14 + 0x728)
                
                if (rcx_44 == 0)
                    goto label_14080df93
                
                int32_t r10_1 = 0
                *(rcx_44 + 0x18) = *(rdi_7 + 0x1f0) + 0x238
                int32_t rax_45 = *(r14 + 0x920)
                int32_t* rdx_19 = *(r14 + 0x728) + 0x148
                rdx_19[2] = rbx_4
                int32_t rbx_8 = 0
                *rdx_19 = rax_45
                rdx_19[1] = 0
                
                if (*(r14 + 0x24) != 0)
                label_14080ddb5:
                    int64_t rax_53 = sx.q(r10_1)
                    void* r8_15 = &rdx_19[3 + rax_53]
                    void* rcx_48 = &rdx_19[(rax_53 + 3) * 4]
                    uint64_t i_15 = zx.q(8 - r10_1)
                    uint64_t i_9
                    
                    do
                        *(rcx_48 - 4) = 0
                        r8_15 += 4
                        *(rcx_48 + 4) = 0
                        rcx_48 += 0x10
                        *(rcx_48 - 8) = rdx_19[1]
                        *(r8_15 - 4) = 0x7fffffff
                        i_9 = i_15
                        i_15 -= 1
                    while (i_9 != 1)
                else
                    int32_t i_10 = 0
                    
                    if (*(r14 + 0x50) s<= 0)
                        goto label_14080ddb5
                    
                    int32_t* rcx_45 = nullptr
                    void* rdi_8 = &rdx_19[3]
                    void* r9_1 = &rdx_19[0xc]
                    
                    do
                        int64_t r8_13 = *(r14 + 0x48)
                        int32_t rax_46 = *(rcx_45 + r8_13)
                        
                        if (rax_46 s> 0)
                            if (r10_1 u< 8)
                                rbx_8 += rax_46
                                
                                if (rbx_8 s> data_14396ee78)
                                    break
                                
                                r10_1 += 1
                                *(r9_1 - 4) = *(rcx_45 + r8_13 + 8)
                                *r9_1 = *(rcx_45 + r8_13 + 4)
                                *(r9_1 + 4) = *(rcx_45 + r8_13 + 0xc)
                                *(r9_1 + 8) = rdx_19[1]
                                rdx_19[1] += *(rcx_45 + r8_13)
                                *rdi_8 = rdx_19[1]
                                rdi_8 += 4
                                rax_46 = *(rcx_45 + r8_13)
                                r9_1 += 0x10
                            else if (rax_46 s> 0)
                                break
                        
                        *(r14 + 0x18) += rax_46
                        i_10 += 1
                        rcx_45 = &rcx_45[4]
                    while (i_10 s< *(r14 + 0x50))
                    
                    if (r10_1 u< 8)
                        goto label_14080ddb5
                
                if (data_143ce2aa0 != 0 || *(rax_3 + 0x32) != 0)
                    rdx_19.b = 1
                    sub_140824030(r14 + 0x80, rdx_19.b)
                    sub_140824030(r14 + 0x3e8, 1)
                    sub_140824030(*(r14 + 0x728) + 0x58, 0)
                
                void* rcx_54 = *(r14 + 0x728)
                int32_t r12_1
                r12_1.b = *(rcx_54 + 0x250) != 0
                *(rcx_54 + 0x20) = divs.dp.d(sx.q(*(rcx_54 + 0x114)), r12_1 + 1)
                sub_1407e9120(*(r14 + 0x728) + 0x20)
                sub_140857c00(r14 + 0x58)
                sub_140857c00(r14 + 0x3c0)
                void* i_11 = *(r14 + 0x730)
                
                for (void* rdi_10 = sx.q(*(r14 + 0x738)) * 0x368 + i_11; i_11 != rdi_10; 
                        i_11 += 0x368)
                    sub_140857c00(i_11)
                
                void* rax_59 = *(r14 + 0x788)
                *(r14 + 0x28) = *(rax_59 + 0xdc)
                *(r14 + 0x38) = *(rax_59 + 0xec)
                result = zx.q(*(rax_59 + 0xf4))
                *(r14 + 0x40) = result.d
        else
            result = sub_140808700(rdx_1)
    else
        result = sub_140808700(*(r14 + 0x778))

__security_check_cookie(result_1 ^ &var_4c8)
return result
