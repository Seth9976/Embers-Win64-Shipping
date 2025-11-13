// 函数: sub_141fc5510
// 地址: 0x141fc5510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t r11 = *(arg1 + 0x868)
void* r10 = arg1 + 0x850
void* r13 = arg1
int32_t var_1f8 = 0
int32_t rcx = 0
int32_t var_1f4 = 1
int64_t rdi = arg3
void* var_1f0 = r10
int32_t r9 = 0
int32_t var_1e8 = 0xffffffff
int32_t var_1e4 = 0
int32_t var_1e0 = 0

if (r11 != 0)
    void* rax_2 = *(r10 + 0x10)
    
    if (rax_2 != 0)
        r10 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r10
    int32_t var_1e4_2
    
    if (rdx_2 != 0)
    label_141fc55d8:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_1f4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_1e4_1 = rcx - rax_10 + 0x1f
        
        if (rcx - rax_10 + 0x1f s> r11)
            var_1e4_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            int32_t var_1e0_1 = rcx
            var_1f8 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10 + (rdx_3 << 2) + 4)
            var_1e8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141fc55d8
        
        var_1e4_2 = r11

double zmm4[0x2] = var_1e8.o
int64_t* var_50 = arg1 + 0x840
double var_1b0 = zmm4[0]
int128_t var_1c0 = var_1f8.o
int16_t var_150 = 0
int128_t zmm3 = var_1c0
void* result = zmm3.q
int128_t var_178 = zmm3
int128_t var_188 = (arg1 + 0x840).o
double rcx_2 = zmm4[0]
int128_t zmm0
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
int128_t var_58_1 = zmm0

