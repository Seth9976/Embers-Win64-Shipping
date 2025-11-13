// 函数: sub_141a482f0
// 地址: 0x141a482f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = arg4[1]
void* rsi = arg1
int64_t* rdi = arg3
int32_t* r14 = arg2
uint128_t var_218 = *arg4
uint128_t zmm0 = zx.o(arg4[2].q)
void* var_148 = &arg5[1]
void* var_140 = &arg5[0xb]
int32_t rax_2 = data_1439d284c
int64_t* var_150 = arg5
int32_t var_138 = rax_2
int32_t var_12c = rax_2
int64_t var_134 = -1
int64_t var_128 = -1
int64_t var_238
__builtin_memset(&var_238, 0, 0x14)
uint128_t var_208 = zmm1
uint64_t var_1f8 = zmm0.q
void var_1f0
sub_1405ac190(&var_1f0, arg4 + 0x28)
int32_t rax_3 = *(arg4 + 0x48)
uint32_t rax_4 = *(arg4 + 0x4c)
int32_t rax_5 = arg4[5].d
char var_1c4
char rcx_2 = *(arg4 + 0x54) ^ var_1c4
uint128_t var_2f8 = var_218
char rax_6 = var_1c4 ^ (rcx_2 & 0x3f)
uint128_t var_2e8 = var_208
uint64_t var_2d8 = var_1f8
void var_2d0
sub_1405ac190(&var_2d0, &var_1f0)
int32_t* r9 = *rdi
int32_t var_2b0 = rax_3
uint32_t var_2ac = rax_4
int32_t var_2a8 = rax_5
int32_t* var_1a8 = r9
uint8_t var_2a4
uint8_t var_2a4_1 = var_2a4 ^ ((var_2a4 ^ rax_6) & 0x3f)
void* result = &r9[sx.q(rdi[1].d) * 3]
void* result_1 = result
int64_t var_2c0
int64_t var_1e0

