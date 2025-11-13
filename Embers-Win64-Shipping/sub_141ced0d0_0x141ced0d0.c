// 函数: sub_141ced0d0
// 地址: 0x141ced0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* r14 = arg1
uint128_t zmm7 = arg2
void* var_120
sub_14090aa40(arg1 + 0x1a8, &var_120, data_143f360f8)
void* var_100
sub_14099b130(r14 + 0x200, &var_100, data_143f36118)
int32_t var_9c = 1
void* r15 = r14 + 0x70
int32_t* var_140 = nullptr
int32_t r11 = *(r15 + 0x28)
void* r9 = r15 + 0x10
int64_t var_138 = 0
int32_t r13 = 0
int32_t var_a0 = 0
void* var_98 = r9
int32_t rcx_2 = 0
int32_t var_90 = 0xffffffff
int32_t r8_2 = 0
int32_t var_8c = 0

if (r11 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_141ced1d8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_9c_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_8c = r8_2 - rax_10 + 0x1f
        
        if (r8_2 - rax_10 + 0x1f s> r11)
            var_8c = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_2 += 0x20
            rcx_2 += 1
            var_8c = r8_2
            var_a0 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_90 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141ced1d8
        
        var_8c = r11

int32_t rdx_6 = *(r15 + 0x28)
void* r10 = r15 + 0x10
double zmm2[0x2] = var_90.o
int32_t rdi = *(r10 + 0x18)
uint128_t zmm0 = var_a0.o
void* var_80 = r15
uint128_t var_78 = zmm0
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
zmm0 = var_80.o
int32_t r8_5 = rdx_6 s>> 5
int32_t r9_2 = rdx_6 & 0xffffffe0
int64_t var_a8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
void* var_d0 = r10
int32_t var_90_1 = rsi
var_8c = rdx_6
uint128_t var_c8 = zmm0
uint128_t var_b8 = var_78

if (rdx_6 != rdi)
    void* rax_12 = *(r10 + 0x10)
    
    if (rax_12 != 0)
        r10 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_10 = *(r10 + (sx.q(r8_5) << 2)) & rsi
    
    if (rdx_10 != 0)
    label_141ced2a3:
        int32_t rax_19 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx_1
        
        if (rax_19 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_8c = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> rdi)
            var_8c = rdi
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_5)
            r9_2 += 0x20
            r8_5 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10 + (rcx_7 << 2) + 4)
            var_90_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141ced2a3
        
        var_8c = rdi
    
    r10 = r15 + 0x10

void* rdi_1 = var_120
void* rsi_1 = var_100
uint64_t result = var_90_1.q u>> 0x20
uint64_t result_1 = result

