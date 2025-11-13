// 函数: sub_141a5daf0
// 地址: 0x141a5daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int64_t* var_1c8
(*(*arg2 + 0x268))(arg2, &var_1c8)
int64_t* var_1e0
(*(*arg2 + 0x260))(arg2, &var_1e0)
char var_1d0
char result_1
int64_t r15

if ((result_1 & 1) != 0 || (var_1d0 & 1) != 0)
    r15.b = 1
else
    r15.b = 0

int32_t var_45c = 0
void* var_3a8 = 2.q
int32_t var_464 = 0
int64_t var_3a0 = 2.q
char var_460
var_460.q = -1
int64_t var_2c8 = -1
int64_t rax_6 = *arg2
int128_t var_2d8 = var_3a8.o
int64_t var_2c0 = -1
int64_t var_2b8
__builtin_memset(&var_2b8, 0, 0x40)
int64_t* rax_7 = (*(rax_6 + 0x2e0))(arg2)
var_460.q = rax_7
int32_t i = 0
int64_t var_450
int32_t var_448
void** const var_440
int128_t* var_438
uint64_t var_430
uint128_t* var_428
int32_t var_3e8
int128_t* var_3c8
uint128_t var_398
int32_t var_388
int64_t var_378
int64_t var_370
int32_t i_4
int64_t var_358
int128_t* var_350
int32_t var_348
int64_t var_338
char var_328
char var_318

if (rax_7[1].d s> 0)
    int64_t* r12_1 = nullptr
    
    do
        void* rsi_1 = *(r12_1 + *rax_7)
        
        if (rsi_1 != 0 && (*(rsi_1 + 0xb0) & 1) != 0)
            int128_t* rdi_1 = *(rsi_1 + 0x98)
            int64_t rbx_1 = *(rsi_1 + 0x90)
            var_338 = rbx_1
            var_3c8 = rdi_1
            
            if (rbx_1.b == 0)
                int32_t var_464_1 = (rbx_1 u>> 0x20).d + 1
                rbx_1 = 1.q
                var_338 = rbx_1
            
            if (rdi_1.b == 1)
                int32_t var_454_1 = (rdi_1 u>> 0x20).d + 1
                rdi_1 = 0.q
                var_3c8 = rdi_1
            
            var_358 = rbx_1
            var_350 = rdi_1
            
            if (rbx_1.b == 2 || rdi_1.b == 2)
            label_141a5dcf4:
                sub_140acafe0(arg1 + 0x18, &var_3e8, rsi_1 + 0x28, nullptr)
                
                if (r15.b == 0)
                    sub_141a37ca0(*(arg1 + 0x10), rsi_1, arg3, &var_358, 0)
                else
                    uint128_t zmm0_1 = var_358.o
                    var_440 = &data_14302f448
                    var_398 = zmm0_1
                    var_438 = &var_2d8
                    i_4 = i
                    int32_t var_364_1 = 0x80000000
                    zmm0_1 = zx.o(i_4.q)
                    var_348 = 0xffffffff
                    int32_t var_344_1 = 0
                    var_428.d = 0.d
                    var_430 = zmm0_1.q
                    sub_141a37e10(&var_2d8, &var_398, &var_440, var_348.q)
                
                void* rbx_4
                uint128_t zmm0_2
                
                if (rbx_1.b == 2)
                    rbx_4 = arg1
                else
                    int32_t rdx_5 = *(rsi_1 + 0xa0)
                    
                    if (rdx_5 s<= 0)
                        rbx_4 = arg1
                    else
                        int32_t rax_15 = var_338:4.d
                        int32_t var_314_1 = rax_15
                        int32_t var_324_1 = rax_15 - rdx_5
                        var_328 = 1
                        var_378 = var_328.q
                        var_318 = 0
                        var_370 = var_318.q
                        
                        if (r15.b == 0)
                            rbx_4 = arg1
                            sub_141a37ca0(*(rbx_4 + 0x10), rsi_1, arg3, &var_378, 1)
                        else
                            zmm0_2 = var_378.o
                            var_440 = &data_14302f448
                            var_398 = zmm0_2
                            var_438 = &var_2d8
                            int32_t var_3d4_1 = 0x80000000
                            var_388 = 0xffffffff
                            int32_t var_384_1 = 0
                            var_428.d = 1.d
                            var_430 = i.q
                            sub_141a37e10(&var_2d8, &var_398, &var_440, var_388.q)
                            rbx_4 = arg1
                
                if (rdi_1.b != 2)
                    int32_t rcx_14 = *(rsi_1 + 0xa4)
                    
                    if (rcx_14 s> 0)
                        int32_t rax_19 = var_3c8:4.d
                        int32_t var_3bc_1 = rax_19
                        var_3a8 = 0.q
                        int64_t var_3b8
                        var_3b8.b = 1
                        var_3b8:4.d = rcx_14 + rax_19
                        var_3a0 = 1
                        
                        if (r15.b == 0)
                            sub_141a37ca0(*(rbx_4 + 0x10), rsi_1, arg3, &var_3a8, 2)
                        else
                            zmm0_2 = var_3a8.o
                            var_440 = &data_14302f448
                            var_398 = zmm0_2
                            var_438 = &var_2d8
                            var_450.d = i
                            var_450:4.d = 0x80000000
                            var_448.b = 2
                            int64_t var_3b0
                            var_3b0.d = 0xffffffff
                            var_3b0:4.d = 0
                            var_428.d = 2
                            var_430 = var_450
                            sub_141a37e10(&var_2d8, &var_398, &var_440, 0xffffffff)
            else
                uint32_t rax_12 = (rbx_1 u>> 0x20).d
                uint32_t rcx_6 = (rdi_1 u>> 0x20).d
                
                if (rax_12 s<= rcx_6)
                    if (rax_12 != rcx_6)
                        goto label_141a5dcf4
                    
                    if (rbx_1.b != 0 && rdi_1.b != 0)
                        goto label_141a5dcf4
        
        i += 1
        r12_1 = &r12_1[1]
    while (i s< rax_7[1].d)

