// 函数: sub_1409c4a40
// 地址: 0x1409c4a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
void* r13 = arg1
int64_t* rbx = arg3
*(arg2 + 0x390) = *arg4
void* rsi = arg2
*(arg2 + 0x3a0) = arg4[1].q
*(arg1 + 0x38) = *(arg4 + 0x14)
sub_1409d9d80(arg1 + 0x40)
sub_1409d93a0(r13 + 0x40, 0)
sub_1409d9ce0(r13 + 0x78)
sub_1409d9210(r13 + 0x78, 0)
int32_t r15 = 0
void* rax_3
int64_t rax_4
void* rdx

if (rbx != 0)
    rax_3 = sub_142798920()
    rdx = rbx[2]
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rbx == 0 || rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    rbx = nullptr

*(r13 + 0xb0) = rbx

if (rbx != 0)
    void var_238
    sub_142786b00(&var_238, rbx, 0)
    void* rax_6 = sub_142790a80(&var_238)
    
    if (rax_6 != 0)
        int64_t* rcx_7 = *(rax_6 + 0xc8)
        void* rsi_1 = *(rax_6 + 0xc0)
        void* r14_1 = rsi_1
        int64_t* var_3b8_1 = rcx_7
        int64_t* var_3c8_1 = rcx_7
        
        if (rcx_7 != 0)
            rcx_7[1].d += 1
            rcx_7 = var_3c8_1
            r14_1 = rsi_1
            var_3b8_1 = rcx_7
        
        if (rsi_1 == 0)
            rsi = arg2
        else
            *(r13 + 0x28) = rax_6
            *(r13 + 0x30) = rax_6
            int64_t* r13_2 = *(arg2 + 0x28)
            int64_t* var_3c0_1 = r13_2
            void* var_2d0
            sub_14090aa40(&r13_2[0x2a], &var_2d0, data_143f35cc8)
            void* var_2c8
            sub_14090aa40(&r13_2[0x35], &var_2c8, data_143f360f8)
            void* var_2c0
            sub_14090aa40(&r13_2[0x35], &var_2c0, data_143f36100)
            void* var_208
            sub_14099aef0(&r13_2[0x35], &var_208, data_143f36108)
            void* var_2b8
            sub_14099afb0(&r13_2[0x35], &var_2b8, data_143f36110)
            void* var_2d8
            sub_14090a980(&r13_2[0x35], &var_2d8, data_143f360f0)
            int64_t var_348 = 0
            int64_t rcx_14 = *(r14_1 + 0x208)
            int32_t* rax_8 = *(r14_1 + 0x220)
            int32_t i_4 = 0
            uint128_t zmm6_1 = sub_141d17c70(rsi_1 + 0xb0, rsi_1 + 0xf8, &var_348)
            int32_t r14_2 = 0
            int64_t var_418 = 0
            int64_t var_410_1 = 0
            
            if (i_4 != 0)
                sub_1405dadb0(&var_418, i_4)
                r14_2 = var_410_1.d
                
                if (i_4 s> 0)
                    int64_t rdx_10 = var_418
                    uint64_t i_3 = zx.q(i_4)
                    uint64_t i
                    
                    do
                        int64_t rbx_2 = sx.q(r14_2)
                        r14_2 = (rbx_2 + 1).d
                        var_410_1.d = r14_2
                        
                        if (r14_2 s> var_410_1:4.d)
                            sub_1405a4cf0(&var_418)
                            rdx_10 = var_418
                            r14_2 = var_410_1.d
                        
                        int32_t* rcx_18 = rdx_10 + (rbx_2 << 2)
                        
                        if (rcx_18 != 0)
                            *rcx_18 = 0
                        
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
            
            int32_t rsi_2 = 0
            
            if ((*(*(r14_1 + 0x200) + 0x48))(r14_1 + 0x200) s> 0)
                int64_t r13_3 = var_418
                int64_t rbx_3 = 0
                int32_t rax_13
                
                do
                    rbx_3 += 4
                    rsi_2 += 1
                    int64_t rcx_20 = sx.q(*(rbx_3 + *(r14_1 + 0x208) - 4))
                    *(r13_3 + (rcx_20 << 2)) += 1
                    rax_13 = (*(*(r14_1 + 0x200) + 0x48))(r14_1 + 0x200)
                while (rsi_2 s< rax_13)
                r13_2 = var_3c0_1
            
            void* rsi_3 = var_2d8
            sub_14090c670(rsi_3, 1)
            int64_t* rdi_2 = r14_1 + 0x170
            *(arg2 + 0x3d0) = 1
            int64_t rbx_4 = sx.q((*(*rdi_2 + 0x48))(rdi_2))
            sub_1409d9850(r13_2, r13_2[1].d - *(r13_2 + 0x34) + rbx_4.d)
            sub_1409d93a0(&r13_2[7], r13_2[8].d - *(r13_2 + 0x6c) + rbx_4.d)
            bool cond:0_1 = (*(*(r14_1 + 0x1a0) + 0x48))(r14_1 + 0x1a0) s> 0
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            int64_t var_400_1 = 0
            float* var_3f0
            void* r10_1
            
            if (rbx_4.d s<= 0)
                r10_1 = rsi_1
            else
                uint128_t var_48_1 = zmm6_1
                void* r12_2 = nullptr
                var_3f0 = nullptr
                int32_t r14_3 = 0
                int64_t rax_34
                
                do
                    int64_t rax_19 = rdi_2[1]
                    int64_t var_308
                    __builtin_memset(&var_308, 0, 0x20)
                    zmm6_1 = zx.o(*(r12_2 + rax_19))
                    int32_t rbx_5 = *(r12_2 + rax_19 + 8)
                    int64_t rdi_3 = sx.q(sub_14090b340(r13_2, &var_308))
                    int64_t var_2f8
                    
                    if (var_2f8 != 0)
                        sub_140a74f90(var_2f8)
                    
                    int64_t rcx_30 = var_308
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                    
                    sub_14090bdf0(&r13_2[0x2a], rdi_3.d)
                    int64_t rcx_33 = rdi_3 * 3
                    int64_t rdx_20 = **(var_2d0 + 0x18)
                    *(rdx_20 + (rcx_33 << 2)) = zmm6_1.q
                    *(rdx_20 + (rcx_33 << 2) + 8) = rbx_5
                    int32_t rbx_6 = data_143a1c6b4
                    int32_t var_180_1 = rbx_6
                    int32_t var_190[0x4]
                    int32_t* rcx_35 = *(sub_1409ca9d0(&r13_2[7], &var_190, r14_3) + 8)
                    
                    if (rcx_35 != 0)
                        *rcx_35 = rbx_6
                        *(rcx_35 + 8) = 0
                        *(rcx_35 + 0x10) = 0
                    
                    sub_141cdb490(r13_2, r14_3, rdi_3.d)
                    r10_1 = rsi_1
                    int64_t rax_23 = *(r10_1 + 0x1c0)
                    int64_t rcx_37 = *(r10_1 + 0x1f0)
                    uint128_t zmm1_2 = zx.o(*(r12_2 + rax_23))
                    int32_t r8_10 = *(r12_2 + rcx_37 + 8)
                    int32_t r9 = *(r12_2 + rax_23 + 8)
                    int128_t* rax_25
                    
                    if (cond:0_1 == 0)
                        uint128_t var_228
                        rax_25 = &var_228
                        var_228 = data_14399f5c0
                    else
                        uint128_t var_1f8
                        rax_25 = &var_1f8
                        var_1f8 = *(var_3f0 + *(r10_1 + 0x1a8))
                    
                    float zmm3_1[0x4] = *rax_25
                    r14_3 += 1
                    void* rax_26 = var_2c8
                    uint128_t zmm0_2 = zx.o(*(r12_2 + rcx_37))
                    rdi_2 = r14_1 + 0x170
                    float zmm2_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                    int64_t rdx_24 = **(rax_26 + 0x18)
                    void* rax_28 = var_2c0
                    *(r12_2 + rdx_24) = zmm0_2.q
                    *(r12_2 + rdx_24 + 8) = r8_10
                    int64_t* rax_29 = *(rax_28 + 0x18)
                    zmm0_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    int64_t rcx_38 = *rax_29
                    void* rax_30 = var_2b8
                    *(r12_2 + rcx_38) = zmm1_2.q
                    *(r12_2 + rcx_38 + 8) = r9
                    r12_2 += 0xc
                    int64_t* rax_31 = *(rax_30 + 0x18)
                    float (* r9_1)[0x4] = var_3f0
                    zmm1_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                    int64_t rcx_39 = *rax_31
                    zmm3_1[0] = zmm0_2.d
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                    zmm3_1[0] = zmm1_2.d
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
                    zmm3_1[0] = zmm2_1[0]
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
                    *(r9_1 + rcx_39) = zmm3_1
                    int64_t var_3a8
                    var_3a8.o = zmm3_1
                    var_3f0 = &r9_1[1]
                    *(**(rsi_3 + 0x18) + (var_400_1 << 3)) = *(*(r10_1 + 0x190) + (var_400_1 << 3))
                    rax_34 = var_400_1 + 1
                    var_400_1 = rax_34
                while (rax_34 s< rbx_4)
                r14_2 = var_410_1.d
            
            void* rdi_4 = &r13_2[0x23]
            int64_t rbx_7 = sx.q((*(*(r10_1 + 0x218) + 0x48))(r10_1 + 0x218))
            sub_1409d96c0(rdi_4, r13_2[0x24].d - *(r13_2 + 0x14c) + r14_2)
            int64_t i_1 = 0
            int32_t var_424_1 = 0
            int64_t i_2 = 0
            
            if (r14_2 s> 0)
                void* rbx_8 = &r13_2[0x61]
                void* r12_3 = &r13_2[0xe]
                
                do
                    int64_t var_318 = 0
                    int64_t var_310_1 = 0
                    int32_t rax_39 = sub_14090b210(rdi_4, &var_318)
                    int64_t rcx_43 = var_318
                    int64_t r14_4 = sx.q(rax_39)
                    var_3f0.d = r14_4.d
                    
                    if (rcx_43 != 0)
                        sub_140a74f90(rcx_43)
                    
                    sub_14090bdf0(rbx_8, r14_4.d)
                    int32_t rbx_9 = 0
                    int64_t var_128
                    __builtin_memset(&var_128, 0, 0x3c)
                    int32_t var_ec_1 = 0x80
                    int32_t var_e8_1 = 0xffffffff
                    int32_t var_e4_1 = 0
                    int32_t var_1c0[0x4]
                    int32_t* rcx_47 = *(sub_1409ca850(arg1 + 0x78, &var_1c0, r14_4.d) + 8)
                    int64_t var_118
                    
                    if (rcx_47 != 0)
                        *rcx_47 = 0
                        rcx_47[1] = var_128:4.d
                        rcx_47[2] = 0
                        sub_1409a9d30(&rcx_47[4], &var_118)
                        int32_t var_10c
                        rbx_9 = var_10c
                    
                    int32_t var_110_1 = 0
                    
                    if (rbx_9 != 0)
                        sub_1405a5410(&var_118, 0)
                    
                    int32_t var_e8_2 = 0xffffffff
                    int32_t var_e4_2 = 0
                    int64_t var_108
                    sub_14059a8e0(&var_108, 0)
                    int64_t var_f8
                    
                    if (var_f8 != 0)
                        sub_140a74f90(var_f8)
                    
                    int64_t rcx_52 = var_118
                    
                    if (rcx_52 != 0)
                        sub_140a74f90(rcx_52)
                    
                    int64_t rbx_10 = r14_4 * 9
                    uint64_t rsi_4 = zx.q(*(var_418 + (i_1 << 2)))
                    int64_t rdi_6 = *(arg1 + 0x78)
                    int64_t* rcx_54 = rdi_6 + 0x10 + (rbx_10 << 3)
                    sub_14090a510(rcx_54, rsi_4.d)
                    *(rdi_6 + (rbx_10 << 3)) = var_424_1
                    *(rdi_6 + (rbx_10 << 3) + 8) = rsi_4.d
                    *(rdi_6 + (rbx_10 << 3) + 4) = 0
                    sub_1409d9530(&r13_2[0x1c], r13_2[0x1d].d - *(r13_2 + 0x114) + rsi_4.d)
                    sub_1409d93a0(r12_3, (rsi_4 * 3).d - *(r13_2 + 0xa4) + r13_2[0xf].d)
                    int32_t rdi_7 = 0
                    int32_t var_420_1 = 0
                    int64_t rsi_5 = 0
                    int64_t* var_408_1
                    var_408_1.d = 0
                    int64_t var_360_1 = 0
                    
                    if (rbx_7 s> 0)
                        int32_t* rbx_11 = rax_8
                        int32_t* rcx_57 = nullptr
                        int32_t rdx_40 = var_424_1
                        int64_t r8_13 = rcx_14
                        int32_t* var_400_2 = nullptr
                        int32_t* var_350_1 = rbx_11
                        
                        do
                            if (*(r8_13 + (sx.q(*rbx_11) << 2)) == rdx_40
                                    && (*(rsi_1 + 0x238))[rsi_5] != 0)
                                int32_t* var_398 = nullptr
                                int32_t var_390_1 = 3
                                sub_1405a4cf0(&var_398)
                                int32_t* r12_4 = var_398
                                int32_t j_2 = 3
                                int32_t* rcx_59 = r12_4
                                int32_t j
                                
                                do
                                    *rcx_59 = data_143a1c6b0
                                    rcx_59 = &rcx_59[1]
                                    j = j_2
                                    j_2 -= 1
                                while (j != 1)
                                int64_t rax_48 = sx.q(*rbx_11)
                                *r12_4 = rax_48.d
                                int32_t r9_3 = *(r13_2[7] + rax_48 * 0x18)
                                int64_t rax_50 = sx.q(rbx_11[1])
                                r12_4[1] = rax_50.d
                                int32_t var_78 = r9_3
                                int32_t r8_14 = *(r13_2[7] + rax_50 * 0x18)
                                int64_t rax_52 = sx.q(rbx_11[2])
                                r12_4[2] = rax_52.d
                                int32_t var_74_1 = r8_14
                                int32_t rax_53 = *(r13_2[7] + rax_52 * 0x18)
                                int32_t var_70_1 = rax_53
                                
                                if (r9_3 != r8_14 && r8_14 != rax_53 && rax_53 != r9_3)
                                    int32_t j_1 = 0
                                    int64_t r12_5 = 0
                                    
                                    do
                                        int32_t rdi_8 = *(&var_78 + r12_5)
                                        j_1 += 1
                                        int32_t rsi_6 = (&var_78)[zx.q(j_1 u% 3)]
                                        int32_t var_3f8
                                        sub_141cdf680(var_3c0_1, &var_3f8, rdi_8, rsi_6)
                                        int32_t rbx_12 = var_3f8
                                        
                                        if (rbx_12 == data_143a1c6bc)
                                            int32_t rax_55 = data_143a1c6b4
                                            int32_t var_c8 = rax_55
                                            int32_t var_c4_1 = rax_55
                                            int64_t var_c0_1 = 0
                                            int64_t var_b8_1 = 0
                                            rbx_12 = sub_1409af2d0(&var_3c0_1[0xe], &var_c8)
                                            
                                            if (var_c0_1 != 0)
                                                sub_140a74f90(var_c0_1)
                                            
                                            sub_141cda530(var_3c0_1, rbx_12, rdi_8, rsi_6)
                                            var_3f8 = rbx_12
                                        
                                        void var_68
                                        *(&var_68 + r12_5) = rbx_12
                                        r12_5 += 4
                                    while (j_1 u< 3)
                                    
                                    int64_t rax_57 = sx.q(var_420_1)
                                    var_420_1 = rax_57.d + 1
                                    int32_t var_cc_1 = data_143a1c6b0
                                    int32_t rax_60 = data_143a1c6b8
                                    int32_t var_d4_1 = rax_60
                                    int32_t var_d0_1 = rax_60
                                    int32_t r14_6 = var_3f0.d
                                    int32_t var_1b0[0x4]
                                    int128_t* rcx_69 =
                                        *(sub_1409cae50(rcx_54, &var_1b0, rax_57.d) + 8)
                                    
                                    if (rcx_69 != 0)
                                        *rcx_69 = rax_60.o
                                    
                                    r12_4 = var_398
                                    int32_t rsi_7 = var_408_1.d
                                    int32_t* rcx_72 = (rax_57 << 4) + *rcx_54
                                    int32_t rax_62 = *r12_4
                                    int64_t var_2a0
                                    __builtin_memset(&var_2a0, 0, 0x20)
                                    *rcx_72 = rax_62
                                    rcx_72[1] = r12_4[1]
                                    rcx_72[2] = r12_4[2]
                                    int32_t var_280_1 = data_143a1c6c4
                                    sub_1409c9360(&r13_2[0x1c], rsi_7, &var_2a0)
                                    int64_t var_290
                                    
                                    if (var_290 != 0)
                                        sub_140a74f90(var_290)
                                    
                                    int64_t rcx_75 = var_2a0
                                    
                                    if (rcx_75 != 0)
                                        sub_140a74f90(rcx_75)
                                    
                                    r13_2 = var_3c0_1
                                    int32_t var_240_1 = var_390_1
                                    int128_t var_218 = r12_4.o
                                    sub_141cda990(r13_2, rsi_7, r14_6, &var_218, nullptr)
                                    int32_t rbx_14 = data_143a1c6b0
                                    int32_t var_168_1 = rbx_14
                                    int32_t var_1a0[0x4]
                                    int32_t* rcx_78 =
                                        *(sub_1409ca9d0(arg1 + 0x40, &var_1a0, rsi_7) + 8)
                                    
                                    if (rcx_78 != 0)
                                        *rcx_78 = rbx_14
                                        *(rcx_78 + 8) = 0
                                        *(rcx_78 + 0x10) = 0
                                    
                                    int64_t rax_68 = *(arg1 + 0x40)
                                    void* rbx_15 = var_400_2 + rax_68
                                    *(var_400_2 + rax_68) = r14_6
                                    int64_t rsi_9 = sx.q(*(rbx_15 + 0x10))
                                    int32_t rax_69 = (rsi_9 + 1).d
                                    *(rbx_15 + 0x10) = rax_69
                                    
                                    if (rax_69 s> *(rbx_15 + 0x14))
                                        sub_1405a4cf0(rbx_15 + 8)
                                    
                                    rbx_11 = var_350_1
                                    *(*(rbx_15 + 8) + (rsi_9 << 2)) = rax_57.d
                                    rdi_7 = var_408_1.d
                                    rsi_5 = var_360_1
                                
                                sub_140a74f90(r12_4)
                                rcx_57 = var_400_2
                                rdx_40 = var_424_1
                                r8_13 = rcx_14
                            
                            rdi_7 += 1
                            rsi_5 += 1
                            rbx_11 = &rbx_11[3]
                            var_408_1.d = rdi_7
                            rcx_57 = &rcx_57[6]
                            var_360_1 = rsi_5
                            var_350_1 = rbx_11
                            var_400_2 = rcx_57
                        while (rsi_5 s< rbx_7)
                        
                        r12_3 = &r13_2[0xe]
                    
                    rdi_4 = &r13_2[0x23]
                    var_424_1 += 1
                    rbx_8 = &r13_2[0x61]
                    i_1 = i_2 + 1
                    i_2 = i_1
                while (i_1 s< sx.q(r14_2))
            
            sub_141ced0d0(r13_2, 0x38d1b717)
            TEB* gsbase
            
            if (data_143cede60 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143cede60)
                
                if (data_143cede60 == 0xffffffff)
                    atexit(sub_142cb93b0)
                    _Init_thread_footer(&data_143cede60)
            
            int32_t r10_2 = data_143cede5c
            data_143cede58 = 0
            
            if (r10_2 s< 0 && r10_2 != 0)
                sub_1405dadb0(&data_143cede50, 0)
                r10_2 = data_143cede5c
            
            int32_t rcx_85 = 0
            int32_t var_388_1 = 0
            int32_t var_384_1 = 1
            int32_t var_378_1 = 0xffffffff
            void* rbx_17 = *(arg2 + 0x28) + 0xe0
            int32_t var_374_1 = 0
            int32_t r11_1 = *(rbx_17 + 0x28)
            void* var_3a8_2 = rbx_17
            void* var_380_1 = rbx_17 + 0x10
            int32_t var_370_1 = 0
            
            if (r11_1 != 0)
                void* rax_73 = *(rbx_17 + 0x20)
                void* r8_21 = rbx_17 + 0x10
                
                if (rax_73 != 0)
                    r8_21 = rax_73
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r11_1 - 1)
                int32_t rdx_57 = *r8_21
                int32_t var_374_3
                
                if (rdx_57 != 0)
                label_1409c5698:
                    int32_t rax_80 = neg.d(rdx_57) & rdx_57
                    uint64_t rflags_1
                    int32_t temp0_8
                    temp0_8, rflags_1 = _bit_scan_reverse(rax_80)
                    int32_t var_384_2 = rax_80
                    int32_t var_2e0_1 = temp0_8
                    int32_t rax_81
                    
                    if (rax_80 == 0)
                        rax_81 = 0x20
                    else
                        rax_81 = 0x1f - temp0_8
                    
                    int32_t var_374_2 = rcx_85 - rax_81 + 0x1f
                    
                    if (rcx_85 - rax_81 + 0x1f s> r11_1)
                        var_374_3 = r11_1
                else
                    while (true)
                        int64_t rdx_58 = sx.q(r15)
                        rcx_85 += 0x20
                        r15 += 1
                        int32_t var_370_2 = rcx_85
                        var_388_1 = r15
                        
                        if (rdx_58.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_57 = *(r8_21 + (rdx_58 << 2) + 4)
                        int32_t var_378_2 = 0xffffffff
                        
                        if (rdx_57 != 0)
                            goto label_1409c5698
                    
                    var_374_3 = r11_1
            
            int32_t rdx_60 = *(rbx_17 + 0x28)
            int128_t var_1e0_1 = var_388_1.o
            int32_t r8_23 = rdx_60 s>> 5
            int32_t r12_6 = 0xffffffff << (rdx_60 & 0x1f).b
            int32_t r9_8 = rdx_60 & 0xffffffe0
            int32_t var_338_1 = r8_23
            void* var_330_1 = rbx_17 + 0x10
            int32_t var_328_1 = r12_6
            int32_t var_324_1 = rdx_60
            int32_t var_320_1 = r9_8
            int128_t var_1d0_1 = 0xffffffff
            int64_t var_258_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
            int128_t var_278 = rbx_17.o
            int128_t var_268_1 = var_1e0_1
            uint64_t rcx_88
            
            if (rdx_60 != r11_1)
                void* rax_83 = *(rbx_17 + 0x20)
                void* r11_2 = rbx_17 + 0x10
                
                if (rax_83 != 0)
                    r11_2 = rax_83
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(r11_1 - 1)
                int32_t rdx_64 = *(r11_2 + (sx.q(r8_23) << 2)) & r12_6
                int32_t var_324_3
                
                if (rdx_64 != 0)
                label_1409c579a:
                    int32_t rax_90 = neg.d(rdx_64) & rdx_64
                    uint64_t rflags_2
                    int32_t temp0_10
                    temp0_10, rflags_2 = _bit_scan_reverse(rax_90)
                    rcx_88 = zx.q(temp0_10)
                    int32_t var_334_1 = rax_90
                    int32_t var_2dc_1 = rcx_88.d
                    int32_t rdi_10
                    
                    if (rax_90 == 0)
                        rdi_10 = 0x20
                    else
                        rdi_10 = 0x1f - rcx_88.d
                    
                    int32_t var_324_2 = r9_8 - rdi_10 + 0x1f
                    
                    if (r9_8 - rdi_10 + 0x1f s> r11_1)
                        var_324_3 = r11_1
                else
                    while (true)
                        rcx_88 = sx.q(r8_23)
                        r9_8 += 0x20
                        r8_23 += 1
                        int32_t var_320_2 = r9_8
                        int32_t var_338_2 = r8_23
                        
                        if (rcx_88.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_64 = *(r11_2 + (rcx_88 << 2) + 4)
                        var_328_1 = 0xffffffff
                        
                        if (rdx_64 != 0)
                            goto label_1409c579a
                    
                    var_324_3 = r11_1
            
            while (true)
                int32_t rax_92 = var_268_1:0xc.d
                int64_t rdx_65 = var_268_1.q
                
                if (rax_92 != (var_328_1.q u>> 0x20).d || rdx_65 != rbx_17 + 0x10)
                    rcx_88.b = 0
                else
                    rcx_88.b = 1
                
                if (rcx_88.b == 0 || var_278.q != rbx_17)
                    rcx_88.b = 1
                else
                    rcx_88.b = 0
                
                if (rcx_88.b == 0)
                    break
                
                int64_t rdi_11 = sx.q(data_143cede58)
                int32_t rsi_11 = data_143a1c6c8
                
                if (rax_92 s< *(rdx_65 + 0x18))
                    rsi_11 = rax_92
                
                int32_t rax_93 = (rdi_11 + 1).d
                data_143cede58 = rax_93
                
                if (rax_93 s> r10_2)
                    sub_1405a4cf0(&data_143cede50)
                
                *(data_143cede50 + (rdi_11 << 2)) = rsi_11
                var_268_1:8.d &= not.d(var_278:0xc.d)
                sub_14059bdd0(&var_278:8)
                r10_2 = data_143cede5c
            
            rsi = arg2
            sub_1409c1000(rsi, &data_143cede50)
            int64_t rax_97 = var_418
            
            if (rax_97 != 0)
                sub_140a74f90(rax_97)
            
            int64_t rcx_92 = var_348
            
            if (rcx_92 != 0)
                sub_140a74f90(rcx_92)
            
            rcx_7 = var_3b8_1
            r13 = arg1
        
        if (rcx_7 != 0)
            rcx_7[1].d -= 1
            
            if (rcx_7[1].d == 1)
                (**var_3c8_1)(var_3c8_1)
                int32_t rdi_12 = *(var_3c8_1 + 0xc)
                *(var_3c8_1 + 0xc) -= 1
                
                if (rdi_12 == 1)
                    (*(*var_3c8_1 + 8))(var_3c8_1, zx.q(rdi_12))
    
    rbx = *(r13 + 0xb0)

if (rbx != 0)
    uint128_t zmm1_1 = data_143dbb0d0
    int128_t var_a8 = data_143dbb0c0
    int128_t var_88_1 = data_143dbb0e0
    uint128_t var_98_1 = zmm1_1
    void var_150
    int128_t* rax_102 = (*(*rbx + 0x480))(rbx, &var_150, &var_a8)
    *(r13 + 0xb8) = *rax_102
    *(r13 + 0xc8) = rax_102[1].q
    *(r13 + 0xd0) = *(rax_102 + 0x18)

sub_1409d55c0(rsi)
int512_t result = sub_1409d4c80(rsi)
__security_check_cookie(rax_1 ^ &var_458)
return result