if (r9 != result)
    int64_t* rbx_1 = rsi + 0x188
    int64_t* var_298_1 = rbx_1
    
    do
        int64_t r8_31 = sx.q(*r9)
        int32_t rcx_6 = r9[1]
        int32_t rdx_2 = r8_31.d
        int32_t i_2 = r8_31.d
        uint128_t var_328
        uint128_t var_318
        int64_t var_308
        uint128_t var_290
        void var_268
        int64_t var_258
        char var_23c
        int32_t var_1e8
        void var_a8
        int64_t var_98
        void var_88
        uint128_t zmm0_2
        
        if (r8_31.d s< rcx_6 + r8_31.d)
            int64_t r12_1 = r8_31
            
            do
                int64_t rax_13 = rdi[2]
                int64_t rcx_7 = r12_1 * 3
                int32_t rdi_1 = *(rax_13 + (rcx_7 << 2) + 8)
                int64_t rcx_8 = sx.q(*(rsi + 0x180))
                uint64_t var_f8_1 = *(rax_13 + (rcx_7 << 2))
                int32_t r10_1 = var_f8_1.d
                
                if (rcx_8.d != 0)
                    int32_t* rax_14 = *(rsi + 0x178)
                    int32_t* r9_1 = rsi + 0x158
                    int64_t r11_1 = 0
                    
                    if (rax_14 != 0)
                        r9_1 = rax_14
                    
                    uint64_t rbx_3 = rcx_8 << 2 u>> 2
                    
                    if (r9_1 u> &r9_1[rcx_8])
                        rbx_3 = 0
                    
                    if (rbx_3 != 0)
                        do
                            int32_t rax_16 = *r9_1
                            
                            if (r10_1 != 0)
                                int32_t r10_3 = (r10_1 - rax_16) ^ rax_16 u>> 0xd
                                int32_t r8_2 = (0x9e3779b9 - r10_3 - rax_16) ^ r10_3 << 8
                                int32_t r10_7 = (rax_16 - r8_2 - r10_3) ^ r8_2 u>> 0xd
                                int32_t rdx_6 = (r10_3 - r8_2 - r10_7) ^ r10_7 u>> 0xc
                                int32_t r8_5 = (r8_2 - rdx_6 - r10_7) ^ rdx_6 << 0x10
                                int32_t r10_10 = (r10_7 - r8_5 - rdx_6) ^ r8_5 u>> 5
                                int32_t rdx_9 = (rdx_6 - r8_5 - r10_10) ^ r10_10 u>> 3
                                int32_t r8_8 = (r8_5 - rdx_9 - r10_10) ^ rdx_9 << 0xa
                                r10_1 = (r10_10 - r8_8 - rdx_9) ^ r8_8 u>> 0xf
                            else
                                r10_1 = rax_16
                            
                            r9_1 = &r9_1[1]
                            r11_1 += 1
                        while (r11_1 != rbx_3)
                
                int32_t i_4 = r14[0x42]
                int32_t r8_10 = 0
                int32_t* rbx_4 = *(r14 + 0x100)
                int32_t i = i_4
                
                if (i_4 s> 0)
                    int32_t* r11_2 = r14
                    
                    if (rbx_4 != 0)
                        r11_2 = rbx_4
                    
                    do
                        int32_t rcx_14 = i & 0x80000001
                        
                        if (rcx_14 s< 0)
                            rcx_14 = ((rcx_14 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(i)
                        int32_t i_3 = (temp1_1 - temp0_1) s>> 1
                        i = i_3
                        int32_t rax_32 = i_3 + r8_10
                        
                        if (*((sx.q(rax_32) << 5) + r11_2) u< r10_1)
                            r8_10 = rax_32 + rcx_14
                    while (i s> 0)
                
                int32_t* rax_33
                int64_t rcx_20
                
                if (r8_10 s< i_4)
                    rax_33 = r14
                    
                    if (rbx_4 != 0)
                        rax_33 = rbx_4
                    
                    rcx_20 = sx.q(r8_10) << 5
                
                void* r11_4
                int64_t* r15_2
                
                if (r8_10 s>= i_4 || r10_1 u< rax_33[sx.q(r8_10) * 8] || r8_10 == 0xffffffff)
                    r15_2 = 0x10
                    r11_4 = 8
                else
                    r15_2 = rcx_20 + 0x18 + rax_33
                    r11_4 = rcx_20 + 0x10 + rax_33
                
                int64_t* r11_5 = *r11_4
                int64_t rcx_21 = sx.q(var_f8_1:4.d)
                int32_t* rdx_15
                
                if (r11_5[1].d == *(r11_5 + 0x34))
                label_141a486ce:
                    rdx_15 = nullptr
                else
                    void* rdx_12 = r11_5[8]
                    void* r9_2 = &r11_5[7]
                    
                    if (rdx_12 != 0)
                        r9_2 = rdx_12
                    
                    int32_t rax_35 = *(r9_2 + (((sx.q(r11_5[9].d) - 1) & rcx_21) << 2))
                    
                    if (rax_35 == 0xffffffff)
                    label_141a486ce_1:
                        rdx_15 = nullptr
                    else
                        while (true)
                            rdx_15 = sx.q(rax_35) * 0x108 + *r11_5
                            
                            if (*rdx_15 == rcx_21.d)
                                break
                            
                            rax_35 = rdx_15[0x40]
                            
                            if (rax_35 == 0xffffffff)
                                goto label_141a486ce_2
                        
                        if (rax_35 == 0xffffffff)
                        label_141a486ce_2:
                            rdx_15 = nullptr
                
                void* r14_1 = &rdx_15[2]
                
                if (rdx_15 == 0)
                    r14_1 = nullptr
                
                if (r14_1 != 0)
                label_141a48767:
                    int64_t* rbx_5 = arg5
                    var_238.o = *r14_1
                    int32_t var_e4_1 = rcx_21.d
                    char rax_38 = *(rbx_5 + 0x2dd)
                    zmm0_2 = zx.o(r10_1.q)
                    rbx_5[0x5a] = zmm0_2.q
                    var_138.q = zmm0_2.q
                    var_2f8 = var_218
                    *(rbx_5 + 0x2dc) = rax_38
                    var_2d8.o = var_1f8.o
                    int32_t var_228_1 = r10_1
                    var_134:4.d = 0xffffffff
                    rbx_5[0x5b].d = 0xffffffff
                    uint128_t var_2e8_1 = var_208
                    int32_t var_2c8_1 = var_1e8
                    sub_140747360(&var_2c0, &var_1e0)
                    int32_t var_2b0_1 = rax_3
                    uint32_t var_2ac_1 = rax_4
                    int32_t var_2a8_1 = rax_5
                    var_2a4_1 ^= (var_2a4_1 ^ rax_6) & 0x3f
                    void* rsi_1 = *r15_2
                    
                    if (rsi_1 != 0)
                        int64_t rbx_6 = *(rsi_1 + 0x38)
                        var_290 = var_218
                        uint128_t var_280_1 = var_208
                        sub_1405ac190(&var_268, &var_1f0)
                        var_23c ^= (var_23c ^ rax_6) & 0x3f
                        sub_141a34710(&var_268, sub_141a35680(&var_a8, &var_268, rsi_1 + 0x18))
                        
                        if (var_98 != 0)
                            sub_140a74f90(var_98)
                        
                        var_280_1:8.q = rbx_6
                        int64_t* rax_49
                        int32_t zmm6_1
                        int32_t zmm7_1
                        rax_49, zmm6_1, zmm7_1 = sub_141a6af80(rsi_1 + 0x18, &var_88, &var_218)
                        bool cond:6_1 = *(rsi_1 + 0x30) s<= 0
                        uint128_t zmm2_1 = *rax_49
                        uint128_t zmm0_3 = zx.o(rax_49[2])
                        var_290 = zmm2_1
                        var_280_1.q = zmm0_3.q
                        
                        if (not(cond:6_1))
                            int64_t r11_6 = *(rsi_1 + 0x28)
                            uint64_t var_1a0_1 = var_290:0xc.q
                            int64_t r10_13 = sx.q(*(rsi_1 + 0x30)) * 5
                            
                            if (_mm_bsrli_si128(zmm2_1, 0xc).b != 2)
                                int32_t r8_19 = *(r11_6 + (r10_13 << 2) - 4)
                                int32_t rax_53 = *(r11_6 + (r10_13 << 2) - 8)
                                
                                if (r8_19 s> rax_53)
                                    uint64_t rcx_30 = var_1a0_1
                                    int32_t r9_7 = r8_19 - rax_53
                                    int32_t var_17c_1 = 0
                                    var_328.q = r8_19.q
                                    int32_t zmm4_1 = var_328:4.d
                                    int32_t rax_55
                                    uint64_t zmm1_1
                                    
                                    while (true)
                                        rax_55 = var_1a0_1:4.d
                                        var_328.q = rcx_30
                                        
                                        if (rax_55 s<= r8_19)
                                            if (rax_55 != r8_19)
                                                break
                                            
                                            if (var_328:4.d.d f<= zmm4_1)
                                                break
                                        
                                        var_328.q = rcx_30
                                        int32_t var_174_1 = 0
                                        var_318.q = r9_7.q
                                        zmm2_1.d = var_328:4.d.d f- var_318:4.d
                                        zmm1_1.d = zmm2_1.q.d f+ zmm2_1.d
                                        zmm1_1.d = zmm1_1.d f- zmm7_1
                                        int32_t rdx_27 = int.d(zmm1_1.d) s>> 1
                                        int32_t rcx_33 = rdx_27 - r9_7 + rax_55
                                        zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rdx_27)).d
                                        
                                        if (not(zmm2_1.d f>= zmm6_1))
                                            int32_t var_1b4_1 = 0
                                            rcx_30 = rcx_33.q
                                            var_1a0_1 = rcx_30
                                        else if (zmm2_1.d f>= 0.99999994f)
                                            int32_t var_1b4_3 = 0x3f7fffff
                                            rcx_30 = rcx_33.q
                                            var_1a0_1 = rcx_30
                                        else
                                            int32_t var_1b4_2 = zmm2_1.d
                                            rcx_30 = rcx_33.q
                                            var_1a0_1 = rcx_30
                                    
                                    zmm1_1 = var_290.q
                                    int32_t r8_20 = var_290:8.d
                                    uint64_t var_120_1 = zmm1_1
                                    
                                    if (var_290.b != 2)
                                        var_328.q = var_290:4.q
                                        var_318.q = rcx_30
                                        int32_t temp4_1 = var_290:4.d
                                        
                                        if (rax_55 s< temp4_1)
                                        label_141a48a8d:
                                            int32_t var_16c_1 = 0
                                            int32_t var_118
                                            r8_20 = var_118
                                            zmm1_1 = (*(r11_6 + (r10_13 << 2) - 8)).q
                                        else if (rax_55 == temp4_1
                                                && not(var_318:4.d.d f>= var_328:4.d))
                                            goto label_141a48a8d
                                    
                                    var_318:0xc.q = var_1a0_1
                                    var_318:8.d = r8_20
                                    int32_t var_304_1 = var_280_1:4.d
                                    zmm2_1.q = zmm1_1
                                    var_280_1.q = var_308
                                    uint128_t var_318_1 = zmm2_1
                                    var_290 = zmm2_1
                        
                        var_2e8_1 = var_280_1
                        var_2f8 = zmm2_1
                        var_2d8 = var_1f8
                        sub_141a34710(&var_2d0, &var_268)
                        var_2b0_1 = rax_3
                        uint32_t var_2ac_2 = rax_4
                        int32_t var_2a8_2 = rax_5
                        uint8_t rdx_30 = var_2a4_1 ^ ((var_23c ^ var_2a4_1) & 0x3f)
                        
                        if (var_258 != 0)
                            sub_140a74f90(var_258)
                        
                        void* rax_63 = *r15_2
                        int32_t r10_14 = var_2d8.d
                        zmm0_2 = *(rax_63 + 0x84)
                        zmm1 = *(rax_63 + 0x74)
                        int32_t rax_64 = var_2d8:4.d
                        
                        if (rax_64 == 0x80000000)
                            rax_64 = (var_2f8:4.q).d
                            
                            if (r10_14 == 0)
                                rax_64 = var_2e8_1.d
                        
                        int64_t r8_21 = zmm1.q
                        
                        if (r8_21.b != 2)
                            uint32_t rcx_37 = (r8_21 u>> 0x20).d
                            
                            if (rcx_37 s< rax_64 || (rcx_37 s<= rax_64 && r8_21.b == 1))
                                if (zmm1:4.d != rcx_37)
                                    goto label_141a48bb1
                                
                                goto label_141a48c78
                            
                            if (r8_21.b == 1 && rax_64 == rcx_37)
                                goto label_141a48c78
                            
                            goto label_141a48bb1
                        
                    label_141a48c78:
                        int64_t rcx_41 = zmm1:8.q
                        
                        if (rcx_41.b == 2)
                        label_141a48bb1:
                            int64_t rcx_38 = zmm0_2.q
                            
                            if (rcx_38.b == 2)
                            label_141a48d00:
                                int64_t r9_12 = zmm0_2:8.q
                                
                                if (r9_12.b != 2)
                                    uint32_t r8_28 = (r9_12 u>> 0x20).d
                                    
                                    if (r8_28 s> rax_64)
                                    label_141a48d23:
                                        
                                        if (zmm0_2:0xc.d == r8_28 && rcx_38.b != 2)
                                            goto label_141a48d3f
                                        
                                        var_2ac_1 = 0x80000000
                                        var_2a4_1 = rdx_30 & 0xcf
                                    else if (r8_28 s< rax_64)
                                        if (r9_12.b == 1 && rax_64 == r8_28 && rcx_38.b != 2)
                                            goto label_141a48d3f
                                        
                                        var_2ac_1 = 0x80000000
                                        var_2a4_1 = rdx_30 & 0xcf
                                    else
                                        if (r9_12.b == 1)
                                            goto label_141a48d23
                                        
                                        var_2ac_1 = 0x80000000
                                        var_2a4_1 = rdx_30 & 0xcf
                                else if (rcx_38.b == 2)
                                    var_2ac_1 = 0x80000000
                                    var_2a4_1 = rdx_30 & 0xcf
                                else
                                label_141a48d3f:
                                    var_2ac_1 = (rcx_38 u>> 0x20).d
                                    uint8_t rcx_45 = 0
                                    
                                    if (r10_14 == 1)
                                        rcx_45 = 0x10
                                    
                                    rcx_45 |= rdx_30 & 0xef
                                    var_2a4_1 =
                                        ((not.b(rcx_45 u>> 4) << 5 ^ rcx_45) & 0x20) ^ rcx_45
                            else
                                uint32_t r8_23 = (rcx_38 u>> 0x20).d
                                
                                if (r8_23 s< rax_64 || (r8_23 s<= rax_64 && rcx_38.b == 1))
                                    if (zmm0_2:4.d == r8_23)
                                        goto label_141a48d00
                                    
                                    var_2ac_1 = 0x80000000
                                    var_2a4_1 = rdx_30 & 0xcf
                                else
                                    if (rcx_38.b == 1 && rax_64 == r8_23)
                                        goto label_141a48d00
                                    
                                    var_2ac_1 = 0x80000000
                                    var_2a4_1 = rdx_30 & 0xcf
                        else
                            uint32_t r8_26 = (rcx_41 u>> 0x20).d
                            
                            if (r8_26 s> rax_64 || (r8_26 s>= rax_64 && rcx_41.b == 1))
                                if (zmm1:0xc.d != r8_26 || rcx_41.b == 2)
                                    goto label_141a48bb1
                            else if (rcx_41.b != 1 || rax_64 != r8_26 || rcx_41.b == 2)
                                goto label_141a48bb1
                            
                            var_2ac_1 = (rcx_41 u>> 0x20).d
                            uint8_t rcx_43 = 0
                            
                            if (r10_14 == 0)
                                rcx_43 = 0x10
                            
                            rcx_43 |= rdx_30 & 0xef
                            var_2a4_1 = ((not.b(rcx_43 u>> 4) << 5 ^ rcx_43) & 0x20) ^ rcx_43
                        
                        rbx_5 = arg5
                        var_2a8_1 = *(*r15_2 + 0x94)
                    
                    char rax_66
                    void* rcx_40
                    void* rdx_31
                    
                    if ((*(r14_1 + 0xe0) & 1) != 0)
                        rcx_40 = r14_1 + 0xb0
                        rdx_31 = rcx_40
                        rax_66 = *(rcx_40 + 0x30) & 2
                        
                        if (rax_66 == 0)
                            rdx_31 = *rcx_40
                    
                    if ((*(r14_1 + 0xe0) & 1) == 0 || (*(rdx_31 + 8) & 4) == 0)
                        var_290 = var_2f8
                        uint64_t var_270_2 = var_2d8
                        uint128_t var_280_2 = var_2e8_1
                        sub_1405ac190(&var_268, &var_2d0)
                        int32_t var_248_2 = var_2b0_1
                        uint32_t var_244_2 = var_2ac_1
                        int32_t var_240_2 = var_2a8_1
                        var_23c ^= (var_23c ^ var_2a4_1) & 0x3f
                        sub_141a41c10(r14_1, rdi_1, &var_238, &var_290, &var_150, rbx_5)
                    else
                        if (rax_66 == 0)
                            rcx_40 = *rcx_40
                        
                        (*(*rcx_40 + 0x28))(rcx_40, r14_1, zx.q(rdi_1), &var_238, &var_2f8, 
                            &var_150, rbx_5)
                else
                    int32_t* rdx_19
                    
                    if (r11_5[0xb].d == *(r11_5 + 0x84))
                    label_141a4874c:
                        rdx_19 = nullptr
                    else
                        void* r9_4 = &r11_5[0x11]
                        void* rdx_16 = *(r9_4 + 8)
                        
                        if (rdx_16 != 0)
                            r9_4 = rdx_16
                        
                        int32_t rax_37 = *(r9_4 + (((sx.q(r11_5[0x13].d) - 1) & rcx_21) << 2))
                        
                        if (rax_37 == 0xffffffff)
                        label_141a4874c_1:
                            rdx_19 = nullptr
                        else
                            while (true)
                                rdx_19 = sx.q(rax_37) * 0x108 + r11_5[0xa]
                                
                                if (*rdx_19 == rcx_21.d)
                                    break
                                
                                rax_37 = rdx_19[0x40]
                                
                                if (rax_37 == 0xffffffff)
                                    goto label_141a4874c_2
                            
                            if (rax_37 == 0xffffffff)
                            label_141a4874c_2:
                                rdx_19 = nullptr
                    
                    r14_1 = &rdx_19[2]
                    
                    if (rdx_19 == 0)
                        r14_1 = nullptr
                    
                    if (r14_1 != 0)
                        goto label_141a48767
                
                r9 = var_1a8
                r12_1 += 1
                r14 = arg2
                r8_31 = zx.q(i_2 + 1)
                rdi = arg3
                rcx_6 = r9[1]
                rdx_2 = *r9
                i_2 = r8_31.d
            while (r8_31.d s< rcx_6 + rdx_2)
            
            rbx_1 = var_298_1
            rsi = arg1
        
        if (r8_31.d s< r9[2] + rcx_6 + rdx_2)
            int64_t r12_2 = sx.q(r8_31.d)
            int32_t i_1
            
            do
                int64_t rax_78 = rdi[2]
                int64_t rcx_49 = r12_2 * 3
                int64_t rdx_35 = sx.q(*(rsi + 0x180))
                int32_t rdi_2 = *(rax_78 + (rcx_49 << 2) + 8)
                uint64_t var_d8_1 = *(rax_78 + (rcx_49 << 2))
                int32_t rcx_50 = var_d8_1.d
                
                if (rdx_35.d != 0)
                    void* rax_79 = *(rsi + 0x178)
                    int64_t r11_7 = rdx_35 << 2
                    void* r9_14 = rsi + 0x158
                    int64_t r10_15 = 0
                    
                    if (rax_79 != 0)
                        r9_14 = rax_79
                    
                    uint64_t r11_8 = r11_7 u>> 2
                    
                    if (r9_14 u> r11_7 + r9_14)
                        r11_8 = 0
                    
                    if (r11_8 != 0)
                        do
                            int32_t rax_81 = *r9_14
                            
                            if (rcx_50 != 0)
                                int32_t rcx_52 = (rcx_50 - rax_81) ^ rax_81 u>> 0xd
                                int32_t r8_34 = (0x9e3779b9 - rcx_52 - rax_81) ^ rcx_52 << 8
                                int32_t rcx_57 = (rax_81 - r8_34 - rcx_52) ^ r8_34 u>> 0xd
                                int32_t rdx_41 = (rcx_52 - r8_34 - rcx_57) ^ rcx_57 u>> 0xc
                                int32_t r8_37 = (r8_34 - rdx_41 - rcx_57) ^ rdx_41 << 0x10
                                int32_t rcx_60 = (rcx_57 - r8_37 - rdx_41) ^ r8_37 u>> 5
                                int32_t rdx_44 = (rdx_41 - r8_37 - rcx_60) ^ rcx_60 u>> 3
                                int32_t r8_40 = (r8_37 - rdx_44 - rcx_60) ^ rdx_44 << 0xa
                                rcx_50 = (rcx_60 - r8_40 - rdx_44) ^ r8_40 u>> 0xf
                            else
                                rcx_50 = rax_81
                            
                            r9_14 += 4
                            r10_15 += 1
                        while (r10_15 != r11_8)
                
                int32_t j_2 = r14[0x42]
                int32_t r9_15 = 0
                int32_t* rbx_7 = *(r14 + 0x100)
                int32_t j = j_2
                
                if (j_2 s> 0)
                    int32_t* r11_9 = r14
                    
                    if (rbx_7 != 0)
                        r11_9 = rbx_7
                    
                    do
                        int32_t r8_43 = j & 0x80000001
                        
                        if (r8_43 s< 0)
                            r8_43 = ((r8_43 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(j)
                        int32_t j_1 = (temp3_1 - temp2_1) s>> 1
                        j = j_1
                        int32_t rax_97 = j_1 + r9_15
                        
                        if (*((sx.q(rax_97) << 5) + r11_9) u< rcx_50)
                            r9_15 = r8_43 + rax_97
                    while (j s> 0)
                
                int32_t* rax_98
                int64_t rdx_49
                
                if (r9_15 s< j_2)
                    rax_98 = r14
                    
                    if (rbx_7 != 0)
                        rax_98 = rbx_7
                    
                    rdx_49 = sx.q(r9_15) << 5
                
                void* r11_11
                void** r15_4
                
                if (r9_15 s>= j_2 || rcx_50 u< rax_98[sx.q(r9_15) * 8] || r9_15 == 0xffffffff)
                    r15_4 = 0x10
                    r11_11 = 8
                else
                    r15_4 = rdx_49 + 0x18 + rax_98
                    r11_11 = rdx_49 + 0x10 + rax_98
                
                int64_t* r11_12 = *r11_11
                int64_t rdx_50 = sx.q(var_d8_1:4.d)
                int32_t* r8_50
                
                if (r11_12[1].d == *(r11_12 + 0x34))
                label_141a49050:
                    r8_50 = nullptr
                else
                    void* r8_47 = r11_12[8]
                    void* r10_16 = &r11_12[7]
                    
                    if (r8_47 != 0)
                        r10_16 = r8_47
                    
                    int32_t rax_100 = *(r10_16 + (((sx.q(r11_12[9].d) - 1) & rdx_50) << 2))
                    
                    if (rax_100 == 0xffffffff)
                    label_141a49050_1:
                        r8_50 = nullptr
                    else
                        while (true)
                            r8_50 = sx.q(rax_100) * 0x108 + *r11_12
                            
                            if (*r8_50 == rdx_50.d)
                                break
                            
                            rax_100 = r8_50[0x40]
                            
                            if (rax_100 == 0xffffffff)
                                goto label_141a49050_2
                        
                        if (rax_100 == 0xffffffff)
                        label_141a49050_2:
                            r8_50 = nullptr
                
                uint128_t* r14_2 = &r8_50[2]
                
                if (r8_50 == 0)
                    r14_2 = nullptr
                
                if (r14_2 != 0)
                label_141a490e5:
                    zmm1 = *r14_2
                    int32_t var_c4_1 = rdx_50.d
                    zmm0_2 = zx.o(rcx_50.q)
                    *(arg1 + 0x298) = zmm1
                    *(arg1 + 0x2a8) = rcx_50
                    var_138.q = zmm0_2.q
                    var_238.o = zmm1
                    int32_t var_b0_1 = 0xffffffff
                    char var_ac_1 = 0
                    int32_t var_228_2 = rcx_50
                    var_134:4.d = 0xffffffff
                    zmm0_2.q = zmm0_2.q
                    *(arg1 + 0x2ac) = zmm0_2
                    uint128_t var_b8 = zmm0_2
                    int32_t var_2c8_2 = var_1e8
                    var_2f8 = var_218
                    var_2d8.o = var_1f8.o
                    uint128_t var_2e8_2 = var_208
                    sub_140747360(&var_2c0, &var_1e0)
                    int32_t var_2b0_2 = rax_3
                    uint32_t var_2ac_3 = rax_4
                    int32_t var_2a8_3 = rax_5
                    var_2a4_1 ^= (var_2a4_1 ^ rax_6) & 0x3f
                    void* rsi_2 = *r15_4
                    
                    if (rsi_2 != 0)
                        int64_t rbx_8 = *(rsi_2 + 0x38)
                        var_290 = var_218
                        uint128_t var_280_3 = var_208
                        sub_1405ac190(&var_268, &var_1f0)
                        var_23c ^= (var_23c ^ rax_6) & 0x3f
                        sub_141a34710(&var_268, sub_141a35680(&var_a8, &var_268, rsi_2 + 0x18))
                        
                        if (var_98 != 0)
                            sub_140a74f90(var_98)
                        
                        var_280_3:8.q = rbx_8
                        int64_t* rax_114
                        int32_t zmm6_2
                        int32_t zmm7_2
                        rax_114, zmm6_2, zmm7_2 = sub_141a6af80(rsi_2 + 0x18, &var_88, &var_218)
                        bool cond:7_1 = *(rsi_2 + 0x30) s<= 0
                        uint128_t zmm2_2 = *rax_114
                        uint128_t zmm0_4 = zx.o(rax_114[2])
                        var_290 = zmm2_2
                        var_280_3.q = zmm0_4.q
                        
                        if (not(cond:7_1))
                            int64_t r11_13 = *(rsi_2 + 0x28)
                            uint64_t var_190_1 = var_290:0xc.q
                            int64_t r10_20 = sx.q(*(rsi_2 + 0x30)) * 5
                            
                            if (_mm_bsrli_si128(zmm2_2, 0xc).b != 2)
                                int32_t r8_57 = *(r11_13 + (r10_20 << 2) - 4)
                                int32_t rax_118 = *(r11_13 + (r10_20 << 2) - 8)
                                
                                if (r8_57 s> rax_118)
                                    uint64_t rcx_71 = var_190_1
                                    int32_t r9_23 = r8_57 - rax_118
                                    int32_t var_164_1 = 0
                                    var_318.q = r8_57.q
                                    int32_t zmm4_2 = var_318:4.d
                                    int32_t rax_120
                                    uint64_t zmm1_2
                                    
                                    while (true)
                                        rax_120 = var_190_1:4.d
                                        var_318.q = rcx_71
                                        
                                        if (rax_120 s<= r8_57)
                                            if (rax_120 != r8_57)
                                                break
                                            
                                            if (var_318:4.d.d f<= zmm4_2)
                                                break
                                        
                                        var_318.q = rcx_71
                                        int32_t var_15c_1 = 0
                                        var_328.q = r9_23.q
                                        zmm2_2.d = var_318:4.d.d f- var_328:4.d
                                        zmm1_2.d = zmm2_2.q.d f+ zmm2_2.d
                                        zmm1_2.d = zmm1_2.d f- zmm7_2
                                        int32_t rdx_58 = int.d(zmm1_2.d) s>> 1
                                        int32_t rcx_74 = rdx_58 - r9_23 + rax_120
                                        zmm2_2.d = zmm2_2.d f- _mm_cvtepi32_ps(zx.o(rdx_58)).d
                                        
                                        if (not(zmm2_2.d f>= zmm6_2))
                                            int32_t var_1ac_1 = 0
                                            rcx_71 = rcx_74.q
                                            var_190_1 = rcx_71
                                        else if (zmm2_2.d f>= 0.99999994f)
                                            int32_t var_1ac_3 = 0x3f7fffff
                                            rcx_71 = rcx_74.q
                                            var_190_1 = rcx_71
                                        else
                                            int32_t var_1ac_2 = zmm2_2.d
                                            rcx_71 = rcx_74.q
                                            var_190_1 = rcx_71
                                    
                                    zmm1_2 = var_290.q
                                    int32_t r8_58 = var_290:8.d
                                    uint64_t var_110_1 = zmm1_2
                                    
                                    if (var_290.b != 2)
                                        var_328.q = var_290:4.q
                                        var_318.q = rcx_71
                                        int32_t temp5_1 = var_290:4.d
                                        
                                        if (rax_120 s< temp5_1)
                                        label_141a4942d:
                                            int32_t var_154_1 = 0
                                            int32_t var_108
                                            r8_58 = var_108
                                            zmm1_2 = (*(r11_13 + (r10_20 << 2) - 8)).q
                                        else if (rax_120 == temp5_1
                                                && not(var_318:4.d.d f>= var_328:4.d))
                                            goto label_141a4942d
                                    
                                    var_318:0xc.q = var_190_1
                                    var_318:8.d = r8_58
                                    int32_t var_304_2 = var_280_3:4.d
                                    zmm2_2.q = zmm1_2
                                    var_280_3.q = var_308
                                    uint128_t var_318_2 = zmm2_2
                                    var_290 = zmm2_2
                        
                        int32_t var_2e8_3 = var_280_3.d
                        var_2f8 = zmm2_2
                        sub_141a34710(&var_2d0, &var_268)
                        int32_t var_2b0_3 = rax_3
                        uint32_t var_2ac_4 = rax_4
                        int32_t var_2a8_4 = rax_5
                        uint8_t rdx_61 = var_2a4_1 ^ ((var_23c ^ var_2a4_1) & 0x3f)
                        
                        if (var_258 != 0)
                            sub_140a74f90(var_258)
                        
                        void* rax_128 = *r15_4
                        int32_t r10_21 = var_1f8.d
                        zmm0_2 = *(rax_128 + 0x84)
                        zmm1 = *(rax_128 + 0x74)
                        int32_t rax_129 = var_1f8:4.d
                        
                        if (rax_129 == 0x80000000)
                            rax_129 = (var_2f8:4.q).d
                            
                            if (r10_21 == 0)
                                rax_129 = var_2e8_3
                        
                        int64_t r8_59 = zmm1.q
                        
                        if (r8_59.b != 2)
                            uint32_t rcx_78 = (r8_59 u>> 0x20).d
                            
                            if (rcx_78 s< rax_129 || (rcx_78 s<= rax_129 && r8_59.b == 1))
                                if (zmm1:4.d != rcx_78)
                                    goto label_141a49551
                                
                                goto label_141a49615
                            
                            if (r8_59.b == 1 && rax_129 == rcx_78)
                                goto label_141a49615
                            
                            goto label_141a49551
                        
                    label_141a49615:
                        int64_t rcx_82 = zmm1:8.q
                        
                        if (rcx_82.b == 2)
                        label_141a49551:
                            int64_t rcx_79 = zmm0_2.q
                            int32_t var_2ac_5
                            
                            if (rcx_79.b == 2)
                            label_141a4969d:
                                int64_t r9_28 = zmm0_2:8.q
                                
                                if (r9_28.b != 2)
                                    uint32_t r8_66 = (r9_28 u>> 0x20).d
                                    
                                    if (r8_66 s> rax_129)
                                    label_141a496c0:
                                        
                                        if (zmm0_2:0xc.d == r8_66 && rcx_79.b != 2)
                                            goto label_141a496dc
                                        
                                        var_2ac_5 = 0x80000000
                                        var_2a4_1 = rdx_61 & 0xcf
                                    else if (r8_66 s< rax_129)
                                        if (r9_28.b == 1 && rax_129 == r8_66 && rcx_79.b != 2)
                                            goto label_141a496dc
                                        
                                        var_2ac_5 = 0x80000000
                                        var_2a4_1 = rdx_61 & 0xcf
                                    else
                                        if (r9_28.b == 1)
                                            goto label_141a496c0
                                        
                                        var_2ac_5 = 0x80000000
                                        var_2a4_1 = rdx_61 & 0xcf
                                else if (rcx_79.b == 2)
                                    var_2ac_5 = 0x80000000
                                    var_2a4_1 = rdx_61 & 0xcf
                                else
                                label_141a496dc:
                                    uint32_t var_2ac_7 = (rcx_79 u>> 0x20).d
                                    uint8_t rcx_86 = 0
                                    
                                    if (r10_21 == 1)
                                        rcx_86 = 0x10
                                    
                                    rcx_86 |= rdx_61 & 0xef
                                    var_2a4_1 =
                                        ((not.b(rcx_86 u>> 4) << 5 ^ rcx_86) & 0x20) ^ rcx_86
                            else
                                uint32_t r8_61 = (rcx_79 u>> 0x20).d
                                
                                if (r8_61 s< rax_129 || (r8_61 s<= rax_129 && rcx_79.b == 1))
                                    if (zmm0_2:4.d == r8_61)
                                        goto label_141a4969d
                                    
                                    var_2ac_5 = 0x80000000
                                    var_2a4_1 = rdx_61 & 0xcf
                                else
                                    if (rcx_79.b == 1 && rax_129 == r8_61)
                                        goto label_141a4969d
                                    
                                    var_2ac_5 = 0x80000000
                                    var_2a4_1 = rdx_61 & 0xcf
                        else
                            uint32_t r8_64 = (rcx_82 u>> 0x20).d
                            
                            if (r8_64 s> rax_129 || (r8_64 s>= rax_129 && rcx_82.b == 1))
                                if (zmm1:0xc.d != r8_64 || rcx_82.b == 2)
                                    goto label_141a49551
                            else if (rcx_82.b != 1 || rax_129 != r8_64 || rcx_82.b == 2)
                                goto label_141a49551
                            
                            uint32_t var_2ac_6 = (rcx_82 u>> 0x20).d
                            uint8_t rcx_84 = 0
                            
                            if (r10_21 == 0)
                                rcx_84 = 0x10
                            
                            rcx_84 |= rdx_61 & 0xef
                            var_2a4_1 = ((not.b(rcx_84 u>> 4) << 5 ^ rcx_84) & 0x20) ^ rcx_84
                        
                        int32_t var_2a8_5 = *(*r15_4 + 0x94)
                    
                    char rax_131
                    void* rcx_81
                    void* rdx_62
                    
                    if ((r14_2[0xe].b & 1) != 0)
                        rcx_81 = &r14_2[0xb]
                        rdx_62 = rcx_81
                        rax_131 = *(rcx_81 + 0x30) & 2
                        
                        if (rax_131 == 0)
                            rdx_62 = *rcx_81
                    
                    if ((r14_2[0xe].b & 1) == 0 || (*(rdx_62 + 8) & 8) == 0)
                        uint32_t rcx_87 = zx.d(*(r14_2 + 0x12))
                        
                        if (rcx_87 == 0)
                            rbx_1 = var_298_1
                            sub_141a49890(r14_2, rdi_2, &var_238, 
                                sub_141a2f010(&var_290, &var_2f8), &var_150, rbx_1)
                        else
                            rbx_1 = var_298_1
                            
                            if (rcx_87 == 1)
                                sub_141a49ae0(r14_2, rdi_2, &var_238, &var_2f8, &var_150, rbx_1)
                    else
                        if (rax_131 == 0)
                            rcx_81 = *rcx_81
                        
                        rbx_1 = var_298_1
                        (*(*rcx_81 + 0x30))(rcx_81, r14_2, zx.q(rdi_2), &var_238, &var_2f8, 
                            &var_150, rbx_1)
                else
                    int32_t* r8_54
                    
                    if (r11_12[0xb].d == *(r11_12 + 0x84))
                    label_141a490ce:
                        r8_54 = nullptr
                    else
                        void* r10_18 = &r11_12[0x11]
                        void* r8_51 = *(r10_18 + 8)
                        
                        if (r8_51 != 0)
                            r10_18 = r8_51
                        
                        int32_t rax_102 = *(r10_18 + (((sx.q(r11_12[0x13].d) - 1) & rdx_50) << 2))
                        
                        if (rax_102 == 0xffffffff)
                        label_141a490ce_1:
                            r8_54 = nullptr
                        else
                            while (true)
                                r8_54 = sx.q(rax_102) * 0x108 + r11_12[0xa]
                                
                                if (*r8_54 == rdx_50.d)
                                    break
                                
                                rax_102 = r8_54[0x40]
                                
                                if (rax_102 == 0xffffffff)
                                    goto label_141a490ce_2
                            
                            if (rax_102 == 0xffffffff)
                            label_141a490ce_2:
                                r8_54 = nullptr
                    
                    r14_2 = &r8_54[2]
                    
                    if (r8_54 == 0)
                        r14_2 = nullptr
                    
                    if (r14_2 != 0)
                        goto label_141a490e5
                    
                    rbx_1 = var_298_1
                
                r12_2 += 1
                r14 = arg2
                i_1 = i_2 + 1
                rdi = arg3
                i_2 = i_1
            while (i_1 s< var_1a8[2] + var_1a8[1] + *var_1a8)
        
        result = sub_141a39070(rbx_1, &var_218, arg5)
        r14 = arg2
        r9 = &var_1a8[3]
        rdi = arg3
        rsi = arg1
        var_1a8 = r9
    while (r9 != result_1)

int64_t rcx_93 = var_2c0

if (rcx_93 != 0)
    result = sub_140a74f90(rcx_93)

int64_t rcx_94 = var_1e0

if (rcx_94 == 0)
    return result

return sub_140a74f90(rcx_94)
