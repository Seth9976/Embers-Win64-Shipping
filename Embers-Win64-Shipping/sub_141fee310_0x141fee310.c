// 函数: sub_141fee310
// 地址: 0x141fee310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
void* rax_2 = *(arg1 + 0xb0)
void* rdi = arg1
int64_t performanceCount_1 = arg2
void* rcx = arg1 + 0x38

if (rax_2 != 0)
    rcx = rax_2

int128_t zmm2
zmm2.d = float.s(zx.q(*(rdi + 0xf8)))
zmm2.d = zmm2.d f/ float.s(zx.q(zx.d(*(rcx + 0x12)) * zx.d(*(rcx + 0x10)) * zx.d(*(rcx + 0xe))))
zmm2.d = zmm2.d f* 100f
sub_140b43f30("DFAtlasPercentageUsage", 0, zmm2, 0)
zmm2.d = float.s(zx.q(*(rdi + 0x100)))
sub_140b43f30("DFAtlasMaxX", 0, zmm2, 0)
zmm2.d = float.s(zx.q(*(rdi + 0x104)))
sub_140b43f30("DFAtlasMaxY", 0, zmm2, 0)
zmm2.d = float.s(zx.q(*(rdi + 0x108)))
sub_140b43f30("DFAtlasMaxZ", 0, zmm2, 0)
zmm2.d = float.s(zx.q(*(rdi + 0xfc)))
zmm2.d = zmm2.d f* 9.53674316e-07f
sub_140b43f30("DFAtlasFailedAllocatedMagaPixels", 0, zmm2, 0)
TEB* gsbase
void* r12 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f3ea10 s> *(r12 + 0x14))
    _Init_thread_header(&data_143f3ea10)
    
    if (data_143f3ea10 == 0xffffffff)
        int64_t* rcx_92 = data_143db18d0
        
        if (rcx_92 == 0)
            sub_140a53c40()
            rcx_92 = data_143db18d0
        
        int64_t r8_22
        r8_22.b = 1
        int64_t* rax_95 = (*(*rcx_92 + 0xb0))(rcx_92, u"r.DistanceFields.AtlasSizeXY", r8_22)
        int64_t rax_96
        
        if (rax_95 == 0)
            rax_96 = 0
        else
            int64_t rdx_42 = *rax_95
            rax_96 = (*(rdx_42 + 0x58))(rax_95, rdx_42)
        
        data_143f3ea08 = rax_96
        _Init_thread_footer(&data_143f3ea10)

int64_t rbx = data_143f3ea08
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

bool cond:3 = data_143f3ea20 s> *(r12 + 0x14)
int32_t r14 = *(rbx + (rcx_2 << 2))
int32_t var_2a8 = r14

if (cond:3)
    _Init_thread_header(&data_143f3ea20)
    
    if (data_143f3ea20 == 0xffffffff)
        int64_t* rcx_94 = data_143db18d0
        
        if (rcx_94 == 0)
            sub_140a53c40()
            rcx_94 = data_143db18d0
        
        int64_t r8_23
        r8_23.b = 1
        int64_t* rax_98 = (*(*rcx_94 + 0xb0))(rcx_94, u"r.DistanceFields.AtlasSizeZ", r8_23)
        int64_t rax_99
        
        if (rax_98 == 0)
            rax_99 = 0
        else
            int64_t rdx_43 = *rax_98
            rax_99 = (*(rdx_43 + 0x58))(rax_98, rdx_43)
        
        data_143f3ea18 = rax_99
        _Init_thread_footer(&data_143f3ea20)

int64_t rbx_1 = data_143f3ea18
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

int32_t r15 = *(rbx_1 + (rcx_3 << 2))
void* rcx_4

if (*(rdi + 0xf4) != 0)
    void* rax_16 = *(rdi + 0xb0)
    rcx_4 = rdi + 0x38
    
    if (rax_16 != 0)
        rcx_4 = rax_16

BOOL result

if (*(rdi + 0xf4) != 0 && (zx.d(*(rcx_4 + 0xe)) != r14 || zx.d(*(rcx_4 + 0x12)) != r15))
    result = 1
    data_143f3d6b8 = 1
else
    result = data_143f3d6b8

