// 函数: sub_14220cbe0
// 地址: 0x14220cbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* r15 = arg2
int64_t* var_2e8 = arg2
void** r12 = arg1
int32_t r13 = 0x20
void* var_58 = nullptr
int32_t result_1 = 0
int32_t var_4c = 0x20
void var_158
sub_142258fe0(r15, &var_158)
void* rcx_1 = var_58
void* rbx = &var_158
int64_t result = sx.q(result_1)
int32_t rdi = 0

if (rcx_1 != 0)
    rbx = rcx_1

void* rsi = rbx + (result << 3)

if (rbx != rsi)
    do
        result = sub_1422719a0(rbx)
        
        if (result.b != 0)
            rdi += 1
        
        rbx += 8
    while (rbx != rsi)
    
    rcx_1 = var_58

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

if (rdi s> 0)
    int32_t rax_2 = sub_14226e220(r15)
    uint64_t var_348 = 0
    int32_t var_33c_1 = 0
    int32_t var_340_1 = rax_2
    
    if (rax_2 s> 0)
        sub_1405a4d70(&var_348)
    
    sub_142259140(r15, &var_348)
    int32_t rdi_1 = var_340_1
    int32_t rbx_1 = rdi_1 - 1
    
    if (rbx_1 s>= 0)
        int64_t rdi_3 = sx.q(rbx_1) << 3
        int32_t temp2_1
        
        do
            int64_t r14_2 = var_348 + rdi_3
            int32_t* rax_3 = sub_14226f620(r14_2)
            void* const rsi_1
            
            if (rax_3 == 0 || *rax_3 != 6)
                rsi_1 = nullptr
            else
                rsi_1 = *(rax_3 + 8)
            
            bool rcx_8 = sub_14226e880(r14_2) == 5
            char rax_4
            
            if (rsi_1 == 0 || (*(rsi_1 + 0x18) & 1) != 0)
                rax_4 = 0
            else
                rax_4 = 1
            
            if (rcx_8 != 0 || rax_4 != 0)
                int32_t rcx_9 = var_340_1
                int32_t rax_7 = rcx_9 - rbx_1 - 1
                
                if (rax_7 s>= 1)
                    rax_7 = 1
                
                if (rax_7 != 0)
                    uint64_t rcx_11 = var_348
                    memcpy(rcx_11 + rdi_3, rcx_11 + (sx.q(rcx_9 - rax_7) << 3), rax_7 << 3)
                    rcx_9 = var_340_1
                
                var_340_1 = rcx_9 - 1
                sub_1405c53d0(&var_348)
            
            rdi_3 -= 8
            temp2_1 = rbx_1
            rbx_1 -= 1
        while (temp2_1 - 1 s>= 0)
        rdi_1 = var_340_1
        r12 = arg1
    
    void* rdx_4 = *r12
    int128_t var_330
    __builtin_memcpy(&var_330, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x80\x3f", 
        0x34)
    void* rcx_15 = *(rdx_4 + 0x120)
    float var_368[0x4]
    int128_t var_310
    float var_300_1
    float zmm1_1[0x4]
    double zmm2[0x2]
    int128_t var_320
    float var_288[0x4]
    void* var_228
    
    if (rcx_15 != 0 && *(rcx_15 + 8) - *(rcx_15 + 0x34) s> 0)
        uint64_t rsi_2 = var_348
        void* const rbx_2 = nullptr
        void** rdx_5 = nullptr
        void* var_1d8
        __builtin_memset(&var_1d8, 0, 0x2c)
        int32_t r9_1 = 0
        int64_t r15_1 = rsi_2 + (sx.q(rdi_1) << 3)
        int32_t var_1ac_1 = 0x80
        int32_t var_1a8_1 = 0xffffffff
        int32_t var_1a4_1 = 0
        int64_t var_198_1 = 0
        int32_t var_190_1 = 0
        int32_t var_378
        void** var_338
        
        if (rsi_2 != r15_1)
            while (true)
                void* r14_3 = *r12
                int64_t* rdi_4 = *(r14_3 + 0x120)
                sub_1422159c0(rdi_4, &var_378, rsi_2)
                int64_t rax_12 = sx.q(var_378)
                void* const rax_15
                
                if (rax_12.d == 0xffffffff)
                    rax_15 = nullptr
                else
                    rax_15 = rax_12 * 0x60 + *rdi_4
                
                int64_t* rdi_5 = rax_15 + 0x10
                int64_t* rcx_17 = &var_1d8
                
                if (rax_15 == 0)
                    rdi_5 = nullptr
                
                void* rbx_3
                
                if (rdi_5 == 0)
                    int32_t var_2f0
                    sub_1422158a0(rcx_17, &var_2f0, r14_3)
                    int64_t rax_21 = sx.q(var_2f0)
                    void* rax_24
                    
                    if (rax_21.d == 0xffffffff)
                        rax_24 = nullptr
                    else
                        rax_24 = rax_21 * 0x60 + rbx_2
                    
                    rbx_3 = rax_24 + 0x10
                    
                    if (rax_24 == 0)
                        rbx_3 = nullptr
                    
                    if (rbx_3 == 0)
                        var_338 = r12
                        int32_t var_2ec
                        sub_142209c70(&var_1d8, &var_2ec, &var_338, nullptr)
                        rbx_3 = var_1d8 + 0x10 + sx.q(var_2ec) * 0x60
                        *(rbx_3 + 0x10) = data_143dbb0c0
                        *(rbx_3 + 0x20) = data_143dbb0d0
                        *(rbx_3 + 0x30) = data_143dbb0e0
                else
                    int32_t var_2f8
                    sub_1422158a0(rcx_17, &var_2f8, *rdi_5)
                    int64_t rax_16 = sx.q(var_2f8)
                    void* rax_19
                    
                    if (rax_16.d == 0xffffffff)
                        rax_19 = nullptr
                    else
                        rax_19 = rax_16 * 0x60 + rbx_2
                    
                    rbx_3 = rax_19 + 0x10
                    
                    if (rax_19 == 0)
                        rbx_3 = nullptr
                    
                    if (rbx_3 == 0)
                        var_338 = rdi_5
                        int32_t var_2f4
                        sub_142209c70(&var_1d8, &var_2f4, &var_338, nullptr)
                        rbx_3 = var_1d8 + 0x10 + sx.q(var_2f4) * 0x60
                        *(rbx_3 + 0x10) = *(rdi_5 + 0x10)
                        *(rbx_3 + 0x20) = *(rdi_5 + 0x20)
                        *(rbx_3 + 0x30) = *(rdi_5 + 0x30)
                
                int64_t rdi_6 = sx.q(*(rbx_3 + 8))
                int32_t rax_26 = (rdi_6 + 1).d
                bool cond:4_1 = rax_26 s<= *(rbx_3 + 0xc)
                *(rbx_3 + 8) = rax_26
                
                if (not(cond:4_1))
                    sub_1405a4d70(rbx_3)
                
                int64_t rax_27 = *rsi_2
                rsi_2 += 8
                *(*rbx_3 + (rdi_6 << 3)) = rax_27
                
                if (rsi_2 == r15_1)
                    break
                
                rbx_2 = var_1d8
            
            int32_t var_1b0
            r9_1 = var_1b0
            r13 = 0x20
            void** var_1b8
            rdx_5 = var_1b8
        
        var_368[1] = 1
        void* var_1c8
        var_368[2].q = &var_1c8
        int32_t rcx_26 = 0
        void* var_2d8 = nullptr
        int32_t var_2cc_1 = 0
        int32_t r14_4 = 0
        void* var_2c8 = nullptr
        void* r12_1 = nullptr
        var_378 = 0
        int32_t r8_8 = 0
        int32_t var_2bc_1 = 0
        var_368[0] = 0
        int32_t var_358_1 = 0xffffffff
        int64_t var_354_1 = 0
        
        if (r9_1 != 0)
            void** r11_1 = &var_1c8
            
            if (rdx_5 != 0)
                r11_1 = rdx_5
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_1 - 1)
            int32_t rdx_14 = *r11_1
            
            if (rdx_14 != 0)
            label_14220d0bd:
                int32_t rax_34 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_34)
                var_368[1] = rax_34
                
                if (rax_34 != 0)
                    r13 = 0x1f - temp0_2
                
                int32_t rax_35 = r8_8 - r13 + 0x1f
                
                if (rax_35 s> r9_1)
                    rax_35 = r9_1
                
                var_354_1.d = rax_35
            else
                while (true)
                    int64_t rdx_15 = sx.q(rcx_26)
                    r8_8 += 0x20
                    rcx_26 += 1
                    var_354_1:4.d = r8_8
                    var_368[0] = rcx_26
                    
                    if (rdx_15.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_354_1.d = r9_1
                        break
                    
                    rdx_14 = *(r11_1 + (rdx_15 << 2) + 4)
                    var_358_1 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_14220d0bd
        
        zmm2 = var_358_1.o
        var_288[0].q = &var_1d8
        var_288 = var_368
        float zmm0_1[0x4] = var_288
        var_354_1.d = r9_1
        float var_278[0x4] = zmm2
        void** rax_37 = (0xffffffff << (r9_1.b & 0x1f)).q u>> 0x20
        var_338 = rax_37
        double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
        float var_258[0x4] = zmm0_1
        int64_t var_238_1 = temp0_3.q
        
        while (true)
            int64_t rdx_16 = sx.q(var_278[3])
            int64_t rcx_30 = var_258[0].q
            
            if (rdx_16.d != rax_37.d || var_278[0].q != &var_1c8 || rcx_30 != &var_1d8)
                rax_37.b = 1
            else
                rax_37.b = 0
            
            if (rax_37.b == 0)
                break
            
            uint64_t var_218 = 0
            uint64_t rsi_3 = 0
            int64_t* rbx_10 = rdx_16 * 0x60 + *rcx_30
            int64_t rdi_7 = sx.q(rbx_10[3].d)
            void* r15_2 = *rbx_10
            int64_t r13_1 = rbx_10[2]
            var_228 = r15_2
            int32_t var_210_1 = rdi_7.d
            
            if (rdi_7.d != 0)
                sub_1405c4a00(&var_218, rdi_7.d, 0)
                rsi_3 = var_218
                memcpy(rsi_3, r13_1, (rdi_7 << 3).d)
                rdi_7 = zx.q(var_210_1)
                r15_2 = var_228
            
            zmm0_1 = *(rbx_10 + 0x20)
            zmm1_1 = *(rbx_10 + 0x30)
            var_368[2] = rdi_7.d
            var_288 = zmm0_1
            zmm0_1 = *(rbx_10 + 0x40)
            void* rax_39 = *arg1
            float var_278_1[0x4] = zmm1_1
            zmm2 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm0_1[0] = zmm0_1[0] f* *(rax_39 + 0x10)
            zmm2[0].d = zmm2[0].d f* *(rax_39 + 0x14)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
            temp0_5[0] = temp0_5[0] f* *(rax_39 + 0x18)
            var_368[0].q = 0
            zmm2 = _mm_unpacklo_ps(zmm2, 0)
            float var_268_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0_1, temp0_5[0].q), zmm2[0])
            
            if (rdi_7.d != 0)
                sub_1405c4a00(&var_368, rdi_7.d, 0)
                memcpy(var_368[0].q, rsi_3, rdi_7.d << 3)
            else
                var_368[3] = 0
            
            sub_1422129b0(&var_228, r15_2, &var_368, &var_288)
            int64_t rbx_11 = sx.q(r14_4)
            r14_4 = (rbx_11 + 1).d
            
            if (r14_4 s> var_2cc_1)
                sub_1407756d0(&var_2d8)
            
            int64_t rbx_12 = sx.q(var_378)
            float (* rcx_38)[0x4] = rbx_11 * 0x34 + var_2d8
            int32_t rdi_8 = (rbx_12 + 1).d
            *rcx_38 = var_228.o
            var_378 = rdi_8
            rcx_38[1] = var_218.o
            float var_208[0x4]
            rcx_38[2] = var_208
            int32_t var_1f8
            rcx_38[3][0] = var_1f8[0]
            
            if (rdi_8 s> var_2bc_1)
                sub_1405c50f0(&var_2c8)
                r12_1 = var_2c8
                var_378 = rdi_8
            
            int64_t* rdx_25 = rbx_12 * 0x1c + r12_1
            *rdx_25 = 0
            rdx_25[1].d = 0
            *(rdx_25 + 0xc) = 0x3f800000
            *(rdx_25 + 0x14) = 0
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
            
            var_278[2] &= not.d(var_258[3])
            sub_14059bdd0(&var_258[2])
            rax_37 = var_338
        
        void* rbx_13 = var_2d8
        int32_t* rax_42 = sub_1422288b0(&var_228, rbx_13, r12_1, r14_4)
        var_330.d = *rax_42
        var_330:4.d = rax_42[1]
        var_330:8.d = rax_42[2]
        var_330:0xc.d = rax_42[3]
        var_320.d = rax_42[4]
        var_320:4.d = rax_42[5]
        var_320:8.d = rax_42[6]
        var_320:0xc.d = rax_42[7]
        var_310.d = rax_42[8]
        var_310:4.d = rax_42[9]
        var_310:8.d = rax_42[0xa]
        var_310:0xc.d = rax_42[0xb]
        var_300_1 = rax_42[0xc]
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        if (rbx_13 != 0)
            sub_140a74f90(rbx_13)
        
        int32_t var_190_2 = 0
        
        if (var_198_1 != 0)
            sub_140a74f90(var_198_1)
        
        sub_14220b6b0(&var_1d8)
        r15 = var_2e8
    else if (rdi_1 != 0)
        float zmm3[0x4] = *(rdx_4 + 0x10)
        uint64_t rbx_14 = var_348
        int128_t var_278_2 = zx.o(0)
        zmm1_1 = *(rdx_4 + 0x14)
        var_288 = data_14399f720
        float var_268_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(rdx_4 + 0x18))[0].q), 
            _mm_unpacklo_ps(zmm1_1, 0)[0].q)
        var_368[0].q = 0
        var_368[2] = rdi_1
        sub_1405c4a00(&var_368, rdi_1, 0)
        memcpy(var_368[0].q, rbx_14, rdi_1 << 3)
        int128_t* rax_43 = sub_1422129b0(&var_228, *r12, &var_368, &var_288)
        var_330.d = (*rax_43)[0]
        var_330:4.d = (*(rax_43 + 4))[0]
        var_330:8.d = (*(rax_43 + 8))[0]
        var_330:0xc.d = (*(rax_43 + 0xc))[0]
        var_320.d = rax_43[1].d[0]
        var_320:4.d = (*(rax_43 + 0x14))[0]
        var_320:8.d = (*(rax_43 + 0x18))[0]
        var_320:0xc.d = (*(rax_43 + 0x1c))[0]
        var_310.d = rax_43[2].d[0]
        var_310:4.d = (*(rax_43 + 0x24))[0]
        var_310:8.d = (*(rax_43 + 0x28))[0]
        var_310:0xc.d = (*(rax_43 + 0x2c))[0]
        var_300_1 = rax_43[3].d[0]
    physx::PxDiagonalize(&var_2e8, &var_330)
    zmm1_1 = var_2e8:4.d
    float var_2b0 = var_2e8.d[0]
    float var_2ac_1 = zmm1_1[0]
    int32_t var_2e0
    float var_2a8_1 = var_2e0[0]
    sub_1422796f0(r15, var_300_1)
    sub_142279680(r15, &var_2b0)
    float temp0_12[0x4] = _mm_unpacklo_ps(var_310:4.d, var_310:0xc.d)
    float var_2a0[0x4]
    var_368 = var_2a0
    float var_188[0x4] = var_2a0
    float temp0_13[0x4] = _mm_unpacklo_ps(var_310:8.d, zx.o(0)[0])
    zmm2 = data_14399f66c
    float var_178_1[0x4] = _mm_unpacklo_ps(temp0_12, temp0_13[0].q)
    float var_168_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2, 0)[0])
    result = sub_142278450(r15, &var_188)
    uint64_t rcx_54 = var_348
    
    if (rcx_54 != 0)
        result = sub_140a74f90(rcx_54)

__security_check_cookie(rax_1 ^ &var_398)
return result
