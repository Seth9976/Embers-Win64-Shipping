// 函数: sub_14196aaf0
// 地址: 0x14196aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t result = __security_cookie ^ &var_398
int64_t result_1 = result

if (arg1[2].d s> 0)
    (*(*arg1 + 0x18))()
    void* rax_2 = data_143f01e08
    int32_t r13_1 = 0
    uint64_t var_350 = 0
    int128_t zmm7 = arg2
    int32_t var_348_1 = 0
    uint64_t var_268 = 0
    int32_t rdi_1 = *(rax_2 + 0x18)
    int64_t rsi_1 = *(rax_2 + 0x10)
    int16_t* rsi_2
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_268, rdi_1, 0)
        rsi_2 = var_268
        memcpy(rsi_2, rsi_1, rdi_1 * 2)
    else
        rsi_2 = nullptr
    
    int16_t* const rcx_2 = &data_142d40450
    
    if (rdi_1 != 0)
        rcx_2 = rsi_2
    
    rdi_1.b = sub_140a54510(rcx_2, &data_142d6bbe8) != 0
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    if (rdi_1.b != 0)
        void* rax_4 = data_143f01e08
        uint64_t var_258 = 0
        int32_t rdi_2 = *(rax_4 + 0x18)
        int64_t rsi_3 = *(rax_4 + 0x10)
        int16_t* rsi_4
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_258, rdi_2, 0)
            rsi_4 = var_258
            memcpy(rsi_4, rsi_3, rdi_2 * 2)
        else
            rsi_4 = nullptr
        
        int16_t* const r8_5 = &data_142d40450
        
        if (rdi_2 != 0)
            r8_5 = rsi_4
        
        int64_t var_1f8
        sub_140a2e390(&var_1f8, u"Root filter: %s ", r8_5)
        int32_t var_1f0
        int32_t r8_7
        
        if (var_1f0 == 0)
            r8_7 = 0
        else
            r8_7 = var_1f0 - 1
        
        sub_140a20ba0(&var_350, var_1f8, r8_7)
        int64_t rcx_8 = var_1f8
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (rsi_4 != 0)
            sub_140a74f90(rsi_4)
    
    int128_t zmm6 = zx.o(0)
    arg2 = *(data_143f01e20 + 4)
    
    if (not(arg2.d f<= 0f))
        int64_t var_1e8
        sub_140a2e390(&var_1e8, u"Threshold: %.2f%% ", _mm_cvtps_pd(arg2.q))
        int32_t var_1e0
        int32_t r8_10
        
        if (var_1e0 == 0)
            r8_10 = 0
        else
            r8_10 = var_1e0 - 1
        
        arg2 = sub_140a20ba0(&var_350, var_1e8, r8_10)
        int64_t rcx_12 = var_1e8
        
        if (rcx_12 != 0)
            arg2 = sub_140a74f90(rcx_12)
    
    if (var_348_1 != 0 && var_348_1 - 1 s> 0)
        uint64_t var_338 = 0
        int64_t var_330_1 = 0
        sub_1405947f0(&var_338, 3)
        int32_t r15_1 = var_330_1:4.d
        int32_t rdi_3 = var_330_1.d + 3
        var_330_1.d = rdi_3
        
        if (rdi_3 s> r15_1)
            sub_140594770(&var_338)
            r15_1 = var_330_1:4.d
            rdi_3 = var_330_1.d
        
        uint64_t rsi_5 = var_338
        arg2 = UnDecorator::getReferenceType(rsi_5, &data_142d8adc4, 6)
        int32_t rdi_4
        uint64_t r12_1
        int32_t r14_1
        uint64_t r15_2
        
        if (rdi_3 s> 1)
            int32_t r14_3
            
            if (var_348_1 == 0)
                r14_3 = 0
            else
                r14_3 = var_348_1 - 1
            
            int32_t rax_8
            
            if (rdi_3 == 0)
                rax_8 = rdi_3 + 1
            
            if (rdi_3 != 0 || r14_3 == 0)
                rax_8 = 0
            
            uint64_t var_328 = rsi_5
            int32_t rdx_11 = rax_8 + rdi_3 + r14_3
            var_338 = 0
            rsi_5 = 0
            
            if (rdx_11 s> r15_1)
                sub_1405947f0(&var_328, rdx_11)
            
            arg2 = sub_140a20ba0(&var_328, var_350, r14_3)
            rdi_4 = rdi_3
            r14_1 = r15_1
            r12_1 = var_328
            var_328 = 0
            int32_t var_2d8_2 = rdi_4
            int32_t var_2d4_2 = r14_1
            int32_t var_320_1
            var_320_1.q = 0
            r15_2 = var_350
        else
            rdi_4 = var_348_1
            r15_2 = var_350
            uint64_t var_2e0 = 0
            
            if (rdi_4 != 0)
                sub_1405a4c70(&var_2e0, rdi_4, 0)
                r12_1 = var_2e0
                arg2 = memcpy(r12_1, r15_2, rdi_4 * 2)
                int32_t var_2d4
                r14_1 = var_2d4
                r15_2 = var_350
            else
                r14_1 = 0
                int32_t var_2d4_1 = 0
                r12_1 = 0
        
        if (r15_2 != 0)
            arg2 = sub_140a74f90(r15_2)
        
        var_350 = r12_1
        var_348_1 = rdi_4
        var_348_1 = r14_1
        
        if (rsi_5 != 0)
            arg2 = sub_140a74f90(rsi_5)
    
    TEB* gsbase
    void* r14_4 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143cd6ff0 s> *(r14_4 + 0x14))
        arg2 = _Init_thread_header(&data_143cd6ff0)
        
        if (data_143cd6ff0 == 0xffffffff)
            sub_140a96080(&data_143cd6fd8)
            atexit(sub_142cb0d20)
            arg2 = _Init_thread_footer(&data_143cd6ff0)
    
    int64_t var_2b0 = data_143cd6fd8
    void* rax_12 = data_143cd6fe0
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    int32_t var_2a0_1 = data_143cd6fe8
    
    if (data_143f0fb28 s> *(r14_4 + 0x14))
        int64_t r8_28
        r8_28, arg2 = _Init_thread_header(&data_143f0fb28)
        
        if (data_143f0fb28 == 0xffffffff)
            int64_t* rcx_73 = data_143db18d0
            
            if (rcx_73 == 0)
                sub_140a53c40()
                rcx_73 = data_143db18d0
            
            r8_28.b = 1
            data_143f0fb20 = (*(*rcx_73 + 0xb0))(rcx_73, u"r.VSync", r8_28)
            arg2 = _Init_thread_footer(&data_143f0fb28)
    
    int64_t* rcx_23 = data_143f0fb20
    int64_t* var_1d8
    int64_t* var_1d0
    
    if ((*(*rcx_23 + 0x90))(rcx_23) != 0 && (*(*arg1 + 0x28))(arg1) == 0)
        int64_t* rax_19
        rax_19, arg2 = _vfprintf_p_l(&var_1d8, 
            WARNING: This GPU profile was captured with v-sync enabled.  V-sync wait time may show up in "
        "any bucket, and as a result the data in this profi", GpuProfiler")
        int64_t rdx_13 = var_2b0
        var_2b0 = *rax_19
        *rax_19 = rdx_13
        int64_t var_2a8_2 = rax_19[1]
        rax_19[1] = rax_12
        int32_t var_2a0_2 = rax_19[2].d
        
        if (var_1d0 != 0)
            var_1d0[1].d -= 1
            
            if (var_1d0[1].d == 1)
                (**var_1d0)(var_1d0)
                int32_t rax_23 = *(var_1d0 + 0xc)
                *(var_1d0 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_1d0 + 8))(var_1d0, 1)
    
    (*(*arg1 + 0x20))(arg1)
    int32_t i = 0
    int64_t var_1a8 = 0
    int32_t var_1a0_1 = 0
    int32_t var_17c_1 = 0x80
    int64_t var_198
    __builtin_memset(&var_198, 0, 0x1c)
    int32_t var_178_1 = 0xffffffff
    int32_t var_174_1 = 0
    int64_t var_168_1 = 0
    int32_t var_160_1 = 0
    
    if (arg1[2].d s> 0)
        int64_t rdi_6 = 0
        
        do
            arg2 = sub_141971b10(*(arg1[1] + rdi_6), 0, &var_1a8, arg2.d)
            i += 1
            rdi_6 += 8
        while (i s< arg1[2].d)
    
    if (data_143f0fb38 s> *(r14_4 + 0x14))
        _Init_thread_header(&data_143f0fb38)
        
        if (data_143f0fb38 == 0xffffffff)
            int64_t* rcx_74 = data_143db18d0
            
            if (rcx_74 == 0)
                sub_140a53c40()
                rcx_74 = data_143db18d0
            
            int64_t r8_29
            r8_29.b = 1
            data_143f0fb30 = (*(*rcx_74 + 0xb0))(rcx_74, u"r.ProfileGPU.Root", r8_29)
            _Init_thread_footer(&data_143f0fb38)
    
    int64_t* rcx_32 = data_143f0fb30
    int16_t* var_2c0
    (*(*rcx_32 + 0xa0))(rcx_32, &var_2c0)
    int16_t* rsi_6 = var_2c0
    int16_t* var_2d0 = nullptr
    int32_t var_2b8
    int32_t var_2c8_1 = var_2b8
    
    if (var_2b8 != 0)
        sub_1405a4c70(&var_2d0, var_2b8, 0)
        memcpy(var_2d0, rsi_6, var_2b8 * 2)
    else
        int32_t var_2c4_1 = 0
    
    int64_t rax_29 = data_143f01e50
    int32_t i_1 = 0
    int64_t var_158
    __builtin_memset(&var_158, 0, 0x2c)
    int32_t var_12c_1 = 0x80
    int32_t var_128_1 = 0xffffffff
    int32_t var_124_1 = 0
    int64_t var_118_1 = 0
    int32_t var_110_1 = 0
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x2c)
    int32_t var_dc_1 = 0x80
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x2c)
    int32_t var_8c_1 = 0x80
    int32_t var_88_1 = 0xffffffff
    int32_t var_84_1 = 0
    int64_t var_78_1 = 0
    int32_t var_70_1 = 0
    int64_t var_68_1 = 0
    bool var_5f_1 = *(rax_29 + 4) != 0
    bool var_60_1 = *(data_143f01e80 + 4) != 0
    int32_t var_354
    
    if (arg1[2].d s> 0)
        int64_t rdi_8 = 0
        
        do
            zmm6, zmm7 = sub_14196b850(*(arg1[1] + rdi_8), zmm7, 0, &var_2d0, 0, &var_354, &var_158)
            i_1 += 1
            rdi_8 += 8
        while (i_1 s< arg1[2].d)
    
    sub_14197af80(&var_158)
    int16_t* const rcx_37 = &data_142d40450
    
    if (var_2b8 != 0)
        rcx_37 = var_2c0
    
    if (sub_140a54510(rcx_37, &data_142d6bbe8) == 0 && *(data_143f01e38 + 4) != 0)
        char var_358
        char* var_308 = &var_358
        char** var_310 = &var_308
        int32_t var_318
        
        if (var_1a0_1 - var_174_1 s> 0)
            sub_140d3ac50(&var_1a8)
            var_318 = &var_310
            zmm6, zmm7 = sub_14195eb90(var_1a8, var_1a0_1 - var_174_1, var_358)
        
        sub_140afdf10(&var_1a8)
        
        if (data_143f0fb48 s> *(r14_4 + 0x14))
            _Init_thread_header(&data_143f0fb48)
            
            if (data_143f0fb48 == 0xffffffff)
                int64_t* rcx_72 = data_143db18d0
                
                if (rcx_72 == 0)
                    sub_140a53c40()
                    rcx_72 = data_143db18d0
                
                int64_t r8_27
                r8_27.b = 1
                data_143f0fb40 = (*(*rcx_72 + 0xb0))(rcx_72, u"r.ProfileGPU.Pattern", r8_27)
                _Init_thread_footer(&data_143f0fb48)
        
        int64_t* rcx_41 = data_143f0fb40
        uint64_t var_2f0
        (*(*rcx_41 + 0xa0))(rcx_41, &var_2f0)
        uint64_t r14_5 = 0
        int32_t r15_3 = 0
        int32_t var_340_1 = 0
        int32_t r12_2 = 0
        int32_t var_33c_1 = 0
        var_318 = 0
        var_310.d = 0
        var_308.d = 0
        var_354 = 0
        int16_t* var_300 = nullptr
        int32_t var_2f8_1 = 0
        sub_1405947f0(&var_300, 2)
        int32_t rbx_2 = var_2f8_1 + 2
        
        if (rbx_2 s> 0)
            sub_140594770(&var_300)
        
        int16_t* rdi_9 = var_300
        UnDecorator::getReferenceType(rdi_9, &data_142d6bbe8, 4)
        int16_t* const rdx_22 = &data_142d40450
        int16_t* const rcx_45 = &data_142d40450
        
        if (rbx_2 != 0)
            rdx_22 = rdi_9
        
        int32_t var_2e8
        
        if (var_2e8 != 0)
            rcx_45 = var_2f0
        
        rbx_2.b = sub_140a54510(rcx_45, rdx_22) == 0
        
        if (rdi_9 != 0)
            sub_140a74f90(rdi_9)
        
        int32_t rsi_7
        
        if (rbx_2.b == 0)
            rsi_7 = var_2e8
        else
            rsi_7 = 0
            var_2e8 = 0
            int32_t var_2e4
            
            if (var_2e4 != 0)
                sub_1405947f0(&var_2f0, 0)
                rsi_7 = var_2e8
        
        uint64_t rbx_3 = var_2f0
        uint64_t var_248 = 0
        
        if (rsi_7 != 0)
            sub_1405a4c70(&var_248, rsi_7, 0)
            r14_5 = var_248
            memcpy(r14_5, rbx_3, rsi_7 * 2)
        
        int32_t rcx_50 = 0
        int32_t var_294_1 = 1
        int32_t r8_20 = 0
        int32_t var_298_1 = 0
        int64_t* var_290_1 = &var_198
        int32_t var_288_1 = 0xffffffff
        int64_t var_284_1 = 0
        int32_t var_180
        
        if (var_180 != 0)
            int64_t* r9_3 = &var_198
            int64_t* var_188
            
            if (var_188 != 0)
                r9_3 = var_188
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(var_180 - 1)
            int32_t rdx_27 = *r9_3
            
            if (rdx_27 != 0)
            label_14196b408:
                int32_t rax_46 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_1
                int32_t temp0_4
                temp0_4, rflags_1 = _bit_scan_reverse(rax_46)
                int32_t var_294_2 = rax_46
                int32_t rax_47
                
                if (rax_46 == 0)
                    rax_47 = 0x20
                else
                    rax_47 = 0x1f - temp0_4
                
                int32_t rax_48 = r8_20 - rax_47 + 0x1f
                
                if (rax_48 s> var_180)
                    rax_48 = var_180
                
                var_284_1.d = rax_48
            else
                while (true)
                    int64_t rdx_28 = sx.q(rcx_50)
                    r8_20 += 0x20
                    rcx_50 += 1
                    var_284_1:4.d = r8_20
                    var_298_1 = rcx_50
                    
                    if (rdx_28.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        var_284_1.d = var_180
                        break
                    
                    rdx_27 = *(r9_3 + (rdx_28 << 2) + 4)
                    int32_t var_288_2 = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_14196b408
        
        int16_t var_200_1 = 0
        var_1d8 = &var_1a8
        int64_t* var_270_1 = &var_1a8
        var_1d0.o = var_298_1.o
        int64_t* var_208_1 = &var_1a8
        int128_t zmm2_1 = var_1d8.o
        int128_t var_1c0_1 = 0xffffffff
        int128_t zmm0
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_238 = zmm2_1
        int128_t var_1c8
        int128_t var_228_1 = var_1c8
        int128_t var_218_1 = zmm0
        
        if (0 s< *(var_1c8.q + 0x18))
            zmm7.d = zmm7.d f* 5f
            int32_t i_2 = var_228_1:0xc.d
            
            do
                int16_t** rbx_5 = sx.q(i_2) * 0x60
                int64_t rdi_10 = *var_238.q
                float temp3_1 = *(rbx_5 + rdi_10 + 0x4c)
                zmm7.d f- temp3_1
                void* rax_51
                rax_51.b = zmm7.d f< temp3_1
                
                if (rsi_7 s> 1)
                    int16_t* rdx_29
                    
                    if (*(rbx_5 + rdi_10 + 8) == 0)
                        rdx_29 = &data_142d40450
                    else
                        rdx_29 = *(rbx_5 + rdi_10)
                    
                    uint64_t rcx_52 = &data_142d40450
                    
                    if (rsi_7 != 0)
                        rcx_52 = r14_5
                    
                    rax_51 = sub_140b40430(rcx_52, rdx_29)
                
                if (rax_51.b != 0)
                    int32_t rax_52 = *(rbx_5 + rdi_10 + 0x28)
                    r13_1 += rax_52
                    int32_t rdx_30 = *(rbx_5 + rdi_10 + 0x20)
                    r15_3 += rdx_30
                    int32_t rcx_53 = *(rbx_5 + rdi_10 + 0x24)
                    r12_2 += rcx_53
                    var_308.d += rax_52
                    var_318 += rdx_30
                    var_310.d += rcx_53
                    zmm6.d = zmm6.d f+ *(rbx_5 + rdi_10 + 0x4c)
                    var_340_1 += *(rbx_5 + rdi_10 + 0x2c)
                    int32_t r8_25 = var_33c_1 + *(rbx_5 + rdi_10 + 0x3c)
                    var_354 += *(rbx_5 + rdi_10 + 0x50)
                    var_33c_1 = r8_25
                
                var_228_1:8.d &= not.d(var_238:0xc.d)
                sub_14059bdd0(&var_238:8)
                i_2 = var_228_1:0xc.d
            while (i_2 s< *(var_228_1.q + 0x18))
            
            if (var_200_1.b != 0 && var_200_1:1.b != 0)
                sub_1419681c0(var_208_1, var_208_1[1].d - *(var_208_1 + 0x34), 1)
        
        if (r14_5 != 0)
            sub_140a74f90(r14_5)
        
        uint64_t rcx_57 = var_2f0
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
    
    int32_t var_70_2 = 0
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
    
    sub_1417c7800(&var_b8)
    int32_t var_c0_2 = 0
    
    if (var_c8_1 != 0)
        sub_140a74f90(var_c8_1)
    
    sub_1417c7800(&var_108)
    int32_t var_110_2 = 0
    
    if (var_118_1 != 0)
        sub_140a74f90(var_118_1)
    
    sub_1417c7800(&var_158)
    int16_t* rcx_64 = var_2d0
    
    if (rcx_64 != 0)
        sub_140a74f90(rcx_64)
    
    int16_t* rcx_65 = var_2c0
    
    if (rcx_65 != 0)
        sub_140a74f90(rcx_65)
    
    int32_t var_160_2 = 0
    
    if (var_168_1 != 0)
        sub_140a74f90(var_168_1)
    
    sub_141962550(&var_1a8)
    result = sub_1405970a0(&var_2b0)
    uint64_t rcx_69 = var_350
    
    if (rcx_69 != 0)
        result = sub_140a74f90(rcx_69)

__security_check_cookie(result_1 ^ &var_398)
return result
