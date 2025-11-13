// 函数: sub_141896290
// 地址: 0x141896290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void* r14 = arg1
data_143efabdc += 1
uint64_t rbx = zx.q(*(arg1 + 8))
int64_t var_70
__builtin_memset(&var_70, 0, 0x14)
void* rdi = nullptr
void* var_2d8 = nullptr
int64_t var_2d0 = 0
int32_t temp3 = rbx.d

if (temp3 s> 0)
    var_2d0.d = rbx.d
    sub_1405daba0(&var_2d8)
    rdi = var_2d8
    memset(rdi, 0, sx.q(rbx.d))
else if (temp3 s< 0)
    int32_t rsi_2 = neg.d(rbx.d)
    
    if (rsi_2 != 0)
        int32_t rsi_3 = neg.d(rsi_2)
        
        if (rsi_3 != rbx.d)
            memmove(sx.q(rbx.d), nullptr, rsi_3 - rbx.d)
        
        var_2d0.d = rsi_3
        sub_1405dac10(&var_2d8)
        rdi = var_2d8

sub_140b3f690(rdi, rbx, &var_70)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t* rcx_6 = *(r14 + 0x20)
void var_1b0
(*(*rcx_6 + 0x60))(rcx_6, &var_1b0, &var_70)
void* var_250 = nullptr
int32_t var_2a8 = 0xffffffff
char var_338 = 0
int64_t var_2f0 = -1
int64_t var_240 = 0
void** var_310 = nullptr
int32_t var_308 = 0
sub_1405c5570(&var_310, 0x64)
int64_t rbx_1 = sx.q(var_308)
int32_t rax_5 = (rbx_1 + 0x64).d
var_308 = rax_5

if (rax_5 s> 0)
    sub_1405a4d70(&var_310)

memset(&var_310[rbx_1], 0, 0x320)
int32_t var_334 = 0
int32_t var_330 = 0
EnterCriticalSection(r14 + 0x78)

if (*(r14 + 0xb0) == 0)
    *(r14 + 0xb0) = 1
    
    if (*(r14 + 0xb1) == 0)
        *(r14 + 0xa0) = _Query_perf_frequency()

LeaveCriticalSection(r14 + 0x78)
int32_t rdx_4 = *(r14 + 8)
int128_t* i_2 = nullptr
int32_t var_230 = 0
int32_t var_228 = 0xffffffff
void var_128
sub_141821410(&var_128, rdx_4)
int64_t* rax_8 = *(r14 + 0x10)
int32_t rbx_2 = rax_8[1].d
int64_t rdi_1 = *rax_8
int32_t rax_9 = sub_14183ecc0(&var_128)
int32_t var_300 = rax_9
int32_t r15

if (rax_9 == 0 || rax_9 u> rbx_2)
    r15 = 0
else
    sub_141830610(&var_128, rdi_1, &var_300)
    r15 = var_300

int32_t var_32c = r15
char i = 1
sub_141828370(&var_240)
int64_t* rax_10 = *(r14 + 0xd8)
int64_t* rdi_2 = *(r14 + 0xc0)
int64_t rax_11 = *rdi_2
*rdi_2 += 1

if (rax_11 == 0)
    int64_t rax_12 = _Query_perf_frequency()
    data_143efac48
    data_143efac48 = rax_12

int64_t r12 = 0
int64_t var_320 = 0

