// 函数: sub_140b39a60
// 地址: 0x140b39a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
arg1[0x13] += 1
int64_t* r13 = arg1
int64_t r10 = arg1[0x13]
char var_1f8
int16_t* var_1f0
int64_t var_1e8
char var_178[0x50]
int64_t var_f8
int64_t var_f0
int32_t var_e8
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
int128_t zmm9

if (*(arg1 + 0xa1) != 0)
    var_1f0 = nullptr
    var_1e8 = 0
    sub_1405947f0(&var_1f0, 7)
    int32_t rdi_1 = var_1e8.d + 7
    var_1e8.d = rdi_1
    
    if (rdi_1 s> 0)
        sub_140594770(&var_1f0)
        rdi_1 = var_1e8.d
    
    int16_t* rsi_1 = var_1f0
    sub_1405a7220(rsi_1, 7, "EVENTS", 7, 0x3f)
    
    if (r13[0xc].b == 0)
        var_1f8 = 0x2c
        sub_140b45b50(&r13[0xa], &var_1f8, 1)
    
    r13[0xc].b = 0
    int16_t* const rdx_3 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_3 = rsi_1
    
    sub_1408f2b40(&var_178, rdx_3)
    sub_140b45b50(&r13[0xa], var_f0, zx.q(var_e8))
    
    if (var_f8 != 0)
        sub_140a74f90(var_f8)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t* rdi_2 = r13[0x15]
    int64_t rsi_2 = 0
    uint64_t r14_2 = sx.q(r13[0x16].d) << 3 u>> 3
    
    if (rdi_2 u> &rdi_2[r13[0x16]])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* r15_1 = *rdi_2
            
            if (r13[0xc].b == 0)
                var_1f8 = 0x2c
                sub_140b45b50(&r13[0xa], &var_1f8, 1)
            
            r13[0xc].b = 0
            sub_140b4b280(&r13[0xa], r15_1 + 8)
            rdi_2 = &rdi_2[1]
            rsi_2 += 1
        while (rsi_2 != r14_2)
    
    var_1f8 = 0xa
    zmm6, zmm7, zmm8, zmm9 = sub_140b45b50(&r13[0xa], &var_1f8, 1)
    r13[0xc].b = 1
    r10 = r13[0x13]
    *(r13 + 0xa1) = 0

int32_t result = r13[1].d
int64_t* rcx_16

if (result == *(r13 + 0x34))
label_140b39c82:
    rcx_16 = nullptr
else
    void* r8_2 = r13[8]
    void* r9_1 = &r13[7]
    
    if (r8_2 != 0)
        r9_1 = r8_2
    
    result = *(r9_1 + ((sx.q((r10 s>> 0x20).d * 0x17 + r10.d) & (sx.q(r13[9].d) - 1)) << 2))
    
    if (result == 0xffffffff)
    label_140b39c82_1:
        rcx_16 = nullptr
    else
        while (true)
            rcx_16 = sx.q(result) * 0x30 + *r13
            
            if (*rcx_16 == r10)
                break
            
            result = rcx_16[5].d
            
            if (result == 0xffffffff)
                goto label_140b39c82_2
        
        if (result == 0xffffffff)
        label_140b39c82_2:
            rcx_16 = nullptr

void* rbx = &rcx_16[1]

if (rcx_16 == 0)
    rbx = nullptr

