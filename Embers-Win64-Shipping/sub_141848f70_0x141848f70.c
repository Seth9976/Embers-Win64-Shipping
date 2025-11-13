// 函数: sub_141848f70
// 地址: 0x141848f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* r12 = nullptr
uint64_t i_9
i_9.b = 1
bool cond:0 = *(arg1 + 0x28) s<= 1
int64_t* rbx = nullptr
int64_t* var_360 = nullptr
char i_10 = 1
int64_t* result
int64_t* rdi_1

if (not(cond:0))
    int64_t* rcx = *(arg1 + 0x50)
    int16_t* const r8_1
    
    if (*(arg1 + 0x28) == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *(arg1 + 0x20)
    
    int64_t* var_300
    result = (*(*rcx + 0x50))(rcx, &var_300, r8_1, 0)
    rdi_1 = nullptr
    
    if (&var_360 != result)
        rbx = *result
        var_360 = rbx
        rdi_1 = rbx
        *result = 0
    
    int64_t* rcx_1 = var_300
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)

if (cond:0 || rdi_1 != 0)
    double zmm6[0x2] = _mm_cvtps_pd((*(arg1 + 0x18))[0])
    void var_2a0
    int64_t* rax_4 = sub_140b29d90(&var_2a0)
    zmm6[0] = zmm6[0] * 864000000000.0
    zmm6[0] = zmm6[0] + 0.5
    int64_t rcx_3 = int.q(zmm6[0])
    
    if (rcx_3 != -0x8000000000000000)
        int128_t zmm0_1
        zmm0_1.q = float.d(rcx_3)
        
        if (not(zmm0_1.q f== zmm6[0]))
            uint32_t temp0_3 = _mm_movemask_pd(_mm_unpacklo_pd(zmm6, zmm6[0]))
            zmm6 = zx.o(0)
            zmm6[0] = float.d(rcx_3 - (zx.q(temp0_3) & 1))
    
    int64_t rcx_5 = *rax_4
    int64_t rax_7 = int.q(zmm6[0])
    int64_t* var_350 = nullptr
    int32_t i_11 = 0
    int64_t var_2e8 = rcx_5 - rax_7
    CRITICAL_SECTION criticalSection
    InitializeCriticalSection(&criticalSection)
    SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
    int64_t performanceCount_2
    __builtin_memset(&performanceCount_2, 0, 0x12)
    EnterCriticalSection(&criticalSection)
    int16_t var_1b0
    
    if (var_1b0.b == 0)
        var_1b0.b = 1
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        performanceCount_2 = performanceCount
    
    LeaveCriticalSection(&criticalSection)
    int64_t* rcx_12 = *(arg1 + 0x50)
    int16_t* const r8_2
    
    if (*(arg1 + 0x10) == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *(arg1 + 8)
    
    (*(*rcx_12 + 0x98))(rcx_12, &var_350, r8_2, 0, 2)
    EnterCriticalSection(&criticalSection)
    
    if (var_1b0.b != 0)
        var_1b0.b = 0
        
        if (var_1b0:1.b == 0)
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            int64_t var_1b8
            int64_t var_1b8_1 = var_1b8 + performanceCount_1 - performanceCount_2
    
    int32_t rdx_4 = LeaveCriticalSection(&criticalSection)
    int64_t* r14_1 = var_350
    int64_t* rdi_2 = r14_1
    int64_t* rsi_3 = &r14_1[sx.q(i_11) * 2]
    
    if (r14_1 != rsi_3)
        do
            char rax_12
            rax_12, rdx_4 = sub_140a237d0(rdi_2, u".manifest", 1)
            
            if (rax_12 != 0)
                char i
                
                do
                    rdi_2 = &rdi_2[2]
                    
                    if (rdi_2 == rsi_3)
                        goto label_141849253
                    
                    i, rdx_4 = sub_140a237d0(rdi_2, u".manifest", 1)
                while (i != 0)
            
            char i_1
            
            do
                rsi_3 -= 0x10
                
                if (rdi_2 == rsi_3)
                    goto label_141849253
                
                i_1, rdx_4 = sub_140a237d0(rsi_3, u".manifest", 1)
            while (i_1 == 0)
            int128_t zmm1_1 = *rdi_2
            int128_t var_58_1 = zmm1_1
            *rdi_2 = *rsi_3
            rdi_2 = &rdi_2[2]
            *rsi_3 = zmm1_1
        while (rdi_2 != rsi_3)
    
label_141849253:
    int64_t* var_330 = nullptr
    int32_t i_12 = ((rdi_2 - r14_1) s>> 4).d
    int64_t var_328_1 = 0
    int128_t entry_zmm2
    int128_t entry_zmm3
    
    if (i_12 s> 0)
        void* var_2d0 = arg1
        int64_t r14_2 = 0
        i_9 = zx.q(i_12)
        uint64_t i_2
        
        do
            void* rcx_20 = var_350 + r14_2
            int64_t var_268[0x2]
            var_268[0] = 0
            void* var_2c8_1 = rcx_20
            int64_t var_258_1 = 0
            void* var_298
            void** rax_13
            rax_13, rdx_4, entry_zmm2, entry_zmm3 =
                sub_1418158b0(&var_298, 3, &var_2d0, &var_268, entry_zmm2, entry_zmm3)
            int64_t rsi_4 = sx.q(var_328_1.d)
            int32_t rax_14 = (rsi_4 + 1).d
            var_328_1.d = rax_14
            
            if (rax_14 s> var_328_1:4.d)
                rdx_4 = sub_1405a4f90(&var_330)
            
            void** rcx_25 = &var_330[rsi_4 * 2]
            *rcx_25 = *rax_13
            rcx_25[1] = rax_13[1]
            rax_13[1] = 0
            *rax_13 = nullptr
            int64_t* var_290
            
            if (var_290 != 0)
                var_290[1].d -= 1
                
                if (var_290[1].d == 1)
                    rdx_4 = (**var_290)(var_290)
                    int32_t rax_19 = *(var_290 + 0xc)
                    *(var_290 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        rdx_4 = (*(*var_290 + 8))(var_290, 1)
            
            r14_2 += 0x10
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
        rbx = var_360
        i_9.b = 1
    
    int64_t* rsi_5 = var_330
    void* r14_5 = &rsi_5[sx.q(var_328_1.d) * 2]
    int64_t var_1a8
    __builtin_memset(&var_1a8, 0, 0x2c)
    int32_t var_17c_1 = 0x80
    int32_t var_178_1 = 0xffffffff
    int32_t var_174_1 = 0
    int64_t var_168_1 = 0
    int32_t var_160_1 = 0
    
    if (rsi_5 == r14_5)
    label_1418494db:
        int32_t i_13 = i_12
        int64_t* var_340 = nullptr
        int64_t var_338_1 = 0
        
        if (i_12 s< i_11)
            do
                void* var_2b8_1 = &var_350[sx.q(i_13) * 2]
                int64_t var_228[0x2]
                var_228[0] = 0
                int64_t* var_2b0_1 = &var_1a8
                int64_t* var_2a8_1 = &var_2e8
                int64_t var_218_1 = 0
                void* var_2c0 = arg1
                void* var_288
                void** rax_28
                rax_28, rdx_4, entry_zmm2, entry_zmm3 =
                    sub_1418164d0(&var_288, 3, &var_2c0, &var_228, entry_zmm2, entry_zmm3)
                int64_t r14_6 = sx.q(var_338_1.d)
                int32_t rax_29 = (r14_6 + 1).d
                var_338_1.d = rax_29
                
                if (rax_29 s> var_338_1:4.d)
                    rdx_4 = sub_1405a4f90(&var_340)
                
                void** rcx_39 = &var_340[r14_6 * 2]
                *rcx_39 = *rax_28
                rcx_39[1] = rax_28[1]
                rax_28[1] = 0
                *rax_28 = nullptr
                int64_t* var_280
                
                if (var_280 != 0)
                    var_280[1].d -= 1
                    
                    if (var_280[1].d == 1)
                        rdx_4 = (**var_280)(var_280)
                        int32_t rax_34 = *(var_280 + 0xc)
                        *(var_280 + 0xc) -= 1
                        
                        if (rax_34 == 1)
                            rdx_4 = (*(*var_280 + 8))(var_280, 1)
                
                i_13 += 1
            while (i_13 s< i_11)
            
            rbx = var_360
        
        int64_t* r15 = var_340
        void* rax_38 = &r15[sx.q(var_338_1.d) * 2]
        
        if (r15 != rax_38)
            int64_t r14_8 = sx.q(i_12) << 4
            int64_t var_308_1 = r14_8
            
            do
                void* rbx_6 = *r15
                
                while (true)
                    bool z_2
                    
                    if (0 == *(rbx_6 + 0x78))
                        *(rbx_6 + 0x78) = 0
                        z_2 = true
                    else
                        int64_t rax_39
                        rax_39.b = *(rbx_6 + 0x78)
                        z_2 = false
                    
                    if (not(z_2))
                        break
                    
                    int64_t* rcx_42 = *(rbx_6 + 0x70)
                    rdx_4 = (*(*rcx_42 + 0x20))(rcx_42, 0xffffffff, 0)
                
                int64_t* rsi_6 = var_350
                rbx = var_360
                int64_t rcx_43 = (*(rbx_6 + 0x80)).q
                
                if (rcx_43.b == 0 && (rcx_43 u>> 8).b != 0 && (rcx_43 u>> 0x10).b != 0
                        && (rcx_43 u>> 0x18).b != 0 && rbx != 0)
                    int32_t rdi_4 = *(r14_8 + rsi_6 + 8)
                    int64_t rsi_7 = *(r14_8 + rsi_6)
                    int16_t* var_318 = nullptr
                    sub_1405a4c70(&var_318, sbb.d(rdx_4, rdx_4, rdi_4 != 0) + 3 + rdi_4, 0)
                    memcpy(var_318, rsi_7, rdi_4 * 2)
                    sub_140a20ba0(&var_318, &data_142d6acb4, 2)
                    int16_t* const rsi_8 = &data_142d40450
                    int16_t* r13_1 = var_318
                    int16_t* var_278_1 = r13_1
                    
                    if (rdi_4 != 0)
                        rsi_8 = r13_1
                    
                    var_318 = nullptr
                    int32_t var_270_1 = rdi_4
                    int32_t var_310_1
                    var_310_1.q = 0
                    void* var_78_1 = nullptr
                    int32_t rcx_50
                    void* rdx_16
                    
                    if (rsi_8 == 0)
                        r12 = nullptr
                        rdx_16 = nullptr
                        rcx_50 = 0
                        int64_t var_70_2 = 0
                        int32_t var_68_2 = 0
                    else
                        int64_t rdi_5 = -1
                        
                        do
                            rdi_5 += 1
                        while (rsi_8[rdi_5] != 0)
                        
                        int32_t var_320 = 0
                        sub_14060af80(&var_320, (rdi_5 << 2).d, rsi_8, rdi_5.d)
                        int32_t rax_48 = var_320
                        
                        if (rax_48 + 1 u> 0x80 && rax_48 != 0xffffffff)
                            void* rax_49 = sub_140a84c80(0, sx.q(rax_48 + 1), 0)
                            r12 = rax_49
                            var_78_1 = rax_49
                        
                        void var_f8
                        void* rax_50 = &var_f8
                        
                        if (r12 != 0)
                            rax_50 = r12
                        
                        void* var_2e0 = rax_50
                        sub_14060ac90(&var_2e0, rax_48 + 1, rsi_8, (rdi_5 + 1).d)
                        rcx_50 = rax_48
                        r12 = nullptr
                        rdx_16 = rax_50
                        r14_8 = var_308_1
                    
                    rdx_4 = (*(*rbx + 0x150))(rbx, rdx_16, sx.q(rcx_50))
                    
                    if (var_78_1 != 0)
                        rdx_4 = sub_140a74f90(var_78_1)
                    
                    if (r13_1 != 0)
                        rdx_4 = sub_140a74f90(r13_1)
                
                r14_8 += 0x10
                r15 = &r15[2]
                var_308_1 = r14_8
            while (r15 != rax_38)
        
        int32_t i_6 = var_338_1.d
        
        if (i_6 != 0)
            void* rdi_6 = &var_340[1]
            int32_t i_3
            
            do
                int64_t* rbx_7 = *rdi_6
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t rax_56 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (rax_56 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
                
                rdi_6 += 0x10
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            rbx = var_360
        
        int64_t* rcx_56 = var_340
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
        
        i_9 = zx.q(i_10)
    else
        do
            void* rbx_3 = *rsi_5
            
            while (true)
                bool z_1
                
                if (0 == *(rbx_3 + 0x78))
                    *(rbx_3 + 0x78) = 0
                    z_1 = true
                else
                    int64_t rax_21
                    rax_21.b = *(rbx_3 + 0x78)
                    z_1 = false
                
                if (not(z_1))
                    break
                
                int64_t* rcx_28 = *(rbx_3 + 0x70)
                (*(*rcx_28 + 0x20))(rcx_28, 0xffffffff, 0)
            
            char rax_23 = *(rbx_3 + 0x80)
            int64_t var_150_1 = *(rbx_3 + 0x88)
            int64_t var_148
            __builtin_memset(&var_148, 0, 0x2c)
            int32_t var_11c_1 = 0x80
            int32_t var_118_1 = 0xffffffff
            int32_t var_114_1 = 0
            int64_t var_108_1 = 0
            int32_t var_100_1 = 0
            sub_1418235f0(&var_148, rbx_3 + 0x90)
            
            if (rax_23 != 0)
                entry_zmm2 = sub_141814510(&var_1a8, &var_148)
            else
                i_9.b = 0
            
            int32_t var_100_2 = 0
            
            if (var_108_1 != 0)
                sub_140a74f90(var_108_1)
            
            rdx_4 = sub_14059ad90(&var_148, 0)
            int64_t var_128
            
            if (var_128 != 0)
                rdx_4 = sub_140a74f90(var_128)
            
            int64_t rcx_34 = var_148
            
            if (rcx_34 != 0)
                rdx_4 = sub_140a74f90(rcx_34)
            
            rsi_5 = &rsi_5[2]
        while (rsi_5 != r14_5)
        
        rbx = var_360
        i_10 = i_9.b
        
        if (i_9.b != 0)
            goto label_1418494db
    
    int32_t var_160_2 = 0
    
    if (var_168_1 != 0)
        sub_140a74f90(var_168_1)
    
    sub_14059ad90(&var_1a8, 0)
    int64_t var_188
    
    if (var_188 != 0)
        sub_140a74f90(var_188)
    
    int64_t rcx_60 = var_1a8
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    int32_t i_7 = var_328_1.d
    
    if (i_7 != 0)
        void* rdi_7 = &var_330[1]
        int32_t i_4
        
        do
            int64_t* rbx_8 = *rdi_7
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t rax_63 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (rax_63 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
            
            rdi_7 += 0x10
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)
        rbx = var_360
    
    int64_t* rcx_63 = var_330
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    DeleteCriticalSection(&criticalSection)
    int32_t i_8 = i_11
    int64_t* rdi_8 = var_350
    
    if (i_8 != 0)
        int32_t i_5
        
        do
            int64_t rcx_65 = *rdi_8
            
            if (rcx_65 != 0)
                sub_140a74f90(rcx_65)
            
            rdi_8 = &rdi_8[2]
            i_5 = i_8
            i_8 -= 1
        while (i_5 != 1)
        rdi_8 = var_350
    
    if (rdi_8 != 0)
        sub_140a74f90(rdi_8)
    
    if (rbx != 0)
        int64_t r8_10 = *rbx
        (*r8_10)(rbx, 1, r8_10)
    
    result = zx.q(i_9.b)
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_398)
return result
