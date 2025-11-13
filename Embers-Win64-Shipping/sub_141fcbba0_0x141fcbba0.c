// 函数: sub_141fcbba0
// 地址: 0x141fcbba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a28
int64_t rax_1 = __security_cookie ^ &var_a28
void* r15 = arg1
int64_t* rcx = *(arg1 + 0x770)
uint128_t zmm6 = arg2
int32_t var_9cc = zmm6.d
int64_t* result = (*(*rcx + 0x20))(rcx)

if (result != 0)
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int64_t performanceCount_4
    QueryPerformanceCounter(&performanceCount_4)
    int128_t zmm11
    zmm11.q = float.d(performanceCount_4)
    int64_t r13_1 = 0
    uint128_t zmm0
    zmm0.d = (*(r15 + 0xc50)).d f* 0.00100000005f
    zmm11.q = zmm11.q f* data_143d796f8
    uint128_t zmm14 = 0x4170000000000000
    uint128_t zmm8 = _mm_cvtps_pd(zmm0.q)
    zmm11.q = zmm11.q f+ zmm14.q
    int64_t var_9c8_1 = zmm8.q
    char* var_a00
    
    if (*(r15 + 0xe28) == 0)
        void* rax_3 = *(r15 + 0x140)
        int64_t* i = *(rax_3 + 0x98)
        
        for (void* rsi_1 = &i[sx.q(*(rax_3 + 0xa0))]; i != rsi_1; i = &i[1])
            int64_t* rbx_1 = *i
            
            if (rbx_1 != 0 && (*(*rbx_1 + 0x268))(rbx_1) != 0 && (*(*rbx_1 + 0x278))(rbx_1) == 0)
                int32_t var_9b8 = 0xffffffff
                int32_t var_9b4_1 = 0
                zmm0 = sub_140d3a3a0(&var_9b8, rbx_1)
                void var_880
                
                if (*sub_141fb3110(r15 + 0xa68, &var_880, var_9b8.q) == 0xffffffff)
                    int32_t var_780
                    sub_14090a150(r15 + 0xa68, &var_780)
                    int64_t rax_10 = var_9b8.q
                    char* var_a00_1 = nullptr
                    int64_t* var_778
                    *var_778 = rax_10
                    var_778[1].d = 0xffffffff
                    void var_87c
                    sub_141fb0220(r15 + 0xa68, &var_87c, (rax_10 u>> 0x20).d ^ rax_10.d, var_778, 
                        var_780, var_a00_1)
                    int32_t var_770
                    sub_14090a150(r15 + 0xab8, &var_770)
                    int64_t rax_12 = var_9b8.q
                    var_a00 = nullptr
                    int64_t* var_768
                    *var_768 = rax_12
                    var_768[1].d = 0xffffffff
                    void var_878
                    zmm0 = sub_141fb0220(r15 + 0xab8, &var_878, (rax_12 u>> 0x20).d ^ rax_12.d, 
                        var_768, var_770, var_a00)
    
    char* rbx_2 = *(r15 + 0x10f0)
    *(r15 + 0x748) += 1
    *(r15 + 0x418) += 1
    
    if (not(0.0 f== *(rbx_2 + 0x10)))
        *(rbx_2 + 4) += 1
        *rbx_2 = 0
        int64_t performanceCount_3
        QueryPerformanceCounter(&performanceCount_3)
        arg2.q = float.d(performanceCount_3)
        zmm0 = _mm_cvtps_pd(data_143a2dbc4.q)
        arg2.q = arg2.q f* data_143d796f8
        arg2.q = arg2.q f+ zmm14.q
        arg2.q = arg2.q f- *(rbx_2 + 0x10)
        
        if (not(arg2.q f<= zmm0.q))
            zmm0 = sub_141fc50c0(rbx_2)
    
    int64_t* rdi_1 = **(r15 + 0x90)
    (*(*rdi_1 + 0x2a8))(rdi_1, 0)
    int64_t* rcx_13 = data_143f5b298
    int64_t r8_8
    r8_8.b = 1
    (*(*rcx_13 + 0x2b0))(rcx_13, zmm6, r8_8)
    uint128_t zmm15 = 0x3f800000
    uint128_t zmm9 = zx.o(0)
    
    if (not(zmm0.d f== 0f))
        zmm6.d = 1f f/ zmm0.d
        var_9cc = zmm6.d
    
    void* rsi_2 = r15 + 0xc60
    void* r14_2 = *(r15 + 0x6f0) + 0x50
    void* var_9e0_1 = r14_2
    int32_t rcx_15 = *(r14_2 + 8) - *(r14_2 + 0x34)
    *(rsi_2 + 8) = 0
    
    if (rcx_15 s> *(rsi_2 + 0xc))
        sub_1405c5660(rsi_2, rcx_15)
    
    zmm0 = zx.o(data_143dbb1f8.q)
    int32_t rax_17 = data_143dbb200
    uint64_t var_8f8 = zmm0.q
    uint64_t var_908 = zmm0.q
    int32_t var_8f0_1 = rax_17
    int32_t var_900_1 = rax_17
    int64_t* rax_18 = sub_140d3c6e0(r15 + 0xc58)
    int64_t* var_9c0_1 = rax_18
    void* const var_9a8_1
    
    if (rax_18 != 0)
    label_141fcbf6d:
        int64_t rdx_9 = *rax_18
        void* rax_19 = (*(rdx_9 + 0x698))(rax_18, rdx_9)
        var_9a8_1 = rax_19
        
        if (rax_19 != 0)
            void* rcx_20 = *(rax_19 + 0x130)
            int32_t* rax_20
            
            if (rcx_20 == 0)
                int32_t var_86c_1 = data_143dbb200
                uint64_t var_874
                rax_20 = &var_874
                var_874 = data_143dbb1f8.q
            else
                arg2 = *(rcx_20 + 0x1d0)
                int32_t var_8c0
                rax_20 = &var_8c0
                var_8c0 = arg2.d
                zmm0 = _mm_shuffle_ps(arg2, arg2, 0x55)
                uint128_t var_728_1 = arg2
                int32_t var_8b8_1 = _mm_shuffle_ps(arg2, arg2, 0xaa).d
                int32_t var_8bc_1 = zmm0.d
            
            int32_t rax_22 = rax_20[2]
            var_8f8 = *rax_20
            int32_t var_8f0_2 = rax_22
            void* rbx_3 = *(rax_19 + 0x130)
            int64_t* rax_27
            
            if (rbx_3 == 0)
                int32_t var_854_1 = data_143dbb210
                uint64_t var_85c
                rax_27 = &var_85c
                var_85c = data_143dbb208
            else
                arg2 = *(rbx_3 + 0x1c0)
                uint32_t temp0_6 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_3 + 0x180), arg2, 4))
                uint128_t var_758 = arg2
                
                if (temp0_6 != 0)
                    *(rbx_3 + 0x180) = arg2
                    void var_73c
                    int32_t* rax_24 = sub_140adf5d0(&var_758, &var_73c)
                    *(rbx_3 + 0x190) = *rax_24
                    *(rbx_3 + 0x198) = rax_24[2]
                
                int32_t var_860_1 = *(rbx_3 + 0x198)
                uint64_t var_868
                rax_27 = &var_868
                var_868 = *(rbx_3 + 0x190)
            
            int32_t rax_29 = rax_27[1].d
            uint64_t var_850 = *rax_27
            int32_t var_848_1 = rax_29
            void var_748
            int32_t* rax_30
            rax_30, zmm8, zmm9, zmm11, zmm14 = sub_140ae4210(&var_850, &var_748)
            var_908 = *rax_30
            int32_t var_900_2 = rax_30[2]
    else
        rax_18 = sub_14226e280(rdi_1, *(r15 + 0x140))
        var_9c0_1 = rax_18
        
        if (rax_18 != 0)
            goto label_141fcbf6d
        
        var_9a8_1 = nullptr
    
    int64_t rbx_4 = data_143f3d528
    int64_t rcx_23
    
    if (data_143de5480 == 0)
        rcx_23 = 0
    else
        rcx_23.b = GetCurrentThreadId() != data_143de5470
    
    uint64_t rax_37 = zx.q(*(r15 + 0xc70))
    int32_t rcx_24 = *(rbx_4 + (rcx_23 << 2))
    char var_9e6_1 = rax_37.b
    char var_9e7_1
    
    if (rax_37.b == 0)
        var_9e7_1 = 0
    
    if (rax_37.b != 0 || rcx_24 == 0)
        var_9e7_1 = 1
    
    int32_t rbx_5 = rdi_1[0x27e].d
    void* r9_3 = &rdi_1[0x27b]
    int32_t var_7a8_1 = 0x7fffffff
    int32_t rcx_25 = 0
    int32_t var_928_1 = 0
    int32_t r10_1 = 0
    int32_t var_924_1 = 1
    int32_t r8_9 = 0
    void* var_920_1 = r9_3
    int32_t var_918_1 = 0xffffffff
    int64_t var_914_1 = 0
    int128_t zmm12 = _mm_cvtps_pd((*(r15 + 0x10e8)).q)
    int128_t var_7a0
    __builtin_memset(&var_7a0, 0, 0x18)
    zmm12.q = zmm12.q f* zmm8.q
    
    if (rbx_5 != 0)
        void* rax_33 = *(r9_3 + 0x10)
        r10_1 = rbx_5
        
        if (rax_33 != 0)
            r9_3 = rax_33
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rbx_5 - 1)
        int32_t rdx_15 = *r9_3
        
        if (rdx_15 != 0)
        label_141fcc1ec:
            int32_t rax_40 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_1
            int32_t temp0_8
            temp0_8, rflags_1 = _bit_scan_reverse(rax_40)
            int32_t var_924_2 = rax_40
            int32_t var_820_1 = temp0_8
            int32_t rax_41
            
            if (rax_40 == 0)
                rax_41 = 0x20
            else
                rax_41 = 0x1f - temp0_8
            
            rax_37 = zx.q(r8_9 - rax_41 + 0x1f)
            
            if (rax_37.d s> rbx_5)
                rax_37 = zx.q(rbx_5)
            
            r10_1 = rax_37.d
            var_914_1.d = rax_37.d
        else
            while (true)
                int64_t rdx_16 = sx.q(rcx_25)
                r8_9 += 0x20
                rcx_25 += 1
                var_914_1:4.d = r8_9
                var_928_1 = rcx_25
                
                if (rdx_16.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    var_914_1.d = rbx_5
                    break
                
                int32_t var_918_2 = 0xffffffff
                rdx_15 = *(r9_3 + (rdx_16 << 2) + 4)
                
                if (rdx_15 != 0)
                    goto label_141fcc1ec
    
    void* var_7b0_1 = &rdi_1[0x279]
    uint128_t var_8e0 = var_928_1.o
    int64_t var_8d0_1 = 0xffffffff
    int64_t var_7b8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    arg2 = var_8e0
    uint128_t var_7d8 = (&rdi_1[0x279]).o
    uint128_t var_7c8_1 = arg2
    
    if (r10_1 s< rbx_5)
        int32_t i_1 = var_7c8_1:0xc.d
        
        do
            void* const rcx_32
            
            if (*(r15 + 0x330) == *(r15 + 0x35c))
            label_141fcc2f0:
                rcx_32 = nullptr
            else
                int64_t r9_5 = sx.q(*(*var_7d8.q + sx.q(i_1) * 0xc))
                void* r8_11 = r15 + 0x360
                void* rdx_17 = *(r8_11 + 8)
                
                if (rdx_17 != 0)
                    r8_11 = rdx_17
                
                int32_t rax_45 = *(r8_11 + (((sx.q(*(r15 + 0x370)) - 1) & r9_5) << 2))
                
                if (rax_45 == 0xffffffff)
                label_141fcc2f0_1:
                    rcx_32 = nullptr
                else
                    int64_t r8_12 = *(r15 + 0x328)
                    
                    while (true)
                        int64_t rdx_18 = sx.q(rax_45) * 3
                        rcx_32 = r8_12 + (rdx_18 << 3)
                        
                        if (*(r8_12 + (rdx_18 << 3)) == r9_5.d)
                            break
                        
                        rax_45 = *(rcx_32 + 0x10)
                        
                        if (rax_45 == 0xffffffff)
                            goto label_141fcc2f0_2
                    
                    if (rax_45 == 0xffffffff)
                    label_141fcc2f0_2:
                        rcx_32 = nullptr
            
            int32_t* rcx_33 = *(rcx_32 + 8)
            int32_t* var_790_1 = rcx_33
            int64_t var_788_1
            
            if (*(r15 + 0xe28) == 0)
                var_788_1 = 0
            else
                var_788_1 = sub_140d3c6e0(rcx_33)
            
            int64_t rbx_6 = sx.q(*(rsi_2 + 8))
            int32_t rax_47 = (rbx_6 + 1).d
            *(rsi_2 + 8) = rax_47
            
            if (rax_47 s> *(rsi_2 + 0xc))
                sub_1405c4ec0(rsi_2)
            
            rax_37 = *rsi_2
            int64_t rcx_35 = rbx_6 * 5
            zmm0 = var_7a0
            *(rax_37 + (rcx_35 << 3)) = var_7a8_1.o
            *(rax_37 + (rcx_35 << 3) + 0x10) = zmm0
            *(rax_37 + (rcx_35 << 3) + 0x20) = var_788_1
            
            if (not(zmm8.q f<= 0.0))
                int64_t performanceCount_5
                QueryPerformanceCounter(&performanceCount_5)
                zmm0.q = float.d(performanceCount_5)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ zmm14.q
                zmm0.q = zmm0.q f- zmm11.q
            
            if (zmm8.q f<= 0.0 || zmm0.q f<= zmm12.q)
                rax_37.b = 0
            else
                rax_37.b = 1
            
            if (rax_37.b != 0)
                break
            
            var_7c8_1:8.d &= not.d(var_7d8:0xc.d)
            sub_14059bdd0(&var_7d8:8)
            i_1 = var_7c8_1:0xc.d
        while (i_1 s< *(var_7c8_1.q + 0x18))
    
    if (not(zmm8.q f<= 0.0))
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm0.q = float.d(performanceCount_1)
        zmm0.q = zmm0.q f* data_143d796f8
        zmm0.q = zmm0.q f+ zmm14.q
        zmm0.q = zmm0.q f- zmm11.q
    
    if (zmm8.q f<= 0.0 || zmm0.q f<= zmm12.q)
        rax_37.b = 0
    else
        rax_37.b = 1
    
    char var_9e8
    int64_t performanceCount
    bool var_950
    
    if (rax_37.b == 0)
        int64_t rbx_7 = data_143f3d4b0
        void* i_4 = nullptr
        int32_t var_500_1 = 0
        int32_t var_4fc_1 = 0x10
        int64_t rcx_39
        
        if (data_143de5480 == 0)
            rcx_39 = 0
        else
            rcx_39.b = GetCurrentThreadId() != data_143de5470
        
        char var_9e5_1
        int64_t* var_9a0
        void var_708
        
        if (*(rbx_7 + (rcx_39 << 2)) s<= 0)
            var_9e5_1 = 0
        else
            int64_t* rcx_40 = *(*(r15 + 0x140) + 0x38)
            
            if (rcx_40 == 0)
                var_9e5_1 = 0
            else if ((*(*rcx_40 + 0x368))(rcx_40) == 0)
                var_9e5_1 = 0
            else
                int64_t rsi_3 = 0
                var_9e5_1 = 1
                void* rcx_41 = *(*(r15 + 0x140) + 0x38)
                int64_t* rdi_3 = *(rcx_41 + 0x90)
                uint64_t r14_4 = sx.q(*(rcx_41 + 0x98)) << 3 u>> 3
                
                if (rdi_3 u> &rdi_3[sx.q(*(rcx_41 + 0x98))])
                    r14_4 = 0
                
                if (r14_4 != 0)
                    do
                        void* rdx_20 = *rdi_3
                        int64_t* rcx_42 = *(rdx_20 + 0x30)
                        
                        if (rcx_42 == 0)
                            var_9a0 = *(rdx_20 + 0x98)
                        else
                            var_9a0 = rcx_42
                        
                        void* rcx_43
                        
                        if (rcx_42 == 0)
                            rcx_43 = *(rdx_20 + 0x98)
                            void* var_998_2 = rcx_43
                        else
                            void* rax_59 = (*(*rcx_42 + 0x698))()
                            rcx_43 = rax_59
                            void* var_998_1 = rax_59
                        
                        int64_t* rax_64
                        
                        if (rcx_43 == 0)
                            int32_t var_824_1 = data_143dbb200
                            uint64_t var_82c
                            rax_64 = &var_82c
                            var_82c = data_143dbb1f8.q
                        else
                            void* rax_60 = *(rcx_43 + 0x130)
                            int32_t* rax_61
                            
                            if (rax_60 == 0)
                                int32_t var_83c_1 = data_143dbb200
                                uint64_t var_844
                                rax_61 = &var_844
                                var_844 = data_143dbb1f8.q
                            else
                                arg2 = *(rax_60 + 0x1d0)
                                int32_t var_8b4
                                rax_61 = &var_8b4
                                var_8b4 = arg2.d
                                zmm0 = _mm_shuffle_ps(arg2, arg2, 0x55)
                                uint128_t var_718_1 = arg2
                                int32_t var_8ac_1 = _mm_shuffle_ps(arg2, arg2, 0xaa).d
                                int32_t var_8b0_1 = zmm0.d
                            
                            int32_t var_830_1 = rax_61[2]
                            uint64_t var_838
                            rax_64 = &var_838
                            var_838 = *rax_61
                        
                        int32_t var_990
                        var_990.q = *rax_64
                        int32_t var_988_1 = rax_64[1].d
                        
                        if (rcx_43 != 0)
                            int64_t rbx_8 = sx.q(var_500_1)
                            int32_t rax_67 = (rbx_8 + 1).d
                            var_500_1 = rax_67
                            
                            if (rax_67 s> var_4fc_1)
                                sub_1405a4e80(&var_708, rbx_8.d)
                            
                            void* i_5 = &var_708
                            
                            if (i_4 != 0)
                                i_5 = i_4
                            
                            int64_t rax_70 = rbx_8 << 5
                            *(i_5 + rax_70) = var_9a0.o
                            *(i_5 + rax_70 + 0x10) = var_990.o
                        
                        rdi_3 = &rdi_3[1]
                        rsi_3 += 1
                    while (rsi_3 != r14_4)
                
                r14_2 = var_9e0_1
        
        int64_t rbx_9 = data_143f3d4c8
        int64_t rcx_45
        
        if (data_143de5480 == 0)
            rcx_45 = 0
        else
            rcx_45.b = GetCurrentThreadId() != data_143de5470
        
        zmm6 = *(rbx_9 + (rcx_45 << 2))
        
        if (zmm6.d f<= zmm9.d)
            zmm6 = zmm9
        else
            zmm6.d = zmm6.d f* zmm6.d
        
        int64_t rbx_10 = data_143f3d4e0
        int64_t rcx_46
        
        if (data_143de5480 == 0)
            rcx_46 = 0
        else
            rcx_46.b = GetCurrentThreadId() != data_143de5470
        
        zmm0 = *(rbx_10 + (rcx_46 << 2))
        
        if (zmm0.d f<= zmm9.d)
            zmm9 = 0x3f000000
        else
            zmm9.d = 1f f/ zmm0.d
        
        void* r14_5 = r14_2 + 0x10
        int32_t rsi_4 = 0x80
        void** var_f8_1 = nullptr
        int32_t var_f0_1 = 0
        int32_t var_ec_1 = 0x80
        int32_t rcx_47 = 0
        int32_t r11_2 = *(r14_5 + 0x18)
        int32_t r8_13 = 0
        int32_t var_808_1 = 0
        var_9e8 = *(r15 + 0xe29)
        int32_t var_970_1 = 0
        int32_t var_96c_1 = 1
        void* var_968_1 = r14_5
        int32_t var_960_1 = 0xffffffff
        int64_t var_95c_1 = 0
        int128_t var_800_1
        __builtin_memset(&var_800_1, 0, 0x18)
        
        if (r11_2 != 0)
            void* rax_74 = *(r14_5 + 0x10)
            void* r9_6 = r14_5
            
            if (rax_74 != 0)
                r9_6 = rax_74
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r11_2 - 1)
            int32_t rdx_24 = *r9_6
            
            if (rdx_24 != 0)
            label_141fcc768:
                int32_t rax_81 = neg.d(rdx_24) & rdx_24
                uint64_t rflags_2
                int32_t temp0_12
                temp0_12, rflags_2 = _bit_scan_reverse(rax_81)
                int32_t var_96c_2 = rax_81
                int32_t var_81c_1 = temp0_12
                int32_t rax_82
                
                if (rax_81 == 0)
                    rax_82 = 0x20
                else
                    rax_82 = 0x1f - temp0_12
                
                var_95c_1.d = r8_13 - rax_82 + 0x1f
                
                if (r8_13 - rax_82 + 0x1f s> r11_2)
                    var_95c_1.d = r11_2
            else
                while (true)
                    int64_t rdx_25 = sx.q(rcx_47)
                    r8_13 += 0x20
                    rcx_47 += 1
                    var_95c_1:4.d = r8_13
                    var_970_1 = rcx_47
                    
                    if (rdx_25.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_24 = *(r9_6 + (rdx_25 << 2) + 4)
                    var_960_1 = 0xffffffff
                    
                    if (rdx_24 != 0)
                        goto label_141fcc768
                
                var_95c_1.d = r11_2
        
        void* r10_2 = var_9e0_1
        var_950.q = r10_2
        double zmm2[0x2] = var_960_1.o
        int32_t rdx_26 = *(r10_2 + 0x28)
        int32_t var_948
        var_948.o = var_970_1.o
        int32_t r8_16 = rdx_26 s>> 5
        zmm0 = var_950.o
        var_9a0.d = r8_16
        int64_t var_938
        var_938.o = zmm2
        int32_t rbx_11 = 0xffffffff << (rdx_26.b & 0x1f)
        int32_t r9_8 = rdx_26 & 0xffffffe0
        void* var_998_3 = r14_5
        var_8d0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_990_1 = rbx_11
        int32_t var_98c_1 = rdx_26
        int32_t var_988_2 = r9_8
        void* var_8e8_1
        var_8e8_1.o = zmm0
        int32_t var_940
        var_8e0 = var_940.o
        
        if (rdx_26 != r11_2)
            void* rax_84 = *(r14_5 + 0x10)
            void* r10_3 = r14_5
            
            if (rax_84 != 0)
                r10_3 = rax_84
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r11_2 - 1)
            int32_t rdx_30 = *(r10_3 + (sx.q(r8_16) << 2)) & rbx_11
            int32_t var_98c_3
            
            if (rdx_30 != 0)
            label_141fcc85a:
                int32_t rax_91 = neg.d(rdx_30) & rdx_30
                uint64_t rflags_3
                int32_t temp0_14
                temp0_14, rflags_3 = _bit_scan_reverse(rax_91)
                var_9a0:4.d = rax_91
                int32_t var_818_1 = temp0_14
                int32_t r12_1
                
                if (rax_91 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_14
                
                int32_t var_98c_2 = r9_8 - r12_1 + 0x1f
                
                if (r9_8 - r12_1 + 0x1f s> r11_2)
                    var_98c_3 = r11_2
            else
                while (true)
                    int64_t rcx_52 = sx.q(r8_16)
                    r9_8 += 0x20
                    r8_16 += 1
                    int32_t var_988_3 = r9_8
                    var_9a0.d = r8_16
                    
                    if (rcx_52.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_30 = *(r10_3 + (rcx_52 << 2) + 4)
                    var_990_1 = 0xffffffff
                    
                    if (rdx_30 != 0)
                        goto label_141fcc85a
                
                var_98c_3 = r11_2
            r10_2 = var_9e0_1
        
        uint64_t performanceCount_6 = var_990_1.q u>> 0x20
        performanceCount = performanceCount_6
        void var_4f8
        
        while (true)
            int64_t rcx_54 = sx.q(var_8d0_1:4.d)
            
            if (rcx_54.d != performanceCount_6.d || var_8e0:8.q != r14_5)
                performanceCount_6.b = 0
            else
                performanceCount_6.b = 1
            
            if (performanceCount_6.b == 0 || var_8e8_1 != r10_2)
                performanceCount_6.b = 1
            else
                performanceCount_6.b = 0
            
            if (performanceCount_6.b == 0)
                break
            
            uint64_t rax_94 = *var_8e8_1
            zmm0 = _mm_cvtps_pd((*(r15 + 0x750)).q)
            int64_t* r12_2 = *(rax_94 + rcx_54 * 0x18)
            
            if (zmm0.q f<= r12_2[2])
            label_141fcccb9:
                
                if (var_9c8_1 f<= 0.0)
                    rax_94.b = 0
                else
                    int64_t performanceCount_2
                    QueryPerformanceCounter(&performanceCount_2)
                    zmm0.q = float.d(performanceCount_2)
                    zmm0.q = zmm0.q f* data_143d796f8
                    zmm0.q = zmm0.q f+ zmm14.q
                    zmm0.q = zmm0.q f- zmm11.q
                    
                    if (zmm0.q f<= zmm12.q)
                        rax_94.b = 0
                    else
                        rax_94.b = 1
                
                if (rax_94.b != 0)
                    break
            else
                int64_t* r14_6 = *r12_2
                int32_t rax_95 = *(r14_6 + 0xc)
                void* const rax_99
                
                if (rax_95 s>= data_143e1d9b4)
                    rax_99 = nullptr
                else
                    uint32_t rdx_32 = zx.d(rax_95.w)
                    
                    if (rax_95 s< 0)
                        rax_95 += 0xffff
                        rdx_32 -= 0x10000
                    
                    rax_99 = *(data_143e1d9a0 + (sx.q(rax_95 s>> 0x10) << 3)) + sx.q(rdx_32) * 0x18
                
                int32_t rax_102
                int64_t rbx_12
                bool cond:31_1
                
                if (((*(rax_99 + 8) u>> 0x1d).b & 1) == 0
                        && (*(r14_6 + 0x5f) != 0 || (r14_6[0xb].b & 0x40) != 0))
                    if (sub_14216b7d0(r14_6) != 0)
                        rbx_12 = sx.q(var_f0_1)
                        rax_102 = (rbx_12 + 1).d
                        cond:31_1 = rax_102 s<= var_ec_1
                        goto label_141fcc95d
                    
                    zmm0 = zx.o(r12_2[5])
                    
                    if (zmm0.q f< 0x3f1a36e2e0000000)
                        rsi_4.b = 1
                    else
                        arg2.q = *(r15 + 0x218) f- zmm0.q
                        
                        if (arg2.q f< _mm_cvtps_pd((*(r15 + 0x70)).q).q)
                            rsi_4.b = 1
                        else
                            rsi_4.b = 0
                    
                    int32_t var_9f8
                    
                    if (var_9e5_1 == 0 || (r14_6[0xb].b & 8) != 0 || r14_6 == rdi_1[6]
                        || *(r12_2 + 0xd4) u>= *(r15 + 0x418))
                    label_141fcca9c:
                        r13_1.b = 1
                    label_141fccaa1:
                        char* rbx_13 = nullptr
                        
                        if (var_9e7_1 != 0)
                            int64_t var_8a0
                            sub_140d3a3a0(&var_8a0, r14_6)
                            
                            if (rdi_1[0x26f].d == *(rdi_1 + 0x13a4))
                            labelid_98:
                                rbx_13 = nullptr
                            else
                                int64_t rdx_37 = var_8a0
                                void* r9_11 = &rdi_1[0x275]
                                void* r8_18 = *(r9_11 + 8)
                                uint32_t r11_4 = (rdx_37 u>> 0x20).d
                                
                                if (r8_18 != 0)
                                    r9_11 = r8_18
                                
                                int32_t rcx_66 = *(r9_11 + (((sx.q(rdx_37.d) ^ sx.q(r11_4))
                                    & (sx.q(rdi_1[0x277].d) - 1)) << 2))
                                
                                if (rcx_66 == 0xffffffff)
                                label_141fccb4c:
                                    rbx_13 = nullptr
                                else
                                    int64_t r10_5 = rdi_1[0x26e]
                                    int64_t r8_19
                                    
                                    while (true)
                                        r8_19 = sx.q(rcx_66)
                                        int64_t r9_12 = r8_19 * 3
                                        uint64_t rax_114 = *(r10_5 + (r9_12 << 3))
                                        
                                        if (rax_114.d != rdx_37.d || (rax_114 u>> 0x20).d != r11_4)
                                            rax_114.b = 0
                                        else
                                            rax_114.b = 1
                                        
                                        if (rax_114.b != 0)
                                            break
                                        
                                        rcx_66 = *(r10_5 + (r9_12 << 3) + 0x10)
                                        
                                        if (rcx_66 == 0xffffffff)
                                            goto label_141fccb4c_2
                                    
                                    if (rcx_66 == 0xffffffff)
                                    label_141fccb4c_1:
                                        rbx_13 = nullptr
                                    else
                                        void* rbx_14 = r10_5 + r8_19 * 0x18
                                        
                                        if (rbx_14 == 0)
                                        label_141fccb4c_2:
                                            rbx_13 = nullptr
                                        else
                                            rbx_13 = *(rbx_14 + 8)
                            
                            if (rcx_24 == 0 && rbx_13 != 0 && *(r14_6 + 0xf1) u> 1
                                    && (rbx_13[0x30] & 0x84) == 0)
                                (*(*rbx_13 + 0x2d8))(rbx_13)
                        
                        int64_t rax_116 = r14_6[4]
                        var_800_1.q = r12_2
                        var_800_1:8.q = rbx_13
                        
                        if (var_9e6_1 != 0)
                            if (rbx_13 == 0)
                                zmm0 = _mm_cvtps_pd((*(r15 + 0x6c)).q)
                            else
                                zmm0.q = *(r15 + 0x218) f- *(rbx_13 + 0x88)
                            
                            int64_t rax_118 = *r14_6
                            zmm0 = _mm_cvtpd_ps(zmm0)
                            var_9f8 = zmm0.d
                            var_a00 = rbx_13
                            int32_t var_a08
                            var_a08.q = var_9a8_1
                            (*(rax_118 + 0x3c8))(r14_6, &var_8f8, &var_908, var_9c0_1, var_a08, 
                                var_a00, var_9f8)
                            zmm0.d = zmm0.d f* 65536f
                            zmm0.d = zmm0.d f+ zmm0.d
                            zmm0.d = zmm0.d f+ 0.5f
                            var_808_1 = int.d(zmm0.d) s>> 1
                        
                        int64_t rbx_15 = sx.q(*(r15 + 0xc68))
                        int32_t rax_121 = (rbx_15 + 1).d
                        *(r15 + 0xc68) = rax_121
                        
                        if (rax_121 s> *(r15 + 0xc6c))
                            sub_1405c4ec0(r15 + 0xc60)
                        
                        int64_t rax_122 = *(r15 + 0xc60)
                        int64_t rcx_71 = rbx_15 * 5
                        arg2 = var_800_1
                        *(rax_122 + (rcx_71 << 3)) = var_808_1.o
                        *(rax_122 + (rcx_71 << 3) + 0x10) = arg2
                        *(rax_122 + (rcx_71 << 3) + 0x20) = rax_116
                        r12_2[0x1a].b &= 0xfb
                        rax_94.b = var_9e8 & 1
                        rax_94.b <<= 2
                        r12_2[0x1a].b |= rax_94.b
                        
                        if (r13_1.b != 0)
                            zmm0 = zx.o(*(r15 + 0x218))
                            r12_2[5] = zmm0.q
                            *(r12_2 + 0x24) = _mm_cvtpd_ps(zmm0).d
                        
                        r13_1 = 0
                        goto label_141fcccb9
                    
                    void* i_2 = &var_708
                    r13_1.b = 0
                    
                    if (i_4 != 0)
                        i_2 = i_4
                    
                    for (void* rdi_6 = (sx.q(var_500_1) << 5) + i_2; i_2 != rdi_6; i_2 += 0x20)
                        if ((*(*r14_6 + 0x468))(r14_6, *i_2, *(i_2 + 8), i_2 + 0x10, zmm6.d, 
                                var_a00, var_9f8) != 0)
                            goto label_141fcca9c
                    
                    if (rsi_4.b != 0)
                        goto label_141fccaa1
                    
                    zmm0.d = zmm9.d f+ *(r15 + 0x750)
                    zmm0.q = fconvert.d(zmm0.d)
                    r12_2[2] = zmm0.q
                else
                    rbx_12 = sx.q(var_f0_1)
                    rax_102 = (rbx_12 + 1).d
                    cond:31_1 = rax_102 s<= rsi_4
                label_141fcc95d:
                    var_f0_1 = rax_102
                    
                    if (not(cond:31_1))
                        sub_141fc5400(&var_4f8, rbx_12.d)
                    
                    void** rcx_59 = &var_4f8
                    
                    if (var_f8_1 != 0)
                        rcx_59 = var_f8_1
                    
                    rcx_59[rbx_12] = r14_6
            
            var_8d0_1.d &= not.d(var_8e0:4.d)
            sub_14059bdd0(&var_8e0)
            performanceCount_6 = performanceCount
            r13_1 = 0
            r10_2 = var_9e0_1
            rsi_4 = var_ec_1
            r14_5 = var_968_1
        
        void** rbx_16 = &var_4f8
        zmm15 = 0x3f800000
        int64_t rdi_7 = 0
        
        if (var_f8_1 != 0)
            rbx_16 = var_f8_1
        
        uint64_t rsi_6 = sx.q(var_f0_1) << 3 u>> 3
        
        if (rbx_16 u> &rbx_16[sx.q(var_f0_1)])
            rsi_6 = 0
        
        if (rsi_6 != 0)
            do
                sub_142175040(r15, *rbx_16)
                rdi_7 += 1
                rbx_16 = &rbx_16[1]
            while (rdi_7 != rsi_6)
        
        if (var_f8_1 != 0)
            sub_140a74f90(var_f8_1)
        
        if (i_4 != 0)
            sub_140a74f90(i_4)
        
        zmm8 = zx.o(var_9c8_1)
        rsi_2 = r15 + 0xc60
        zmm9 = zx.o(0)
    
    if (*(r15 + 0xe28) != 0)
        char var_9e8_1 = 0
        sub_141fa3690(*rsi_2, *(rsi_2 + 8), 0)
        sub_141fa9cb0(r15, rsi_2, r15 + 0xd00)
    else if (*(r15 + 0xc70) != 0)
        char var_9e6_2 = 0
        sub_141fa3310(*rsi_2, *(rsi_2 + 8), var_9e8)
    
    QueryPerformanceCounter(&performanceCount)
    int32_t rbx_17 = *(r15 + 0xc68)
    zmm0.q = float.d(performanceCount)
    var_9e0_1.d = rbx_17
    zmm0.q = zmm0.q f* data_143d796f8
    zmm0.q = zmm0.q f+ zmm14.q
    zmm0.q = zmm0.q f- zmm11.q
    zmm0.q = zmm0.q f* 1000.0
    sub_140b43f30("DemoRecPrioritizeTime", data_143de7000, _mm_cvtpd_ps(zmm0), 0)
    sub_140b43e30("DemoRecPriotizedActors", data_143de7000, rbx_17, 0)
    sub_140b43e30("DemoNumActiveObjects", data_143de7000, rcx_15, 0)
    char rax_129 = data_143de5480
    int64_t rbx_18 = data_143f3d348
    int64_t rcx_81
    
    if (rax_129 == 0)
        rcx_81 = 0
    else
        bool cond:8_1 = GetCurrentThreadId() != data_143de5470
        rax_129 = data_143de5480
        rcx_81.b = cond:8_1
    
    uint128_t zmm6_1 = *(rbx_18 + (rcx_81 << 2))
    int64_t rbx_19 = data_143f3d330
    int64_t rcx_82
    
    if (rax_129 == 0)
        rcx_82 = 0
    else
        bool cond:10_1 = GetCurrentThreadId() != data_143de5470
        rax_129 = data_143de5480
        rcx_82.b = cond:10_1
    
    zmm7 = __maxss_xmmss_memss(zmm6_1.d, *(rbx_19 + (rcx_82 << 2)))
    zmm6_1 = __minss_xmmss_memss(zmm6_1.d, *(rbx_19 + (rcx_82 << 2)))
    int64_t rbx_20 = data_143f3d408
    int64_t rcx_83
    
    if (rax_129 == 0)
        rcx_83 = 0
    else
        rcx_83.b = GetCurrentThreadId() != data_143de5470
    
    int32_t r14_7 = 0
    var_950 = *(rbx_20 + (rcx_83 << 2)) s> 0
    int64_t rdx_47 = *rsi_2
    int64_t var_938_1 = zmm11.q
    bool var_94e_1 = rcx_24 != 0
    int32_t var_948_1 = zmm6_1.d
    int32_t var_944_1 = zmm7.d
    int32_t var_940_1 = var_9cc
    uint64_t var_930_1 = zmm8.q
    char var_94f_1 = var_9e7_1 ^ 1
    int32_t var_94c_1 = 0
    int64_t var_9c0_2 = rdx_47
    int64_t* rdi_8
    
    if (*(r15 + 0xe28) == 0)
        int32_t rdi_10 = *(r15 + 0xc68)
        
        if (rdi_10 != 0)
            int32_t rbx_22
            
            do
                rbx_22 = r14_7 + 1
                char rax_147
                rax_147, zmm9 = sub_141fc4af0(r15, rdx_47 + zx.q(r14_7) * 0x28, &var_950)
                r14_7 = rbx_22
                
                if (rax_147 == 0)
                    break
                
                rdx_47 = var_9c0_2
            while (rbx_22 u< rdi_10)
        
        rdi_8 = rdi_1
        int32_t var_94c_3 = r14_7
    else
        void* r13_2 = *(r15 + 0xd00)
        rdi_8 = rdi_1
        void* i_3 = (sx.q(*(r15 + 0xd08)) << 4) + r13_2
        
        if (r13_2 != i_3)
            int32_t* r13_3 = r13_2 + 8
            
            do
                void* const rsi_7 = 0x1a40
                int32_t r12_3 = r13_3[1]
                
                if (rdi_8[0x2a1].b == 0)
                    rsi_7 = 0x1a30
                
                void* rsi_8 = rsi_7 + rdi_8
                (*(*rdi_8 + 0x2a8))(rdi_8, 0)
                uint64_t rdi_9 = 0
                int32_t j = *r13_3
                int64_t rbx_21 = sx.q(*(rsi_8 + 8))
                int64_t rdx_48 = var_9c0_2 + sx.q(r13_3[-1]) * 0x28
                int64_t rcx_85
                rcx_85.b = 1
                int64_t var_9a8_2 = rdx_48
                
                if (j != 0)
                    do
                        char rax_139
                        rax_139, zmm9 = sub_141fc4af0(arg1, rdx_48 + rdi_9 * 0x28, &var_950)
                        rdi_9 = zx.q(rdi_9.d + 1)
                        rcx_85 = zx.q(rax_139)
                        
                        if (rax_139 == 0)
                            break
                        
                        rdx_48 = var_9a8_2
                    while (rdi_9.d u< j)
                
                r14_7 += rdi_9.d
                rdi_8 = rdi_1
                int32_t var_94c_2 = r14_7
                int64_t r8_26 = *(*rdi_8 + 0x2a8)
                
                if (rcx_85.b == 0)
                    r8_26(rdi_8, 0)
                    
                    if (rbx_21.d s< *(rsi_8 + 8))
                        int64_t rcx_94 = rbx_21 * 0x28
                        
                        do
                            rcx_94 += 0x28
                            rbx_21 = zx.q(rbx_21.d + 1)
                            *(*rsi_8 + rcx_94 - 4) = r12_3
                        while (rbx_21.d s< *(rsi_8 + 8))
                    
                    break
                
                r8_26(rdi_8, 0)
                
                if (rbx_21.d s< *(rsi_8 + 8))
                    int64_t rcx_90 = rbx_21 * 0x28
                    
                    do
                        rcx_90 += 0x28
                        rbx_21 = zx.q(rbx_21.d + 1)
                        *(*rsi_8 + rcx_90 - 4) = r12_3
                    while (rbx_21.d s< *(rsi_8 + 8))
                
                r13_3 = &r13_3[4]
            while (&r13_3[-2] != i_3)
            
            r15 = arg1
        
        r13_1 = 0
    
    int512_t zmm1 = sub_140b43e30("DemoNumReplicatedActors", data_143de7000, r14_7, 0)
    (*(*rdi_8 + 0x2a8))(rdi_8, 0)
    sub_141fd05e0(r15, result, &rdi_8[0x346], *(r15 + 0x750), zmm1, 0)
    int32_t rax_144 = var_9e0_1.d
    
    if (rax_144 == 0)
        zmm7 = zmm15
    else
        zmm7.d = _mm_cvtepi32_ps(zx.o(r14_7)).d f/ _mm_cvtepi32_ps(zx.o(rax_144)).d
    
    if (not(zmm9.d f>= *(r15 + 0xc50)))
        char rax_148 = data_143de5480
        int64_t rbx_23 = data_143f3d608
        int64_t rcx_97
        
        if (rax_148 == 0)
            rcx_97 = 0
        else
            bool cond:23_1 = GetCurrentThreadId() != data_143de5470
            rax_148 = data_143de5480
            rcx_97.b = cond:23_1
        
        zmm8 = *(rbx_23 + (rcx_97 << 2))
        int64_t rbx_24 = data_143f3d5f0
        int64_t rcx_98
        
        if (rax_148 == 0)
            rcx_98 = 0
        else
            bool cond:26_1 = GetCurrentThreadId() != data_143de5470
            rax_148 = data_143de5480
            rcx_98.b = cond:26_1
        
        zmm9 = __maxss_xmmss_memss(zmm8.d, *(rbx_24 + (rcx_98 << 2)))
        zmm8 = __minss_xmmss_memss(zmm8.d, *(rbx_24 + (rcx_98 << 2)))
        int64_t rbx_25 = data_143f3d620
        int64_t rcx_99
        
        if (rax_148 == 0)
            rcx_99 = 0
        else
            bool cond:29_1 = GetCurrentThreadId() != data_143de5470
            rax_148 = data_143de5480
            rcx_99.b = cond:29_1
        
        int32_t zmm6_2 = *(rbx_25 + (rcx_99 << 2))
        int64_t rbx_26 = data_143f3d638
        
        if (rax_148 != 0)
            r13_1.b = GetCurrentThreadId() != data_143de5470
        
        int32_t temp0_27 = __minss_xmmss_memss(zmm6_2, *(rbx_26 + (r13_1 << 2)))
        int32_t temp0_28 = __maxss_xmmss_memss(zmm6_2, *(rbx_26 + (r13_1 << 2)))
        
        if (temp0_27 f>= 0.100000001f)
            zmm6_2 = _mm_min_ss(temp0_27, zmm15.d)
        else
            zmm6_2 = 0x3dcccccd
        
        int32_t zmm1_1
        
        if (temp0_28 f>= 0.100000001f)
            zmm1_1 = _mm_min_ss(temp0_28, zmm15.d)
        else
            zmm1_1 = 0x3dcccccd
        
        uint128_t zmm0_2
        
        if (not(zmm7.d f<= zmm9.d))
            zmm0_2.d = (*(r15 + 0x10e8)).d f+ 0.100000001f
            *(r15 + 0x10e8) = zmm0_2.d
        else if (not(zmm7.d f>= zmm8.d))
            zmm15.d = zmm15.d f- zmm7.d
            zmm15.d = zmm15.d f* *(r15 + 0x10e8)
            zmm15.d = zmm15.d f* 0.5f
            *(r15 + 0x10e8) = zmm15.d
        
        zmm0_2 = *(r15 + 0x10e8)
        
        if (not(zmm0_2.d f< zmm6_2))
            zmm6_2 = _mm_min_ss(zmm0_2.d, zmm1_1).d
        
        *(r15 + 0x10e8) = zmm6_2
    
    var_9e0_1.d = zmm7.d
    int32_t result_1 = *(r15 + 0x10f8)
    *(r15 + 0x10f8) = var_9e0_1.d
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_a28)
return result