if (*(rdi + 0xc8) s> 0 || result != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    performanceCount.d = (&data_1439c85f4)[sx.q(*(rdi + 0x10)) * 0xa]
    char var_2b7
    int64_t zmm0_1 = sub_141fd4030(*(rdi + 0xc0), *(rdi + 0xc8), var_2b7)
    int64_t* rcx_8 = data_143f3d840
    void*** var_268 = nullptr
    int64_t var_260_1 = 0
    void**** var_2b0 = rdi + 0xc0
    int32_t rdx_4 = (*(*rcx_8 + 0x98))(rcx_8)
    int32_t var_230 = zmm0_1.d
    
    if (data_143f3ee10 s> *(r12 + 0x14))
        int64_t r8_24
        rdx_4, r8_24 = _Init_thread_header(&data_143f3ee10)
        
        if (data_143f3ee10 == 0xffffffff)
            int64_t* rcx_96 = data_143db18d0
            
            if (rcx_96 == 0)
                sub_140a53c40()
                rcx_96 = data_143db18d0
            
            r8_24.b = 1
            int64_t* rax_101 = (*(*rcx_96 + 0xb0))(rcx_96, u"r.DistanceFieldBuild.EightBit", r8_24)
            int64_t rax_102
            
            if (rax_101 == 0)
                rax_102 = 0
            else
                int64_t rdx_44 = *rax_101
                rax_102 = (*(rdx_44 + 0x58))(rax_101, rdx_44)
            
            data_143f3ee08 = rax_102
            rdx_4 = _Init_thread_footer(&data_143f3ee10)
    
    char rax_24 = data_143de5480
    int64_t rsi_1 = data_143f3ee08
    int64_t rcx_9
    
    if (rax_24 == 0)
        rcx_9 = 0
    else
        uint32_t rax_23
        rax_23, rdx_4 = GetCurrentThreadId()
        rax_24 = data_143de5480
        rcx_9.b = rax_23 != data_143de5470
    
    int32_t zmm1_1
    
    if (*(rsi_1 + (rcx_9 << 2)) != 0)
        zmm1_1 = var_230
    
    if (*(rsi_1 + (rcx_9 << 2)) == 0 || zmm1_1 f<= (zx.o(0)).q.d || zmm1_1 f>= 1f)
        rcx_9.b = 0
    else
        rcx_9.b = 1
    
    int64_t rsi_2 = data_143f3d830
    char var_2b8 = rcx_9.b
    void***** var_250_1 = &var_2b0
    char* var_248_1 = &var_2b8
    int32_t* var_240_1 = &var_230
    void* var_258 = rdi
    int64_t rcx_10
    
    if (rax_24 == 0)
        rcx_10 = 0
    else
        uint32_t rax_25
        rax_25, rdx_4 = GetCurrentThreadId()
        rcx_10.b = rax_25 != data_143de5470
    
    int32_t r13_1 = *(rsi_2 + (rcx_10 << 2))
    uint64_t var_278
    
    if (r13_1 s>= 0x400)
        int32_t r14_1 = 0
        
        if (*(rdi + 0xc8) s> 0)
            int32_t r12_1 = performanceCount.d
            
            while (r14_1 s< r13_1)
                int64_t rsi_3 = sx.q(var_260_1.d)
                void** r15_1 = **(rdi + 0xc0)
                void* rax_27 = *r15_1
                var_278 = *(rax_27 + 0x18)
                int32_t rax_28 = (rsi_3 + 1).d
                var_260_1.d = rax_28
                r14_1 += (var_278 u>> 0x20).d * *(rax_27 + 0x20) * var_278.d * r12_1
                
                if (rax_28 s> var_260_1:4.d)
                    sub_1405a4d70(&var_268)
                
                var_268[rsi_3] = r15_1
                int32_t rax_30 = *(rdi + 0xc8)
                
                if (rax_30 != 1)
                    void*** rcx_17 = *(rdi + 0xc0)
                    memmove(rcx_17, &rcx_17[1], (rax_30 - 1) << 3)
                    rax_30 = *(rdi + 0xc8)
                
                *(rdi + 0xc8) = rax_30 - 1
                rdx_4 = sub_1405c53d0(rdi + 0xc0)
                
                if (*(rdi + 0xc8) s<= 0)
                    break
        
        r14 = var_2a8
        var_2b0 = &var_268
    
    int128_t zmm2_1
    int128_t zmm3_1
    zmm2_1, zmm3_1 = sub_141fd8f30(&var_258, rdx_4)
    
    if (data_143f3ea30 s> *(r12 + 0x14))
        _Init_thread_header(&data_143f3ea30)
        
        if (data_143f3ea30 == 0xffffffff)
            int64_t* rcx_98 = data_143db18d0
            
            if (rcx_98 == 0)
                sub_140a53c40()
                rcx_98 = data_143db18d0
            
            int64_t r8_25
            r8_25.b = 1
            int64_t* rax_93 = (*(*rcx_98 + 0xb0))(rcx_98, u"r.DistanceFieldBuild.Compress", r8_25)
            
            if (rax_93 != 0)
                int64_t rdx_45 = *rax_93
                rax_93 = (*(rdx_45 + 0x58))(rax_93, rdx_45)
            
            data_143f3ea28 = rax_93
            _Init_thread_footer(&data_143f3ea30)
    
    int64_t rsi_4 = data_143f3ea28
    int64_t rcx_20
    
    if (data_143de5480 == 0)
        rcx_20 = 0
    else
        rcx_20.b = GetCurrentThreadId() != data_143de5470
    
    bool cond:8_1 = *(rsi_4 + (rcx_20 << 2)) != 0
    void* rcx_21 = *(rdi + 0x18)
    int64_t rsi_5 = 0
    int64_t* var_2a0
    __builtin_memset(&var_2a0, 0, 0x20)
    int32_t rdx_8 = 0
    int32_t r8_3 = 0
    int32_t var_2e8
    int64_t var_298
    int64_t var_290
    int32_t var_288
    int32_t var_284
    uint128_t var_178
    int128_t var_168
    uint128_t var_158
    int128_t var_148
    uint128_t var_138
    int128_t var_128
    uint128_t var_118
    int128_t var_108
    int64_t var_f8
    
    if (rcx_21 == 0 || *(rdi + 0x28) u> *(rcx_21 + 0x60) || *(rdi + 0x2c) u> *(rcx_21 + 0x64)
            || *(rdi + 0x30) u> *(rcx_21 + 0x68) || data_143f3d6b8 != 0)
        int64_t var_e8
        
        if (*(rdi + 0xd8) s> 0)
            int16_t var_dc_1 = 0
            char var_c4_1 = 0
            var_e8 = 0
            int32_t var_e0_1 = 0
            int64_t var_60_1 = 0
            int32_t var_54_1 = 5
            int32_t var_58_1 = 1
            int64_t var_d8_1 = -1
            int32_t var_d0_1 = 0
            int16_t var_cc_1 = 0
            int16_t var_ca_1 = r14.w
            int16_t var_c8_1 = r14.w
            int16_t var_c6_1 = r15.w
            sub_141fd8510(rdi + 0x28, &var_e8)
            
            if (var_60_1 != 0)
                sub_140a74f90(var_60_1)
            
            *(rdi + 0xf0) += 1
            *(rdi + 0x100) = 0
            *(rdi + 0x108) = 0
            int64_t r14_4 = sx.q(*(rdi + 0xd8))
            
            if (r14_4.d != 0)
                int32_t rax_63 = *(rdi + 0xc8)
                int32_t rdx_20 = rax_63 + r14_4.d
                
                if (rdx_20 s> *(rdi + 0xcc))
                    sub_1405c5570(rdi + 0xc0, rdx_20)
                    rax_63 = *(rdi + 0xc8)
                
                memcpy(&(*(rdi + 0xc0))[sx.q(rax_63)], *(rdi + 0xd0), (r14_4 << 3).d)
                *(rdi + 0xc8) += r14_4.d
            
            if (r13_1 s>= 0x400)
                int64_t r14_5 = sx.q(var_260_1.d)
                
                if (r14_5.d != 0)
                    int32_t rax_65 = *(rdi + 0xc8)
                    int32_t rdx_22 = rax_65 + r14_5.d
                    
                    if (rdx_22 s> *(rdi + 0xcc))
                        sub_1405c5570(rdi + 0xc0, rdx_22)
                        rax_65 = *(rdi + 0xc8)
                    
                    memcpy(&(*(rdi + 0xc0))[sx.q(rax_65)], var_268, (r14_5 << 3).d)
                    *(rdi + 0xc8) += r14_5.d
                
                var_260_1.d = 0
                
                if (var_260_1:4.d != 0)
                    sub_1405c5570(&var_268, 0)
            
            *(rdi + 0xd8) = 0
            
            if (*(rdi + 0xdc) != 0)
                sub_1405c5570(rdi + 0xd0, 0)
            
            char var_2b6
            int32_t rdx_25 = sub_141fd4030(*(rdi + 0xc0), *(rdi + 0xc8), var_2b6)
            void**** rax_67 = var_2b0
            
            if (r13_1 s>= 0x400)
                rax_67 = rdi + 0xc0
            
            var_2b0 = rax_67
            zmm2_1, zmm3_1 = sub_141fd8f30(&var_258, rdx_25)
        
        sub_1405d16e0(rdi + 0x18, nullptr)
        sub_1405d16e0(rdi + 0x20, nullptr)
        int32_t rbx_9 = data_143f029c8
        sub_140b34200("FlushRHIThreadFlushResourcesTotal", rbx_9)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_1, zmm3_1)
        
        sub_14198b230()
        sub_14198b3f0()
        int64_t rdx_27
        rdx_27.b = 1
        sub_14198b7d0()
        sub_141971910()
        int128_t zmm2_2
        int128_t zmm3_2
        zmm2_2, zmm3_2 = sub_1419712f0(0)
        sub_140b38680("FlushRHIThreadFlushResourcesTotal", rbx_9)
        int32_t rbx_10 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_10)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_2, zmm3_2)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_30
        rdx_30.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_10)
        int64_t* rcx_71 = data_143f0f180
        (*(*rcx_71 + 0x3a0))(rcx_71)
        int128_t zmm1_3 = data_143dbb1e0
        uint32_t rbx_11 = *(rdi + 0x28)
        uint32_t r14_6 = *(rdi + 0x2c)
        uint32_t r15_2 = *(rdi + 0x30)
        int64_t* rcx_73 = data_143f3d870
        int32_t rax_70 = (1 << (data_1439c7a34).b) - 1
        int128_t var_1b8 = zx.o(0)
        int32_t var_1a8_1 = 1
        int128_t var_1a4_1 = zmm1_3
        int32_t var_194_1 = rax_70
        char var_190_1 = 0
        int64_t var_188_1 = 0
        int32_t var_180_1 = 0
        
        if ((*(*rcx_73 + 0x90))(rcx_73) != 0)
            void* rax_73 = *(rdi + 0xb0)
            void* rcx_74 = rdi + 0x38
            
            if (rax_73 != 0)
                rcx_74 = rax_73
            
            rbx_11 = zx.d(*(rcx_74 + 0xe))
            r14_6 = zx.d(*(rcx_74 + 0x10))
            r15_2 = zx.d(*(rcx_74 + 0x12))
        
        int64_t* rcx_75 = data_143f0f180
        (*(*rcx_75 + 0x580))(rcx_75, &var_2a8, &data_143f02b98, zx.q(rbx_11), r14_6, r15_2, 
            *(rdi + 0x10), 1, 0x10008, &var_1b8)
        sub_1405d1600(rdi + 0x18, &var_2a8)
        sub_14081c9d0(&var_2a8)
        int64_t* rcx_78 = data_143f0f180
        (*(*rcx_78 + 0x5a0))(rcx_78, &var_2a8, &data_143f02b98, *(rdi + 0x18), 0)
        sub_1405d1600(rdi + 0x20, &var_2a8)
        sub_1405d1550(&var_2a8)
        int64_t rdx_36 = data_143dbb188.q
        int32_t r8_18 = *(rdi + 0x28)
        var_278:4.d = *(rdi + 0x2c)
        int32_t rax_77 = data_143dbb190
        var_250_1.d = rax_77
        var_248_1:4.d = rax_77
        uint32_t rcx_82 = (rdx_36 u>> 0x20).d
        var_278.d = r8_18
        var_240_1:4.d = (var_278 u>> 0x20).d
        var_2a8.q = &var_e8
        var_258.d = rdx_36.d
        var_258:4.d = rcx_82
        var_250_1:4.d = rdx_36.d
        var_248_1.d = rcx_82
        var_240_1.d = r8_18
        int32_t var_238_2 = *(rdi + 0x30)
        
        if (var_2b8 != 0)
        label_141fef05b:
            int32_t r8_19 = var_284
            int32_t rdx_38 = var_2b0[1].d
            
            if (r8_19 != rdx_38)
                sub_1405a5390(&var_290, rdx_38)
                r8_19 = var_284
            
            int32_t rax_85 = var_2b0[1].d + var_288
            int32_t var_288_2 = rax_85
            
            if (rax_85 s> r8_19)
                sub_1405c5340(&var_290)
            
            int64_t rsi_8 = sx.q(var_298.d)
            int32_t i_5 = var_2b0[1].d
            int32_t rax_87 = rsi_8.d + i_5
            var_298.d = rax_87
            
            if (rax_87 s> 0)
                sub_1405c4f50(&var_2a0)
            
            void* rcx_89 = &var_2a0[rsi_8 * 6]
            
            if (i_5 != 0)
                int32_t i
                
                do
                    *rcx_89 = 0
                    rcx_89 += 0x30
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else
            int64_t* rcx_83 = data_143f0f180
            uint32_t var_2e0_1
            var_2e0_1.q = &var_258
            (*(*rcx_83 + 0x530))(rcx_83, &var_178, &data_143f02b98, *(rdi + 0x18), 0, var_2e0_1)
            uint128_t* rax_81 = var_2a8.q
            *rax_81 = var_178
            rax_81[1] = var_168
            rax_81[2] = var_158
            rax_81[3] = var_148
            rax_81[4] = var_138
            rax_81[5] = var_128
            rax_81[6] = var_118
            rax_81[7] = var_108
            rax_81[8].q = var_f8
            
            if (var_2b8 != 0)
                goto label_141fef05b
        
        bool cond:9_1 = data_143a2dc6c == 0
        int32_t var_1f8 = performanceCount.d
        int32_t r8_20
        r8_20.b = cond:9_1
        bool var_1e8_1 = cond:8_1
        char var_1e7_1 = var_2b8
        void***** var_1e0_1 = &var_2b0
        int32_t* var_1d8_1 = &var_2a8
        int64_t** var_1d0_1 = &var_2a0
        int64_t* var_1c8_1 = &var_290
        void**** rax_91 = var_2b0
        var_278 = sub_141fdc740
        void* var_1f0_1 = rdi
        int32_t* var_270_2 = &var_1f8
        sub_14077b750(rax_91[1].d, &var_278, r8_20)
        
        if (var_2b8 == 0)
            int64_t* rcx_91 = data_143f0f180
            (*(*rcx_91 + 0x538))(rcx_91, &data_143f02b98, var_2a8.q)
    else
        int64_t r14_2 = sx.q(var_2b0[1].d)
        
        if (r14_2.d != 0)
            sub_1405a5390(&var_290, r14_2.d)
            r8_3 = var_284
            rdx_8 = var_288
        
        int32_t rax_38 = rdx_8 + r14_2.d
        int32_t var_288_1 = rax_38
        
        if (rax_38 s> r8_3)
            sub_1405c5340(&var_290)
        
        int32_t var_2e0
        
        if (var_2b8 != 0)
            int32_t i_6 = var_298.d
            int64_t* rbx_4 = var_2a0
            
            if (i_6 != 0)
                int32_t i_1
                
                do
                    sub_14081c9d0(rbx_4)
                    rbx_4 = &rbx_4[6]
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
            
            if (var_298:4.d != r14_2.d)
                sub_1405a5220(&var_2a0, r14_2.d)
            
            int64_t rbx_5 = sx.q(var_298.d)
            int32_t rax_52 = (rbx_5 + r14_2).d
            var_298.d = rax_52
            
            if (rax_52 s> 0)
                sub_1405c4f50(&var_2a0)
            
            int32_t i_4 = r14_2.d
            void* rcx_32 = &var_2a0[rbx_5 * 6]
            
            if (r14_2.d != 0)
                int32_t i_2
                
                do
                    *rcx_32 = 0
                    rcx_32 += 0x30
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            int32_t rsi_6 = 0
            
            if (r14_2.d s> 0)
                int64_t rbx_6 = 0
                
                do
                    int64_t* rcx_34 = (*var_2b0)[rbx_6]
                    int64_t var_270
                    var_270.d = rcx_34[2].d
                    int64_t* rcx_36 = *rcx_34 + 0x18
                    int64_t rax_55 = sx.q(rsi_6)
                    var_278 = rcx_34[1]
                    var_2e0.q = rax_55 * 0x88 + var_290
                    var_2e8.q = &var_2a0[rax_55 * 6]
                    sub_141fe03c0(rcx_36, rcx_34 + 0x14, &var_278, (*(rdi + 0x10)).b, var_2e8, 
                        var_2e0)
                    rsi_6 += 1
                    rbx_6 += 1
                while (rbx_6 s< r14_2)
        else if (r14_2.d s> 0)
            int64_t rbx_3 = 0
            
            do
                int64_t r9_1 = *(rdi + 0x18)
                void* rax_40 = (*var_2b0)[rsi_5]
                int32_t rcx_25 = *(rax_40 + 0x10)
                uint64_t var_218_1 = *(rax_40 + 0x14)
                int32_t var_238_1 = *(rax_40 + 0x1c)
                var_278 = *(rax_40 + 8)
                var_258.d = var_278.d
                var_258:4.d = (var_278 u>> 0x20).d
                int64_t rax_44 = data_143dbb188.q
                var_250_1:4.d = rax_44.d
                var_248_1.d = (rax_44 u>> 0x20).d
                var_248_1:4.d = data_143dbb190
                var_240_1.d = var_218_1.d
                var_250_1.d = rcx_25
                int64_t* rcx_26 = data_143f0f180
                var_2e0.q = &var_258
                var_240_1:4.d = (var_218_1 u>> 0x20).d
                (*(*rcx_26 + 0x530))(rcx_26, &var_178, &data_143f02b98, r9_1, 0, var_2e0)
                rbx_3 += 0x88
                int64_t rax_51 = var_290
                rsi_5 += 1
                *(rbx_3 + rax_51 - 0x88) = var_178
                *(rbx_3 + rax_51 - 0x78) = var_168
                *(rbx_3 + rax_51 - 0x68) = var_158
                *(rbx_3 + rax_51 - 0x58) = var_148
                *(rbx_3 + rax_51 - 0x48) = var_138
                *(rbx_3 + rax_51 - 0x38) = var_128
                *(rbx_3 + rax_51 - 0x28) = var_118
                *(rbx_3 + rax_51 - 0x18) = var_108
                *(rbx_3 + rax_51 - 8) = var_f8
            while (rsi_5 s< r14_2)
            
            rdi = arg1
        var_250_1.d = performanceCount.d
        int32_t r8_8
        r8_8.b = data_143a2dc6c == 0
        var_250_1:4.b = cond:8_1
        var_250_1:5.b = var_2b8
        int64_t* var_248_2 = &var_290
        void**** var_240_2 = var_2b0
        var_278 = sub_141fdc750
        void** var_270_1 = &var_258
        var_258 = rdi
        sub_14077b750(r14_2.d, &var_278, r8_8)
        
        if (var_2b8 == 0)
            int64_t* rcx_38 = data_143f0f180
            (*(*rcx_38 + 0x540))(rcx_38, &data_143f02b98, &var_290)
    void**** rsi_7 = var_2b0
    int64_t r14_3 = sx.q(rsi_7[1].d)
    
    if (r14_3.d != 0)
        int32_t rax_61 = *(rdi + 0xd8)
        int32_t rdx_16 = r14_3.d + rax_61
        
        if (rdx_16 s> *(rdi + 0xdc))
            sub_1405c5570(rdi + 0xd0, rdx_16)
            rax_61 = *(rdi + 0xd8)
        
        memcpy(*(rdi + 0xd0) + (sx.q(rax_61) << 3), *rsi_7, (r14_3 << 3).d)
        *(rdi + 0xd8) += r14_3.d
        rsi_7 = var_2b0
    
    rsi_7[1].d = 0
    
    if (*(rsi_7 + 0xc) != 0)
        sub_1405c5570(rsi_7, 0)
    
    if (var_298.d s> 0)
        var_2e8.q = &var_290
        sub_141fde6a0(performanceCount_1, *(rdi + 0x20), arg3, &var_2a0, var_2e8)
    
    result = QueryPerformanceCounter(&performanceCount_1)
    int64_t rcx_45 = var_290
    data_143f3d6b8 = 0
    
    if (rcx_45 != 0)
        result = sub_140a74f90(rcx_45)
    
    int32_t i_7 = var_298.d
    int64_t* rbx_8 = var_2a0
    
    if (i_7 != 0)
        int32_t i_3
        
        do
            result = sub_14081c9d0(rbx_8)
            rbx_8 = &rbx_8[6]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        rbx_8 = var_2a0
    
    if (rbx_8 != 0)
        result = sub_140a74f90(rbx_8)
    
    void*** rcx_48 = var_268
    
    if (rcx_48 != 0)
        result = sub_140a74f90(rcx_48)

__security_check_cookie(rax_1 ^ &var_308)
return result