if (r15.b != 0)
    char var_b0_1 = 0
    void* var_1a8 = nullptr
    int32_t var_1a0_1 = 0
    int64_t var_198
    __builtin_memset(&var_198, 0, 0x1c)
    int32_t var_174_1 = 0
    void* var_168_1 = nullptr
    int32_t var_160_1 = 0
    int32_t var_17c_1 = 0x80
    int32_t var_178_1 = 0xffffffff
    sub_141a2fdf0(&var_440, &var_2d8)
label_141a5dfbb:
    uint64_t rdi_2 = var_430
    uint128_t* rsi_2 = var_428
    
    while (true)
        int128_t* rax_21
        
        if (rdi_2.d != 0xffffffff || var_430:4.d == 0)
            rax_21.b = 1
        else
            rax_21.b = 0
        
        void var_108
        void var_f0
        int64_t* i_5
        int32_t var_b8
        
        if (rax_21.b == 0)
            if (var_b0_1 != 0)
                int64_t* i_1 = &var_f0
                
                if (i_5 != 0)
                    i_1 = i_5
                
                for (void* rdi_8 = i_1 + sx.q(var_b8) * 0xc; i_1 != rdi_8; i_1 += 0xc)
                    int32_t rax_122 = i_1[1].d
                    int32_t var_448_1 = rax_122
                    sub_141a37ca0(*(arg1 + 0x10), *(*var_460.q + (sx.q((*i_1).d) << 3)), arg3, 
                        &var_108, rax_122.b)
            
            int32_t var_160_2 = 0
            
            if (var_168_1 != 0)
                sub_140a74f90(var_168_1)
            
            sub_141a32390(&var_1a8)
            
            if (var_b0_1 != 0)
                char var_b0_3 = 0
                
                if (i_5 != 0)
                    sub_140a74f90(i_5)
            
            break
        
        void* var_308
        sub_141a2ec10(&var_308, &var_2d8, rdi_2)
        int128_t* var_300
        uint128_t zmm0_3
        
        if (var_300 != 0)
            int64_t rcx_21 = sx.q(*(var_300 + 0x1c))
            void* rbx_5 = var_308
            int64_t* rax_26
            
            if (rcx_21.d == 0xffffffff)
                i_4.q = 0
                rax_26 = &i_4
                char var_360
                var_360.d = 0
            else
                int64_t rax_22 = *(rbx_5 + 0x40)
                int64_t rcx_22 = rcx_21 * 3
                var_350.d = *(rax_22 + (rcx_22 << 2) + 4)
                rax_26 = &var_358
                var_358 = *(rbx_5 + 0x50) + sx.q(*(rax_22 + (rcx_22 << 2))) * 0xc
            
            int32_t var_2f8
            rax_21 = zx.q(var_2f8)
            
            if (rax_21.d s>= 0 && rax_21.d s< (*rax_26).12:8.d)
                void* var_118_1 = nullptr
                int32_t var_110_1 = 0
                int32_t var_10c_1 = 4
                void var_158
                uint128_t zmm1
                int64_t var_408
                int64_t* var_400
                int32_t var_3f8
                
                if ((var_1d0 & 1) == 0)
                    zmm0_3 = var_308.o
                    zmm1 = zx.o(var_2f8.q)
                    uint32_t var_228_1 = zmm1.d
                    sub_141a2ec10(&var_408, rbx_5, -1)
                    void* i_6 = zmm0_3.q
                    int64_t r13_2 = var_408
                    uint32_t rdi_5 = var_228_1
                    void* const i_2 = zmm0_3:8.q
                    
                    while (i_6 != r13_2 || i_2 != var_400 || rdi_5 != var_3f8)
                        int64_t rax_74 = sx.q(*(i_2 + 0x1c))
                        uint128_t* rax_79
                        
                        if (rax_74.d == 0xffffffff)
                            int64_t var_210 = 0
                            int32_t var_208_1 = 0
                            rax_79 = &var_210
                        else
                            int64_t rcx_52 = rax_74 * 3
                            int64_t rax_75 = *(i_6 + 0x40)
                            int32_t var_218_1 = *(rax_75 + (rcx_52 << 2) + 4)
                            int64_t var_220
                            rax_79 = &var_220
                            var_220 = *(i_6 + 0x50) + sx.q(*(rax_75 + (rcx_52 << 2))) * 0xc
                        
                        int64_t r14 = sx.q(var_110_1)
                        int64_t rcx_55 = sx.q(rdi_5) * 3
                        int64_t rax_81 = (*rax_79).q
                        int64_t rdx_35 = sx.q(*(rax_81 + (rcx_55 << 2)))
                        var_370.d = rdx_35.d
                        var_370:4.b = *(rax_81 + (rcx_55 << 2) + 8)
                        int32_t rax_85 = (r14 + 1).d
                        var_378 = *(*var_460.q + (rdx_35 << 3))
                        var_110_1 = rax_85
                        
                        if (rax_85 s> var_10c_1)
                            sub_141a63f80(&var_158, r14.d)
                        
                        void* rcx_58 = &var_158
                        
                        if (var_118_1 != 0)
                            rcx_58 = var_118_1
                        
                        rdi_5 += 1
                        *(rcx_58 + r14 * 0x10) = var_378.o
                        
                        do
                            int64_t rax_89 = sx.q(*(i_2 + 0x1c))
                            uint128_t* rax_94
                            
                            if (rax_89.d == 0xffffffff)
                                int64_t var_1f0 = 0
                                rax_94 = &var_1f0
                                int32_t var_1e8_1 = 0
                            else
                                int64_t rcx_59 = rax_89 * 3
                                int64_t rax_90 = *(i_6 + 0x40)
                                int32_t var_1f8_1 = *(rax_90 + (rcx_59 << 2) + 4)
                                int64_t var_200
                                rax_94 = &var_200
                                var_200 = *(i_6 + 0x50) + sx.q(*(rax_90 + (rcx_59 << 2))) * 0xc
                            
                            if (rdi_5 s>= 0 && rdi_5 s< (*rax_94).12:8.d)
                                break
                            
                            if (*(i_2 + 0x10) != 0xffffffff || *(i_2 + 0x14) == 0)
                                int64_t rax_95 = *(i_2 + 0x10)
                                
                                if (rax_95.d == 0xffffffff)
                                    i_2 = i_6
                                else
                                    i_2 = ((sx.q(*(*(i_6 + 0x20) + sx.q(rax_95.d) * 0xc))
                                        + sx.q((rax_95 u>> 0x20).d)) << 5) + *(i_6 + 0x30)
                            else
                                i_2 = nullptr
                            
                            rdi_5 = 0
                        while (i_2 != 0)
                else
                    sub_141a62f60(&var_1a8)
                    int128_t zmm0_4 = var_308.o
                    uint32_t var_240_1 = (var_2f8.q).d
                    sub_141a2ec10(&var_408, rbx_5, -1)
                    void* i_7 = zmm0_4.q
                    uint32_t rdi_3 = var_240_1
                    void* const i_3 = zmm0_4:8.q
                    
                    while (i_7 != var_408 || i_3 != var_400 || rdi_3 != var_3f8)
                        int64_t rax_27 = sx.q(*(i_3 + 0x1c))
                        char* rax_32
                        
                        if (rax_27.d == 0xffffffff)
                            var_328.q = 0
                            rax_32 = &var_328
                            int32_t var_320_1 = 0
                        else
                            int64_t rcx_27 = rax_27 * 3
                            int64_t rax_28 = *(i_7 + 0x40)
                            int32_t var_310_1 = *(rax_28 + (rcx_27 << 2) + 4)
                            rax_32 = &var_318
                            var_318.q = *(i_7 + 0x50) + sx.q(*(rax_28 + (rcx_27 << 2))) * 0xc
                        
                        int64_t rcx_30 = sx.q(rdi_3) * 3
                        int64_t rax_34 = (*rax_32).q
                        int64_t r8_8 = sx.q(*(rax_34 + (rcx_30 << 2)))
                        var_3a0.d = r8_8.d
                        void* rdx_15 = *(*var_460.q + (r8_8 << 3))
                        var_3a0:4.b = *(rax_34 + (rcx_30 << 2) + 8)
                        int64_t r10_1 = sx.q(*(rdx_15 + 0xa8))
                        var_3e8 = r10_1.d
                        var_3a8 = rdx_15
                        void* rsi_3
                        
                        if (var_1a0_1 == var_174_1)
                        labelid_1a:
                            rsi_3 = sub_141a2a630(&var_1a8, r10_1.d, &var_3e8)
                        else
                            void var_170
                            void* rcx_31 = &var_170
                            
                            if (var_168_1 != 0)
                                rcx_31 = var_168_1
                            
                            int32_t rax_42 = *(rcx_31 + ((sx.q(var_160_1 - 1) & r10_1) << 2))
                            
                            if (rax_42 == 0xffffffff)
                            label_141a5e204:
                                rsi_3 = sub_141a2a630(&var_1a8, r10_1.d, &var_3e8)
                            else
                                void* r8_9 = var_1a8
                                int64_t rdx_19
                                
                                while (true)
                                    rdx_19 = sx.q(rax_42) * 0x60
                                    
                                    if (*(r8_9 + rdx_19) == r10_1.d)
                                        break
                                    
                                    rax_42 = *(r8_9 + rdx_19 + 0x58)
                                    
                                    if (rax_42 == 0xffffffff)
                                        goto label_141a5e204_2
                                
                                if (rax_42 == 0xffffffff)
                                label_141a5e204_1:
                                    rsi_3 = sub_141a2a630(&var_1a8, r10_1.d, &var_3e8)
                                else
                                    void* rsi_4 = rdx_19 + r8_9
                                    
                                    if (rsi_4 == 0)
                                    label_141a5e204_2:
                                        rsi_3 = sub_141a2a630(&var_1a8, r10_1.d, &var_3e8)
                                    else
                                        rsi_3 = rsi_4 + 8
                        
                        int64_t r15_1 = sx.q(*(rsi_3 + 0x48))
                        int32_t rcx_35 = (r15_1 + 1).d
                        *(rsi_3 + 0x48) = rcx_35
                        
                        if (rcx_35 s> *(rsi_3 + 0x4c))
                            sub_141a63f80(rsi_3, r15_1.d)
                        
                        void* rax_44 = *(rsi_3 + 0x40)
                        
                        if (rax_44 != 0)
                            rsi_3 = rax_44
                        
                        rdi_3 += 1
                        *(rsi_3 + r15_1 * 0x10) = var_3a8.o
                        
                        do
                            int64_t rax_47 = sx.q(*(i_3 + 0x1c))
                            int64_t* rax_52
                            
                            if (rax_47.d == 0xffffffff)
                                var_348.q = 0
                                rax_52 = &var_348
                                int32_t var_340_1 = 0
                            else
                                int64_t rcx_37 = rax_47 * 3
                                int64_t rax_48 = *(i_7 + 0x40)
                                int32_t var_330_1 = *(rax_48 + (rcx_37 << 2) + 4)
                                rax_52 = &var_338
                                var_338 = *(i_7 + 0x50) + sx.q(*(rax_48 + (rcx_37 << 2))) * 0xc
                            
                            if (rdi_3 s>= 0 && rdi_3 s< (*rax_52).12:8.d)
                                break
                            
                            if (*(i_3 + 0x10) != 0xffffffff || *(i_3 + 0x14) == 0)
                                int64_t rdx_23 = *(i_3 + 0x10)
                                
                                if (rdx_23.d == 0xffffffff)
                                    i_3 = i_7
                                else
                                    i_3 = ((sx.q(*(*(i_7 + 0x20) + sx.q(rdx_23.d) * 0xc))
                                        + sx.q((rdx_23 u>> 0x20).d)) << 5) + *(i_7 + 0x30)
                            else
                                i_3 = nullptr
                            
                            rdi_3 = 0
                        while (i_3 != 0)
                    
                    var_400 = &var_198
                    int32_t rcx_41 = 0
                    var_408.d = 0
                    int32_t r8_11 = 0
                    var_408:4.d = 1
                    int32_t var_3f8_1 = 0xffffffff
                    int64_t var_3f4_1 = 0
                    int32_t var_180
                    
                    if (var_180 != 0)
                        int64_t* r9_7 = &var_198
                        int64_t* var_188
                        
                        if (var_188 != 0)
                            r9_7 = var_188
                        
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(var_180 - 1)
                        int32_t rdx_27 = *r9_7
                        
                        if (rdx_27 != 0)
                        label_141a5e398:
                            int32_t rax_63 = neg.d(rdx_27) & rdx_27
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_63)
                            var_408:4.d = rax_63
                            int32_t rax_64
                            
                            if (rax_63 == 0)
                                rax_64 = 0x20
                            else
                                rax_64 = 0x1f - temp0_1
                            
                            int32_t rax_65 = r8_11 - rax_64 + 0x1f
                            
                            if (rax_65 s> var_180)
                                rax_65 = var_180
                            
                            var_3f4_1.d = rax_65
                        else
                            while (true)
                                int64_t rdx_28 = sx.q(rcx_41)
                                r8_11 += 0x20
                                rcx_41 += 1
                                var_3f4_1:4.d = r8_11
                                var_408.d = rcx_41
                                
                                if (rdx_28.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                    var_3f4_1.d = var_180
                                    break
                                
                                rdx_27 = *(r9_7 + (rdx_28 << 2) + 4)
                                var_3f8_1 = 0xffffffff
                                
                                if (rdx_27 != 0)
                                    goto label_141a5e398
                    
                    double zmm2[0x2] = var_3f8_1.o
                    uint128_t zmm0_5 = var_408.o
                    var_308 = &var_1a8
                    double var_2f0_1[0x2] = zmm2
                    var_3f4_1.d = var_180
                    var_300.o = zmm0_5
                    zmm0_5 = var_308.o
                    var_3f8 = 0xffffffff << (var_180.b & 0x1f)
                    zmm1 = var_2f8.o
                    zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                    uint128_t var_278 = zmm0_5
                    uint128_t var_268_1 = zmm1
                    int64_t var_258_1 = zmm2.q
                    
                    while (true)
                        int64_t rax_66 = sx.q(var_268_1:0xc.d)
                        int64_t rcx_45 = var_278.q
                        
                        if (rax_66.d == (var_3f8.q u>> 0x20).d && var_268_1.q == &var_198
                                && rcx_45 == &var_1a8)
                            break
                        
                        int64_t* rcx_46 = &var_1e0
                        
                        if ((var_1d0 & 2) == 0)
                            rcx_46 = var_1e0
                        
                        void* rbx_12 = rax_66 * 0x60 + *rcx_45 + 8
                        (*(*rcx_46 + 8))(rcx_46, rbx_12)
                        int64_t rdi_4 = sx.q(*(rbx_12 + 0x48))
                        
                        if (rdi_4.d != 0)
                            int32_t r9_8 = var_110_1
                            int32_t rdx_31 = rdi_4.d + r9_8
                            
                            if (rdx_31 s> var_10c_1)
                                sub_141a642e0(&var_158, rdx_31)
                                r9_8 = var_110_1
                            
                            void* rax_68 = *(rbx_12 + 0x40)
                            void* rcx_48 = &var_158
                            
                            if (rax_68 != 0)
                                rbx_12 = rax_68
                            
                            if (var_118_1 != 0)
                                rcx_48 = var_118_1
                            
                            memcpy(rcx_48 + (sx.q(r9_8) << 4), rbx_12, (rdi_4 << 4).d)
                            var_110_1 += rdi_4.d
                        
                        var_268_1:8.d &= not.d(var_278:0xc.d)
                        sub_14059bdd0(&var_278:8)
                
                if ((result_1 & 1) != 0)
                    int64_t* rcx_65 = &var_1c8
                    
                    if ((result_1 & 2) == 0)
                        rcx_65 = var_1c8
                    
                    (*(*rcx_65 + 0x10))(rcx_65, &var_158, zmm1)
                
                void* rsi_7 = var_118_1
                void* rbx_16 = &var_158
                
                if (rsi_7 != 0)
                    rbx_16 = rsi_7
                
                int32_t var_98_1 = 0xffffffff
                void* rcx_66 = nullptr
                void* r14_3 = (sx.q(var_110_1) << 4) + rbx_16
                uint128_t var_a8 = var_440.o
                char var_94_1 = 0
                int32_t rdx_40 = 4
                void* var_60_1 = nullptr
                int32_t rdi_6 = 0
                int32_t var_58_1 = 0
                int32_t var_54_1 = 4
                
                if (rbx_16 != r14_3)
                    while (true)
                        var_450.d = *(rbx_16 + 8)
                        var_448.b = *(rbx_16 + 0xc)
                        var_450:4.d = 0x80000000
                        void var_90
                        
                        if (rdi_6 + 1 s> rdx_40)
                            sub_140775760(&var_90, rdi_6)
                            rcx_66 = var_60_1
                        
                        void* rdx_42 = &var_90
                        
                        if (rcx_66 != 0)
                            rdx_42 = rcx_66
                        
                        rbx_16 += 0x10
                        int64_t rcx_68 = sx.q(rdi_6) * 3
                        *(rdx_42 + (rcx_68 << 2)) = var_450
                        *(rdx_42 + (rcx_68 << 2) + 8) = var_448
                        
                        if (rbx_16 == r14_3)
                            break
                        
                        rdx_40 = var_54_1
                        rdi_6 += 1
                        rcx_66 = var_60_1
                    
                    rsi_7 = var_118_1
                
                if (var_b0_1 == 0)
                label_141a5e90b:
                    sub_141a30ad0(&var_108, &var_a8)
                    rsi_7 = var_118_1
                    var_b0_1 = 1
                else if (sub_141a3d240(&var_108, &var_a8).b == 0)
                    int64_t* i_8 = i_5
                    int64_t* i_9 = &var_f0
                    
                    if (i_8 != 0)
                        i_9 = i_8
                    
                    void* rdi_7 = i_9 + sx.q(var_b8) * 0xc
                    
                    if (i_9 != rdi_7)
                        do
                            char var_3d0
                            var_3d0.d = i_9[1].d
                            int32_t var_3d8
                            var_3d8.q = *i_9
                            sub_141a37ca0(*(arg1 + 0x10), *(*var_460.q + (sx.q(var_3d8) << 3)), 
                                arg3, &var_108, var_3d0)
                            i_9 += 0xc
                        while (i_9 != rdi_7)
                        
                        i_8 = i_5
                    
                    if (var_b0_1 != 0)
                        char var_b0_2 = 0
                        
                        if (i_8 != 0)
                            sub_140a74f90(i_8)
                    
                    goto label_141a5e90b
                
                if (var_60_1 != 0)
                    sub_140a74f90(var_60_1)
                    rsi_7 = var_118_1
                
                if (rsi_7 != 0)
                    sub_140a74f90(rsi_7)
                
                rdi_2 = var_430
                rsi_2 = var_428
        
        uint128_t* rdx_50
        
        if (rdi_2.d != 0xffffffff)
            rdx_50 = ((sx.q(*(rsi_2[2].q + sx.q(rdi_2.d) * 0xc)) + sx.q((rdi_2 u>> 0x20).d)) << 5)
                + rsi_2[3].q
        else if (var_430:4.d != 0)
            continue
        else if (rdi_2.d == rdi_2.d)
            rdx_50 = rsi_2
        else
            rdx_50 = ((sx.q(*(rsi_2[2].q + sx.q(rdi_2.d) * 0xc)) + sx.q((rdi_2 u>> 0x20).d)) << 5)
                + rsi_2[3].q
        
        int128_t* rbx_17 = var_438
        int64_t rax_114 = (*rdx_50):8.q
        
        if (rax_114.b == rbx_17.b
                && (rax_114.b == 2 || (rax_114 u>> 0x20).d == (rbx_17 u>> 0x20).d))
            uint64_t rax_116 = rdx_50[1].q
            rdx_50.b = 1
            var_430 = rax_116
            sub_141a58090(&var_440, rdx_50.b)
            goto label_141a5dfbb
        
        char rdx_51 = var_440.b
        
        if (rdx_51 == 2 || rbx_17.b == 2)
        label_141a5e9fb:
            
            if (rbx_17.b != 0)
            label_141a5ea13:
                char var_458
                
                if (rbx_17.b != 1)
                    var_458.q = rbx_17
                else
                    uint32_t var_454_3 = (rbx_17 u>> 0x20).d
                    rbx_17 = 0.q
            else
                uint32_t var_454_2 = (rbx_17 u>> 0x20).d
                rbx_17 = 1.q
        else
            int32_t rax_117 = var_440:4.d
            int32_t temp0_3 = var_438:4.d
            int32_t var_3bc_2
            
            if (rax_117 s> temp0_3)
                var_3bc_2 = 0
                rbx_17 = 2.q
            else
                if (rax_117 != temp0_3)
                    goto label_141a5e9fb
                
                if (rdx_51 != 0 && rbx_17.b != 0)
                    goto label_141a5ea13
                
                var_3bc_2 = 0
                rbx_17 = 2.q
        
        sub_141a4b4f0(&var_440, &var_3c8, rdi_2, rbx_17, 1)
        rax_21 = var_3c8
        
        while (true)
            uint128_t* r8_21
            
            if (rax_21.d != 0xffffffff)
                r8_21 = ((sx.q(*(rsi_2[2].q + sx.q(rax_21.d) * 0xc)) + sx.q((rax_21 u>> 0x20).d))
                    << 5) + rsi_2[3].q
            else
                if ((rax_21 u>> 0x20).d != 0)
                    break
                
                if (rax_21.d == rax_21.d)
                    r8_21 = rsi_2
                else
                    r8_21 = ((sx.q(*(rsi_2[2].q + sx.q(rax_21.d) * 0xc))
                        + sx.q((rax_21 u>> 0x20).d)) << 5) + rsi_2[3].q
            
            int64_t var_418_5 = (*r8_21).q
            
            if (var_418_5.b != rbx_17.b)
                break
            
            if (var_418_5.b != 2 && (var_418_5 u>> 0x20).d != (rbx_17 u>> 0x20).d)
                break
            
            var_430 = rax_21
            rdi_2 = rax_21
            rax_21 = *sub_141a4b4f0(&var_440, &var_388, rax_21, rbx_17, 1)
            var_3c8 = rax_21
        
        uint128_t* r8_26
        
        if (rdi_2.d == 0xffffffff)
            r8_26 = rsi_2
        else
            r8_26 = ((sx.q(*(rsi_2[2].q + sx.q(rdi_2.d) * 0xc)) + sx.q((rdi_2 u>> 0x20).d)) << 5)
                + rsi_2[3].q
        
        int64_t rcx_97 = (*r8_26):8.q
        uint128_t* r9_15
        
        if (rax_21.d != 0xffffffff)
        label_141a5eb30:
            r9_15 = ((sx.q(*(rsi_2[2].q + sx.q(rax_21.d) * 0xc)) + sx.q((rax_21 u>> 0x20).d)) << 5)
                + rsi_2[3].q
        label_141a5eb56:
            zmm0_3 = *r9_15
            int128_t* var_418_7 = zmm0_3.q
            
            if (var_418_7.b != rbx_17.b)
            label_141a5eb7d:
                rcx_97 = zmm0_3.q
                
                if (rcx_97.b == 0)
                    uint32_t var_464_2 = (rcx_97 u>> 0x20).d
                    rcx_97 = 1.q
                else
                    char var_468
                    
                    if (rcx_97.b != 1)
                        var_468.q = rcx_97
                    else
                        uint32_t var_464_3 = (rcx_97 u>> 0x20).d
                        rcx_97 = 0.q
            else if (var_418_7.b != 2 && (var_418_7 u>> 0x20).d != (rbx_17 u>> 0x20).d)
                goto label_141a5eb7d
        else if ((rax_21 u>> 0x20).d == 0)
            if (rax_21.d != rax_21.d)
                goto label_141a5eb30
            
            r9_15 = rsi_2
            goto label_141a5eb56
        var_398.q = rbx_17
        var_398:8.q = rcx_97
        var_440.o = var_398

int64_t var_288

if (var_288 != 0)
    sub_140a74f90(var_288)

int64_t var_298

if (var_298 != 0)
    sub_140a74f90(var_298)

int64_t var_2a8

if (var_2a8 != 0)
    sub_140a74f90(var_2a8)

int64_t rcx_109 = var_2b8

if (rcx_109 != 0)
    sub_140a74f90(rcx_109)

if ((var_1d0 & 1) != 0)
    int64_t* rcx_110 = &var_1e0
    
    if ((var_1d0 & 2) == 0)
        rcx_110 = var_1e0
    
    (**rcx_110)(rcx_110, 0)
    
    if ((var_1d0 & 2) == 0)
        sub_140a74f90(var_1e0)

char result = result_1

if ((result & 1) != 0)
    int64_t* rcx_112 = &var_1c8
    
    if ((result & 2) == 0)
        rcx_112 = var_1c8
    
    char var_1b8 = result & 0xfe
    result = (**rcx_112)(rcx_112, 0)
    
    if ((var_1b8 & 2) == 0)
        result = sub_140a74f90(var_1c8)

__security_check_cookie(rax_1 ^ &var_498)
return result