if (rbx != 0)
    int32_t rdx_10 = *(rbx + 0x18)
    void* r15_7
    
    if (rdx_10 s<= 0)
        r15_7 = &r13[0xa]
        
        if (r13[0xc].b == 0)
            var_1f8 = 0x2c
            zmm6, zmm7, zmm8, zmm9 = sub_140b45b50(r15_7, &var_1f8, 1)
        
        *(r15_7 + 0x10) = 0
    else
        void* var_1c8 = nullptr
        int64_t var_1c0_1 = 0
        sub_14061cd70(&var_1c8, rdx_10)
        int64_t* rsi_3 = *(rbx + 0x10)
        int32_t i_4 = var_1c0_1.d
        void* rax_9 = &rsi_3[sx.q(*(rbx + 0x18)) * 3]
        void* r12_2
        
        if (rsi_3 == rax_9)
            r12_2 = var_1c8
        else
            do
                int64_t rbx_1 = sx.q(*(rsi_3 + 0x14))
                uint64_t var_1d8
                int32_t rbx_2
                int16_t* rdi_3
                int32_t r15_2
                int32_t var_1cc
                
                if (rbx_1.d != 0)
                    CRITICAL_SECTION* lpCriticalSection = sub_140b3cce0()
                    EnterCriticalSection(lpCriticalSection)
                    int16_t* r14_4 = nullptr
                    int64_t* rcx_24 = (rbx_1 << 4) + lpCriticalSection->__offset(0x78).q
                    uint64_t var_1b8 = 0
                    int32_t rdi_4 = rcx_24[1].d
                    int64_t rbx_3 = *rcx_24
                    int32_t r12_1
                    
                    if (rdi_4 != 0)
                        sub_1405a4c70(&var_1b8, rdi_4, 0)
                        r14_4 = var_1b8
                        memcpy(r14_4, rbx_3, rdi_4 * 2)
                        int32_t var_1ac
                        r12_1 = var_1ac
                    else
                        r12_1 = 0
                    
                    int32_t rcx_28 = LeaveCriticalSection(lpCriticalSection)
                    int16_t* var_1a8 = r14_4
                    var_1b8 = 0
                    int32_t var_1b0_1
                    var_1b0_1.q = 0
                    int32_t rdx_16 = sbb.d(rcx_28, rcx_28, rdi_4 != 0) + 2 + rdi_4
                    
                    if (rdx_16 s> r12_1)
                        sub_1405947f0(&var_1a8, rdx_16)
                    
                    sub_140a20ba0(&var_1a8, &data_142d5a024, 1)
                    r14_4 = var_1a8
                    var_1a8 = nullptr
                    int32_t var_1a0_1
                    var_1a0_1.q = 0
                    rbx_2 = rsi_3[1].d
                    
                    if (rdi_4 s> 1)
                        int32_t r15_5 = rbx_2 - 1
                        
                        if (rbx_2 == 0)
                            r15_5 = 0
                        
                        int32_t rax_12
                        
                        if (rdi_4 == 0)
                            rax_12 = rdi_4 + 1
                        
                        if (rdi_4 != 0 || r15_5 == 0)
                            rax_12 = 0
                        
                        var_1f0 = r14_4
                        int32_t rdx_20 = rax_12 + rdi_4 + r15_5
                        var_1e8.d = rdi_4
                        var_1e8:4.d = r12_1
                        
                        if (rdx_20 s> r12_1)
                            sub_1405947f0(&var_1f0, rdx_20)
                        
                        sub_140a20ba0(&var_1f0, *rsi_3, r15_5)
                        rdi_3 = var_1f0
                        rbx_2 = var_1e8.d
                        r15_2 = var_1e8:4.d
                        var_1f0 = nullptr
                        var_1e8 = 0
                    else
                        int64_t r15_4 = *rsi_3
                        rdi_3 = nullptr
                        var_1d8 = 0
                        
                        if (rbx_2 != 0)
                            sub_1405a4c70(&var_1d8, rbx_2, 0)
                            rdi_3 = var_1d8
                            memcpy(rdi_3, r15_4, rbx_2 * 2)
                            r15_2 = var_1cc
                        else
                            r15_2 = 0
                        
                        if (r14_4 != 0)
                            sub_140a74f90(r14_4)
                else
                    rbx_2 = rsi_3[1].d
                    rdi_3 = nullptr
                    int64_t r14_3 = *rsi_3
                    var_1d8 = 0
                    
                    if (rbx_2 != 0)
                        sub_1405a4c70(&var_1d8, rbx_2, 0)
                        rdi_3 = var_1d8
                        memcpy(rdi_3, r14_3, rbx_2 * 2)
                        r15_2 = var_1cc
                    else
                        r15_2 = 0
                int64_t i_6 = sx.q(i_4)
                i_4 = (i_6 + 1).d
                var_1c0_1.d = i_4
                
                if (i_4 s> var_1c0_1:4.d)
                    sub_1405a4f90(&var_1c8)
                    i_4 = var_1c0_1.d
                
                r12_2 = var_1c8
                int64_t rax_14 = i_6 * 2
                var_1d8 = 0
                rsi_3 = &rsi_3[3]
                int32_t var_1d0
                var_1d0.q = 0
                *(r12_2 + (rax_14 << 3)) = rdi_3
                *(r12_2 + (rax_14 << 3) + 8) = rbx_2
                *(r12_2 + (rax_14 << 3) + 0xc) = r15_2
            while (rsi_3 != rax_9)
        
        r15_7 = &arg1[0xa]
        
        if (*(r15_7 + 0x10) == 0)
            var_1f8 = 0x2c
            zmm6, zmm7, zmm8, zmm9 = sub_140b45b50(r15_7, &var_1f8, 1)
        
        *(r15_7 + 0x10) = 0
        
        if (i_4 s> 0)
            int64_t r14_5 = 0
            uint64_t i_5 = zx.q(i_4)
            void* rdi_5 = r12_2
            uint64_t i
            
            do
                var_1f0 = nullptr
                int32_t rbx_4 = *(rdi_5 + 8)
                int64_t rsi_4 = *rdi_5
                var_1e8.d = rbx_4
                
                if (rbx_4 != 0)
                    sub_1405a4c70(&var_1f0, rbx_4, 0)
                    memcpy(var_1f0, rsi_4, rbx_4 * 2)
                else
                    var_1e8:4.d = 0
                
                sub_140a306e0(&var_1f0, &data_142e5e360, &data_142d404c4, 1)
                sub_140a306e0(&var_1f0, &data_142d7fa60, &data_142d404c4, 1)
                
                if (r14_5 s> 0)
                    var_1f8 = 0x3b
                    sub_140b45b50(r15_7, &var_1f8, 1)
                
                int16_t* rdx_27 = &data_142d40450
                
                if (var_1e8.d != 0)
                    rdx_27 = var_1f0
                
                sub_1408f2b40(&var_178, rdx_27)
                zmm6, zmm7, zmm8, zmm9 = sub_140b45b50(r15_7, var_f0, zx.q(var_e8))
                
                if (var_f8 != 0)
                    sub_140a74f90(var_f8)
                
                int16_t* rcx_47 = var_1f0
                
                if (rcx_47 != 0)
                    sub_140a74f90(rcx_47)
                
                r14_5 += 1
                rdi_5 += 0x10
                i = i_5
                i_5 -= 1
            while (i != 1)
            r12_2 = var_1c8
        
        void* rbx_5 = r12_2
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                int64_t rcx_48 = *rbx_5
                
                if (rcx_48 != 0)
                    sub_140a74f90(rcx_48)
                
                rbx_5 += 0x10
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        if (r12_2 != 0)
            sub_140a74f90(r12_2)
        
        r13 = arg1
    
    int64_t r14_6 = 0
    int64_t* rsi_5 = r13[0x15]
    uint64_t r12_5 = sx.q(r13[0x16].d) << 3 u>> 3
    
    if (rsi_5 u> &rsi_5[r13[0x16]])
        r12_5 = 0
    
    if (r12_5 != 0)
        uint128_t var_48_1 = zmm7
        zmm7 = 0x7fffffffffffffff
        uint128_t var_58_1 = zmm8
        zmm8 = 0x3fb999999999999a
        int128_t var_68_1 = zmm9
        zmm9 = zx.o(0)
        uint128_t var_38_1 = zmm6
        
        do
            void* rbx_6 = *rsi_5
            
            if (zx.q(*(rbx_6 + 0x18)) == r13[0x13])
                sub_140b3b080(rbx_6)
            
            int64_t rax_18 = sx.q(*(rbx_6 + 0x30))
            int32_t rax_22
            
            if (rax_18.d s< 0 || rax_18.d s>= *(rbx + 8))
                if (r13[0xc].b == 0)
                    var_1f8 = 0x2c
                    sub_140b45b50(&r13[0xa], &var_1f8, 1)
                
                r13[0xc].b = 0
                rax_22 = sub_140a54040(&var_178, 0x100, "%d", 0)
            else
                int64_t rax_19 = *rbx
                float zmm1[0x4]
                float zmm2[0x4]
                
                if (*(rbx_6 + 4) != 1)
                    bool cond:7_1 = r13[0xc].b != 0
                    zmm6 = _mm_cvtps_pd((*(rax_19 + (rax_18 << 2))).q)
                    
                    if (not(cond:7_1))
                        var_1f8 = 0x2c
                        zmm6, zmm7, zmm8, zmm9 = sub_140b45b50(&r13[0xa], &var_1f8, 1)
                    
                    zmm2 = _mm_cvtpd_ps(zmm6)
                    r13[0xc].b = 0
                    zmm1 = zmm2
                    int32_t rcx_58 = int.d(zmm1[0])
                    
                    if (rcx_58 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_58))[0] f== zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_58
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2[0] = zmm2[0] - zmm1[0]
                    
                    if (zmm2[0] f== zmm9.d)
                        rax_22 = sub_140a54040(&var_178, 0x100, "%d", zx.q(int.d(zmm6.q)))
                    else
                        char* r8_15 = "%.6f"
                        
                        if (not(_mm_and_ps(zmm6, zmm7)[0].q f< zmm8.q))
                            r8_15 = "%.4f"
                        
                        rax_22 = sub_140a54040(&var_178, 0x100, r8_15, zmm6.q)
                else
                    bool cond:8_1 = r13[0xc].b != 0
                    zmm6 = _mm_cvtepi32_pd(zx.q(*(rax_19 + (rax_18 << 2))))
                    
                    if (not(cond:8_1))
                        var_1f8 = 0x2c
                        zmm6, zmm7, zmm8, zmm9 = sub_140b45b50(&r13[0xa], &var_1f8, 1)
                    
                    zmm2 = _mm_cvtpd_ps(zmm6)
                    r13[0xc].b = 0
                    zmm1 = zmm2
                    int32_t rcx_53 = int.d(zmm1[0])
                    
                    if (rcx_53 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_53))[0] f== zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_53
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2[0] = zmm2[0] - zmm1[0]
                    
                    if (zmm2[0] f!= zmm9.d)
                        char* r8_14 = "%.6f"
                        
                        if (not(_mm_and_ps(zmm6, zmm7)[0].q f< zmm8.q))
                            r8_14 = "%.4f"
                        
                        rax_22 = sub_140a54040(&var_178, 0x100, r8_14, zmm6.q)
                    else
                        rax_22 = sub_140a54040(&var_178, 0x100, "%d", zx.q(int.d(zmm6.q)))
            
            zmm7, zmm8, zmm9 = sub_140b45b50(&r13[0xa], &var_178, zx.q(rax_22))
            rsi_5 = &rsi_5[1]
            r14_6 += 1
        while (r14_6 != r12_5)
        
        r15_7 = &r13[0xa]
    
    var_1f8 = 0xa
    sub_140b45b50(r15_7, &var_1f8, 1)
    *(r15_7 + 0x10) = 1
    int32_t rdx_37
    int64_t r10_1
    
    if (r13[1].d != *(r13 + 0x34))
        r10_1 = r13[0x13]
        void* r9_5 = &r13[7]
        void* r8_17 = *(r9_5 + 8)
        
        if (r8_17 != 0)
            r9_5 = r8_17
        
        rdx_37 = *(r9_5 + ((sx.q((r10_1 s>> 0x20).d * 0x17 + r10_1.d) & (sx.q(r13[9].d) - 1)) << 2))
    
    if (r13[1].d == *(r13 + 0x34) || rdx_37 == 0xffffffff)
    label_140b3a42a:
        rdx_37 = -1
    else
        int64_t r8_18 = *r13
        
        while (true)
            int64_t rcx_68 = sx.q(rdx_37) * 6
            
            if (*(r8_18 + (rcx_68 << 3)) == r10_1)
                break
            
            rdx_37 = *(r8_18 + (rcx_68 << 3) + 0x28)
            
            if (rdx_37 == 0xffffffff)
                goto label_140b3a42a
    
    int64_t rax_32 = *r13
    int64_t r8_20 = sx.q(rdx_37) * 6
    int64_t r14_7 = *(rax_32 + (r8_20 << 3) + 8)
    *(rax_32 + (r8_20 << 3) + 8) = 0
    *(rax_32 + (r8_20 << 3) + 0x10) = 0
    int64_t* rsi_6 = *(rax_32 + (r8_20 << 3) + 0x18)
    *(rax_32 + (r8_20 << 3) + 0x18) = 0
    int32_t i_3 = *(rax_32 + (r8_20 << 3) + 0x20)
    *(rax_32 + (r8_20 << 3) + 0x20) = 0
    result = sub_140b45500(r13, rdx_37)
    int64_t* rbx_7 = rsi_6
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            int64_t rcx_70 = *rbx_7
            
            if (rcx_70 != 0)
                result = sub_140a74f90(rcx_70)
            
            rbx_7 = &rbx_7[3]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    if (rsi_6 != 0)
        result = sub_140a74f90(rsi_6)
    
    if (r14_7 != 0)
        result = sub_140a74f90(r14_7)

__security_check_cookie(rax_1 ^ &var_228)
return result