while (true)
    int32_t rcx_9 = var_b8:0xc.d
    int64_t rdx_11 = var_b8.q
    
    if (rcx_9 == result.d && rdx_11 == r10 && var_c8.q == r15)
        int32_t* rcx_36 = var_140
        
        if (rcx_36 != 0)
            result = sub_140a74f90(rcx_36)
        
        __security_check_cookie(rax_1 ^ &var_168)
        return result
    
    int32_t rax_22 = data_143a1c6bc
    
    if (rcx_9 s< *(rdx_11 + 0x18))
        rax_22 = rcx_9
    
    var_8c = 2
    int64_t rax_23 = sx.q(rax_22)
    int32_t* var_98_1 = nullptr
    int32_t var_90_2 = 0
    int64_t rbx_2 = rax_23 * 3
    int64_t rax_24 = *r15
    uint64_t rdx_12 = zx.q(*(rax_24 + (rbx_2 << 3) + 0x10))
    
    if (rdx_12.d s> 2)
        sub_140bcf1d0(&var_a0, rdx_12.d)
        rax_24 = *(r14 + 0x70)
    
    int32_t* r15_1 = *(rax_24 + (rbx_2 << 3) + 8)
    int64_t r12_1 = 0
    uint64_t r9_5 = sx.q(*(rax_24 + (rbx_2 << 3) + 0x10)) << 2 u>> 2
    
    if (r15_1 u> &r15_1[sx.q(*(rax_24 + (rbx_2 << 3) + 0x10))])
        r9_5 = 0
    
    uint64_t var_128_1 = r9_5
    
    if (r9_5 != 0)
        do
            int32_t* r8_6 = &var_a0
            int64_t r13_1 = *(arg1 + 0xa8)
            int64_t r14_2 = sx.q(*r15_1) * 2
            
            if (var_98_1 != 0)
                r8_6 = var_98_1
            
            int32_t* rcx_11 = r8_6
            rdx_12 = &r8_6[sx.q(var_90_2)]
            
            if (r8_6 != rdx_12)
                while (*rcx_11 != *(r13_1 + (r14_2 << 3) + 0xc))
                    rcx_11 = &rcx_11[1]
                    
                    if (rcx_11 == rdx_12)
                        goto label_141ced3dc
            
            if (r8_6 == rdx_12 || ((rcx_11 - r8_6) s>> 2).d == 0xffffffff)
            label_141ced3dc:
                int64_t rbx_3 = sx.q(var_90_2)
                int32_t rax_30 = (rbx_3 + 1).d
                var_90_2 = rax_30
                
                if (rax_30 s> var_8c)
                    sub_140bcee10(&var_a0, rbx_3.d)
                    r9_5 = var_128_1
                
                rdx_12 = &var_a0
                
                if (var_98_1 != 0)
                    rdx_12 = var_98_1
                
                *(rdx_12 + (rbx_3 << 2)) = *(r13_1 + (r14_2 << 3) + 0xc)
            
            r15_1 = &r15_1[1]
            r12_1 += 1
        while (r12_1 != r9_5)
        
        rdi_1 = var_120
        r14 = arg1
        r13 = var_138:4.d
    
    if (var_90_2 != 0)
        int64_t i = 0
        int64_t i_1 = 0
        rdx_12.b = var_90_2 == 1
        char var_148_1 = rdx_12.b
        
        if (var_90_2 != 1)
            int32_t* rsi_2 = var_140
            
            while (i s< 2)
                uint64_t r12_2 = 0
                int32_t var_144_1 = 0
                int64_t rbx_4 = sx.q(*(*(r14 + 0x70) + ((i + rax_23 * 6) << 2)))
                
                if (r13 s< 4)
                    var_138.d = 0
                    
                    if (r13 != 4)
                        sub_1405dadb0(&var_140, 4)
                        r12_2 = zx.q(var_138.d)
                        rsi_2 = var_140
                        var_144_1 = r12_2.d
                
                int64_t* rax_39 = (rbx_4 << 5) + *r14
                int32_t* rcx_18 = *rax_39
                int32_t* var_108_1 = rcx_18
                void* rax_41 = &rcx_18[sx.q(rax_39[1].d)]
                
                if (rcx_18 != rax_41)
                    do
                        int64_t rbx_5 = sx.q(*rcx_18)
                        void** r11_1 = nullptr
                        int64_t rax_42 = *(arg1 + 0x38)
                        int32_t r15_2 = 0
                        zmm2[1] = 0
                        int32_t var_58_1 = 0
                        int64_t r14_3 = rbx_5 * 3
                        int32_t var_54_1 = 8
                        int32_t rdx_14 = *(rax_42 + (r14_3 << 3) + 0x10)
                        
                        if (rdx_14 s> 8)
                            sub_141a64350(&var_80, rdx_14)
                            rax_42 = *(arg1 + 0x38)
                            r11_1 = zmm2[1]
                            r15_2 = var_58_1
                        
                        int32_t* r13_2 = *(rax_42 + (r14_3 << 3) + 8)
                        int64_t r12_3 = 0
                        uint64_t r10_2 = sx.q(*(rax_42 + (r14_3 << 3) + 0x10)) << 2 u>> 2
                        
                        if (r13_2 u> &r13_2[sx.q(*(rax_42 + (r14_3 << 3) + 0x10))])
                            r10_2 = 0
                        
                        uint64_t var_e8_1 = r10_2
                        
                        if (r10_2 != 0)
                            do
                                void** r8_7 = &var_80
                                int64_t r9_6 = *(arg1 + 0xa8)
                                int64_t r14_5 = sx.q(*r13_2) * 2
                                
                                if (r11_1 != 0)
                                    r8_7 = r11_1
                                
                                void** rcx_20 = r8_7
                                void* rdx_15 = r8_7 + (sx.q(r15_2) << 2)
                                
                                if (r8_7 != rdx_15)
                                    while (*rcx_20 != *(r9_6 + (r14_5 << 3) + 0xc))
                                        rcx_20 += 4
                                        
                                        if (rcx_20 == rdx_15)
                                            goto label_141ced5c4
                                
                                if (r8_7 == rdx_15 || ((rcx_20 - r8_7) s>> 2).d == 0xffffffff)
                                label_141ced5c4:
                                    
                                    if (r15_2 + 1 s> var_54_1)
                                        sub_14083a280(&var_80, r15_2)
                                        r10_2 = var_e8_1
                                        r11_1 = zmm2[1]
                                    
                                    void** rdx_17 = &var_80
                                    
                                    if (r11_1 != 0)
                                        rdx_17 = r11_1
                                    
                                    *(rdx_17 + (sx.q(r15_2) << 2)) = *(r9_6 + (r14_5 << 3) + 0xc)
                                    r15_2 += 1
                                    r11_1 = zmm2[1]
                                
                                r13_2 = &r13_2[1]
                                r12_3 += 1
                            while (r12_3 != r10_2)
                        
                        void** r8_8 = &var_80
                        
                        if (r11_1 != 0)
                            r8_8 = r11_1
                        
                        void* r10_3 = r8_8 + (sx.q(r15_2) << 2)
                        
                        if (r8_8 == r10_3)
                        label_141ced66e:
                            r12_2 = zx.q(var_144_1)
                        else
                            int32_t* r9_7 = &var_a0
                            
                            if (var_98_1 != 0)
                                r9_7 = var_98_1
                            
                            while (true)
                                void* rdx_18 = &r9_7[sx.q(var_90_2)]
                                int32_t* rcx_25 = r9_7
                                
                                if (r9_7 != rdx_18)
                                    while (true)
                                        if (*rcx_25 == *r8_8)
                                            r12_2 = sx.q(var_144_1)
                                            int32_t* rcx_32 = rsi_2
                                            void* rdx_19 = &rsi_2[r12_2]
                                            
                                            if (rsi_2 != rdx_19)
                                                while (*rcx_32 != rbx_5.d)
                                                    rcx_32 = &rcx_32[1]
                                                    
                                                    if (rcx_32 == rdx_19)
                                                        goto label_141ced7db
                                            
                                            if (rsi_2 == rdx_19
                                                || ((rcx_32 - rsi_2) s>> 2).d == 0xffffffff)
                                            label_141ced7db:
                                                uint64_t r14_6 = r12_2
                                                r12_2 = zx.q(r12_2.d + 1)
                                                var_144_1 = r12_2.d
                                                var_138.d = r12_2.d
                                                
                                                if (r12_2.d s> var_138:4.d)
                                                    sub_1405a4cf0(&var_140)
                                                    r12_2 = zx.q(var_138.d)
                                                    rsi_2 = var_140
                                                    var_144_1 = r12_2.d
                                                
                                                rsi_2[r14_6] = rbx_5.d
                                            
                                            r11_1 = zmm2[1]
                                            break
                                        
                                        rcx_25 = &rcx_25[1]
                                        
                                        if (rcx_25 == rdx_18)
                                            goto label_141ced661
                                    
                                    break
                                
                            label_141ced661:
                                r8_8 += 4
                                
                                if (r8_8 == r10_3)
                                    r11_1 = zmm2[1]
                                    goto label_141ced66e
                        
                        if (r11_1 != 0)
                            sub_140a74f90(r11_1)
                        
                        rcx_18 = &var_108_1[1]
                        var_108_1 = rcx_18
                    while (rcx_18 != rax_41)
                    
                    rdi_1 = var_120
                    r14 = arg1
                    i = i_1
                
                int32_t r9_8 = 1
                rdx_12 = **(rdi_1 + 0x18)
                int64_t rcx_28 = sx.q(*rsi_2) * 3
                uint64_t var_118_1 = *(rdx_12 + (rcx_28 << 2))
                
                if (r12_2.d s<= 1)
                label_141ced744:
                    rdx_12 = zx.q(var_148_1)
                else
                    arg2 = *(rdx_12 + (rcx_28 << 2) + 8)
                    void* r8_9 = &rsi_2[1]
                    
                    while (true)
                        int64_t rcx_29 = sx.q(*r8_9) * 3
                        zmm0.d = (*(rdx_12 + (rcx_29 << 2))).d f- var_118_1.d
                        
                        if (not(_mm_and_ps(zmm0, 0x7fffffff).d f> zmm7.d))
                            zmm0.d = (*(rdx_12 + (rcx_29 << 2) + 4)).d f- var_118_1:4.d[0].d
                            
                            if (not(_mm_and_ps(zmm0, 0x7fffffff).d f> zmm7.d))
                                zmm0.d = (*(rdx_12 + (rcx_29 << 2) + 8)).d f- arg2.d
                                
                                if (not(_mm_and_ps(zmm0, 0x7fffffff).d f> zmm7.d))
                                    r9_8 += 1
                                    r8_9 += 4
                                    
                                    if (r9_8 s>= r12_2.d)
                                        goto label_141ced744
                                    
                                    continue
                        
                        rdx_12.b = 1
                        var_148_1 = 1
                        break
                
                r13 = var_138:4.d
                i += 1
                i_1 = i
                
                if (rdx_12.b != 0)
                    break
            
            rsi_1 = var_100
        
        rax_23[**(rsi_1 + 0x18)] = rdx_12.b
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
    else if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    var_b8:8.d &= not.d(var_c8:0xc.d)
    sub_14059bdd0(&var_c8:8)
    result = result_1
    r15 = r14 + 0x70
    r10 = var_d0
    r13 = var_138:4.d