if ((rcx_2 u>> 0x20).d s< *(result + 0x18))
    int32_t i = var_178:0xc.d
    void* r9_1 = r13 + 0x7a0
    
    do
        void** rsi_1 = var_188.q
        int64_t* r15_1 = sx.q(i) * 0xc8
        void var_148
        
        if (*sub_140960120(r9_1, &var_148, *rsi_1 + r15_1) == 0xffffffff)
            void* r12_1 = *rsi_1
            
            if (rdi == 0 || *(r12_1 + r15_1 + 0x48) == rdi)
                if (*(r13 + 0xe28) == 0)
                label_141fc57c0:
                    int32_t var_248_1 = 0
                    int64_t* rax_20 = sub_140d2f0c0(sub_142452380(), *(r12_1 + r15_1 + 0x48), 
                        *(r12_1 + r15_1 + 0x10), 0, 0, 0)
                    
                    if (rax_20 != 0)
                        (*(*rax_20 + 0x138))(rax_20, 0, sub_140cde0b0(), 0x11)
                    
                    int64_t var_f8
                    sub_142427eb0(&var_f8)
                    char var_cf
                    char rcx_21 = var_cf | 2
                    int64_t var_f0_1 = *(r12_1 + r15_1 + 0x18)
                    char var_cf_1 = rcx_21
                    char var_d0_1 = 1
                    var_f8 = *(r12_1 + r15_1 + 0x10)
                    var_cf = rcx_21 | 4
                    int64_t var_d8_1 = *(r12_1 + r15_1 + 0x48)
                    float var_c8[0x4]
                    sub_140ade170(r12_1 + 0x2c + r15_1, &var_c8)
                    void* rcx_24 = *(r13 + 0x140)
                    uint128_t var_78 = var_c8
                    float var_68_1[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(*(r12_1 + r15_1 + 0x20), *(r12_1 + r15_1 + 0x28)), 
                        _mm_unpacklo_ps(*(r12_1 + r15_1 + 0x24), 0)[0].q)
                    float var_58_2[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(*(r12_1 + r15_1 + 0x38), (*(r12_1 + r15_1 + 0x40))[0].q), 
                        _mm_unpacklo_ps(*(r12_1 + r15_1 + 0x3c), (zx.o(0)).q)[0].q)
                    void* rax_26 =
                        sub_1420efba0(rcx_24, *(*(r12_1 + r15_1 + 0x18) + 0x10), &var_78, &var_f8)
                    int64_t* r14_1 = rax_26
                    
                    if (rax_26 != 0)
                        void* rbx_3 = *rsi_1
                        int64_t var_b8
                        int64_t* rax_27 = sub_140d21830(rax_26, &var_b8, 0, 0)
                        int16_t* rdx_14
                        
                        if (*(r15_1 + rbx_3 + 8) == 0)
                            rdx_14 = &data_142d40450
                        else
                            rdx_14 = *(r15_1 + rbx_3)
                        
                        int16_t* const rcx_26
                        
                        if (rax_27[1].d == 0)
                            rcx_26 = &data_142d40450
                        else
                            rcx_26 = *rax_27
                        
                        sub_140a54510(rcx_26, rdx_14)
                        int64_t rcx_27 = var_b8
                        
                        if (rcx_27 != 0)
                            sub_140a74f90(rcx_27)
                        
                        int64_t* j = *(r12_1 + r15_1 + 0xb0)
                        rbx_3.b = 1
                        char var_238_1 = 1
                        
                        for (; j != &j[sx.q(*(r12_1 + r15_1 + 0xb8))]; j = &j[1])
                            if (*j == 0)
                                rbx_3.b = 0
                                var_238_1 = 0
                                break
                        
                        void* var_118
                        sub_142168ae0(r13, &var_118, r14_1[2])
                        int64_t* rdi_3 = *(r12_1 + r15_1 + 0x50)
                        
                        if (rdi_3 != 0)
                            rdi_3 = *rdi_3
                        
                        void* rcx_29 = var_118
                        char var_258_1
                        
                        if (rcx_29 != 0 && rdi_3 != 0 && rbx_3.b != 0)
                            char rbx_4 = r14_1[0x1e].b
                            var_258_1.q = *rdi_3
                            sub_1422b29e0(rcx_29, &rdi_3[0xe], 0, r14_1, var_258_1)
                            sub_141dd9000(r14_1, rbx_4)
                        
                        r14_1[0xb].b |= 2
                        sub_1420274d0(r14_1, &var_78)
                        
                        if (r14_1[0x1e].b == 3)
                            sub_141dd9f90(r14_1)
                        
                        void* rcx_33 = var_118
                        
                        if (rcx_33 != 0 && rdi_3 != 0 && rdi_3[0xf].d s> 0)
                            sub_1422bd9b0(rcx_33, rdi_3, r14_1)
                            (*(*r14_1 + 0x1e8))(r14_1)
                        
                        int32_t rcx_35 = 0
                        int32_t var_21c_1 = 1
                        void* rsi_2 = &r14_1[0x34]
                        int32_t var_220_1 = 0
                        int32_t r11_1 = *(rsi_2 + 0x28)
                        void* r13_1 = rsi_2 + 0x10
                        int32_t r8_9 = 0
                        void* var_228_1 = rsi_2
                        void* var_218_1 = r13_1
                        int32_t var_210_1 = 0xffffffff
                        int64_t var_20c_1 = 0
                        
                        if (r11_1 != 0)
                            void* rax_31 = *(r13_1 + 0x10)
                            void* r9_4 = r13_1
                            
                            if (rax_31 != 0)
                                r9_4 = rax_31
                            
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(r11_1 - 1)
                            int32_t rdx_23 = *r9_4
                            
                            if (rdx_23 != 0)
                            label_141fc5abb:
                                int32_t rax_38 = neg.d(rdx_23) & rdx_23
                                uint64_t rflags_2
                                int32_t temp0_10
                                temp0_10, rflags_2 = _bit_scan_reverse(rax_38)
                                int32_t var_21c_2 = rax_38
                                int32_t rax_39
                                
                                if (rax_38 == 0)
                                    rax_39 = 0x20
                                else
                                    rax_39 = 0x1f - temp0_10
                                
                                var_20c_1.d = r8_9 - rax_39 + 0x1f
                                
                                if (r8_9 - rax_39 + 0x1f s> r11_1)
                                    var_20c_1.d = r11_1
                            else
                                while (true)
                                    int64_t rdx_24 = sx.q(rcx_35)
                                    r8_9 += 0x20
                                    rcx_35 += 1
                                    var_20c_1:4.d = r8_9
                                    var_220_1 = rcx_35
                                    
                                    if (rdx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_23 = *(r9_4 + (rdx_24 << 2) + 4)
                                    int32_t var_210_2 = 0xffffffff
                                    
                                    if (rdx_23 != 0)
                                        goto label_141fc5abb
                                
                                var_20c_1.d = r11_1
                        
                        int32_t rdx_25 = *(rsi_2 + 0x28)
                        int128_t var_90_1 = 0xffffffff
                        int32_t rbx_5 = 0xffffffff << (rdx_25.b & 0x1f)
                        int128_t var_a0_1 = var_220_1.o
                        int32_t r8_12 = rdx_25 s>> 5
                        int32_t r9_6 = rdx_25 & 0xffffffe0
                        var_1b0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                        int32_t var_210_3 = rbx_5
                        var_20c_1.d = rdx_25
                        int64_t* var_1c8
                        var_1c8.o = rsi_2.o
                        var_1c0 = var_a0_1
                        
                        if (rdx_25 != r11_1)
                            void* rax_41 = *(r13_1 + 0x10)
                            void* r10_1 = r13_1
                            
                            if (rax_41 != 0)
                                r10_1 = rax_41
                            
                            int32_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(r11_1 - 1)
                            int32_t rdx_29 = *(r10_1 + (sx.q(r8_12) << 2)) & rbx_5
                            
                            if (rdx_29 != 0)
                            label_141fc5ba3:
                                int32_t rax_48 = neg.d(rdx_29) & rdx_29
                                uint64_t rflags_3
                                int32_t temp0_12
                                temp0_12, rflags_3 = _bit_scan_reverse(rax_48)
                                int32_t rax_49
                                
                                if (rax_48 == 0)
                                    rax_49 = 0x20
                                else
                                    rax_49 = 0x1f - temp0_12
                                
                                var_20c_1.d = r9_6 - rax_49 + 0x1f
                                
                                if (r9_6 - rax_49 + 0x1f s> r11_1)
                                    var_20c_1.d = r11_1
                            else
                                while (true)
                                    int64_t rcx_40 = sx.q(r8_12)
                                    r9_6 += 0x20
                                    r8_12 += 1
                                    
                                    if (rcx_40.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_29 = *(r10_1 + (rcx_40 << 2) + 4)
                                    var_210_3 = 0xffffffff
                                    
                                    if (rdx_29 != 0)
                                        goto label_141fc5ba3
                                
                                var_20c_1.d = r11_1
                        
                        while (true)
                            int64_t rcx_42 = sx.q(var_1b0:4.d)
                            
                            if (rcx_42.d == (var_210_3.q u>> 0x20).d && var_1c0:8.q == r13_1
                                    && var_1c8 == rsi_2)
                                break
                            
                            int64_t* rdi_4 = *(*var_1c8 + rcx_42 * 0x10)
                            
                            if (rdi_4 != 0)
                                void* var_1a0
                                sub_142168ae0(arg1, &var_1a0, rdi_4[2])
                                
                                if (var_1a0 != 0 && var_238_1 != 0)
                                    void* rbx_6 = r12_1 + r15_1
                                    int32_t var_1fc
                                    sub_140926e00(rbx_6 + 0x60, &var_1fc, 
                                        sub_140d21830(rdi_4, &var_1f8, 0, 0))
                                    int64_t rax_54 = sx.q(var_1fc)
                                    void* rbx_7
                                    
                                    if (rax_54.d != 0xffffffff)
                                        rbx_7 = *(rbx_6 + 0x60) + rax_54 * 0x28
                                    
                                    int64_t* rbx_8
                                    int64_t** rsi_3
                                    
                                    if (rax_54.d == 0xffffffff || rbx_7 == 0)
                                        rsi_3 = nullptr
                                        rbx_8 = nullptr
                                    else
                                        rsi_3 = *(rbx_7 + 0x10)
                                        rbx_8 = *(rbx_7 + 0x18)
                                        
                                        if (rbx_8 != 0)
                                            rbx_8[1].d += 1
                                    
                                    int64_t rcx_47 = var_1f8.q
                                    
                                    if (rcx_47 != 0)
                                        sub_140a74f90(rcx_47)
                                    
                                    if (rsi_3 != 0)
                                        int64_t* rsi_4 = *rsi_3
                                        
                                        if (rsi_4 != 0)
                                            var_258_1.q = *rsi_4
                                            sub_1422b29e0(var_1a0, &rsi_4[0xe], 0, rdi_4, var_258_1)
                                            
                                            if (rsi_4[0xf].d s> 0)
                                                sub_1422bd9b0(var_1a0, rsi_4, rdi_4)
                                                (*(*rdi_4 + 0x1e8))(rdi_4)
                                    
                                    if (rbx_8 != 0)
                                        rbx_8[1].d -= 1
                                        
                                        if (rbx_8[1].d == 1)
                                            (**rbx_8)(rbx_8)
                                            int32_t temp11_1 = *(rbx_8 + 0xc)
                                            *(rbx_8 + 0xc) -= 1
                                            
                                            if (temp11_1 == 1)
                                                (*(*rbx_8 + 8))(rbx_8, 1)
                                    
                                    rsi_2 = var_228_1
                                
                                int64_t* var_198
                                
                                if (var_198 != 0)
                                    var_198[1].d -= 1
                                    
                                    if (var_198[1].d == 1)
                                        (**var_198)(var_198)
                                        int32_t temp7_1 = *(var_198 + 0xc)
                                        *(var_198 + 0xc) -= 1
                                        
                                        if (temp7_1 == 1)
                                            (*(*var_198 + 8))(var_198, 1)
                            
                            var_1b0.d &= not.d(var_1c0:4.d)
                            sub_14059bdd0(&var_1c0)
                        
                        int64_t rbx_10 = sx.q(arg2[1].d)
                        int32_t rax_64 = (rbx_10 + 1).d
                        arg2[1].d = rax_64
                        
                        if (rax_64 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rbx_10 << 3)) = rax_26
                        int64_t* var_110
                        
                        if (var_110 != 0)
                            var_110[1].d -= 1
                            
                            if (var_110[1].d == 1)
                                (**var_110)(var_110)
                                int32_t temp9_1 = *(var_110 + 0xc)
                                *(var_110 + 0xc) -= 1
                                
                                if (temp9_1 == 1)
                                    (*(*var_110 + 8))(var_110, 1)
                        
                        r13 = arg1
                    
                    sub_141fc39c0(zmm0:8.q, var_178:0xc.d)
                    rdi = arg3
                    var_150.b = 1
                else
                    int64_t var_140 = *(sub_140d21d80(*(r12_1 + r15_1 + 0x48)) + 0x18)
                    int64_t var_108
                    sub_140b63b70(&var_140, &var_108)
                    int64_t var_1d8
                    sub_142441630(&var_1d8, &var_108)
                    int64_t rcx_9 = var_108
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    void var_144
                    
                    if (*sub_14062d5f0(r13 + 0xd70, &var_144, &var_1d8) != 0xffffffff)
                        int32_t var_200
                        sub_14062d5f0(r13 + 0xd70, &var_200, &var_1d8)
                        int64_t rax_16 = sx.q(var_200)
                        void* const rcx_15
                        
                        if (rax_16.d == 0xffffffff)
                            rcx_15 = nullptr
                        else
                            rcx_15 = (rax_16 << 5) + *(r13 + 0xd70)
                        
                        int64_t rcx_17 = var_1d8
                        
                        if (*(*(r13 + 0xd60) + sx.q(*(rcx_15 + 0x10)) * 0x18 + 0x14) != 0)
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                            
                            goto label_141fc57c0
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                    else
                        int64_t rcx_11 = var_1d8
                        
                        if (rcx_11 != 0)
                            sub_140a74f90(rcx_11)
        
        var_178:8.d &= not.d(var_188:0xc.d)
        sub_14059bdd0(&var_188:8)
        result = var_178.q
        r9_1 = r13 + 0x7a0
        i = var_178:0xc.d
    while (i s< *(result + 0x18))
    
    if (var_150.b != 0 && var_150:1.b != 0)
        result = sub_141fab340(arg1 + 0x840, *(arg1 + 0x848) - *(arg1 + 0x874), 1)

__security_check_cookie(rax_1 ^ &var_278)
return result
