// 函数: sub_141f9a890
// 地址: 0x141f9a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
uint64_t result = zx.q(arg2[5].b)
int32_t var_2d4
int32_t var_2c8
void* var_2c0
double var_280[0x2]
void* var_248
void* var_220

if ((result.b & 1) != 0)
    int512_t zmm1_1 = sub_141f7a100(&var_220, arg1)
    int64_t* rcx_2 = arg2[1]
    int32_t* rdx_1 = *rcx_2
    
    if (&rdx_1[1] u> rcx_2[1])
        int32_t* rdx_2 = &var_2d4
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_2, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        var_2d4 = *rdx_1
        *rcx_2 += 4
    
    int32_t rax_6
    int128_t zmm6_1
    rax_6, zmm6_1 = sub_140b4e7c0(arg2, &data_1439a94d8)
    uint64_t rdi
    rdi.b = rax_6 s< 0x17
    void* r14_1 = nullptr
    char var_2d8_1 = rdi.b
    
    if (rax_6 s>= 0x17)
        int64_t* rcx_5 = arg2[1]
        char* r8_1 = *rcx_5
        
        if (&r8_1[1] u> rcx_5[1])
            (*(*arg2 + 0x150))(arg2, arg1 + 0x98, 1)
        else
            *(arg1 + 0x98) = *r8_1
            int64_t* rax_10 = arg2[1]
            *rax_10 += 1
    else
        char rax_7 = 0
        
        if (var_2d4 s> 0)
            rax_7 = 2
        
        *(arg1 + 0x98) = rax_7
    
    void* rsi_1 = arg1 + 0x30
    int32_t rbx_1 = var_2d4
    void* var_200_1 = rsi_1
    
    if (rbx_1 s> *(arg1 + 0x38) - *(rsi_1 + 0x34))
        sub_1409d93a0(rsi_1, rbx_1)
        int32_t rdx_6
        
        if (rbx_1 u< 4)
            rdx_6 = 1
        else
            uint32_t rbx_2 = rbx_1 u>> 1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
            int32_t rcx_8
            
            if (rbx_2 == 0xfffffff8)
                rcx_8 = 0x20
            else
                rcx_8 = 0x1f - temp0_1
            
            int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
            char rdx_5
            
            if (rcx_10 == 0)
                rdx_5 = 0x20
            else
                rdx_5 = 0x1f - temp0_2
            
            rdx_6 = 1 << ((not.d(rcx_10)).b & (0x20 - rdx_5))
        
        int32_t rax_17 = *(rsi_1 + 0x48)
        
        if (rax_17 == 0 || rax_17 s< rdx_6)
            *(rsi_1 + 0x48) = rdx_6
            sub_1405c1850(rsi_1)
    
    int32_t var_2d0 = 0
    int64_t* var_288
    void*** var_250
    int64_t var_218
    int64_t var_210
    uint64_t var_208
    int128_t zmm7
    
    if (var_2d4 s> 0)
        while (true)
            int64_t rax_18 = *arg2
            var_288 = nullptr
            (*(rax_18 + 0x140))(arg2, &var_288)
            void** var_1f0
            
            if (*(arg1 + 0x98) != 1)
                void*** rax_25 = j_sub_140a82f30(0x80)
                void*** r12_2 = rax_25
                
                if (rax_25 == 0)
                    r12_2 = nullptr
                else
                    memset(&rax_25[2], 0, 0x70)
                    void* rcx_23 = &r12_2[3]
                    *r12_2 = &data_142d6a040
                    r12_2[1] = 0
                    r12_2[2] = 0
                    *(rcx_23 + 0x10) = 0
                    *(rcx_23 + 0x18) = 0
                    *(rcx_23 + 0x1c) = 0x80
                    void* rax_26 = *(rcx_23 + 0x10)
                    
                    if (rax_26 != 0)
                        rcx_23 = rax_26
                    
                    *rcx_23 = 0
                    *(rcx_23 + 8) = 0
                    r12_2[7].d = 0xffffffff
                    *(r12_2 + 0x3c) = 0
                    r12_2[9] = 0
                    r12_2[0xa].d = 0
                    r12_2[0xb] = 0
                    r12_2[0xc] = 0
                    r12_2[0xd].d = 0x7f7fffff
                    *(r12_2 + 0x6c) = 0x404
                    *r12_2 = &data_142da7f70
                    r12_2[0xe] = 0
                    r12_2[0xf] = 0
                
                int64_t rax_27 = sub_142585510()
                int64_t* rax_28
                int512_t zmm1_4
                rax_28, zmm1_4, zmm6_1 = sub_142585510()
                void var_1f8
                int64_t rdx_15 = (*(*rax_28 + 0x290))(rax_28, 
                    *SymBuffer::end(sub_140b4cb20(&var_1f0, arg2), &var_1f8), r12_2, rax_27, 0, 0, 
                    var_2d8_1)
                sub_140b4cbb0(&var_1f0)
                
                if (data_143a2d8b4 s> 0)
                    int32_t r9_5 = r12_2[0xf].d
                    
                    if (r9_5 s>= 3)
                        zmm1_4.o = zx.o(0)
                        zmm6_1, zmm7 = sub_141f96c90(r12_2, rdx_15, 0, r9_5 - 1)
                
                var_250 = r12_2
                var_2c8.q = &var_288
                rsi_1 = arg1 + 0x30
                var_2c0 = &var_250
                sub_140bbe950(rsi_1, &var_210, &var_2c8, nullptr)
                rdi = zx.q(var_2d8_1)
                
                if (rdi.b != 0)
                    int64_t rax_31 = sx.q(r12_2[0xf].d)
                    
                    if (rax_31.d s> 0)
                        char* rcx_30 = r12_2[0xe]
                        char r8_7 = *rcx_30
                        void* rdx_18 = rax_31 * 0x1c + rcx_30
                        
                        if (rcx_30 != rdx_18)
                            while (true)
                                char rax_32 = *rcx_30
                                
                                if (rax_32 == 2 || rax_32 != r8_7)
                                    rdi.b = 0
                                    var_2d8_1 = 0
                                    break
                                
                                rcx_30 = &rcx_30[0x1c]
                                
                                if (rcx_30 == rdx_18)
                                    break
                                
                                continue
            else
                void*** rax_19 = j_sub_140a82f30(0x88)
                void*** r12_1 = rax_19
                
                if (rax_19 == 0)
                    r12_1 = nullptr
                else
                    int64_t* rcx_15 = &r12_1[3]
                    *r12_1 = &data_142d6a040
                    r12_1[1] = 0
                    r12_1[2] = 0
                    rcx_15[2] = 0
                    rcx_15[3].d = 0
                    *(rcx_15 + 0x1c) = 0x80
                    int64_t* rax_20 = rcx_15[2]
                    
                    if (rax_20 != 0)
                        rcx_15 = rax_20
                    
                    *rcx_15 = 0
                    rcx_15[1] = 0
                    r12_1[7].d = 0xffffffff
                    *(r12_1 + 0x3c) = 0
                    r12_1[9] = 0
                    r12_1[0xa].d = 0
                    r12_1[0xb] = 0
                    r12_1[0xc] = 0
                    r12_1[0xd].d = 0x7f7fffff
                    *(r12_1 + 0x6c) = 0x404
                    *r12_1 = &data_1432848c8
                    r12_1[0xe].b = 0
                    r12_1[0xf] = 0
                    r12_1[0x10] = 0
                
                int64_t rax_21 = sub_14258de10()
                int64_t* rax_22
                rax_22, zmm6_1 = sub_14258de10()
                (*(*rax_22 + 0x290))(rax_22, 
                    *SymBuffer::end(sub_140b4cb20(&var_1f0, arg2), &var_208), r12_1, rax_21, 0, 0, 
                    var_2d8_1)
                sub_140b4cbb0(&var_1f0)
                
                if (data_143a2d8b4 s> 0)
                    int32_t r9_2 = r12_1[0x10].d
                    
                    if (r9_2 s>= 3)
                        zmm6_1, zmm7 = sub_141f97360(r12_1, zx.o(0), 0, r9_2 - 1)
                
                var_250 = r12_1
                var_248 = &var_288
                rsi_1 = arg1 + 0x30
                int128_t var_240
                var_240.q = &var_250
                sub_140bbe950(rsi_1, &var_218, &var_248, nullptr)
                rdi = zx.q(var_2d8_1)
            bool cond:12_1 = var_2d0 + 1 s< var_2d4
            var_2d0 += 1
            
            if (not(cond:12_1))
                break
    
    if (rdi.b != 0)
        void* r15_1 = rsi_1 + 0x10
        int32_t rcx_31 = 0
        int128_t var_48_1 = zmm6_1
        int128_t var_58_1 = zmm7
        int32_t rax_34
        rax_34.b = *(arg1 + 0x38) - *(arg1 + 0x64) s> 0
        var_2c8 = 0
        *(arg1 + 0x98) = rax_34.b
        int32_t r8_8 = 0
        int32_t r11_1 = *(r15_1 + 0x18)
        int32_t var_2c4_1 = 1
        var_2c0 = r15_1
        int32_t var_2b8_1 = 0xffffffff
        int64_t var_2b4_1 = 0
        
        if (r11_1 != 0)
            void* rax_35 = *(r15_1 + 0x10)
            void* r9_7 = r15_1
            
            if (rax_35 != 0)
                r9_7 = rax_35
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_21 = *r9_7
            
            if (rdx_21 != 0)
            label_141f9ae27:
                int32_t rax_42 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_3
                int32_t temp0_3
                temp0_3, rflags_3 = _bit_scan_reverse(rax_42)
                int32_t var_2c4_2 = rax_42
                int32_t rax_43
                
                if (rax_42 == 0)
                    rax_43 = 0x20
                else
                    rax_43 = 0x1f - temp0_3
                
                var_2b4_1.d = r8_8 - rax_43 + 0x1f
                
                if (r8_8 - rax_43 + 0x1f s> r11_1)
                    var_2b4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_22 = sx.q(rcx_31)
                    r8_8 += 0x20
                    rcx_31 += 1
                    var_2b4_1:4.d = r8_8
                    var_2c8 = rcx_31
                    
                    if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r9_7 + (rdx_22 << 2) + 4)
                    var_2b8_1 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_141f9ae27
                
                var_2b4_1.d = r11_1
        
        int32_t rdx_23 = *(rsi_1 + 0x28)
        double zmm0_2[0x2] = var_2c8.o
        var_248 = rsi_1
        double zmm2_2[0x2] = var_2b8_1.o
        double var_240_1[0x2] = zmm0_2
        int32_t rsi_4 = 0xffffffff << (rdx_23.b & 0x1f)
        zmm0_2 = var_248.o
        int32_t r8_11 = rdx_23 s>> 5
        int32_t r9_9 = rdx_23 & 0xffffffe0
        double var_230_1[0x2] = zmm2_2
        int64_t var_260_1 = (_mm_unpackhi_pd(zmm2_2, zmm2_2[0])).q
        var_240_1[1].d = rsi_4
        var_240_1[1]:4.d = rdx_23
        var_280 = zmm0_2
        
        if (rdx_23 != r11_1)
            void* rax_45 = *(r15_1 + 0x10)
            void* r10_1 = r15_1
            
            if (rax_45 != 0)
                r10_1 = rax_45
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_27 = *(r10_1 + (sx.q(r8_11) << 2)) & rsi_4
            
            if (rdx_27 != 0)
            label_141f9aeee:
                int32_t rax_52 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_4
                int32_t temp0_5
                temp0_5, rflags_4 = _bit_scan_reverse(rax_52)
                int32_t r12_3
                
                if (rax_52 == 0)
                    r12_3 = 0x20
                else
                    r12_3 = 0x1f - temp0_5
                
                var_240_1[1]:4.d = r9_9 - r12_3 + 0x1f
                
                if (r9_9 - r12_3 + 0x1f s> r11_1)
                    var_240_1[1]:4.d = r11_1
            else
                while (true)
                    int64_t rcx_36 = sx.q(r8_11)
                    r9_9 += 0x20
                    r8_11 += 1
                    
                    if (rcx_36.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_27 = *(r10_1 + (rcx_36 << 2) + 4)
                    var_240_1[1].d = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_141f9aeee
                
                var_240_1[1]:4.d = r11_1
        
        uint64_t rdx_29 = var_240_1[1] u>> 0x20
        var_208 = rdx_29
        
        while (true)
            int64_t rax_54 = sx.q(var_240_1[1]:4.d)
            int64_t* rcx_38 = var_280[0]
            
            if (rax_54.d == rdx_29.d && var_240_1[0] == r15_1 && rcx_38 == var_200_1)
                break
            
            int64_t rdi_3 = *rcx_38
            int64_t rbx_8 = rax_54 * 3
            var_210 = rbx_8
            var_218 = rdi_3
            void*** rax_55 = j_sub_140a82f30(0x88)
            void*** rsi_5 = rax_55
            
            if (rax_55 == 0)
                rsi_5 = nullptr
            else
                int64_t* rcx_39 = &rsi_5[3]
                *rsi_5 = &data_142d6a040
                rsi_5[1] = 0
                rsi_5[2] = 0
                rcx_39[2] = 0
                rcx_39[3].d = 0
                *(rcx_39 + 0x1c) = 0x80
                int64_t* rax_56 = rcx_39[2]
                
                if (rax_56 != 0)
                    rcx_39 = rax_56
                
                *rcx_39 = 0
                rcx_39[1] = 0
                rsi_5[7].d = 0xffffffff
                *(rsi_5 + 0x3c) = 0
                rsi_5[9] = 0
                rsi_5[0xa].d = 0
                rsi_5[0xb] = 0
                rsi_5[0xc] = 0
                rsi_5[0xd].d = 0x7f7fffff
                *(rsi_5 + 0x6c) = 0x404
                *rsi_5 = &data_1432848c8
                rsi_5[0xe].b = 0
                rsi_5[0xf] = 0
                rsi_5[0x10] = 0
            
            int64_t* r8_12 = *(rdi_3 + (rbx_8 << 3) + 8)
            var_288 = r8_12
            int32_t rcx_40 = r8_12[0xf].d
            
            if (rcx_40 s> 0)
                char rdx_30 = *r8_12[0xe]
                
                if (rdx_30 != 2)
                    rsi_5[0xe].b = rdx_30
                    rcx_40 = r8_12[0xf].d
                
                void* r13_1 = r8_12[0xe]
                void*** rax_60 = sx.q(rcx_40) * 0x1c + r13_1
                var_250 = rax_60
                
                if (r13_1 != rax_60)
                    do
                        int32_t rbx_9 = 0
                        int32_t rcx_41 = rsi_5[0x10].d
                        int32_t rax_62 = data_143a2d8ec + 1
                        zmm7 = *(r13_1 + 8)
                        int64_t rdi_4 = 0
                        zmm6_1 = *(r13_1 + 4)
                        data_143a2d8ec = rax_62
                        var_2d0 = rax_62
                        
                        if (rcx_41 s> 0)
                            int32_t* rax_63 = rsi_5[0xf]
                            
                            while (not(zmm6_1.d f<= *rax_63))
                                rbx_9 += 1
                                rdi_4 += 1
                                rax_63 = &rax_63[2]
                                
                                if (rbx_9 s>= rcx_41)
                                    break
                        
                        rsi_5[0x10].d = rcx_41 + 1
                        
                        if (rcx_41 + 1 s> *(rsi_5 + 0x84))
                            sub_1405a4d70(&rsi_5[0xf])
                        
                        int64_t rdx_32 = &rsi_5[0xf][sx.q(rbx_9)]
                        memmove(rdx_32 + 8, rdx_32, (rcx_41 - rbx_9) << 3)
                        int64_t rax_66 = rsi_5[0xf]
                        *(rax_66 + (rdi_4 << 3)) = zmm6_1.d
                        *(rax_66 + (rdi_4 << 3) + 4) = zmm7.d
                        sub_141f7f180(&rsi_5[1], &var_2d0, rbx_9)
                        r13_1 += 0x1c
                    while (r13_1 != var_250)
                    
                    r8_12 = var_288
                    rbx_8 = var_210
                    rdi_3 = var_218
                    r15_1 = var_2c0
            
            if (r8_12 != 0)
                (**r8_12)(r8_12, 1)
            
            int32_t rax_69 = not.d(var_280[1]:4.d)
            *(rdi_3 + (rbx_8 << 3) + 8) = rsi_5
            var_240_1[1].d &= rax_69
            sub_14059bdd0(&var_280[1])
            rdx_29 = var_208
    
    EnterCriticalSection(&data_143f3c8d0)
    void* rbx_10 = var_220
    sub_140865c40(&data_143a2db70, &var_2d0, rbx_10)
    int64_t rax_70 = sx.q(var_2d0)
    
    if (rax_70.d != 0xffffffff)
        r14_1 = data_143a2db70 + rax_70 * 0x18
    
    int32_t temp3_1 = *(r14_1 + 8)
    *(r14_1 + 8) -= 1
    
    if (temp3_1 == 1)
        sub_140599090(rbx_10 + 0x80)
        sub_140868c90(&data_143a2db70, rbx_10)
    
    result = LeaveCriticalSection(&data_143f3c8d0)
else
    uint128_t zmm0_1
    
    if ((result.b & 2) != 0)
        int64_t* rcx_51 = arg2[1]
        var_2d4 = *(arg1 + 0x38) - *(arg1 + 0x64)
        int32_t* rdx_37 = *rcx_51
        
        if (&rdx_37[1] u> rcx_51[1])
            int32_t* rdx_38 = &var_2d4
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_38, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_38, 4)
        else
            var_2d4 = *rdx_37
            *rcx_51 += 4
        
        int64_t* rcx_53 = arg2[1]
        char* rdx_39 = *rcx_53
        
        if (&rdx_39[1] u> rcx_53[1])
            (*(*arg2 + 0x150))(arg2, arg1 + 0x98, 1)
        else
            *(arg1 + 0x98) = *rdx_39
            int64_t* rax_79 = arg2[1]
            *rax_79 += 1
        
        int32_t var_2c4_3 = 1
        int64_t var_2b4_2 = 0
        int32_t r11_2 = *(arg1 + 0x58)
        void* r9_11 = arg1 + 0x40
        var_2c0 = r9_11
        int32_t rcx_55 = 0
        var_2c8 = 0
        int32_t var_2b8_2 = 0xffffffff
        int32_t r8_17 = 0
        
        if (r11_2 != 0)
            void* rax_81 = *(r9_11 + 0x10)
            
            if (rax_81 != 0)
                r9_11 = rax_81
            
            int32_t temp0_6
            int32_t temp1_1
            temp0_6:temp1_1 = sx.q(r11_2 - 1)
            int32_t rdx_43 = *r9_11
            
            if (rdx_43 != 0)
            label_141f9b2c7:
                int32_t rax_88 = neg.d(rdx_43) & rdx_43
                uint64_t rflags_5
                int32_t temp0_7
                temp0_7, rflags_5 = _bit_scan_reverse(rax_88)
                int32_t var_2c4_4 = rax_88
                int32_t rax_89
                
                if (rax_88 == 0)
                    rax_89 = 0x20
                else
                    rax_89 = 0x1f - temp0_7
                
                var_2b4_2.d = r8_17 - rax_89 + 0x1f
                
                if (r8_17 - rax_89 + 0x1f s> r11_2)
                    var_2b4_2.d = r11_2
            else
                while (true)
                    int64_t rdx_44 = sx.q(rcx_55)
                    r8_17 += 0x20
                    rcx_55 += 1
                    var_2b4_2:4.d = r8_17
                    var_2c8 = rcx_55
                    
                    if (rdx_44.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                        break
                    
                    rdx_43 = *(r9_11 + (rdx_44 << 2) + 4)
                    var_2b8_2 = 0xffffffff
                    
                    if (rdx_43 != 0)
                        goto label_141f9b2c7
                
                var_2b4_2.d = r11_2
        
        int128_t zmm4_1 = var_2b8_2.o
        int64_t* var_258_1 = arg1 + 0x30
        zmm0_1 = var_2c8.o
        var_280[0] = arg1 + 0x30
        var_280 = zmm0_1
        int16_t var_290_1 = 0
        result = zmm4_1.q
        var_2b8_2.o = zmm4_1
        zmm1.o = zmm4_1
        var_2c8.o = var_280
        zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm4_1.q)
        zmm0_1.q = (zmm1.o).q
        uint128_t var_2a8_1 = zmm0_1
        
        if ((zmm4_1.q u>> 0x20).d s< *(result + 0x18))
            int32_t i_1
            int32_t i = i_1
            
            do
                int64_t* rdi_5 = var_2c8.q
                int64_t rbx_11 = sx.q(i) * 3
                int64_t rax_93 = *arg2
                var_220 = *(*rdi_5 + (rbx_11 << 3))
                (*(rax_93 + 0x140))(arg2, &var_220)
                int64_t rbx_12 = *(*rdi_5 + (rbx_11 << 3) + 8)
                int64_t* rax_96
                int64_t rdi_6
                
                if (*(arg1 + 0x98) != 1)
                    rdi_6 = sub_142585510()
                    rax_96 = sub_142585510()
                else
                    rdi_6 = sub_14258de10()
                    rax_96 = sub_14258de10()
                
                sub_140776930(rax_96, arg2, rbx_12, rdi_6, 0, 0)
                var_2b4_2:4.d &= not.d(var_2c0:4.d)
                sub_14059bdd0(&var_2c0)
                result = var_2b8_2.q
                i = i_1
            while (i s< *(result + 0x18))
            
            if (var_290_1.b != 0 && var_290_1:1.b != 0)
                result = sub_1405b6730(arg1 + 0x30, *(arg1 + 0x38) - *(arg1 + 0x64), 1)
    else if (*(arg2 + 0x2a) s< 0)
        int64_t r9_13 = *arg2
        (*(r9_13 + 8))(arg2, sx.q(*(arg1 + 0x38)) * 0x18, sx.q(*(arg1 + 0x3c)) * 0x18, r9_13)
        int64_t r9_14 = *arg2
        (*(r9_14 + 8))(arg2, zx.q(*(arg1 + 0x58) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0x5c) + 0x1f) u>> 5 << 2, r9_14)
        int64_t rdx_56 = sx.q(*(arg1 + 0x78)) << 2
        (*(*arg2 + 8))(arg2, rdx_56, rdx_56)
        result = zx.q(*(arg1 + 0x98))
        double zmm2_1[0x2]
        
        if (result.b == 1)
            int64_t rdx_57 = sx.q(*(arg1 + 0x38) - *(arg1 + 0x64)) * 0x88
            (*(*arg2 + 8))(arg2, rdx_57, rdx_57)
            int32_t rdx_58 = *(arg1 + 0x58)
            int32_t var_2c4_5 = 1
            var_2c8 = 0
            var_2c0 = arg1 + 0x40
            int32_t var_2b8_3 = 0xffffffff
            int64_t var_2b4_3 = 0
            
            if (rdx_58 != 0)
                sub_14059bdd0(&var_2c8)
                rdx_58 = *(arg1 + 0x58)
            
            zmm2_1 = var_2b8_3.o
            var_248 = arg1 + 0x30
            var_2b4_3.d = rdx_58
            zmm0_1 = var_248.o
            double var_230_2[0x2] = zmm2_1
            zmm1.o = var_2c8.o
            double temp0_9[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
            var_280 = zmm0_1
            int128_t var_270_2 = zmm1.o
            int64_t var_260_2 = temp0_9.q
            
            while (true)
                result = sx.q(var_270_2:0xc.d)
                int64_t* rdx_59 = var_280[0]
                
                if (result.d == ((0xffffffff << (rdx_58.b & 0x1f)).q u>> 0x20).d
                        && var_270_2.q == arg1 + 0x40 && rdx_59 == arg1 + 0x30)
                    break
                
                int64_t r9_15 = *arg2
                void* rax_108 = _mm_bsrli_si128(*(*rdx_59 + result * 0x18), 8).q
                (*(r9_15 + 8))(arg2, sx.q(*(rax_108 + 0x80)) << 3, sx.q(*(rax_108 + 0x84)) << 3, 
                    r9_15)
                var_270_2:8.d &= not.d(var_280[1]:4.d)
                sub_14059bdd0(&var_280[1])
        else if (result.b == 2)
            int64_t rdx_63 = sx.q(*(arg1 + 0x38) - *(arg1 + 0x64)) << 7
            (*(*arg2 + 8))(arg2, rdx_63, rdx_63)
            int32_t rdx_64 = *(arg1 + 0x58)
            int32_t var_2c4_6 = 1
            var_2c8 = 0
            var_2c0 = arg1 + 0x40
            int32_t var_2b8_5 = 0xffffffff
            int64_t var_2b4_4 = 0
            
            if (rdx_64 != 0)
                sub_14059bdd0(&var_2c8)
                rdx_64 = *(arg1 + 0x58)
            
            zmm2_1 = var_2b8_5.o
            var_248 = arg1 + 0x30
            var_2b4_4.d = rdx_64
            zmm0_1 = var_248.o
            double var_230_3[0x2] = zmm2_1
            zmm1.o = var_2c8.o
            double temp0_11[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
            var_280 = zmm0_1
            int128_t var_270_3 = zmm1.o
            int64_t var_260_3 = temp0_11.q
            
            while (true)
                result = sx.q(var_270_3:0xc.d)
                double rdx_65 = var_280[0]
                
                if (result.d == ((0xffffffff << (rdx_64.b & 0x1f)).q u>> 0x20).d
                        && var_270_3.q == arg1 + 0x40 && rdx_65 == arg1 + 0x30)
                    break
                
                int64_t r9_16 = *arg2
                void* rcx_79 = _mm_bsrli_si128(*(*rdx_65 + result * 0x18), 8).q
                (*(r9_16 + 8))(arg2, sx.q(*(rcx_79 + 0x78)) * 0x1c, sx.q(*(rcx_79 + 0x7c)) * 0x1c, 
                    r9_16)
                var_270_3:8.d &= not.d(var_280[1]:4.d)
                sub_14059bdd0(&var_280[1])
__security_check_cookie(rax_1 ^ &var_308)
return result
