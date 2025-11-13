// 函数: sub_140e8d440
// 地址: 0x140e8d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
char rsi = 0
int32_t var_430 = 0
void* const r15 = arg1
bool cond:0 = data_1439b387c != 0
int32_t r14 = 0
int64_t* r12 = data_143e29f28
int64_t* var_380 = r12
int64_t* performanceCount = arg2
void* const var_398 = arg1
int64_t* result

if (cond:0)
    void var_350
    sub_140d947e0(&var_350)
    uint32_t rax_2
    int128_t* rcx_1
    
    if (data_143de5480 != 0)
        rax_2, rcx_1 = GetCurrentThreadId()
        rax_2.b = rax_2 == data_143de5470
    
    int64_t* performanceCount_1
    int64_t rdi
    
    if (data_143de5480 != 0 && rax_2.b == 0)
        performanceCount_1 = performanceCount
        rdi.b = 0
    else
        rcx_1 = data_143e20d18
        
        if (rcx_1 == 0)
            goto label_140e8d50e
        
        char rax_4
        rax_4, rcx_1 = (*(*rcx_1 + 0x80))(rcx_1)
        
        if (rax_4 != 0)
            performanceCount_1 = performanceCount
            rdi.b = 0
        else
            rcx_1 = data_143e20d18
        label_140e8d50e:
            
            if (*(r15 + 0x1d0) != 0)
                performanceCount_1 = performanceCount
                rdi.b = 0
            else
                performanceCount_1 = data_143e20d20
                
                if (performanceCount_1 != 0)
                    performanceCount_1[1].d += 1
                
                r14 = 1
                char rax_6
                rax_6, rcx_1 = (*(*rcx_1 + 0x60))()
                
                if (rax_6 == 0)
                    rdi.b = 0
                else
                    rdi = 1
    
    if ((r14.b & 1) != 0)
        r14 &= 0xfffffffe
        
        if (performanceCount_1 != 0)
            performanceCount_1[1].d -= 1
            
            if (performanceCount_1[1].d == 1)
                (**performanceCount_1)(performanceCount_1)
                int32_t temp2_1 = *(performanceCount_1 + 0xc)
                *(performanceCount_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*performanceCount_1 + 8))(performanceCount_1, 1)
    
    int32_t var_450
    uint128_t var_3e8
    int64_t* var_3e0
    int64_t var_388
    
    if (rdi.b != 0)
        sub_140e68880(r15, &var_388, 0xa)
        int64_t rbx_1 = *r12
        int64_t* rax_9 = sub_140e67030(r12, &var_3e8)
        var_450 = *(r15 + 0x18)
        void var_1f0
        (*(rbx_1 + 0xf8))(r12, &var_1f0, var_388, rax_9, 1, var_450)
        sub_140596d80(&var_3e8)
        int64_t* performanceCount_2
        
        if (sub_140db3500(&var_1f0) == 0)
            performanceCount_2 = performanceCount
        else
            performanceCount_2 = *(r15 + 0x278)
            r14 |= 6
            
            if (performanceCount_2 != 0)
                int32_t rax_12 = performanceCount_2[1].d
                
                if (rax_12 == 0)
                    performanceCount_2 = nullptr
                else
                    performanceCount_2[1].d = rax_12 + 1
            
            int64_t rdi_1 = 0
            
            if (performanceCount_2 != 0)
                rdi_1 = *(r15 + 0x270)
            
            if (rdi_1 == 0 || rdi_1 != *sub_140db22a0(&var_1f0, &var_3e8))
                rsi = 1
        
        if ((r14.b & 4) != 0)
            r14 &= 0xfffffffb
            
            if (var_3e0 != 0)
                var_3e0[1].d -= 1
                
                if (var_3e0[1].d == 1)
                    (**var_3e0)(var_3e0)
                    int32_t temp6_1 = *(var_3e0 + 0xc)
                    *(var_3e0 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_3e0 + 8))(var_3e0, 1)
        
        if ((r14.b & 2) != 0)
            r14 &= 0xfffffffd
            
            if (performanceCount_2 != 0)
                performanceCount_2[1].d -= 1
                
                if (performanceCount_2[1].d == 1)
                    (**performanceCount_2)(performanceCount_2)
                    int32_t temp8_1 = *(performanceCount_2 + 0xc)
                    *(performanceCount_2 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*performanceCount_2 + 8))(performanceCount_2, 1)
        
        if (rsi != 0)
            sub_140d965b0(&var_350, &var_1f0)
        
        void var_a0
        sub_140596d80(&var_a0)
        int64_t* var_a8
        
        if (var_a8 != 0)
            var_a8[1].d -= 1
            
            if (var_a8[1].d == 1)
                (**var_a8)(var_a8)
                int32_t temp10_1 = *(var_a8 + 0xc)
                *(var_a8 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_a8 + 8))(var_a8, 1)
        
        void var_1e8
        sub_140d94d20(&var_1e8)
    
    rcx_1.b = 0
    var_388 = 0
    uint128_t zmm6 = zx.o(0)
    char var_438_1 = 0
    uint128_t var_378_1 = zx.o(0)
    int64_t* r12_1 = nullptr
    uint128_t zmm10 = zx.o(0)
    int32_t var_220
    int64_t r13_1 = sx.q(var_220 - 1)
    int64_t* var_408_1 = nullptr
    void* const var_418
    float var_3d8
    int32_t var_3d0
    int64_t* var_3b8
    int64_t* var_3a8
    int32_t var_368
    int32_t var_364
    int32_t var_360
    int32_t var_35c
    void var_348
    void* var_228
    uint128_t zmm0
    uint128_t zmm1
    uint32_t zmm2[0x4]
    float zmm3[0x4]
    uint32_t zmm4[0x4]
    uint128_t zmm7
    int128_t zmm8
    
    if (var_220 - 1 s>= 0)
        int64_t* r15_1 = nullptr
        performanceCount_1 = r13_1 * 0x48
        var_430.q = performanceCount_1
        int64_t temp4_1
        
        do
            void* rdi_3 = &var_348
            
            if (var_228 != 0)
                rdi_3 = var_228
            
            int128_t* rdi_4 = rdi_3 + performanceCount_1
            
            if (r12_1 == 0)
                int64_t* rcx_19 = *(rdi_4 + 0x38)
                (*(*rcx_19 + 0x1b8))(rcx_19, &var_3b8)
                int64_t* rcx_20 = var_3b8
                int64_t* rbx_5
                int64_t* var_3b0
                
                if (rcx_20 == 0)
                    rbx_5 = var_3b0
                else if ((*(*rcx_20 + 0x18))(rcx_20) != 0)
                    rbx_5 = var_3b0
                else
                    int64_t* rbx_4 = rdi_4[4].q
                    var_388 = *(rdi_4 + 0x38)
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                    
                    int64_t* rsi_1 = r15_1
                    
                    if (rbx_4 != r15_1)
                        r15_1 = rbx_4
                        
                        if (rsi_1 != 0)
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d == 1)
                                (**rsi_1)(rsi_1)
                                int32_t temp23_1 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (temp23_1 == 1)
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                    else if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp22_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp22_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    zmm1 = var_3b8.o
                    rbx_5 = _mm_bsrli_si128(zmm1, 8).q
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                        rbx_5 = var_3b0
                    
                    var_378_1 = zmm1
                    zmm0 = _mm_bsrli_si128(zmm6, 8)
                    zmm6 = zmm1
                    int64_t* rsi_2 = zmm0.q
                    
                    if (rsi_2 == 0)
                        r12_1 = var_378_1.q
                    else
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp32_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp32_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
                        
                        r12_1 = var_378_1.q
                        rbx_5 = var_3b0
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp11_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
                
                rcx_1 = zx.q(var_438_1)
                performanceCount_1 = var_430.q
            
            if ((*(*(rdi_4 + 0x38) + 0x28) & 0x10) != 0)
                zmm0 = *(rdi_4 + 8)
                bool cond:4_1 = rcx_1.b != 0
                rcx_1 = &var_3d8
                zmm4 = rdi_4[1].d
                zmm1.d = (*(rdi_4 + 4)).d f* zmm0.d
                int64_t var_3cc_1 = 0
                zmm0.d = zmm0.d f* (*rdi_4)[0]
                var_3d8 = (*(rdi_4 + 0xc))[0]
                uint32_t var_3d4_1 = zmm4[0]
                var_3d0 = zmm0.d
                int32_t var_3c4_1 = zmm1.d
                
                if (cond:4_1)
                    zmm6, zmm7, zmm8 = sub_140dbe170(rcx_1, &var_3a8)
                    zmm3 = __minss_xmmss_memss(var_368[0], var_3a8.d)
                    zmm0 = __minss_xmmss_memss(var_364.d, var_3a8:4.d)
                    int32_t var_3a0
                    zmm1 = __maxss_xmmss_memss(var_360.d, var_3a0)
                    int32_t var_39c
                    zmm2 = __maxss_xmmss_memss(var_35c[0], var_39c)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    zmm3[0] = zmm0.d
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    zmm3[0] = zmm1.d
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                    zmm3[0] = zmm2[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                    var_418.o = zmm3
                    var_368.o = zmm3
                else
                    zmm6, zmm7, zmm8 = sub_140dbe170(rcx_1, &var_3e8)
                    var_368.o = var_3e8
                
                zmm0 = var_368.o
                rcx_1.b = 1
                var_438_1 = 1
                var_408_1.o = zmm0
                var_368.o = zmm0
            
            performanceCount_1 -= 0x48
            temp4_1 = r13_1
            r13_1 -= 1
            var_430.q = performanceCount_1
        while (temp4_1 - 1 s>= 0)
        var_408_1 = r15_1
        r15 = var_398
    
    int64_t* rcx_28 = *(r15 + 0x288)
    int64_t* r13_2 = nullptr
    var_3b8 = rcx_28
    
    if (rcx_28 != 0)
        int32_t rax_36 = rcx_28[1].d
        
        if (rax_36 == 0)
            rcx_28 = nullptr
        else
            rcx_28[1].d = rax_36 + 1
        
        var_3b8 = rcx_28
    
    var_3a8 = nullptr
    int64_t* rsi_3 = nullptr
    
    if (rcx_28 != 0)
        rsi_3 = *(r15 + 0x280)
        var_3a8 = rsi_3
    
    bool var_428_1 = r12_1 != rsi_3
    int64_t* var_410
    int64_t r14_2
    
    if (r12_1 == rsi_3)
        r14_2 = 0
    else
        if (*(r15 + 0x290) != 0)
            int64_t* rbx_6 = *(r15 + 0x298)
            
            if (rbx_6 != 0)
                int32_t rax_38 = rbx_6[1].d
                
                if (rax_38 s> 0)
                    var_418.o = zx.o(0)
                    
                    if (rbx_6 != 0)
                        if (rax_38 != 0)
                            rbx_6[1].d = rax_38 + 1
                            rax_38.b = 1
                        
                        if (rax_38.b == 0)
                            rbx_6 = nullptr
                    
                    int64_t* rcx_29 = nullptr
                    
                    if (rbx_6 != 0)
                        rcx_29 = *(r15 + 0x290)
                    
                    (*(*rcx_29 + 0xa8))(rcx_29, &var_418)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp28_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp28_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    if (var_410 != 0)
                        var_410[1].d -= 1
                        
                        if (var_410[1].d == 1)
                            (**var_410)(var_410)
                            int32_t temp31_1 = *(var_410 + 0xc)
                            *(var_410 + 0xc) -= 1
                            
                            if (temp31_1 == 1)
                                (*(*var_410 + 8))(var_410, 1)
        
        int64_t* rcx_37
        void* const rdx_10
        int32_t r14_1
        
        if (r12_1 == 0)
            rcx_37 = &var_3e8
            var_3e8 = zx.o(0)
            r14_1 = r14 | 0x20
            rdx_10 = nullptr
        else
            (*(*r12_1 + 0x28))(r12_1)
            r14_1 = r14 | 0x18
            int64_t* rax_46 = (**r12_1)(r12_1, &var_3d8)
            int64_t* rcx_36 = rax_46[1]
            rdx_10 = *rax_46
            var_418 = rdx_10
            var_410 = rcx_36
            
            if (rcx_36 != 0)
                rcx_36[1].d += 1
            
            rcx_37 = &var_418
        
        int64_t* rax_47 = rcx_37[1]
        rcx_37[1] = 0
        *rcx_37 = 0
        var_398 = rdx_10
        
        if ((r14_1.b & 0x20) != 0)
            r14_1 &= 0xffffffdf
            
            if (var_3e0 != 0)
                var_3e0[1].d -= 1
                
                if (var_3e0[1].d == 1)
                    (**var_3e0)(var_3e0)
                    int32_t temp20_1 = *(var_3e0 + 0xc)
                    *(var_3e0 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*var_3e0 + 8))(var_3e0, 1)
        
        if ((r14_1.b & 0x10) != 0)
            r14_1 &= 0xffffffef
            
            if (var_410 != 0)
                var_410[1].d -= 1
                
                if (var_410[1].d == 1)
                    (**var_410)(var_410)
                    int32_t temp26_1 = *(var_410 + 0xc)
                    *(var_410 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*var_410 + 8))(var_410, 1)
        
        if ((r14_1.b & 8) != 0)
            int64_t* rbx_10 = var_3d0.q
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    (**rbx_10)(rbx_10)
                    int32_t temp30_1 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (temp30_1 == 1)
                        (*(*rbx_10 + 8))(rbx_10, 1)
        
        int64_t rbx_11 = sx.q(var_220 - 1)
        
        if (var_220 - 1 s< 0)
            r14_2 = 0
        else
            int64_t rdi_6 = rbx_11 * 0x48
            
            while (true)
                void* rsi_4 = &var_348
                
                if (var_228 != 0)
                    rsi_4 = var_228
                
                int64_t* rcx_44 = *(rsi_4 + rdi_6 + 0x38)
                
                if ((*(*rcx_44 + 0xa8))(rcx_44, &var_398) != 0)
                    int64_t* rax_59 = *(rsi_4 + rdi_6 + 0x40)
                    r14_2 = *(rsi_4 + rdi_6 + 0x38)
                    bool cond:8_1 = rax_59 != 0
                    
                    if (rax_59 != 0)
                        rax_59[1].d += 1
                        cond:8_1 = rax_59 != 0
                    
                    rsi_3 = var_3a8
                    
                    if (cond:8_1)
                        r13_2 = rax_59
                    
                    break
                
                rdi_6 -= 0x48
                int64_t temp37_1 = rbx_11
                rbx_11 -= 1
                
                if (temp37_1 - 1 s< 0)
                    rsi_3 = var_3a8
                    r14_2 = 0
                    break
        
        if (rax_47 != 0)
            rax_47[1].d -= 1
            
            if (rax_47[1].d == 1)
                (**rax_47)(rax_47)
                int32_t temp35_1 = *(rax_47 + 0xc)
                *(rax_47 + 0xc) -= 1
                
                if (temp35_1 == 1)
                    (*(*rax_47 + 8))(rax_47, 1)
    
    if (var_438_1 != 0 && sub_140db3500(&var_350) != 0)
        int64_t* performanceCount_3 = performanceCount
        sub_140e63a40(performanceCount_3, &var_418, &var_350)
        
        if (var_418 != 0)
            performanceCount.o = data_142d3f7e0
            var_3d8.o = var_418.o
            
            if (var_410 != 0)
                var_410[1].d += 1
            
            char rax_63
            rax_63, zmm6, zmm7, zmm8 =
                sub_140e69120(performanceCount_3, &var_3d8, &var_350, &performanceCount)
            
            if (var_410 != 0)
                var_410[1].d -= 1
                
                if (var_410[1].d == 1)
                    int64_t rdx_14 = *var_410
                    (*rdx_14)(var_410, rdx_14)
                    int32_t temp24_1 = *(var_410 + 0xc)
                    *(var_410 + 0xc) -= 1
                    
                    if (temp24_1 == 1)
                        (*(*var_410 + 8))(var_410, 1)
            
            if (rax_63 != 0)
                zmm3 = __minss_xmmss_memss(var_368[0], performanceCount.d)
                zmm0 = __minss_xmmss_memss(var_364.d, performanceCount:4.d)
                int32_t var_3f0
                zmm1 = __maxss_xmmss_memss(var_360.d, var_3f0)
                int32_t var_3ec
                zmm2 = __maxss_xmmss_memss(var_35c[0], var_3ec)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                var_438_1 = 1
                zmm3[0] = zmm0.d
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm3[0] = zmm1.d
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                zmm3[0] = zmm2[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                var_418.o = zmm3
                var_368.o = zmm3
        
        if (var_410 != 0)
            var_410[1].d -= 1
            
            if (var_410[1].d == 1)
                (**var_410)(var_410)
                int32_t temp16_1 = *(var_410 + 0xc)
                *(var_410 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_410 + 8))(var_410, 1)
    
    int128_t var_68_1 = zmm8
    var_430.q = *(r15 + 0x2b0)
    int32_t var_42c
    int128_t zmm9
    
    if (rsi_3 == 0)
        if (r12_1 != 0 && r12_1 != rsi_3)
            goto label_140e8dd93
        
        zmm9 = var_42c
        zmm8 = var_430
    else if ((*(*rsi_3 + 0x20))(rsi_3) == 0 || (r12_1 != 0 && r12_1 != rsi_3))
    label_140e8dd93:
        sub_140e68dd0(r15, &var_398, 0xa)
        zmm8.d = var_398.d.d f+ data_1439b3898
        zmm9.d = var_398:4.d.d f+ data_1439b389c
        var_430 = zmm8.d
        var_42c = zmm9.d
    else
        zmm9 = var_42c
        zmm8 = var_430
    
    int32_t var_448
    
    if (*(r15 + 0x270) != 0)
        int64_t* rdi_8 = *(r15 + 0x278)
        
        if (rdi_8 != 0)
            int32_t rax_69 = rdi_8[1].d
            
            if (rax_69 s> 0)
                var_418.d = zmm8.d
                var_418:4.d = zmm9.d
                void* const rcx_56 = nullptr
                var_410.d = zmm8.d
                var_410:4.d = zmm9.d
                
                if (rdi_8 != 0)
                    if (rax_69 != 0)
                        rdi_8[1].d = rax_69 + 1
                        rax_69.b = 1
                    
                    if (rax_69.b == 0)
                        rdi_8 = nullptr
                    
                    if (rdi_8 != 0)
                        rcx_56 = *(r15 + 0x270)
                
                int64_t* rsi_5 = var_380
                var_448 = 1
                var_450.q = &data_143dbb1f0
                var_430.q = *(*(*rsi_5 + 0x1b8))(rsi_5, &var_398, &var_418, 
                    sub_140e13cf0(rcx_56, &performanceCount), 0, var_450, var_448)
                
                if (rdi_8 != 0)
                    rdi_8[1].d -= 1
                    
                    if (rdi_8[1].d == 1)
                        (**rdi_8)(rdi_8)
                        int32_t temp39_1 = *(rdi_8 + 0xc)
                        *(rdi_8 + 0xc) -= 1
                        
                        if (temp39_1 == 1)
                            (*(*rdi_8 + 8))(rdi_8, 1)
                
                zmm8 = var_430
                zmm9 = var_42c
    
    if (var_438_1 != 0)
        zmm4 = var_360
        zmm4[0] = zmm4[0] f+ data_1439b38a0
        zmm3 = var_35c
        zmm3[0] = zmm3[0] f+ data_1439b38a4
        zmm4[0] = zmm4[0] f- zmm8.d
        zmm3[0] = zmm3[0] f- zmm9.d
        
        if (not(zmm4[0] f== 0f) && not(zmm3[0] == 0f))
            char rax_74 = *(r15 + 0x2c0)
            
            if (rax_74 != 2 && rax_74 == 0)
                zmm2 = __andps_xmmxud_memxud(zmm4, data_142d3f770)
                zmm0 = __andps_xmmxud_memxud(zmm3, data_142d3f770)
            
            if (rax_74 == 2 || (rax_74 == 0 && zmm2[0] f< zmm0.d))
                zmm8.d = zmm8.d f+ zmm4[0]
                *(r15 + 0x2c0) = 2
                var_430 = zmm8.d
            else
                zmm9.d = zmm9.d f+ zmm3[0]
                *(r15 + 0x2c0) = 1
                int32_t var_42c_1 = zmm9.d
    
    int64_t* rsi_6 = var_378_1:8.q
    int64_t* r14_3
    
    if (var_428_1 == 0)
        r14_3 = var_408_1
    else if (r12_1 != 0)
    label_140e8df7f:
        sub_140e5af40(r15)
        
        if (r14_2 != 0)
            *(r15 + 0x290) = r14_2
            int64_t* rcx_62 = *(r15 + 0x298)
            
            if (r13_2 != rcx_62)
                if (r13_2 != 0)
                    *(r13_2 + 0xc) += 1
                    rcx_62 = *(r15 + 0x298)
                
                if (rcx_62 != 0)
                    int32_t temp44_1 = *(rcx_62 + 0xc)
                    *(rcx_62 + 0xc) -= 1
                    
                    if (temp44_1 == 1)
                        (*(*rcx_62 + 8))(rcx_62, 1)
                
                *(r15 + 0x298) = r13_2
            
            *(r15 + 0x280) = r12_1
            int64_t* rcx_63 = *(r15 + 0x288)
            
            if (rsi_6 != rcx_63)
                if (rsi_6 != 0)
                    *(rsi_6 + 0xc) += 1
                    rcx_63 = *(r15 + 0x288)
                
                if (rcx_63 != 0)
                    int32_t temp48_1 = *(rcx_63 + 0xc)
                    *(rcx_63 + 0xc) -= 1
                    
                    if (temp48_1 == 1)
                        (*(*rcx_63 + 8))(rcx_63, 1)
                
                *(r15 + 0x288) = rsi_6
            
            r14_3 = var_408_1
        else if (arg3 == 0 || r12_1 == 0)
            r14_3 = var_408_1
        else
            var_3e8 = zmm6
            
            if (rsi_6 != 0)
                rsi_6[1].d += 1
            
            zmm7, zmm8, zmm9, zmm10 = sub_140e8b370(r15, &var_3e8, &var_430)
            
            if (var_3e0 != 0)
                var_3e0[1].d -= 1
                
                if (var_3e0[1].d == 1)
                    (**var_3e0)(var_3e0)
                    int32_t temp51_1 = *(var_3e0 + 0xc)
                    *(var_3e0 + 0xc) -= 1
                    
                    if (temp51_1 == 1)
                        (*(*var_3e0 + 8))(var_3e0, 1)
            
            r14_3 = var_408_1
            *(r15 + 0x2a0) = var_388
            int64_t* rcx_68 = *(r15 + 0x2a8)
            
            if (r14_3 != rcx_68)
                if (r14_3 != 0)
                    *(r14_3 + 0xc) += 1
                    rcx_68 = *(r15 + 0x2a8)
                
                if (rcx_68 != 0)
                    int32_t temp53_1 = *(rcx_68 + 0xc)
                    *(rcx_68 + 0xc) -= 1
                    
                    if (temp53_1 == 1)
                        (*(*rcx_68 + 8))(rcx_68, 1)
                
                *(r15 + 0x2a8) = r14_3
    else
        int64_t* rcx_60 = var_3a8
        
        if (rcx_60 == 0)
            r14_3 = var_408_1
        else
            if ((*(*rcx_60 + 0x20))(rcx_60) == 0)
                goto label_140e8df7f
            
            r14_3 = var_408_1
    
    if (*(r15 + 0x270) != 0)
        void* rax_79 = *(r15 + 0x278)
        
        if (rax_79 != 0 && *(rax_79 + 8) s> 0)
            uint128_t var_58_1 = zmm7
            zmm0.d = float.s(*data_143e29ed0)
            zmm1.d = 1f f/ zmm0.d
            performanceCount_1.b = zmm1.d f>= *(data_143e29f28 + 0x36c)
            QueryPerformanceCounter(&performanceCount)
            zmm1.q = float.d(performanceCount)
            zmm0 = _mm_cvtps_pd(data_1439b3874.q)
            zmm1.q = zmm1.q f* data_143d796f8
            zmm1.q = zmm1.q f+ 16777216.0
            zmm1.q = zmm1.q f- zmm0.q
            zmm1.q = zmm1.q f- *(r15 + 0x2b8)
            zmm6.d = _mm_cvtpd_ps(zmm1).d f/ data_1439b3878
            
            if (zmm6.d f>= zmm10.d)
                zmm6 = _mm_min_ss(zmm6.d, 0x3f800000)
            else
                zmm6 = zmm10
            
            int64_t* rdi_9 = *(r15 + 0x278)
            void* const r12_2
            
            if (rdi_9 == 0)
                r12_2 = nullptr
            else
                int32_t rax_86 = rdi_9[1].d
                
                if (rax_86 != 0)
                    rdi_9[1].d = rax_86 + 1
                    rax_86.b = 1
                
                r12_2 = nullptr
                
                if (rax_86.b == 0)
                    rdi_9 = nullptr
            
            if (rdi_9 != 0)
                r12_2 = *(r15 + 0x270)
            
            sub_140e24c80(r12_2, zmm6)
            
            if (performanceCount_1.b != 0)
                zmm7.d = 1f f- zmm6.d
                zmm10.d = zmm7.d f* zmm7.d
                zmm10.d = zmm10.d f* zmm7.d
            
            zmm6.d = zmm10.d f* 30f
            zmm10.d = zmm10.d f* 5f
            zmm6.d = zmm6.d f+ zmm8.d
            zmm10.d = zmm10.d f+ zmm9.d
            int64_t* rax_87 = sub_140e15940(r12_2, &performanceCount)
            
            if (zmm6.d f!= *rax_87 || not(zmm10.d f== *(rax_87 + 4)))
                int64_t* r15_2 = var_380
                var_418.d = zmm6.d
                var_418:4.d = zmm10.d
                var_410.d = zmm6.d
                var_410:4.d = zmm10.d
                uint128_t* rax_89 = (*(*r15_2 + 0x100))(r15_2, &var_380, &var_418, 
                    sub_140e13cf0(r12_2, &performanceCount), 0, var_450, var_448)
                zmm6 = _mm_unpacklo_ps(*rax_89, *(rax_89 + 4))
                sub_140e238f0(r12_2, zmm6.q)
                sub_140e1c780(r12_2, zmm6.q)
            
            if (rdi_9 != 0)
                rdi_9[1].d -= 1
                
                if (rdi_9[1].d == 1)
                    (**rdi_9)(rdi_9)
                    int32_t temp55_1 = *(rdi_9 + 0xc)
                    *(rdi_9 + 0xc) -= 1
                    
                    if (temp55_1 == 1)
                        (*(*rdi_9 + 8))(rdi_9, 1)
    
    int64_t* rbx_14 = var_3b8
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp41_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*(*rbx_14 + 8))(rbx_14, 1)
    
    if (r13_2 != 0)
        r13_2[1].d -= 1
        
        if (r13_2[1].d == 1)
            (**r13_2)(r13_2)
            int32_t temp43_1 = *(r13_2 + 0xc)
            *(r13_2 + 0xc) -= 1
            
            if (temp43_1 == 1)
                (*(*r13_2 + 8))(r13_2, 1)
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp46_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp46_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    if (rsi_6 != 0)
        rsi_6[1].d -= 1
        
        if (rsi_6[1].d == 1)
            (**rsi_6)(rsi_6)
            int32_t temp50_1 = *(rsi_6 + 0xc)
            *(rsi_6 + 0xc) -= 1
            
            if (temp50_1 == 1)
                (*(*rsi_6 + 8))(rsi_6, 1)
    
    void var_200
    sub_140596d80(&var_200)
    int64_t* var_208
    
    if (var_208 != 0)
        var_208[1].d -= 1
        
        if (var_208[1].d == 1)
            (**var_208)(var_208)
            int32_t temp52_1 = *(var_208 + 0xc)
            *(var_208 + 0xc) -= 1
            
            if (temp52_1 == 1)
                (*(*var_208 + 8))(var_208, 1)
    
    result = sub_140d94d20(&var_348)
else
    result = sub_140e5af40(arg1)

__security_check_cookie(rax_1 ^ &var_478)
return result
