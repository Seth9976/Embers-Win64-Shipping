// 函数: sub_1409c59f0
// 地址: 0x1409c59f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
void* r12 = arg2
void* rdi = arg1
*(arg2 + 0x390) = *arg4
*(arg2 + 0x3a0) = arg4[1].q
*(arg1 + 0x38) = *(arg4 + 0x14)
int32_t var_298

if (arg3 != 0)
    void* rax_3 = sub_1425b0750()
    void* rdx = *(arg3 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        void* rbx_1 = *(arg3 + 0x440)
        
        if (rbx_1 != 0)
            rdx.b = 1
            
            if (sub_142368cd0(rbx_1, rdx.b, 0xffffffff) != 0)
                int64_t rax_7 = sx.q(*(rdi + 0x38))
                *(rdi + 0x28) = rbx_1
                *(rdi + 0x30) = rbx_1
                int64_t* r8_1 = *(rbx_1 + 0x50)
                
                if (rax_7.d s>= 0 && rax_7.d s< r8_1[1].d)
                    void* rdx_1 = *(*r8_1 + (rax_7 << 3))
                    *(rdx_1 + 0x44) &= 0xfffffff0
                    *(rdx_1 + 0x48) = 0
                    int64_t* r14_1 = *(r12 + 0x28)
                    void* r13_1 = *(*r8_1 + (sx.q(*(rdi + 0x38)) << 3))
                    void* var_2a0
                    sub_14090aa40(&r14_1[0x2a], &var_2a0, data_143f35cc8)
                    int64_t* var_1d8
                    sub_14090aa40(&r14_1[0x35], &var_1d8, data_143f360f8)
                    void* var_1d0
                    sub_14090aa40(&r14_1[0x35], &var_1d0, data_143f36100)
                    int64_t* var_208
                    sub_14099aef0(&r14_1[0x35], &var_208, data_143f36108)
                    int64_t var_200
                    sub_14099afb0(&r14_1[0x35], &var_200, data_143f36110)
                    uint64_t i_14
                    sub_14090a980(&r14_1[0x35], &i_14, data_143f360f0)
                    void* var_1c8
                    sub_14099b130(&r14_1[0x40], &var_1c8, data_143f36118)
                    void* var_188
                    sub_14099b070(&r14_1[0x61], &var_188, data_143f36150)
                    void* var_170
                    sub_14099b070(&r14_1[0x61], &var_170, data_143cede10)
                    void* var_168
                    sub_14099b130(&r14_1[0x61], &var_168, data_143f36158)
                    sub_14099b130(&r14_1[0x61], &var_1c8, data_143f36160)
                    int32_t i_15 = sub_1423664c0(r13_1)
                    uint64_t i_27 = i_14
                    sub_14090c670(i_27, i_15)
                    *(r12 + 0x3d0) = i_15
                    uint64_t i_17 = zx.q(*(r13_1 + 0x12c))
                    int32_t i_23 = i_17.d
                    sub_1409d9850(r14_1, r14_1[1].d - *(r14_1 + 0x34) + i_17.d)
                    sub_1409d93a0(&r14_1[7], r14_1[8].d - *(r14_1 + 0x6c) + i_17.d)
                    int32_t rax_9 = *(r13_1 + 0x16c)
                    TEB* gsbase
                    uint64_t rbx_4 =
                        *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                    uint64_t var_278_1 = rbx_4
                    
                    if (data_143cef0b4 s> *(rbx_4 + 0x14))
                        _Init_thread_header(&data_143cef0b4)
                        
                        if (data_143cef0b4 == 0xffffffff)
                            atexit(sub_142cb9080)
                            _Init_thread_footer(&data_143cef0b4)
                    
                    sub_140908eb0(&data_143991210)
                    
                    if (data_143cef0c8 s> *(rbx_4 + 0x14))
                        _Init_thread_header(&data_143cef0c8)
                        
                        if (data_143cef0c8 == 0xffffffff)
                            atexit(sub_142cb9b50)
                            _Init_thread_footer(&data_143cef0c8)
                    
                    int32_t rdx_20 = data_143cef0c0
                    
                    if (i_17.d s> rdx_20)
                        bool cond:1_1 = i_17.d s<= data_143cef0c4
                        rdx_20 = i_17.d
                        data_143cef0c0 = rdx_20
                        
                        if (not(cond:1_1))
                            sub_1409da2a0(&data_143cef0b8)
                            rdx_20 = data_143cef0c0
                    else if (i_17.d s< rdx_20)
                        rbx_4 = zx.q(rdx_20 - i_17.d)
                        
                        if (rdx_20 != i_17.d)
                            int32_t rax_15 = rdx_20 - rbx_4.d
                            
                            if (rax_15 != i_17.d)
                                int64_t r9 = data_143cef0b8
                                memmove(r9 + (sx.q(i_17.d) << 3), 
                                    r9 + (sx.q((rbx_4 + i_17).d) << 3), (rax_15 - i_17.d) << 3)
                                rdx_20 = data_143cef0c0
                            
                            rdx_20 -= rbx_4.d
                            data_143cef0c0 = rdx_20
                    
                    int32_t i = 0
                    float var_2e8
                    uint128_t zmm0_1
                    uint128_t i_28
                    float zmm2
                    
                    if (i_17.d s>= 4)
                        int64_t* r10_1 = nullptr
                        int32_t r9_1 = 2
                        
                        do
                            int64_t rax_19 = *(r13_1 + 0x120)
                            uint64_t rcx_23 = zx.q(*(r13_1 + 0x128) * i)
                            int32_t i_7 = i
                            i_28 = zx.o(*(rcx_23 + rax_19))
                            int32_t rax_20 = *(rcx_23 + rax_19 + 8)
                            zmm0_1.d = _mm_shuffle_ps(i_28, i_28, 0x55).d f* 0.330000013f
                            int64_t rax_21 = data_143cef0b8
                            zmm2 = i_28.d * 0.300000012f f+ zmm0_1.d
                            zmm0_1.d = rax_20.d f* 0.370000005f
                            var_2e8 = zmm2 f+ zmm0_1.d
                            *(r10_1 + rax_21) = var_2e8.q
                            uint64_t rcx_26 = zx.q((r9_1 - 1) * *(r13_1 + 0x128))
                            int64_t rax_22 = *(r13_1 + 0x120)
                            i_28 = zx.o(*(rcx_26 + rax_22))
                            int32_t rax_23 = *(rcx_26 + rax_22 + 8)
                            zmm0_1.d = _mm_shuffle_ps(i_28, i_28, 0x55).d f* 0.330000013f
                            int32_t var_2e4_1 = r9_1 - 1
                            int64_t rax_25 = data_143cef0b8
                            zmm2 = i_28.d * 0.300000012f f+ zmm0_1.d
                            zmm0_1.d = rax_23.d f* 0.370000005f
                            var_2e8 = zmm2 f+ zmm0_1.d
                            *(r10_1 + rax_25 + 8) = var_2e8.q
                            uint64_t rcx_29 = zx.q(r9_1 * *(r13_1 + 0x128))
                            int64_t rax_26 = *(r13_1 + 0x120)
                            int32_t var_2e4_2 = r9_1
                            i_28 = zx.o(*(rcx_29 + rax_26))
                            int32_t rax_27 = *(rcx_29 + rax_26 + 8)
                            zmm0_1.d = _mm_shuffle_ps(i_28, i_28, 0x55).d f* 0.330000013f
                            int64_t rax_28 = data_143cef0b8
                            zmm2 = i_28.d * 0.300000012f f+ zmm0_1.d
                            zmm0_1.d = rax_27.d f* 0.370000005f
                            var_2e8 = zmm2 f+ zmm0_1.d
                            *(r10_1 + rax_28 + 0x10) = var_2e8.q
                            int64_t rax_29 = *(r13_1 + 0x120)
                            uint64_t rcx_32 = zx.q(*(r13_1 + 0x128) * (r9_1 + 1))
                            int32_t var_2e4_3 = r9_1 + 1
                            i_28 = zx.o(*(rcx_32 + rax_29))
                            int32_t rax_30 = *(rcx_32 + rax_29 + 8)
                            zmm0_1.d = _mm_shuffle_ps(i_28, i_28, 0x55).d f* 0.330000013f
                            i_14 = i_28.q
                            zmm2 = i_28.d * 0.300000012f f+ zmm0_1.d
                            zmm0_1.d = rax_30.d f* 0.370000005f
                            var_2e8 = zmm2 f+ zmm0_1.d
                            i += 4
                            r9_1 += 4
                            *(r10_1 + data_143cef0b8 + 0x18) = var_2e8.q
                            r10_1 = &r10_1[4]
                        while (i s< (i_17 - 3).d)
                        
                        rdx_20 = data_143cef0c0
                    
                    if (i s< i_17.d)
                        int64_t rdx_24 = sx.q(i) << 3
                        
                        do
                            int64_t rax_33 = *(r13_1 + 0x120)
                            uint64_t rcx_35 = zx.q(*(r13_1 + 0x128) * i)
                            int32_t i_8 = i
                            i += 1
                            i_28 = zx.o(*(rcx_35 + rax_33))
                            int32_t rax_34 = *(rcx_35 + rax_33 + 8)
                            zmm0_1.d = _mm_shuffle_ps(i_28, i_28, 0x55).d f* 0.330000013f
                            int64_t* rax_35 = data_143cef0b8
                            i_14 = i_28.q
                            zmm2 = i_28.d * 0.300000012f f+ zmm0_1.d
                            zmm0_1.d = rax_34.d f* 0.370000005f
                            var_2e8 = zmm2 f+ zmm0_1.d
                            *(rax_35 + rdx_24) = var_2e8.q
                            rdx_24 += 8
                        while (i s< i_17.d)
                        
                        rdx_20 = data_143cef0c0
                    
                    uint128_t zmm6
                    uint128_t var_48_1 = zmm6
                    char var_318
                    sub_14099c290(data_143cef0b8, rdx_20, var_318)
                    uint128_t zmm14 = 0x38d1b717
                    int32_t i_5
                    int32_t i_6
                    int32_t var_30c
                    int32_t var_300
                    uint64_t i_24
                    int64_t i_25
                    int64_t* var_1e8
                    uint128_t i_22
                    
                    if (i_17.d s> 0)
                        int32_t r15_1 = 1
                        int32_t* r10_2 = data_143cef0b8
                        uint64_t i_13 = i_17
                        int32_t i_29 = i_17.d
                        int64_t r14_2 = 4
                        uint64_t i_1
                        
                        do
                            int32_t rdi_1 = r15_1
                            
                            if (r15_1 s< i_29)
                                rbx_4 = r14_2 + 4
                                
                                do
                                    uint32_t i_32[0x4] = *(r10_2 + rbx_4)
                                    i_32[0] = i_32[0] f- *(r10_2 + r14_2 - 4)
                                    
                                    if (_mm_and_ps(i_32, 0x7fffffff)[0] f> 9.99999975e-05f)
                                        break
                                    
                                    int32_t rdx_25 = *(r13_1 + 0x128)
                                    int64_t r9_2 = *(r13_1 + 0x120)
                                    int32_t i_16 = *(r10_2 + r14_2)
                                    i_5 = i_16
                                    int32_t i_20 = *(r10_2 + rbx_4 + 4)
                                    uint64_t rax_37 = zx.q(rdx_25 * i_16)
                                    i_6 = i_20
                                    uint64_t rdx_26 = zx.q(rdx_25 * i_20)
                                    i_22 = zx.o(*(rax_37 + r9_2))
                                    int32_t i_33 = *(rax_37 + r9_2 + 8)
                                    i_32 = zx.o(*(rdx_26 + r9_2))
                                    i_24 = i_22.q
                                    i_22.d = i_22.d f- i_32[0]
                                    int32_t rax_38 = *(rdx_26 + r9_2 + 8)
                                    i_25 = i_32.q
                                    
                                    if (_mm_and_ps(i_22, 0x7fffffff).d f> 9.99999975e-05f)
                                        rax_38.b = 0
                                    else
                                        i_32 = i_24:4.d
                                        i_32[0] = i_32[0] f- i_25:4.d
                                        
                                        if (_mm_and_ps(i_32, 0x7fffffff)[0] f> 9.99999975e-05f)
                                            rax_38.b = 0
                                        else
                                            i_32 = i_33
                                            i_32[0] = i_32[0] f- rax_38
                                            
                                            if (_mm_and_ps(i_32, 0x7fffffff)[0] f> 9.99999975e-05f)
                                                rax_38.b = 0
                                            else
                                                rax_38.b = 1
                                    
                                    if (rax_38.b != 0)
                                        i_14 = &i_5
                                        var_300.q = &i_6
                                        sub_1409994d0(&data_143991210, &var_2e8, &i_14, nullptr)
                                        var_1e8 = &i_6
                                        int32_t* var_1e0_1 = &i_5
                                        sub_1409994d0(&data_143991210, &var_30c, &var_1e8, nullptr)
                                        r10_2 = data_143cef0b8
                                    
                                    i_29 = i_23
                                    rdi_1 += 1
                                    rbx_4 += 8
                                while (rdi_1 s< i_29)
                            
                            r15_1 += 1
                            r14_2 += 8
                            i_1 = i_13
                            i_13 -= 1
                        while (i_1 != 1)
                        i_17 = zx.q(i_23)
                    
                    int32_t r12_1 = 0
                    var_30c = 0
                    int32_t var_2b8
                    int32_t var_2a8
                    int64_t var_268
                    int128_t var_248
                    int64_t var_238
                    int64_t var_228
                    void* var_1c0
                    int64_t var_180
                    int32_t var_160[0x4]
                    int64_t var_150
                    
                    if (i_17.d s> 0)
                        void* r14_3 = var_2a0
                        int64_t r15_2 = 0
                        float zmm7[0x4]
                        float var_58_1[0x4] = zmm7
                        float zmm8[0x4]
                        float var_68_1[0x4] = zmm8
                        uint128_t zmm9
                        uint128_t var_78_1 = zmm9
                        int128_t zmm10
                        int128_t var_88_1 = zmm10
                        int128_t zmm11
                        int128_t var_98_1 = zmm11
                        int128_t zmm12
                        int128_t var_a8_1 = zmm12
                        float zmm13[0x4]
                        float var_b8_1[0x4] = zmm13
                        int128_t zmm15 = zx.o(0)
                        int64_t var_1f8_1 = 0
                        var_268 = 0
                        var_150 = 0
                        
                        do
                            int64_t rax_39 = *(r13_1 + 0x120)
                            uint64_t rcx_39 = zx.q(r12_1 * *(r13_1 + 0x128))
                            rbx_4.b = 0
                            char var_318_1 = 0
                            zmm6 = zx.o(*(rcx_39 + rax_39))
                            var_2e8 = *(rcx_39 + rax_39 + 8)
                            
                            if (data_143cef0e0 s> *(var_278_1 + 0x14))
                                _Init_thread_header(&data_143cef0e0)
                                
                                if (data_143cef0e0 == 0xffffffff)
                                    atexit(sub_142cb9da0)
                                    _Init_thread_footer(&data_143cef0e0)
                            
                            int32_t rax_43 = data_143cef0dc
                            data_143cef0d8 = 0
                            
                            if (rax_43 s< 0 && rax_43 != 0)
                                sub_1405dadb0(&data_143cef0d0, 0)
                            
                            sub_1409b3740(&data_143991210, data_143991218 - data_143991244, 0)
                            int32_t rax_44 = data_143991258
                            
                            if (rax_44 != 0)
                                void* rcx_40 = data_143991250
                                void* rax_47 = &data_143991248
                                
                                if (rcx_40 != 0)
                                    rax_47 = rcx_40
                                
                                int32_t i_10 = *(rax_47 + ((sx.q(rax_44 - 1) & sx.q(r12_1)) << 2))
                                
                                if (i_10 != 0xffffffff)
                                    int64_t r8_18 = data_143991210
                                    int32_t i_2
                                    
                                    do
                                        int64_t rax_49 = sx.q(i_10) * 2
                                        i_2 = *(r8_18 + (rax_49 << 3) + 8)
                                        
                                        if (*(r8_18 + (rax_49 << 3)) == r12_1)
                                            if (i_10 != 0xffffffff)
                                                int32_t i_9 = i_2
                                                i_6 = i_2
                                                int32_t i_11 = i_2
                                                i_5 = i_2
                                                
                                                while (true)
                                                    int64_t r15_3 = sx.q(data_143cef0d8)
                                                    int32_t rax_50 = (r15_3 + 1).d
                                                    bool cond:10_1 = rax_50 s<= data_143cef0dc
                                                    data_143cef0d8 = rax_50
                                                    
                                                    if (not(cond:10_1))
                                                        sub_1405a4cf0(&data_143cef0d0)
                                                        i_9 = i_6
                                                        i_11 = i_5
                                                        r8_18 = data_143991210
                                                    
                                                    int32_t* r10_3 = data_143cef0d0 + (r15_3 << 2)
                                                    
                                                    if (r10_3 != 0)
                                                        i_9 = i_11
                                                        *r10_3 = *(r8_18 + sx.q(i_10) * 0x10 + 4)
                                                        r8_18 = data_143991210
                                                    
                                                    i_10 = i_9
                                                    
                                                    if (i_2 == 0xffffffff)
                                                        break
                                                    
                                                    while (true)
                                                        i_2 = *(r8_18 + sx.q(i_2) * 0x10 + 8)
                                                        i_9 = i_2
                                                        
                                                        if (*(r8_18 + sx.q(i_10) * 0x10) == r12_1)
                                                            i_6 = i_9
                                                            i_11 = i_9
                                                            i_5 = i_9
                                                            break
                                                        
                                                        i_10 = i_2
                                                        
                                                        if (i_2 == 0xffffffff)
                                                            goto label_1409c6324
                                                
                                            label_1409c6324:
                                                r15_2 = var_1f8_1
                                            
                                            break
                                        
                                        i_10 = i_2
                                    while (i_2 != 0xffffffff)
                                    rbx_4 = zx.q(var_318_1)
                            
                            int32_t rcx_41 = 0
                            int64_t* rdi_2
                            
                            if (data_143cef0d8 s<= 0)
                            label_1409c635c:
                                rdi_2 = r14_1
                            else
                                int32_t* rax_59 = data_143cef0d0
                                
                                while (true)
                                    int64_t r8_19 = sx.q(*rax_59)
                                    
                                    if (r8_19.d s< r12_1)
                                        rbx_4 = zx.q(data_143a1c6b4)
                                        int32_t rdi_4 = *(r14_1[7] + r8_19 * 0x18)
                                        int32_t* rcx_53 =
                                            *(sub_1409ca9d0(&r14_1[7], &var_1c0, r12_1) + 8)
                                        
                                        if (rcx_53 != 0)
                                            *rcx_53 = rbx_4.d
                                            *(rcx_53 + 8) = 0
                                            *(rcx_53 + 0x10) = 0
                                        
                                        rdi_2 = r14_1
                                        sub_141cdb490(rdi_2, r12_1, rdi_4)
                                        rbx_4.b = 1
                                        break
                                    
                                    rcx_41 += 1
                                    rax_59 = &rax_59[1]
                                    
                                    if (rcx_41 s>= data_143cef0d8)
                                        goto label_1409c635c
                            
                            if (rbx_4.b == 0)
                                __builtin_memset(&i_14, 0, 0x20)
                                rbx_4 = sx.q(sub_14090b340(rdi_2, &i_14))
                                int64_t var_2f8
                                
                                if (var_2f8 != 0)
                                    sub_140a74f90(var_2f8)
                                
                                uint64_t i_26 = i_14
                                
                                if (i_26 != 0)
                                    sub_140a74f90(i_26)
                                
                                sub_14090bdf0(&rdi_2[0x2a], rbx_4.d)
                                uint64_t rcx_45 = rbx_4 * 3
                                int64_t rdx_36 = **(r14_3 + 0x18)
                                float rax_62 = var_2e8
                                *(rdx_36 + (rcx_45 << 2)) = zmm6.q
                                *(rdx_36 + (rcx_45 << 2) + 8) = rax_62
                                int32_t rdi_3 = data_143a1c6b4
                                int32_t* rcx_48 = *(sub_1409ca9d0(&r14_1[7], &var_160, r12_1) + 8)
                                
                                if (rcx_48 != 0)
                                    *rcx_48 = rdi_3
                                    *(rcx_48 + 8) = 0
                                    *(rcx_48 + 0x10) = 0
                                
                                sub_141cdb490(r14_1, r12_1, rbx_4.d)
                            
                            char r8_22 = *(r13_1 + 0xf1)
                            int64_t rdx_39 = *(r13_1 + 0xd0)
                            uint64_t rcx_50 = zx.q(r12_1)
                            i_14 = 0
                            var_300 = 0
                            uint128_t zmm0_2
                            float zmm1_1[0x4]
                            uint128_t zmm2_1
                            
                            if (r8_22 == 0)
                                zmm1_1 = data_142dd3fd0
                                zmm2_1 = _mm_unpacklo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(rdx_39 + (r15_2 << 3) + 4)), zmm15.q), 
                                    zmm15.q)
                                zmm0_2 = _mm_cvtepi32_ps((zmm1_1
                                    & __pcmpgtd_xmmdq_memdq(zmm2_1, data_142dd3f80)) | zmm2_1)
                                zmm1_1 = data_142dd3fb0
                            else
                                zmm1_1 = data_142dd3fc0
                                zmm2_1 = _mm_unpacklo_epi16(
                                    zx.o(*(rdx_39 + zx.q(rcx_50.d) * 0x10 + 8)), zmm15.q)
                                zmm0_2 = _mm_cvtepi32_ps((zmm1_1
                                    & __pcmpgtd_xmmdq_memdq(zmm2_1, data_142dd3f90)) | zmm2_1)
                                zmm1_1 = data_142dd3fa0
                            
                            uint64_t rcx_55 = rcx_50 * 2
                            i_14.o = _mm_mul_ps(zmm1_1, zmm0_2)
                            zmm10 = i_14.d
                            zmm11 = i_14:4.d
                            zmm12 = var_300
                            i_25.d = zmm10.d
                            i_25:4.d = zmm11.d
                            var_2a8 = zmm12.d
                            
                            if (r8_22 == 0)
                                zmm1_1 = data_142dd3fd0
                                zmm2_1 = _mm_unpacklo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(rdx_39 + (r15_2 << 3))), zmm15.q), 
                                    zmm15.q)
                                zmm1_1 = (zmm1_1 & __pcmpgtd_xmmdq_memdq(zmm2_1, data_142dd3f80))
                                    | zmm2_1
                                zmm2_1 = _mm_mul_ps(data_142dd3fb0, _mm_cvtepi32_ps(zmm1_1))
                                zmm7 = zmm2_1
                                zmm8 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                                zmm9 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                            else
                                zmm1_1 = data_142dd3fc0
                                zmm7 = data_142dd3fa0
                                zmm2_1 =
                                    _mm_unpacklo_epi16(zx.o(*(rdx_39 + (rcx_55 << 3))), zmm15.q)
                                zmm7 = _mm_mul_ps(zmm7, 
                                    _mm_cvtepi32_ps((zmm1_1
                                        & __pcmpgtd_xmmdq_memdq(zmm2_1, data_142dd3f90)) | zmm2_1))
                                zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                                zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                            
                            i_24.d = zmm7[0]
                            i_24:4.d = zmm8[0]
                            var_2b8 = zmm9.d
                            float zmm3[0x4]
                            float zmm4_1[0x4]
                            float zmm5_1[0x4]
                            
                            if (r8_22 == 0)
                                zmm4_1 = data_142dd3fd0
                                zmm6 = data_142dd3fb0
                                zmm2_1 = _mm_unpacklo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(rdx_39 + (r15_2 << 3))), zmm15.q), 
                                    zmm15.q)
                                zmm0_2 = _mm_cvtepi32_ps((zmm4_1
                                    & __pcmpgtd_xmmdq_memdq(zmm2_1, data_142dd3f80)) | zmm2_1)
                                zmm1_1 = zx.o(*(rdx_39 + (r15_2 << 3) + 4))
                                zmm5_1 = _mm_mul_ps(zmm6, zmm0_2)
                                zmm1_1 =
                                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1_1, zmm15.q), zmm15.q)
                                zmm4_1 &= __pcmpgtd_xmmdq_memdq(zmm1_1, data_142dd3f80)
                                zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                zmm13 = zmm3
                                zmm0_2 = _mm_cvtepi32_ps(zmm4_1 | zmm1_1)
                                zmm4_1 = zmm5_1
                                zmm6 = _mm_mul_ps(zmm6, zmm0_2)
                                i_14.o = data_142d3f660
                                zmm0_2 = zmm5_1
                                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                                zmm13[0] = zmm13[0] f* zmm6.d
                                zmm2_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                zmm1_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                zmm0_2.d = zmm0_2.d f* zmm2_1.d
                                zmm4_1[0] = zmm4_1[0] * zmm1_1[0]
                                zmm13[0] = zmm13[0] f- zmm0_2.d
                                zmm3[0] = zmm3[0] * zmm1_1[0]
                                zmm5_1[0] = zmm5_1[0] f* zmm2_1.d
                                zmm0_2.d = zmm5_1.d f* zmm6.d
                                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                                zmm5_1[0] = zmm5_1[0] - zmm3[0]
                                zmm13[0] = zmm13[0] f* zmm6.d
                                zmm4_1[0] = zmm4_1[0] f- zmm0_2.d
                                zmm5_1[0] = zmm5_1[0] f* zmm6.d
                                zmm4_1[0] = zmm4_1[0] f* zmm6.d
                                zmm6 = zmm5_1
                            else
                                zmm4_1 = data_142dd3fc0
                                zmm5_1 = data_142dd3fa0
                                zmm2_1 =
                                    _mm_unpacklo_epi16(zx.o(*(rdx_39 + (rcx_55 << 3))), zmm15.q)
                                zmm0_2 = _mm_cvtepi32_ps((zmm4_1
                                    & __pcmpgtd_xmmdq_memdq(zmm2_1, data_142dd3f90)) | zmm2_1)
                                zmm1_1 = zx.o(*(rdx_39 + (rcx_55 << 3) + 8))
                                zmm6 = _mm_mul_ps(zmm5_1, zmm0_2)
                                zmm1_1 = _mm_unpacklo_epi16(zmm1_1, zmm15.q)
                                zmm4_1 = (zmm4_1 & __pcmpgtd_xmmdq_memdq(zmm1_1, data_142dd3f90))
                                    | zmm1_1
                                zmm3 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                zmm0_2 = _mm_cvtepi32_ps(zmm4_1)
                                zmm4_1 = zmm6
                                zmm13 = zmm3
                                zmm5_1 = _mm_mul_ps(zmm5_1, zmm0_2)
                                i_14.o = data_142d3f660
                                zmm0_2 = zmm6
                                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                zmm13[0] = zmm13[0] * zmm5_1[0]
                                zmm2_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                zmm0_2.d = zmm0_2.d f* zmm2_1.d
                                zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                                zmm4_1[0] = zmm4_1[0] * zmm1_1[0]
                                zmm13[0] = zmm13[0] f- zmm0_2.d
                                zmm3[0] = zmm3[0] * zmm1_1[0]
                                zmm0_2 = zmm6
                                zmm6.d = zmm6.d f* zmm2_1.d
                                zmm0_2.d = zmm0_2.d f* zmm5_1[0]
                                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                zmm6.d = zmm6.d f- zmm3[0]
                                zmm13[0] = zmm13[0] * zmm5_1[0]
                                zmm4_1[0] = zmm4_1[0] f- zmm0_2.d
                                zmm6.d = zmm6.d f* zmm5_1[0]
                                zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
                            uint128_t var_218_1 = data_142d3f660
                            var_248.d = zmm7[0]
                            var_248:4.d = zmm8[0]
                            var_248:8.d = zmm9.d
                            var_238.d = zmm6.d
                            var_238:4.d = zmm4_1[0]
                            var_238:8.d = zmm13[0]
                            var_228.d = zmm10.d
                            var_228:4.d = zmm11.d
                            int32_t var_220_1 = zmm12.d
                            var_248:0xc.d = 0
                            var_238:0xc.d = 0
                            int32_t var_21c_1 = 0
                            uint128_t i_21
                            i_21, zmm14, zmm15 = sub_14062b8d0(&var_248)
                            
                            zmm6 = i_21.d f>= 0f ? 0x3f800000 : 0xbf800000
                            
                            int32_t* rax_67
                            
                            if (rax_9 u<= 0)
                                rax_67 = &var_180
                                var_180.o = data_14399f5c0
                            else
                                rax_67 = sub_140acc920(&var_298, 
                                    zx.q(*(r13_1 + 0x168) * r12_1) + *(r13_1 + 0x160))
                            
                            zmm3 = *rax_67
                            int64_t rdx_46 = var_150
                            i_21 = zx.o(i_25)
                            int64_t* rax_68 = var_1d8
                            uint64_t i_12 = sx.q(i_15)
                            i_22 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                            zmm2_1 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            uint64_t* rcx_58 = *rax_68[3]
                            *(rcx_58 + rdx_46) = i_21.q
                            i_21 = zx.o(i_24)
                            *(rcx_58 + rdx_46 + 8) = var_2a8
                            uint64_t* rcx_59 = **(var_1d0 + 0x18)
                            *(rcx_59 + rdx_46) = i_21.q
                            *(rcx_59 + rdx_46 + 8) = var_2b8
                            int64_t* rax_74 = var_208
                            i_21 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm3[0] = i_21.d
                            int64_t* rax_75 = rax_74[3]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                            zmm3[0] = i_22.d
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                            int64_t rcx_60 = *rax_75
                            zmm3[0] = zmm2_1.d
                            int64_t rax_76 = var_200
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                            i_14.o = zmm3
                            *(rcx_60 + (r15_2 << 2)) = zmm6.d
                            *(**(rax_76 + 0x18) + var_268) = zmm3
                            
                            if (i_12 s> 0)
                                int64_t* r8_25 = nullptr
                                var_1e8 = nullptr
                                int32_t r14_4 = 0
                                i_14 = i_12
                                uint64_t i_3
                                
                                do
                                    uint64_t rax_79 = zx.q(*(r13_1 + 0xe8))
                                    int64_t rdx_47 = *(r13_1 + 0xd8)
                                    uint64_t rcx_62 = zx.q(r14_4)
                                    var_2e8.q = rcx_62
                                    
                                    if (*(r13_1 + 0xf0) == 0)
                                        int64_t r15_7 = (rax_79 << 2) * var_1f8_1 + rdx_47
                                        uint32_t rbx_6 = zx.d(*(r15_7 + (rcx_62 << 2) + 2))
                                        int32_t i_18 = (rbx_6 & 0xffff8000) << 0x10
                                        
                                        if ((0x7c00 & rbx_6.w) == 0)
                                            int32_t rbx_7 = rbx_6 & 0x3ff
                                            
                                            if (rbx_7 != 0)
                                                if (data_143cda914 s> *(var_278_1 + 0x14))
                                                    _Init_thread_header(&data_143cda914)
                                                    
                                                    if (data_143cda914 == 0xffffffff)
                                                        data_143cda910 = 0x3fb8aa3b
                                                        _Init_thread_footer(&data_143cda914)
                                                
                                                i_21.d = float.s(zx.q(rbx_7))
                                                i_21.d = logf(i_21.d).d f* data_143cda910
                                                rcx_62 = var_2e8.q
                                                i_6 = (rbx_7 << ((0xa - int.d(i_21.d)).b + 0xd)
                                                    & 0x7fffff) | (
                                                    (0x71 - (0xa - int.d(i_21.d))) << 0x17
                                                    & 0x7f800000) | i_18
                                            else
                                                i_6 = i_18
                                        else if ((rbx_6.w & 0x7c00) != 0x7c00)
                                            i_6 = ((rbx_6 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                | (rbx_6 & 0x3ff) << 0xd | i_18
                                        else
                                            i_6 = i_18 | 0x477fe000
                                        
                                        rbx_4 = zx.q(*(r15_7 + (rcx_62 << 2)))
                                        int32_t i_19 = (rbx_4.d & 0xffff8000) << 0x10
                                        
                                        if ((0x7c00 & rbx_4.w) == 0)
                                            rbx_4 = zx.q(rbx_4.d) & 0x3ff
                                            
                                            if (rbx_4.d != 0)
                                                if (data_143cda914 s> *(var_278_1 + 0x14))
                                                    _Init_thread_header(&data_143cda914)
                                                    
                                                    if (data_143cda914 == 0xffffffff)
                                                        data_143cda910 = 0x3fb8aa3b
                                                        _Init_thread_footer(&data_143cda914)
                                                
                                                i_21.d = float.s(zx.q(rbx_4.d))
                                                i_21.d = logf(i_21.d).d f* data_143cda910
                                                i_5 = (rbx_4.d << ((0xa - int.d(i_21.d)).b + 0xd)
                                                    & 0x7fffff) | (
                                                    (0x71 - (0xa - int.d(i_21.d))) << 0x17
                                                    & 0x7f800000) | i_19
                                            else
                                                i_5 = i_19
                                        else if ((rbx_4.w & 0x7c00) != 0x7c00)
                                            i_5 = ((rbx_4.d u>> 0xa & 0x1f) + 0x70) << 0x17
                                                | (rbx_4.d & 0x3ff) << 0xd | i_19
                                        else
                                            i_5 = i_19 | 0x477fe000
                                        
                                        i_21 = i_5
                                        i_22 = i_6
                                        r8_25 = var_1e8
                                        i_12 = i_14
                                    else
                                        int64_t rax_82 = (rax_79 << 3) * var_1f8_1 + rdx_47
                                        i_21 = *(rax_82 + (rcx_62 << 3))
                                        i_22 = *(rax_82 + (rcx_62 << 3) + 4)
                                    
                                    r14_4 += 1
                                    int64_t rcx_65 = *(*(i_27 + 0x18) + r8_25)
                                    r8_25 = &r8_25[2]
                                    i_3 = i_12
                                    i_12 -= 1
                                    var_1e8 = r8_25
                                    i_14 = i_12
                                    *(rcx_65 + (var_1f8_1 << 3)) = i_21.d
                                    *(rcx_65 + (var_1f8_1 << 3) + 4) = i_22.d
                                while (i_3 != 1)
                                r14_3 = var_2a0
                                r12_1 = var_30c
                                r15_2 = var_1f8_1
                                rdx_46 = var_150
                            
                            var_268 += 0x10
                            r12_1 += 1
                            r15_2 += 1
                            var_30c = r12_1
                            var_1f8_1 = r15_2
                            var_150 = rdx_46 + 0xc
                        while (r12_1 s< i_23)
                    
                    void* var_260
                    sub_14229e7e0(r13_1 + 0x178, &var_260)
                    int64_t* r14_5 = r14_1
                    int32_t rbx_18 = *(r13_1 + 0x30)
                    int64_t* rdi_11 = &r14_5[0x23]
                    int32_t rdx_54 = r14_5[0x24].d - *(r14_5 + 0x14c) + rbx_18
                    var_1e8 = rdi_11
                    sub_1409d96c0(rdi_11, rdx_54)
                    var_30c = 0
                    int32_t r12_3 = 0
                    
                    if (rbx_18 != 0)
                        void* rbx_19 = arg1
                        void* rcx_68 = r13_1 + 0x10
                        var_1d0 = rcx_68
                        int64_t* rsi_1 = rbx_19 + 0x78
                        var_1d8 = rsi_1
                        
                        do
                            void* rax_114 = *(rcx_68 + 0x18)
                            void* r13_2 = rcx_68
                            
                            if (rax_114 != 0)
                                r13_2 = rax_114
                            
                            int64_t r14_6 = sx.q(r12_3) * 3
                            var_200 = r14_6
                            sub_140b58170(&var_2a0, &data_1437020ab, 1)
                            sub_140b58170(&i_14, &data_1437020ab, 1)
                            int64_t rdx_55 = sx.q(*(r13_2 + (r14_6 << 3)))
                            
                            if (rdx_55.d != 0xffffffff)
                                int64_t* rax_119 = rdx_55 * 0x30 + *(*(rbx_19 + 0x28) + 0x68)
                                void* rcx_72 = *rax_119
                                var_2a0 = rax_119[2]
                                int64_t* rax_121 = sub_140d21e10(rcx_72, &var_180, 0)
                                int16_t* rdx_57
                                
                                if (rax_121[1].d == 0)
                                    rdx_57 = &data_142d40450
                                else
                                    rdx_57 = *rax_121
                                
                                i_14 = *sub_140b58260(&var_268, rdx_57, 1)
                                int64_t rcx_75 = var_180
                                
                                if (rcx_75 != 0)
                                    sub_140a74f90(rcx_75)
                            
                            i_25 = 0
                            var_2a8.q = 0
                            int32_t rax_123 = sub_14090b210(rdi_11, &i_25)
                            int64_t i_30 = i_25
                            int64_t rdi_12 = sx.q(rax_123)
                            
                            if (i_30 != 0)
                                sub_140a74f90(i_30)
                            
                            sub_14090bdf0(&r14_1[0x61], rdi_12.d)
                            void* rcx_78 = var_188
                            int64_t var_138
                            __builtin_memset(&var_138, 0, 0x3c)
                            int32_t var_fc_1 = 0x80
                            *(**(rcx_78 + 0x18) + (rdi_12 << 3)) = var_2a0
                            int32_t var_f8_1 = 0xffffffff
                            int32_t var_f4_1 = 0
                            *(**(var_170 + 0x18) + (rdi_12 << 3)) = i_14
                            *(rdi_12 + **(var_168 + 0x18)) = *(r13_2 + (r14_6 << 3) + 0x14)
                            *(rdi_12 + **(var_1c8 + 0x18)) = *(r13_2 + (r14_6 << 3) + 0x15)
                            int32_t* rcx_84 = *(sub_1409ca850(rsi_1, &var_298, rdi_12.d) + 8)
                            
                            if (rcx_84 != 0)
                                *rcx_84 = 0
                                rcx_84[1] = var_138:4.d
                                rcx_84[2] = 0
                                int64_t var_128
                                sub_1409a9d30(&rcx_84[4], &var_128)
                            
                            sub_1409ab120(&var_138)
                            uint64_t r15_8 = zx.q(*(r13_2 + (r14_6 << 3) + 8))
                            int64_t rbx_20 = rdi_12 * 9
                            int64_t rsi_2 = *rsi_1
                            int32_t var_2c8_2 = r15_8.d
                            int64_t* rcx_88 = rsi_2 + ((rbx_20 + 2) << 3)
                            var_208 = rcx_88
                            sub_14090a510(rcx_88, r15_8.d)
                            *(rsi_2 + (rbx_20 << 3) + 8) = r15_8.d
                            *(rsi_2 + (rbx_20 << 3)) = r12_3
                            *(rsi_2 + (rbx_20 << 3) + 4) = *(r13_2 + (r14_6 << 3))
                            sub_1409d9530(&r14_1[0x1c], r14_1[0x1d].d - *(r14_1 + 0x114) + r15_8.d)
                            sub_1409d93a0(&r14_1[0xe], 
                                (r15_8 * 3).d - *(r14_1 + 0xa4) + r14_1[0xf].d)
                            int32_t i_4 = 0
                            
                            if (r15_8.d != 0)
                                int32_t r12_4 = 0
                                
                                do
                                    int64_t rax_138 = var_200
                                    i_24 = 0
                                    var_2b8.q = 3
                                    int32_t rbx_23 = *(r13_2 + (rax_138 << 3) + 4) + r12_4
                                    sub_1405a4cf0(&i_24)
                                    int32_t* i_31 = i_24
                                    int32_t j_1 = 3
                                    int32_t* i_34 = i_31
                                    int32_t j
                                    
                                    do
                                        *i_34 = data_143a1c6b0
                                        i_34 = &i_34[1]
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    void* rax_140 = var_260
                                    int64_t rcx_92 = sx.q(rbx_23)
                                    char var_254
                                    uint32_t rcx_93
                                    
                                    if (var_254 == j_1.b)
                                        rcx_93 = zx.d(*(rax_140 + (rcx_92 << 1)))
                                    else
                                        rcx_93 = *(rax_140 + (rcx_92 << 2))
                                    
                                    *i_31 = rcx_93
                                    int32_t r10_4 = *(r14_1[7] + sx.q(rcx_93) * 0x18)
                                    void* rax_143 = var_260
                                    int64_t rcx_95 = sx.q(rbx_23)
                                    uint32_t rdx_70
                                    
                                    if (var_254 == 0)
                                        rdx_70 = zx.d(*(rax_143 + (rcx_95 << 1) + 2))
                                    else
                                        rdx_70 = *(rax_143 + (rcx_95 << 2) + 4)
                                    
                                    i_31[1] = rdx_70
                                    int32_t r9_4 = *(r14_1[7] + sx.q(rdx_70) * 0x18)
                                    void* rax_146 = var_260
                                    int64_t rcx_97 = sx.q(rbx_23)
                                    uint32_t r8_27
                                    
                                    if (var_254 == 0)
                                        r8_27 = zx.d(*(rax_146 + (rcx_97 << 1) + 4))
                                    else
                                        r8_27 = *(rax_146 + (rcx_97 << 2) + 8)
                                    
                                    i_31[2] = r8_27
                                    int32_t rax_148 = *(r14_1[7] + sx.q(r8_27) * 0x18)
                                    
                                    if (r10_4 != r9_4 && r9_4 != rax_148 && rax_148 != r10_4)
                                        int64_t* rbx_24 = var_208
                                        int32_t var_144_1 = data_143a1c6b0
                                        int32_t rax_150 = data_143a1c6b8
                                        var_150.d = rax_150
                                        var_150:4.d = rax_150
                                        int32_t var_148_1 = rax_150
                                        int128_t* rcx_100 =
                                            *(sub_1409cae50(rbx_24, &var_160, i_4) + 8)
                                        
                                        if (rcx_100 != 0)
                                            *rcx_100 = var_150.o
                                        
                                        int32_t* rcx_103 = (sx.q(i_4) << 4) + *rbx_24
                                        *rcx_103 = *i_31
                                        rcx_103[1] = i_31[1]
                                        rcx_103[2] = i_31[2]
                                        __builtin_memset(&var_248, 0, 0x20)
                                        var_228.d = data_143a1c6c4
                                        int64_t rbx_25 = sx.q(sub_14090b0b0(&r14_1[0x1c], &var_248))
                                        
                                        if (var_238 != 0)
                                            sub_140a74f90(var_238)
                                        
                                        int64_t rcx_106 = var_248.q
                                        
                                        if (rcx_106 != 0)
                                            sub_140a74f90(rcx_106)
                                        
                                        int32_t var_1f0_1 = var_2b8
                                        var_2e8.o = i_31.o
                                        zmm14 = sub_141cda990(r14_1, rbx_25.d, rdi_12.d, &var_2e8, 
                                            nullptr)
                                        int32_t rax_158 = data_143a1c6b0
                                        __builtin_memset(&var_1c0:4, 0, 0x14)
                                        var_1c0.d = rax_158
                                        sub_1409c9500(arg1 + 0x40, rbx_25.d, &var_1c0)
                                        int64_t var_1b8
                                        
                                        if (var_1b8 != 0)
                                            sub_140a74f90(var_1b8)
                                        
                                        int64_t rdx_76 = *(arg1 + 0x40)
                                        int64_t rcx_110 = rbx_25 * 3
                                        void* rbx_26 = rdx_76 + (rcx_110 << 3)
                                        *(rdx_76 + (rcx_110 << 3)) = rdi_12.d
                                        int64_t r15_11 = sx.q(*(rbx_26 + 0x10))
                                        int32_t rax_159 = (r15_11 + 1).d
                                        *(rbx_26 + 0x10) = rax_159
                                        
                                        if (rax_159 s> *(rbx_26 + 0x14))
                                            sub_1405a4cf0(rbx_26 + 8)
                                        
                                        *(*(rbx_26 + 8) + (r15_11 << 2)) = i_4
                                        r15_8 = zx.q(var_2c8_2)
                                    
                                    sub_140a74f90(i_31)
                                    i_4 += 1
                                    r12_4 += 3
                                while (i_4 u< r15_8.d)
                                
                                r12_3 = var_30c
                            
                            rcx_68 = var_1d0
                            r12_3 += 1
                            rsi_1 = var_1d8
                            rdi_11 = var_1e8
                            rbx_19 = arg1
                            var_30c = r12_3
                        while (r12_3 u< rbx_18)
                        
                        r14_5 = r14_1
                    
                    sub_141ced0d0(r14_5, zmm14)
                    
                    if (data_143cef0f8 s> *(var_278_1 + 0x14))
                        _Init_thread_header(&data_143cef0f8)
                        
                        if (data_143cef0f8 == 0xffffffff)
                            atexit(sub_142cb93d0)
                            _Init_thread_footer(&data_143cef0f8)
                    
                    bool cond:2_1 = data_143cef0f4 s>= 0
                    data_143cef0f0 = 0
                    
                    if (not(cond:2_1))
                        sub_1405dadb0(&data_143cef0e8, 0)
                    
                    r12 = arg2
                    var_298 = 0
                    int32_t var_294_1 = 1
                    int32_t var_288_1 = 0xffffffff
                    void* rbx_28 = *(r12 + 0x28) + 0xe0
                    int64_t var_284_1 = 0
                    int32_t r8_31 = *(rbx_28 + 0x28)
                    void* r14_7 = rbx_28 + 0x10
                    void* var_290_1 = r14_7
                    
                    if (r8_31 != 0)
                        sub_14059bdd0(&var_298)
                        r8_31 = *(r14_7 + 0x18)
                    
                    int32_t rdx_79 = *(rbx_28 + 0x28)
                    int128_t zmm0_5 = var_298.o
                    double zmm2_2[0x2] = var_288_1.o
                    int32_t* rcx_117 = zx.q(rdx_79) & 0x1f
                    var_298 = rdx_79 s>> 5
                    double var_1a8_1[0x2] = zmm2_2
                    int32_t rdi_13 = 0xffffffff << rcx_117.b
                    var_1c0 = rbx_28
                    int64_t var_228_1 = (_mm_unpackhi_pd(zmm2_2, zmm2_2[0])).q
                    int32_t var_294_2 = 1 << rcx_117.b
                    var_284_1.d = rdx_79
                    var_284_1:4.d = rdx_79 & 0xffffffe0
                    var_248 = var_1c0.o
                    int128_t var_238_1 = zmm0_5
                    
                    if (rdx_79 != r8_31)
                        sub_14059bdd0(&var_298)
                    
                    while (true)
                        int32_t rax_165 = var_238_1:0xc.d
                        int64_t rdx_80 = var_238_1.q
                        
                        if (rax_165 != (rdi_13.q u>> 0x20).d || rdx_80 != r14_7)
                            rcx_117.b = 0
                        else
                            rcx_117.b = 1
                        
                        if (rcx_117.b == 0 || var_248.q != rbx_28)
                            rcx_117.b = 1
                        else
                            rcx_117.b = 0
                        
                        if (rcx_117.b == 0)
                            break
                        
                        int64_t rdi_14 = sx.q(data_143cef0f0)
                        int32_t rsi_4 = data_143a1c6c8
                        
                        if (rax_165 s< *(rdx_80 + 0x18))
                            rsi_4 = rax_165
                        
                        int32_t rax_166 = (rdi_14 + 1).d
                        bool cond:7_1 = rax_166 s<= data_143cef0f4
                        data_143cef0f0 = rax_166
                        
                        if (not(cond:7_1))
                            sub_1405a4cf0(&data_143cef0e8)
                        
                        *(data_143cef0e8 + (rdi_14 << 2)) = rsi_4
                        var_238_1:8.d &= not.d(var_248:0xc.d)
                        sub_14059bdd0(&var_248:8)
                    
                    sub_1409c1000(r12, &data_143cef0e8)
                    rdi = arg1

int128_t* rax_170 = sub_1423633d0(*(rdi + 0x28), &var_298)
*(rdi + 0xc0) = *rax_170
*(rdi + 0xd0) = rax_170[1].q
*(rdi + 0xd8) = *(rax_170 + 0x18)
sub_1409d55c0(r12)
int512_t result = sub_1409d4c80(r12)
__security_check_cookie(rax_1 ^ &var_348)
return result