do
    bool z_1
    
    if (0 == *(r14 + 0x5c))
        *(r14 + 0x5c) = 0
        z_1 = true
    else
        *(r14 + 0x5c)
        z_1 = false
    
    if (not(z_1))
        break
    
    uint64_t rax_15 = zx.q(*(r14 + 8))
    int32_t var_324_1 = 0
    int32_t rbx_4 = r15 - rax_15.d
    uint64_t var_1b8_1 = rax_15
    int32_t rdi_3 = 0
    int32_t var_314_1 = rbx_4
    uint64_t r13_1 = zx.q(rbx_4)
    uint64_t var_1c0 = r13_1
    sub_141884230(r14, &var_128, &var_250, &var_2a8)
    void* rsi_4 = var_250
    char var_336 = 0
    
    if (rsi_4 != 0)
        int32_t r11_1 = *(rsi_4 + 0x28)
        int32_t var_26c_1 = 1
        rdi_3.b = 0
        int32_t var_270_1 = 0
        void* var_268_1 = rsi_4 + 0x10
        int32_t rcx_17 = 0
        int32_t var_260_1 = 0xffffffff
        int32_t r8_7 = 0
        int64_t var_25c_1 = 0
        
        if (r11_1 != 0)
            void* rax_17 = *(rsi_4 + 0x20)
            void* r9_2 = rsi_4 + 0x10
            
            if (rax_17 != 0)
                r9_2 = rax_17
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r11_1 - 1)
            int32_t rdx_9 = *r9_2
            
            if (rdx_9 != 0)
            label_1418965d8:
                int32_t rax_24 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_24)
                int32_t var_26c_2 = rax_24
                int32_t var_1ac_1 = temp0_2
                int32_t rax_25
                
                if (rax_24 == 0)
                    rax_25 = 0x20
                else
                    rax_25 = 0x1f - temp0_2
                
                var_25c_1.d = r8_7 - rax_25 + 0x1f
                
                if (r8_7 - rax_25 + 0x1f s> r11_1)
                    var_25c_1.d = r11_1
            else
                while (true)
                    int64_t rdx_10 = sx.q(rcx_17)
                    r8_7 += 0x20
                    rcx_17 += 1
                    var_25c_1:4.d = r8_7
                    var_270_1 = rcx_17
                    
                    if (rdx_10.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r9_2 + (rdx_10 << 2) + 4)
                    int32_t var_260_2 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_1418965d8
                
                var_25c_1.d = r11_1
        
        int32_t rdx_11 = *(rsi_4 + 0x28)
        int128_t var_290_1 = var_270_1.o
        int32_t r8_10 = rdx_11 s>> 5
        int32_t rbx_5 = 0xffffffff << (rdx_11.b & 0x1f)
        int32_t r9_4 = rdx_11 & 0xffffffe0
        int32_t var_220_1 = r8_10
        void* var_218_1 = rsi_4 + 0x10
        int32_t var_210_1 = rbx_5
        int32_t var_20c_1 = rdx_11
        int32_t var_208_1 = r9_4
        int128_t var_280_1 = 0xffffffff
        int64_t var_158_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_178 = rsi_4.o
        int128_t var_168_1 = var_290_1
        
        if (rdx_11 != r11_1)
            void* rax_27 = *(rsi_4 + 0x20)
            void* r10_1 = rsi_4 + 0x10
            
            if (rax_27 != 0)
                r10_1 = rax_27
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *(r10_1 + (sx.q(r8_10) << 2)) & rbx_5
            int32_t var_20c_3
            
            if (rdx_15 != 0)
            label_1418966ca:
                int32_t rax_34 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_34)
                int32_t var_1c8_1 = temp0_4
                int32_t rax_35
                
                if (rax_34 == 0)
                    rax_35 = 0x20
                else
                    rax_35 = 0x1f - temp0_4
                
                int32_t var_20c_2 = r9_4 - rax_35 + 0x1f
                
                if (r9_4 - rax_35 + 0x1f s> r11_1)
                    var_20c_3 = r11_1
            else
                while (true)
                    int64_t rcx_22 = sx.q(r8_10)
                    r9_4 += 0x20
                    r8_10 += 1
                    int32_t var_208_2 = r9_4
                    int32_t var_220_2 = r8_10
                    
                    if (rcx_22.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r10_1 + (rcx_22 << 2) + 4)
                    var_210_1 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_1418966ca
                
                var_20c_3 = r11_1
        
        zmm6 = var_1c0.o
        
        while (true)
            int64_t rax_37 = sx.q(var_168_1:0xc.d)
            int64_t* rdx_16 = var_178.q
            
            if (rax_37.d == (var_210_1.q u>> 0x20).d && var_168_1.q == rsi_4 + 0x10
                    && rdx_16 == rsi_4)
                break
            
            int64_t* rbx_6 = *rdx_16 + rax_37 * 0x18
            
            if (sub_14188ed20(arg1, rbx_6, &var_1c0, &var_336, &var_2f0) != 0)
                var_280_1.d = *(arg1 + 8)
                char var_c0_1 = var_336
                int64_t var_b8_1 = var_2f0
                int128_t var_e0_1 = *rbx_6
                int128_t var_f0 = r13_1.o
                int128_t var_d0_1 = zmm6
                
                if (sub_14186c930(&i_2, &var_f0, &var_338) != 0 || rdi_3.b != 0)
                    rdi_3.b = 1
            
            if (var_338 != 0)
                break
            
            var_168_1:8.d &= not.d(var_178:0xc.d)
            sub_14059bdd0(&var_178:8)
        
        r12 = var_320
        r14 = arg1
        r15 = var_32c
        rdi_3 = var_324_1
        rbx_4 = var_314_1
    
    if (var_338 == 0)
        int64_t* rdx_23 = *(r14 + 0x10)
        int32_t r8_14 = rdx_23[1].d
        
        if (r15 u>= r8_14)
            i = 0
        else
            int32_t r13_2 = var_334
            
            if (rsi_4 == 0)
                void** rax_104
                
                if (r13_2 - 1 u<= 0x62)
                    rax_104 = var_310
                
                if (r13_2 - 1 u> 0x62 || *rax_104 == 0)
                    var_334 = 0
                    r12 = 0
                    var_320 = 0
                else
                    var_330 += 1
                    rax_104[r12] = 0
                    r12 += 1
                    var_334 = r13_2 + 1
                    var_320 = r12
                
                goto label_141896eb6
            
            if (r13_2 != 0)
                int32_t r11_2 = var_330
                
                if (r11_2 != rbx_4 || r13_2 s>= 0x64)
                    var_334 = 1
                    r12 = 1
                    var_320 = 1
                    *var_310 = rsi_4
                    var_330 = rbx_4 + 1
                    goto label_141896eb6
                
                void** rcx_36 = var_310
                void* rax_48 = *rcx_36
                
                if (rax_48 == 0 || rax_48 != rsi_4)
                    rcx_36[r12] = rsi_4
                    r12 += 1
                    var_334 = r13_2 + 1
                    var_320 = r12
                    var_330 = r11_2 + 1
                    goto label_141896eb6
                
                int64_t rcx_37 = *rdx_23
                char* rdx_25 = sx.q(r15) + rcx_37
                int32_t j_1 = 0
                int32_t j_2 = 0
                char* r9_8 = sx.q(r15 - r13_2) + rcx_37
                int64_t r10_3 = sx.q(r8_14 - 1) + rcx_37
                int64_t var_198_1 = r10_3
                char rax_52 = *r9_8
                char rax_53 = *rdx_25
                bool z_2
                
                if (0 == *(r14 + 0x5c))
                    *(r14 + 0x5c) = 0
                    z_2 = true
                else
                    *(r14 + 0x5c)
                    z_2 = false
                
                if (z_2)
                    r8_14 = r13_2
                    int32_t rax_56 = var_314_1 - r15
                    void* r9_9 = r9_8 - rdx_25
                    void* var_1a0_1 = r9_9
                    
                    while (rdx_25 u<= r10_3)
                        if (*(r9_9 + rdx_25) != *rdx_25)
                            break
                        
                        int32_t r8_15 = r8_14 + 1
                        var_320.d = r8_15
                        var_330 = r11_2 + 1
                        void* r10_4 = var_310[sx.q(modu.dp.d(0:r8_15, r13_2))]
                        void* var_2f8_1 = r10_4
                        
                        if (j_1 != 0)
                            j_1 -= 1
                            j_2 = j_1
                        else if (r10_4 != 0)
                            int32_t rdi_5 = *(r10_4 + 0x28)
                            void* r11_4 = r10_4 + 0x10
                            uint64_t var_190 = zx.q(r11_2 + 1)
                            uint64_t var_188_1 = zx.q(*(r14 + 8))
                            int64_t var_2e8_1 = 0
                            int32_t r15_2 = 0
                            int64_t var_2e0_1 = 0
                            int32_t r12_2 = 0
                            char var_337_2 = 0
                            int32_t r13_3 = 0
                            int64_t var_2a0_1 = -1
                            int32_t rsi_5 = 0
                            int32_t var_2c8_1 = 0
                            int32_t rcx_40 = 0
                            int32_t var_2c4_1 = 1
                            int32_t r8_16 = 0
                            void* var_2c0_1 = r11_4
                            int32_t var_2b8_1 = 0xffffffff
                            int64_t var_2b4_1 = 0
                            
                            if (rdi_5 != 0)
                                void* rax_62 = *(r11_4 + 0x10)
                                void* r9_10 = r11_4
                                
                                if (rax_62 != 0)
                                    r9_10 = rax_62
                                
                                int32_t temp14_1
                                int32_t temp15_1
                                temp14_1:temp15_1 = sx.q(rdi_5 - 1)
                                int32_t rdx_30 = *r9_10
                                
                                if (rdx_30 != 0)
                                label_141896aa8:
                                    int32_t rax_69 = neg.d(rdx_30) & rdx_30
                                    uint64_t rflags_3
                                    int32_t temp0_5
                                    temp0_5, rflags_3 = _bit_scan_reverse(rax_69)
                                    int32_t var_2c4_2 = rax_69
                                    int32_t var_1d0_1 = temp0_5
                                    int32_t rax_70
                                    
                                    if (rax_69 == 0)
                                        rax_70 = 0x20
                                    else
                                        rax_70 = 0x1f - temp0_5
                                    
                                    var_2b4_1.d = r8_16 - rax_70 + 0x1f
                                    
                                    if (r8_16 - rax_70 + 0x1f s> rdi_5)
                                        var_2b4_1.d = rdi_5
                                else
                                    while (true)
                                        int64_t rdx_31 = sx.q(rcx_40)
                                        r8_16 += 0x20
                                        rcx_40 += 1
                                        var_2b4_1:4.d = r8_16
                                        var_2c8_1 = rcx_40
                                        
                                        if (rdx_31.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_30 = *(r9_10 + (rdx_31 << 2) + 4)
                                        int32_t var_2b8_2 = 0xffffffff
                                        
                                        if (rdx_30 != 0)
                                            goto label_141896aa8
                                    
                                    var_2b4_1.d = rdi_5
                            
                            int32_t rdx_32 = *(r10_4 + 0x28)
                            int128_t var_290_3 = var_2c8_1.o
                            r8_15 = rdx_32 s>> 5
                            int32_t rbx_10 = 0xffffffff << (rdx_32.b & 0x1f)
                            int32_t r9_12 = rdx_32 & 0xffffffe0
                            int32_t var_200_1 = r8_15
                            int32_t var_1f0_1 = rbx_10
                            int32_t var_1ec_1 = rdx_32
                            int32_t var_1e8_1 = r9_12
                            int128_t var_280_2 = 0xffffffff
                            int64_t var_130_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                            int128_t var_150 = r10_4.o
                            int128_t var_140_1 = var_290_3
                            
                            if (rdx_32 != rdi_5)
                                void* rax_72 = *(r11_4 + 0x10)
                                void* r10_5 = r11_4
                                
                                if (rax_72 != 0)
                                    r10_5 = rax_72
                                
                                int32_t temp16_1
                                int32_t temp17_1
                                temp16_1:temp17_1 = sx.q(rdi_5 - 1)
                                int32_t rdx_36 = *(r10_5 + (sx.q(r8_15) << 2)) & rbx_10
                                int32_t var_1ec_3
                                
                                if (rdx_36 != 0)
                                label_141896b9d:
                                    int32_t rax_79 = neg.d(rdx_36) & rdx_36
                                    uint64_t rflags_4
                                    int32_t temp0_7
                                    temp0_7, rflags_4 = _bit_scan_reverse(rax_79)
                                    int32_t var_1cc_1 = temp0_7
                                    int32_t rax_80
                                    
                                    if (rax_79 == 0)
                                        rax_80 = 0x20
                                    else
                                        rax_80 = 0x1f - temp0_7
                                    
                                    int32_t var_1ec_2 = r9_12 - rax_80 + 0x1f
                                    
                                    if (r9_12 - rax_80 + 0x1f s> rdi_5)
                                        var_1ec_3 = rdi_5
                                else
                                    while (true)
                                        int64_t rcx_45 = sx.q(r8_15)
                                        r9_12 += 0x20
                                        r8_15 += 1
                                        int32_t var_1e8_2 = r9_12
                                        int32_t var_200_2 = r8_15
                                        
                                        if (rcx_45.d s>= (temp17_1 + (temp16_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_36 = *(r10_5 + (rcx_45 << 2) + 4)
                                        var_1f0_1 = 0xffffffff
                                        
                                        if (rdx_36 != 0)
                                            goto label_141896b9d
                                    
                                    var_1ec_3 = rdi_5
                                r10_4 = var_2f8_1
                                r11_4 = var_2c0_1
                            
                            zmm6 = var_2e8_1.o
                            
                            while (true)
                                int64_t rax_82 = sx.q(var_140_1:0xc.d)
                                int64_t* rdx_37 = var_150.q
                                
                                if (rax_82.d == (var_1f0_1.q u>> 0x20).d && var_140_1.q == r11_4
                                        && rdx_37 == r10_4)
                                    break
                                
                                int64_t* rbx_11 = *rdx_37 + rax_82 * 0x18
                                
                                if (sub_14188ed20(r14, rbx_11, &var_190, &var_336, &var_2f0) != 0)
                                    char r8_20 = var_336
                                    char rcx_49
                                    
                                    if (var_337_2 != 0 || r8_20 == 0)
                                        rcx_49 = 0
                                    else
                                        rcx_49 = 1
                                    
                                    int64_t rdx_39 = var_2f0
                                    
                                    if ((rsi_5 | r13_3 | r12_2 | r15_2) == 0 || rcx_49 != 0
                                            || rdx_39 u< var_2a0_1)
                                        zmm6 = *rbx_11
                                        var_337_2 = r8_20
                                        var_2a0_1 = rdx_39
                                        var_2e8_1.o = zmm6
                                        rsi_5 = var_2e0_1:4.d
                                        r13_3 = var_2e0_1.d
                                        r12_2 = var_2e8_1:4.d
                                        r15_2 = var_2e8_1.d
                                
                                var_140_1:8.d &= not.d(var_150:0xc.d)
                                r8_15 = sub_14059bdd0(&var_150:8)
                                r11_4 = var_2c0_1
                                r10_4 = var_2f8_1
                            
                            if ((rsi_5 | r13_3 | r12_2 | r15_2) == 0)
                                r15 = var_32c
                                rdi_3 = var_324_1
                                r13_2 = var_334
                                j_1 = j_2
                            else
                                var_280_2.d = *(r14 + 8)
                                char var_80_1 = var_337_2
                                int64_t var_78_1 = var_2a0_1
                                int128_t var_b0 = zx.o(var_330)
                                int128_t var_a0_1 = zmm6
                                int128_t var_90_1 = var_190.o
                                r8_15 = sub_14186c930(&i_2, &var_b0, &var_338)
                                r15 = var_32c
                                rdi_3 = var_324_1
                                r13_2 = var_334
                                
                                if (var_338 == 0)
                                    j_1 = j_2
                                else
                                    j_1 = *(r14 + 8)
                                    j_2 = j_1
                                    var_338 = 0
                        
                        sub_141846cc0(&var_128, sx.q(r15) + **(r14 + 0x10), r8_15.b)
                        r15 += 1
                        var_32c = r15
                        *(r14 + 0x60) = rax_56 + r15
                        rdi_3 += 1
                        var_324_1 = rdi_3
                        bool z_3
                        
                        if (0 == *(r14 + 0x5c))
                            *(r14 + 0x5c) = 0
                            z_3 = true
                        else
                            *(r14 + 0x5c)
                            z_3 = false
                        
                        rdx_25 = &rdx_25[1]
                        r8_14 = var_320.d
                        r9_9 = var_1a0_1
                        r10_3 = var_198_1
                        
                        if (not(z_3))
                            break
                        
                        r11_2 = var_330
                    
                    if (j_1 != 0)
                        int32_t j
                        
                        do
                            void* rax_98 = *(r14 + 0x10)
                            
                            if (r15 u>= *(rax_98 + 8))
                                break
                            
                            r8_14 = sub_141846cc0(&var_128, sx.q(r15) + *rax_98, r8_14.b)
                            rdi_3 += 1
                            r15 += 1
                            *(r14 + 0x60)
                            *(r14 + 0x60) = var_314_1 + rdi_3
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        var_324_1 = rdi_3
                        var_32c = r15
                
                r12 = 0
                var_334 = 0
                var_320 = 0
                
                if (rax_52 != rax_53)
                    goto label_141896eb6
            else
                var_330 = rbx_4 + 1
                var_334 = 1
                r12 = 1
                var_320 = 1
                *var_310 = rsi_4
            label_141896eb6:
                sub_141846cc0(&var_128, sx.q(r15) + **(r14 + 0x10), r8_14.b)
                r15 += 1
                var_32c = r15
    else
        var_338 = 0
        sub_14182f4d0(&var_128)
        int64_t* rdx_19 = *(r14 + 0x10)
        r12 = 0
        var_334 = 0
        var_320 = 0
        int32_t rbx_7 = rdx_19[1].d
        
        if (*(r14 + 8) - 1 + r15 u>= rbx_7)
            i = 0
        else
            int64_t rdi_4 = *rdx_19
            int32_t rax_46 = sub_14183ecc0(&var_128)
            int32_t var_2fc = rax_46
            int32_t rbx_9
            
            if (rax_46 == 0 || rax_46 u> rbx_7 - r15)
                rbx_9 = 0
            else
                sub_141830610(&var_128, sx.q(r15) + rdi_4, &var_2fc)
                rbx_9 = var_2fc
            
            sub_141828360(*(r14 + 0xf0), zx.q(rbx_9))
            r15 += rbx_9
            var_32c = r15
    
    *(r14 + 0x60)
    *(r14 + 0x60) = var_324_1 + var_314_1
while (i != 0)

sub_1418283a0(*(r14 + 0xd0), &var_240)
sub_141828360(*(r14 + 0xe8), sx.q(*(*(r14 + 0x10) + 8)))
int64_t rdx_50

if (*rdi_2 s<= 0)
    rdx_50 = 0
else
    rdx_50 = _Query_perf_frequency() - data_143efac48

zmm6.q = float.d(**(r14 + 0xe8))
zmm6.q = zmm6.q f/ sub_141831760(*rax_10 + rdx_50).q
sub_1418508e0(*(r14 + 0xf8), int.q(zmm6.q))
int64_t rbx_12 = data_143efac48
int64_t rax_113 = *rdi_2
*rdi_2 -= 1

if (rax_113 == 1)
    int64_t rax_115 = _Query_perf_frequency() - rbx_12
    *rax_10
    *rax_10 += rax_115

int128_t* i_1 = i_2
*arg2 = 0
arg2[1] = 0

while (i_1 != &i_1[sx.q(var_230) * 4])
    int64_t rdi_9 = sx.q(arg2[1].d)
    int32_t rax_117 = (rdi_9 + 1).d
    arg2[1].d = rax_117
    
    if (rax_117 s> *(arg2 + 0xc))
        sub_1405c4e40(arg2)
    
    int64_t rax_118 = *arg2
    int64_t rcx_65 = rdi_9 << 5
    *(rcx_65 + rax_118) = *i_1
    int128_t zmm1_2 = i_1[1]
    i_1 = &i_1[4]
    *(rcx_65 + rax_118 + 0x10) = zmm1_2

EnterCriticalSection(r14 + 0x78)

if (*(r14 + 0xb0) != 0)
    bool cond:4_1 = *(r14 + 0xb1) != 0
    *(r14 + 0xb0) = 0
    
    if (not(cond:4_1))
        int64_t rax_120 = _Query_perf_frequency() - *(r14 + 0xa0)
        *(r14 + 0xa8) += rax_120

LeaveCriticalSection(r14 + 0x78)
data_143efabdc -= 1
*(r14 + 0x58)
*(r14 + 0x58) = 1
int64_t var_108
j_sub_140a74f90(var_108)
int128_t* i_3 = i_2

if (i_3 != 0)
    sub_140a74f90(i_3)

void** rcx_69 = var_310

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

__security_check_cookie(rax_1 ^ &var_368)
return arg2
