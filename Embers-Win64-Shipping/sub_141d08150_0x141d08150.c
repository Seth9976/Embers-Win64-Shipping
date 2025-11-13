// 函数: sub_141d08150
// 地址: 0x141d08150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t rax_3 = arg1[0x15] + arg1[0x16]
int64_t* r12 = arg1
int64_t* var_2c0 = arg1
void** result

if (arg1[0x28] s< rax_3)
    int64_t entry_r9
    sub_140af98a0("Unknown", 0x1380, u"Corrupted index offset in pak file.", entry_r9)
    result = sub_140afbb40()
else
    void* var_2e8
    void var_250
    int64_t var_148
    
    if (*(arg1 + 0xa4) s< 9 || *(arg1 + 0xcd) == 0)
        var_2e8 = nullptr
        int64_t r13
        r13.b = 1
        int64_t var_2e0_2 = 0
        void* const var_2d0
        int128_t var_168
        int64_t var_130
        int512_t zmm1_1
        
        while (true)
            (*(*arg2 + 0x178))(arg2, r12[0x15])
            int32_t rcx_15 = var_2e0_2:4.d
            int32_t rbx_6 = 0
            var_2e0_2.d = 0
            
            if (rcx_15 != 0)
                sub_1405c5510(&var_2e8, 0)
                rcx_15 = var_2e0_2:4.d
                rbx_6 = var_2e0_2.d
            
            int64_t rdi_4 = sx.q(r12[0x16].d)
            
            if (rdi_4.d s> rbx_6)
                int32_t rdi_5 = rdi_4.d - rbx_6
                int32_t rax_11 = rbx_6 + rdi_5
                var_2e0_2.d = rax_11
                
                if (rax_11 s> rcx_15)
                    sub_1405daba0(&var_2e8)
                
                memset(sx.q(rbx_6) + var_2e8, 0, sx.q(rdi_5))
            else if (rdi_4.d s< rbx_6)
                int32_t r14_3 = rbx_6 - rdi_4.d
                
                if (rbx_6 != rdi_4.d)
                    int32_t rax_13 = rbx_6 - r14_3
                    
                    if (rax_13 != rdi_4.d)
                        memmove(rdi_4 + var_2e8, sx.q(r14_3 + rdi_4.d) + var_2e8, rax_13 - rdi_4.d)
                        rbx_6 = var_2e0_2.d
                    
                    var_2e0_2.d = rbx_6 - r14_3
                    sub_1405dac10(&var_2e8)
            
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_168)
            (*(*arg2 + 0x150))(arg2, var_2e8, r12[0x16])
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_168)
            __builtin_memset(&var_130, 0, 0x14)
            
            if (r13.b == 0)
                sub_140b3f690(var_2e8, sx.q(var_2e0_2.d), &var_130)
            
            if (*(r12 + 0xcc) != 0)
                int32_t rdx_15 = r12[0x16].d
                void* rcx_27 = var_2e8
                var_168 = *(r12 + 0xd0)
                sub_141cff040(rcx_27, rdx_15, &var_168)
            
            __builtin_memset(&var_148, 0, 0x14)
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_168)
            sub_140b3f690(var_2e8, sx.q(var_2e0_2.d), &var_148)
            zmm1_1 =
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_168)
            int64_t var_140
            int32_t var_138
            
            if (r12[0x17] == var_148 && r12[0x18] == var_140 && r12[0x19].d == var_138)
                break
            
            if (r13.b == 0)
                void var_118
                sub_140b2f110(&var_118)
                (*(*arg2 + 0x178))(arg2, 0)
                int64_t i_1 = (*(*arg2 + 0x28))(arg2)
                var_2d0 = nullptr
                int32_t i_4 = 0x10000
                int64_t i = i_1
                sub_1405daba0(&var_2d0)
                void* const r14_4 = var_2d0
                memset(r14_4, 0, 0x10000)
                
                if (i s> 0)
                    int64_t i_3 = sx.q(i_4)
                    
                    do
                        int64_t i_2 = i
                        
                        if (i_3 s<= i)
                            i_2 = i_3
                        
                        (*(*arg2 + 0x150))(arg2, r14_4, i_2)
                        sub_140b4ad80(&var_118, r14_4, i_2)
                        i -= i_2
                    while (i s> 0)
                    
                    r12 = var_2c0
                
                int64_t r9 = sub_140b39010(&var_118)
                __builtin_memset(&var_168, 0, 0x14)
                sub_140b3da80(&var_118, &var_168)
                sub_140af98a0("Unknown", 0x13e1, Corrupted index in pak file (SHA hash mismatch).", 
                    r9)
                sub_140afbb40()
                
                if (r14_4 != 0)
                    sub_140a74f90(r14_4)
                
                sub_140b30ae0(&var_118)
            else
                r13.b = 0
        
        void** const var_238
        memset(&var_238, 0, 0x90)
        sub_140b4c2a0(&var_238)
        int64_t var_1a8_1 = 0
        var_238 = &data_142d6b230
        void** var_1a0_1 = &var_2e8
        int64_t var_198_1 = 0x7fffffffffffffff
        sub_140b55290(&var_238, 1)
        var_238[0x1b](&var_238, 0)
        r12[0x26].d = 0
        int512_t zmm1_2 = sub_140a1d9d0(&var_238, &r12[0x1e], zmm1_1)
        int64_t* var_230
        int32_t* rdx_24 = *var_230
        
        if (&rdx_24[1] u> var_230[1])
            int64_t* rcx_48 = &var_238
            char var_20f
            
            if ((var_20f & 0x20) != 0)
                sub_140b54070(rcx_48, &r12[0x26], zmm1_2)
            else
                var_238[0x2a](rcx_48, &r12[0x26], 4)
        else
            r12[0x26].d = *rdx_24
            *var_230 += 4
        
        sub_141d08ec0(&r12[0x1e])
        char* rax_27 = j_sub_140a82f30(0x58)
        char* rbx_8 = rax_27
        
        if (rax_27 == 0)
            rbx_8 = nullptr
        else
            memset(rax_27, 0, 0x58)
            __builtin_memset(&rbx_8[0x18], 0, 0x28)
            *(rbx_8 + 0x40) = 0xffffffff
            *(rbx_8 + 0x44) = 0
            *(rbx_8 + 0x48) = 0
            *(rbx_8 + 0x50) = 0
        
        if (r12 != &var_2c0)
            char* rdx_26 = *r12
            *r12 = rbx_8
            rbx_8 = nullptr
            sub_141cf9ee0(r12, rdx_26)
        
        sub_141cf9ee0(&var_2c0, rbx_8)
        int512_t zmm1_3 = sub_141d00f70(*r12 + 0x10, r12[0x26].d)
        sub_141cfc2a0(*r12 + 0x10, r12[0x26].d)
        int32_t var_2d8 = 0
        
        if (r12[0x26].d s> 0)
            int32_t rdi_6 = 0
            
            while (true)
                int64_t* rax_29 = *r12 + 0x10
                void* rbx_9 = *rax_29
                
                if ((rbx_9.b & 1) != 0)
                    rbx_9 = (rbx_9 s>> 1) + rax_29
                
                var_2d0 = nullptr
                int64_t var_2c8_1 = 0
                int512_t zmm1_4 = sub_140a1d9d0(&var_238, &var_2d0, zmm1_3)
                void var_188
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_188)
                sub_141d0f7d0(sx.q(rdi_6) * 0x50 + rbx_9, &var_238, zx.q(*(r12 + 0xa4)), zmm1_4)
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_188)
                int16_t* var_2f8
                sub_140b1a780(&var_2f8, &var_2d0)
                int32_t var_2f0
                int32_t rbx_11 = var_2f0
                
                if (rbx_11 != 0 && rbx_11 - 1 s> 0 && var_2f8[sx.q(rbx_11 - 1) - 1] != 0x2f)
                    sub_140a20ba0(&var_2f8, &data_142d5a024, 1)
                    rbx_11 = var_2f0
                
                int16_t* rdi_7 = var_2f8
                void* var_2b8 = nullptr
                int32_t var_2b0_1 = rbx_11
                
                if (rbx_11 != 0)
                    sub_1405e3e80(&var_2b8, rbx_11, 0)
                    void* rcx_67
                    
                    if ((var_2b8.b & 1) == 0)
                        rcx_67 = var_2b8
                    else
                        rcx_67 = &var_2b8 + (var_2b8 s>> 1)
                    
                    memcpy(rcx_67, rdi_7, rbx_11 * 2)
                else
                    int32_t var_2ac_1 = 0
                
                char* rbx_13 = *r12 + 0x20
                int32_t var_258
                sub_141d02cc0(rbx_13, &var_258, &var_2b8)
                int64_t rax_35 = sx.q(var_258)
                void* rax_38
                
                if (rax_35.d == 0xffffffff)
                    rax_38 = nullptr
                else
                    void* rdx_37 = *rbx_13
                    
                    if ((rdx_37.b & 1) != 0)
                        rdx_37 = &rbx_13[rdx_37 s>> 1]
                    
                    rax_38 = rax_35 * 0x50 + rdx_37
                
                void* rdi_8 = rax_38 + 0x10
                
                if (rax_38 == 0)
                    rdi_8 = nullptr
                
                sub_140a1d5c0(&var_2b8)
                
                if (rdi_8 == 0)
                    int16_t* rdi_10 = var_2f8
                    void* var_298 = nullptr
                    int32_t var_290_1 = var_2f0
                    
                    if (var_2f0 != 0)
                        sub_1405e3e80(&var_298, var_2f0, 0)
                        void* rcx_83
                        
                        if ((var_298.b & 1) == 0)
                            rcx_83 = var_298
                        else
                            rcx_83 = &var_298 + (var_298 s>> 1)
                        
                        memcpy(rcx_83, rdi_10, var_2f0 * 2)
                    else
                        int32_t var_28c_1 = 0
                    
                    int64_t* rax_44 = sub_141cf1db0(*r12 + 0x20, &var_298)
                    sub_140a1d5c0(&var_298)
                    int64_t* rax_45 = sub_140b18970(&var_148, &var_2d0)
                    void* var_288 = nullptr
                    int32_t rbx_16 = rax_45[1].d
                    int64_t rdi_11 = *rax_45
                    int32_t var_280_1 = rbx_16
                    
                    if (rbx_16 != 0)
                        sub_1405e3e80(&var_288, rbx_16, 0)
                        void* rcx_89
                        
                        if ((var_288.b & 1) == 0)
                            rcx_89 = var_288
                        else
                            rcx_89 = &var_288 + (var_288 s>> 1)
                        
                        memcpy(rcx_89, rdi_11, rbx_16 * 2)
                    else
                        int32_t var_27c_1 = 0
                    
                    var_168.q = &var_288
                    var_168:8.q = &var_2d8
                    sub_141cf1800(rax_44, &var_2c0, &var_168, nullptr)
                    zmm1_3 = sub_140a1d5c0(&var_288)
                    int64_t rcx_92 = var_148
                    
                    if (rcx_92 != 0)
                        zmm1_3 = sub_140a74f90(rcx_92)
                    
                    while (true)
                    label_141d08b9d:
                        int16_t* rdi_12 = var_2f8
                    label_141d08ba2:
                        int32_t rbx_17 = var_2f0
                        
                        while (true)
                            int16_t* const rdx_50 = &data_142d40450
                            
                            if (rbx_17 != 0)
                                rdx_50 = rdi_12
                            
                            int16_t* const rcx_93
                            
                            if (r12[0x1f].d == 0)
                                rcx_93 = &data_142d40450
                            else
                                rcx_93 = r12[0x1e]
                            
                            if (sub_140a54510(rcx_93, rdx_50) == 0)
                                goto label_141d089fc
                            
                            rbx_17 = var_2f0
                            int32_t rcx_94 = rbx_17 - 1
                            
                            if (rbx_17 == 0)
                                rcx_94 = 0
                            
                            int32_t rax_49 = rbx_17 - 1
                            
                            if (rbx_17 == 0)
                                rax_49 = 0
                            
                            int32_t r10_1
                            
                            if (rcx_94 - 1 s>= 0)
                                r10_1 = rax_49
                                
                                if (rcx_94 s<= rax_49)
                                    r10_1 = rcx_94 - 1
                            else
                                r10_1 = 0
                            
                            int32_t rax_50 = rax_49 - r10_1
                            int32_t rdi_13 = rbx_17 - 1
                            
                            if (rbx_17 == 0)
                                rdi_13 = 0
                            
                            int32_t rdi_14 = rdi_13 - r10_1
                            
                            if (rax_50 s>= 0)
                                if (rax_50 s< rdi_14)
                                    rdi_14 = rax_50
                                
                                if (rdi_14 != 0)
                                    int32_t rax_52 = rbx_17 - rdi_14
                                    
                                    if (rax_52 != r10_1)
                                        int16_t* r9_1 = var_2f8
                                        memmove(&r9_1[sx.q(r10_1)], &r9_1[sx.q(rdi_14 + r10_1)], 
                                            (rax_52 - r10_1) * 2)
                                        rbx_17 = var_2f0
                                    
                                    var_2f0 = rbx_17 - rdi_14
                                    sub_1405a50a0(&var_2f8)
                                    rbx_17 = var_2f0
                            
                            rdi_12 = var_2f8
                            void* rcx_98 = &rdi_12[sx.q(rbx_17)]
                            
                            while (rcx_98 != rdi_12)
                                rcx_98 -= 2
                                
                                if (*rcx_98 == 0x2f)
                                    int32_t rcx_100 = ((rcx_98 - rdi_12) s>> 1).d
                                    
                                    if (rcx_100 == 0xffffffff)
                                        goto label_141d08c94
                                    
                                    int32_t rax_57 = rbx_17 - 1
                                    
                                    if (rbx_17 == 0)
                                        rax_57 = 0
                                    
                                    int32_t r9_2
                                    
                                    if (rcx_100 s>= 0)
                                        r9_2 = rax_57
                                        
                                        if (rcx_100 s< rax_57)
                                            r9_2 = rcx_100
                                    else
                                        r9_2 = 0
                                    
                                    int32_t rax_58 = rax_57 - r9_2
                                    int32_t r14_8 = rbx_17 - 1
                                    
                                    if (rbx_17 == 0)
                                        r14_8 = 0
                                    
                                    int32_t r14_9 = r14_8 - r9_2
                                    
                                    if (rax_58 s>= 0)
                                        if (rax_58 s< r14_9)
                                            r14_9 = rax_58
                                        
                                        if (r14_9 != 0)
                                            int32_t rax_60 = rbx_17 - r14_9
                                            
                                            if (rax_60 != r9_2)
                                                memmove(&rdi_12[sx.q(r9_2)], 
                                                    &rdi_12[sx.q(r14_9 + r9_2)], 
                                                    (rax_60 - r9_2) * 2)
                                                rbx_17 = var_2f0
                                            
                                            var_2f0 = rbx_17 - r14_9
                                            sub_1405a50a0(&var_2f8)
                                            rbx_17 = var_2f0
                                            rdi_12 = var_2f8
                                    
                                    if (rbx_17 != 0 && rbx_17 - 1 s> 0
                                            && rdi_12[sx.q(rbx_17 - 1) - 1] != 0x2f)
                                        sub_140a20ba0(&var_2f8, &data_142d5a024, 1)
                                        rbx_17 = var_2f0
                                        rdi_12 = var_2f8
                                    
                                    void* var_278 = nullptr
                                    int32_t var_270_1 = rbx_17
                                    
                                    if (rbx_17 != 0)
                                        sub_1405e3e80(&var_278, rbx_17, 0)
                                        void* rcx_106
                                        
                                        if ((var_278.b & 1) == 0)
                                            rcx_106 = var_278
                                        else
                                            rcx_106 = &var_278 + (var_278 s>> 1)
                                        
                                        memcpy(rcx_106, rdi_12, rbx_17 * 2)
                                    else
                                        int32_t var_26c_1 = 0
                                    
                                    char* rbx_21 = *r12 + 0x20
                                    int32_t var_254
                                    sub_141d02cc0(rbx_21, &var_254, &var_278)
                                    int64_t rax_68 = sx.q(var_254)
                                    void* rbx_24
                                    
                                    if (rax_68.d == 0xffffffff)
                                        rbx_24 = nullptr
                                    else
                                        void* rdx_57 = *rbx_21
                                        
                                        if ((rdx_57.b & 1) != 0)
                                            rdx_57 = &rbx_21[rdx_57 s>> 1]
                                        
                                        rbx_24 = rax_68 * 0x50 + rdx_57
                                    
                                    zmm1_3 = sub_140a1d5c0(&var_278)
                                    rdi_12 = var_2f8
                                    void* rax_69 = rbx_24 + 0x10
                                    
                                    if (rbx_24 == 0)
                                        rax_69 = nullptr
                                    
                                    if (rax_69 != 0)
                                        goto label_141d08ba2
                                    
                                    void* var_268 = nullptr
                                    int32_t var_260_1 = var_2f0
                                    
                                    if (var_2f0 != 0)
                                        sub_1405e3e80(&var_268, var_2f0, 0)
                                        void* rcx_110
                                        
                                        if ((var_268.b & 1) == 0)
                                            rcx_110 = var_268
                                        else
                                            rcx_110 = &var_268 + (var_268 s>> 1)
                                        
                                        memcpy(rcx_110, rdi_12, var_2f0 * 2)
                                    else
                                        int32_t var_25c_1 = 0
                                    
                                    sub_141cf1db0(*r12 + 0x20, &var_268)
                                    zmm1_3 = sub_140a1d5c0(&var_268)
                                    goto label_141d08b9d
                            
                        label_141d08c94:
                            
                            if (&var_2f8 != &r12[0x1e])
                                rbx_17 = r12[0x1f].d
                                int64_t r14_7 = r12[0x1e]
                                var_2f0 = rbx_17
                                int32_t var_2ec
                                
                                if (rbx_17 == 0 && var_2ec == 0)
                                    var_2ec = 0
                                    continue
                                
                                sub_1405a4c70(&var_2f8, rbx_17, var_2ec)
                                memcpy(var_2f8, r14_7, rbx_17 * 2)
                                break
                else
                    int64_t* rax_39 = sub_140b18970(&var_130, &var_2d0)
                    void* var_2a8 = nullptr
                    int32_t rbx_14 = rax_39[1].d
                    int64_t r14_5 = *rax_39
                    int32_t var_2a0_1 = rbx_14
                    
                    if (rbx_14 != 0)
                        sub_1405e3e80(&var_2a8, rbx_14, 0)
                        void* rcx_72
                        
                        if ((var_2a8.b & 1) == 0)
                            rcx_72 = var_2a8
                        else
                            rcx_72 = &var_2a8 + (var_2a8 s>> 1)
                        
                        memcpy(rcx_72, r14_5, rbx_14 * 2)
                    else
                        int32_t var_29c_1 = 0
                    
                    int64_t* var_248 = &var_2a8
                    int32_t* var_240_1 = &var_2d8
                    sub_141cf1800(rdi_8, &var_250, &var_248, nullptr)
                    zmm1_3 = sub_140a1d5c0(&var_2a8)
                    int64_t rcx_75 = var_130
                    
                    if (rcx_75 != 0)
                        zmm1_3 = sub_140a74f90(rcx_75)
                    
                label_141d089fc:
                    int16_t* rcx_76 = var_2f8
                    
                    if (rcx_76 != 0)
                        zmm1_3 = sub_140a74f90(rcx_76)
                    
                    void* const rcx_77 = var_2d0
                    
                    if (rcx_77 != 0)
                        zmm1_3 = sub_140a74f90(rcx_77)
                    
                    rdi_6 = var_2d8 + 1
                    var_2d8 = rdi_6
                    
                    if (rdi_6 s>= r12[0x26].d)
                        break
        
        result = sub_140b4cb40(&var_238)
        void* rcx_79 = var_2e8
        
        if (rcx_79 != 0)
            result = sub_140a74f90(rcx_79)
    else
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_148)
        (*(*arg2 + 0x178))(arg2, r12[0x15])
        int64_t rdi_1 = sx.q(r12[0x16].d)
        char* rbx_1 = sub_140a82f30(rdi_1, 0)
        (*(*arg2 + 0x150))(arg2, rbx_1, rdi_1)
        
        if (r12 != &var_250)
            char* rdx_3 = *r12
            *r12 = rbx_1
            rbx_1 = nullptr
            sub_141cf9ee0(r12, rdx_3)
        
        sub_141cf9ee0(&var_250, rbx_1)
        int64_t* rcx_6 = *r12
        r12[0x26].d = rcx_6[3].d
        void* rbx_2 = *rcx_6
        
        if ((rbx_2.b & 1) != 0)
            rbx_2 = (rbx_2 s>> 1) + rcx_6
        
        int32_t rax_8 = rcx_6[1].d
        void* r14_1 = nullptr
        var_2e8 = nullptr
        int32_t rdi_2 = 0
        int64_t var_2e0_1 = 0
        int32_t r12_1 = 0
        int32_t r15_1 = rax_8 - 1
        
        if (rax_8 == 0)
            r15_1 = 0
        
        if (rbx_2 != 0 && *rbx_2 != 0 && r15_1 s> 0)
            if (r15_1 + 1 s> 0)
                sub_1405947f0(&var_2e8, r15_1 + 1)
                r12_1 = var_2e0_1:4.d
                rdi_2 = var_2e0_1.d
                r14_1 = var_2e8
            
            rdi_2 += r15_1 + 1
            var_2e0_1.d = rdi_2
            
            if (rdi_2 s> r12_1)
                sub_140594770(&var_2e8)
                r12_1 = var_2e0_1:4.d
                rdi_2 = var_2e0_1.d
                r14_1 = var_2e8
            
            UnDecorator::getReferenceType(r14_1, rbx_2, r15_1 * 2)
            *(r14_1 + (sx.q(rdi_2) << 1) - 2) = 0
        
        void* rbx_5 = &var_2c0[0x1e]
        
        if (rbx_5 == &var_2e8)
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            result =
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_148)
        else
            int64_t rcx_10 = *rbx_5
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            *rbx_5 = r14_1
            *(rbx_5 + 8) = rdi_2
            *(rbx_5 + 0xc) = r12_1
            result =
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_148)

__security_check_cookie(rax_1 ^ &var_318)
return result
