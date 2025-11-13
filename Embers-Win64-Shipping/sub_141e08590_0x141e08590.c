// 函数: sub_141e08590
// 地址: 0x141e08590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* rdi = arg1
char r15 = arg4
int64_t* var_290 = arg2
void* result = sub_141e01bc0(arg1[2])
void* result_1 = result

if (result != 0)
    if (arg2 == 0)
    label_141e0864b:
        var_290 = nullptr
    label_141e08650:
        void* rbx_2 = rdi[4]
        
        if (rbx_2 != 0)
            void* rax_7 = sub_142591550()
            void* rdx_3 = *(rbx_2 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                uint32_t rax_10
                void* r8
                
                if (data_143de5480 != 0)
                    rax_10, r8 = GetCurrentThreadId()
                    rax_10.b = rax_10 == data_143de5470
                
                if (data_143de5480 == 0 || rax_10.b != 0)
                    r8.b = 1
                    sub_141f3e990(rdi[4], 1, r8.b)
        
        int64_t* rcx_8 = rdi[0x48]
        
        if (rcx_8 == 0)
            int64_t* rax_12 = (*(*rdi + 0x300))(rdi)
            rdi[0x48] = rax_12
            rcx_8 = rax_12
        
        (*(*rcx_8 + 0x90))(rcx_8, rdi)
        int64_t rax_14 = *result_1
        int32_t r14_1 = 0x20
        void* var_90_1 = nullptr
        int32_t var_88_1 = 0
        int64_t var_84 = 4
        void* var_78_1 = nullptr
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0x20
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        void* var_58_1 = nullptr
        int32_t var_50_1 = 0
        int64_t* rax_15 = (*(rax_14 + 0x40))(result_1)
        int64_t r13_1 = 0
        int64_t* r12_1 = *rax_15
        uint64_t rcx_11 = sx.q(rax_15[1].d) << 3 u>> 3
        
        if (r12_1 u> &r12_1[rax_15[1]])
            rcx_11 = 0
        
        uint64_t var_298 = rcx_11
        void* const var_2a0
        void var_190
        
        if (rcx_11 != 0)
            do
                void* rsi_1 = sx.q(*(*r12_1 + 0x4c)) + rdi
                int64_t* rdx_5
                
                if (var_290 != 0)
                    rdx_5 = var_290
                else if (*(rsi_1 + 0x78) == 0)
                    rdx_5 = nullptr
                else
                    void* rax_20 = sub_14245f6d0()
                    
                    if (rax_20 == 0)
                        rdx_5 = nullptr
                    else
                        rdx_5 = *(rsi_1 + 0x78)
                        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_21.d s> rdx_5[7].d || *(rdx_5[6] + (rax_21 << 3)) != rax_20 + 0x30)
                            rdx_5 = nullptr
                
                void* rax_29
                void* rbx_5
                
                if (rdx_5 == 0)
                    var_2a0 = nullptr
                    int64_t r10_1 = sx.q(sub_140b5ead0(0))
                    
                    if (var_88_1 != var_64_1)
                        void var_60
                        void* rdx_11 = &var_60
                        
                        if (var_58_1 != 0)
                            rdx_11 = var_58_1
                        
                        int32_t rax_31 = *(rdx_11 + ((sx.q(var_50_1 - 1) & r10_1) << 2))
                        
                        if (rax_31 == 0xffffffff)
                            goto label_141e088e8
                        
                        void* r9 = &var_190
                        
                        if (var_90_1 != 0)
                            r9 = var_90_1
                        
                        int64_t* r8_8
                        
                        while (true)
                            r8_8 = (sx.q(rax_31) << 6) + r9
                            
                            if (*r8_8 == var_2a0)
                                break
                            
                            rax_31 = r8_8[7].d
                            
                            if (rax_31 == 0xffffffff)
                                goto label_141e088e8
                        
                        if (rax_31 == 0xffffffff || r8_8 == 0)
                            goto label_141e088e8
                        
                        rbx_5 = &r8_8[1]
                        goto label_141e088f0
                    
                label_141e088e8:
                    rax_29 = sub_141df18e0(&var_190, r10_1.d, &var_2a0)
                label_141e088ed:
                    rbx_5 = rax_29
                label_141e088f0:
                    int64_t r14_3 = sx.q(*(rbx_5 + 0x28))
                    int32_t rcx_26 = (r14_3 + 1).d
                    bool cond:3_1 = rcx_26 s<= *(rbx_5 + 0x2c)
                    *(rbx_5 + 0x28) = rcx_26
                    
                    if (not(cond:3_1))
                        sub_14083a490(rbx_5, r14_3.d)
                    
                    void* rax_32 = *(rbx_5 + 0x20)
                    
                    if (rax_32 != 0)
                        rbx_5 = rax_32
                    
                    *(rbx_5 + (r14_3 << 3)) = rsi_1
                else
                    void* rax_23 = sub_141e01bc0(rdx_5)
                    int64_t rdx_6 = *rax_23
                    int64_t* rax_24 = (*(rdx_6 + 0x80))(rax_23, rdx_6)
                    int64_t* rcx_15 = *rax_24
                    void* rdx_8 = sx.q(rax_24[1].d) * 0x68 + rcx_15
                    
                    if (rcx_15 != rdx_8)
                        while (*rcx_15 != *(rsi_1 + 0xa8))
                            rcx_15 = &rcx_15[0xd]
                            
                            if (rcx_15 == rdx_8)
                                goto label_141e0891c
                        
                        if (rcx_15[0xc].b != 0)
                            int64_t rbx_3 = rcx_15[1]
                            int32_t r14_2 = (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d)
                            void* rax_28 = sub_141df19f0(&var_190, r14_2, &rcx_15[1])
                            
                            if (rax_28 == 0)
                                rax_29 = sub_141df18e0(&var_190, r14_2, &rcx_15[1])
                                goto label_141e088ed
                            
                            rbx_5 = rax_28 + 8
                            goto label_141e088f0
            label_141e0891c:
                r12_1 = &r12_1[1]
                r13_1 += 1
            while (r13_1 != var_298)
            
            r15 = arg4
            r14_1 = 0x20
        
        void* const r12_2 = rdi[4]
        var_2a0 = r12_2
        int32_t rcx_28 = 0
        int32_t var_288_1 = 0
        int32_t var_284_1 = 1
        int32_t r8_10 = 0
        void* var_280_1 = &var_84:4
        int32_t var_278_1 = 0xffffffff
        int64_t var_274_1 = 0
        
        if (var_70_1 != 0)
            void* r10_2 = &var_84:4
            
            if (var_78_1 != 0)
                r10_2 = var_78_1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_70_1 - 1)
            int32_t rdx_16 = *r10_2
            
            if (rdx_16 != 0)
            label_141e089db:
                int32_t rax_40 = ((rdx_16 - 1) & rdx_16) ^ rdx_16
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_40)
                int32_t var_284_2 = rax_40
                
                if (rax_40 != 0)
                    r14_1 = 0x1f - temp0_2
                
                int32_t rax_41 = r8_10 - r14_1 + 0x1f
                
                if (rax_41 s> var_70_1)
                    rax_41 = var_70_1
                
                var_274_1.d = rax_41
            else
                while (true)
                    int64_t rdx_17 = sx.q(rcx_28)
                    r8_10 += 0x20
                    rcx_28 += 1
                    var_274_1:4.d = r8_10
                    var_288_1 = rcx_28
                    
                    if (rdx_17.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_274_1.d = var_70_1
                        break
                    
                    rdx_16 = *(r10_2 + (rdx_17 << 2) + 4)
                    int32_t var_278_2 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_141e089db
        
        void* var_1c8_1 = &var_190
        int128_t var_1c0 = var_288_1.o
        var_274_1.d = var_70_1
        int128_t var_1b0_1 = 0xffffffff
        uint64_t rax_43 = (0xffffffff << (var_70_1.b & 0x1f)).q u>> 0x20
        int128_t zmm1 = var_1c0
        uint64_t var_1f8_1 = rax_43
        int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_1f0 = var_1c8_1.o
        int128_t var_1e0_1 = zmm1
        int64_t var_1d0_1 = temp0_3
        
        while (true)
            int64_t rdx_18 = sx.q(var_1e0_1:0xc.d)
            
            if (rdx_18.d != rax_43.d || var_1e0_1.q != &var_84:4)
                rax_43.b = 0
            else
                rax_43.b = 1
            
            void* rcx_32 = var_1f0.q
            
            if (rax_43.b == 0 || rcx_32 != &var_190)
                rax_43.b = 1
            else
                rax_43.b = 0
            
            if (rax_43.b == 0)
                break
            
            void* rax_44 = *(rcx_32 + 0x100)
            
            if (rax_44 != 0)
                rcx_32 = rax_44
            
            void* rcx_33 = rcx_32 + (rdx_18 << 6)
            void* rbx_6 = rcx_33 + 8
            int64_t rax_47 = *rcx_33
            void** var_1a0_1 = nullptr
            int64_t rsi_2 = sx.q(*(rbx_6 + 0x28))
            void* r14_4 = *(rbx_6 + 0x20)
            int32_t var_198_1 = rsi_2.d
            
            if (rsi_2.d != 0)
                sub_14085a010(&var_1c0, rsi_2.d, 0)
                void** rcx_35 = &var_1c0
                
                if (r14_4 != 0)
                    rbx_6 = r14_4
                
                if (var_1a0_1 != 0)
                    rcx_35 = var_1a0_1
                
                memcpy(rcx_35, rbx_6, (rsi_2 << 3).d)
            else
                int32_t var_194_1 = 4
            
            int32_t rcx_36
            rcx_36.b = rax_47:4.d == 0
            void** rcx_37
            int64_t* var_268
            void* var_260
            
            if ((rcx_36.b & sub_140b5b8a0(rax_47.d, 0)) == 0)
                void** rcx_83 = &var_1c0
                
                if (var_1a0_1 != 0)
                    rcx_83 = var_1a0_1
                
                var_268 = var_290
                void* rsi_11 = *rcx_83
                var_260 = rsi_11
                int64_t* rax_121 = (*arg3)(*(arg3 + 8), &var_268, &var_260)
                
                if (rax_121 == 0 || rax_121 == rdi[2])
                    rcx_37 = var_1a0_1
                    void** r12_8 = &var_1c0
                    
                    if (rcx_37 != 0)
                        r12_8 = rcx_37
                    
                    void* r13_5 = &r12_8[sx.q(var_198_1)]
                    
                    if (r12_8 != r13_5)
                        do
                            void* r14_13 = *r12_8
                            sub_141e30e00(r14_13, rdi, nullptr)
                            
                            if (r15 == 0)
                                int64_t* rbx_17 = *(r14_13 + 0x30)
                                
                                if (rbx_17 == 0)
                                    rbx_17 = nullptr
                                else
                                    int32_t rax_166 = *(rbx_17 + 0xc)
                                    void* const rax_172
                                    
                                    if (rax_166 s>= data_143e1d9b4)
                                        rax_172 = nullptr
                                    else
                                        int16_t temp4_1
                                        int32_t temp5_1
                                        temp4_1:temp5_1 = sx.q(rax_166)
                                        uint32_t rdx_70 = zx.d(temp4_1)
                                        int32_t rax_168 = temp5_1 + rdx_70
                                        rax_172 = *(data_143e1d9a0 + (sx.q(rax_168 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_168.w) - rdx_70) * 0x18
                                    
                                    if (((*(rax_172 + 8) u>> 0x1d).b & 1) != 0)
                                        rbx_17 = nullptr
                                    else
                                        void* rax_175 = sub_14245f6d0()
                                        void* rdx_72 = rbx_17[2]
                                        int64_t rax_176 = sx.q(*(rax_175 + 0x38))
                                        
                                        if (rax_176.d s> *(rdx_72 + 0x38)
                                                || *(*(rdx_72 + 0x30) + (rax_176 << 3))
                                                != rax_175 + 0x30)
                                            rbx_17 = nullptr
                                
                                if (*(r14_13 + 0x88) != 0 && rbx_17 != 0)
                                    void* rsi_14 = rdi[4]
                                    
                                    if (rsi_14 != 0)
                                        void* rax_178 = sub_142591550()
                                        void* rdx_73 = *(rsi_14 + 0x10)
                                        int64_t rax_179 = sx.q(*(rax_178 + 0x38))
                                        
                                        if (rax_179.d s<= *(rdx_73 + 0x38)
                                                && *(*(rdx_73 + 0x30) + (rax_179 << 3))
                                                == rax_178 + 0x30)
                                            uint32_t rax_181
                                            void* r8_33
                                            
                                            if (data_143de5480 != 0)
                                                rax_181, r8_33 = GetCurrentThreadId()
                                                rax_181.b = rax_181 == data_143de5470
                                            
                                            if (data_143de5480 == 0 || rax_181.b != 0)
                                                r8_33.b = 1
                                                sub_141f3e990(rdi[4], 1, r8_33.b)
                                    
                                    int64_t r15_7 = rdi[0x48]
                                    
                                    if (r15_7 == 0)
                                        int64_t rax_183 = (*(*rdi + 0x300))(rdi)
                                        rdi[0x48] = rax_183
                                        r15_7 = rax_183
                                    
                                    void* rsi_15 = rbx_17[4]
                                    
                                    if (rsi_15 != 0)
                                        void* rax_184 = sub_142591550()
                                        void* rdx_74 = *(rsi_15 + 0x10)
                                        int64_t rax_185 = sx.q(*(rax_184 + 0x38))
                                        
                                        if (rax_185.d s<= *(rdx_74 + 0x38)
                                                && *(*(rdx_74 + 0x30) + (rax_185 << 3))
                                                == rax_184 + 0x30)
                                            uint32_t rax_187
                                            void* r8_34
                                            
                                            if (data_143de5480 != 0)
                                                rax_187, r8_34 = GetCurrentThreadId()
                                                rax_187.b = rax_187 == data_143de5470
                                            
                                            if (data_143de5480 == 0 || rax_187.b != 0)
                                                r8_34.b = 1
                                                sub_141f3e990(rbx_17[4], 1, r8_34.b)
                                    
                                    int64_t* rsi_16 = rbx_17[0x48]
                                    
                                    if (rsi_16 == 0)
                                        int64_t* rax_189 = (*(*rbx_17 + 0x300))(rbx_17)
                                        rbx_17[0x48] = rax_189
                                        rsi_16 = rax_189
                                    
                                    (*(*rsi_16 + 0x90))(rsi_16, rbx_17)
                                    void var_208
                                    sub_140dd5b90(&var_208, r15_7)
                                    sub_141e2a4a0(r14_13, &var_208)
                                    void var_200
                                    sub_140dd5b90(&var_200, r15_7)
                                    sub_141e170d0(r14_13, &var_200)
                                    (*(*rsi_16 + 0x98))(rsi_16)
                                    r15 = arg4
                            
                            r12_8 = &r12_8[1]
                        while (r12_8 != r13_5)
                        
                        rcx_37 = var_1a0_1
                    
                    r12_2 = var_2a0
                else
                    void* rsi_12 = *(rsi_11 + 0x30)
                    
                    if (rsi_12 == 0)
                    label_141e09192:
                        void* rax_134 = sub_140596910(r12_2, rax_121, 0, 0, 0, 0, 0)
                        *(rax_134 + 0x31) |= 8
                        sub_141e05a00(rax_134, 0)
                        void* rax_135 = sub_141e01bc0(*(rax_134 + 0x10))
                        int64_t rdx_57 = *rax_135
                        void*** rax_136 = (*(rdx_57 + 0x40))(rax_135, rdx_57)
                        int64_t r14_9 = 0
                        void** rbx_12 = *rax_136
                        uint64_t r15_4 = sx.q(rax_136[1].d) << 3 u>> 3
                        
                        if (rbx_12 u> &rbx_12[rax_136[1]])
                            r15_4 = 0
                        
                        if (r15_4 != 0)
                            do
                                sub_141e1be90(sx.q(*(*rbx_12 + 0x4c)) + rax_134)
                                r14_9 += 1
                                rbx_12 = &rbx_12[1]
                            while (r14_9 != r15_4)
                        
                        int64_t** rax_140 = var_1a0_1
                        int64_t** r14_10 = &var_1c0
                        int64_t r15_5 = 0
                        
                        if (rax_140 != 0)
                            r14_10 = rax_140
                        
                        uint64_t r12_6 = sx.q(var_198_1) << 3 u>> 3
                        
                        if (r14_10 u> &r14_10[sx.q(var_198_1)])
                            r12_6 = 0
                        
                        if (r12_6 != 0)
                            do
                                int64_t* rbx_13 = *r14_10
                                sub_141e30e00(rbx_13, rdi, rax_134)
                                char rax_143 = *(rax_134 + 0x31)
                                r14_10 = &r14_10[1]
                                r15_5 += 1
                                char rcx_97 =
                                    (((rbx_13[0x13].b << 4 | rax_143) ^ rax_143) & 0x20) ^ rax_143
                                *(rax_134 + 0x31) = rcx_97
                                *(rax_134 + 0x31) =
                                    (((rbx_13[0x13].b << 4 | rcx_97) ^ rcx_97) & 0x10) ^ rcx_97
                            while (r15_5 != r12_6)
                        
                        if (arg4 == 0)
                            void* rbx_14 = rdi[4]
                            
                            if (rbx_14 != 0)
                                void* rax_145 = sub_142591550()
                                void* rdx_60 = *(rbx_14 + 0x10)
                                int64_t rax_146 = sx.q(*(rax_145 + 0x38))
                                
                                if (rax_146.d s<= *(rdx_60 + 0x38)
                                        && *(*(rdx_60 + 0x30) + (rax_146 << 3)) == rax_145 + 0x30)
                                    uint32_t rax_148
                                    void* r8_29
                                    
                                    if (data_143de5480 != 0)
                                        rax_148, r8_29 = GetCurrentThreadId()
                                        rax_148.b = rax_148 == data_143de5470
                                    
                                    if (data_143de5480 == 0 || rax_148.b != 0)
                                        r8_29.b = 1
                                        sub_141f3e990(rdi[4], 1, r8_29.b)
                            
                            uint64_t rax_149 = rdi[0x48]
                            var_298 = rax_149
                            
                            if (rax_149 == 0)
                                uint64_t rax_151 = (*(*rdi + 0x300))(rdi)
                                rdi[0x48] = rax_151
                                var_298 = rax_151
                            
                            void* rbx_15 = *(rax_134 + 0x20)
                            
                            if (rbx_15 != 0)
                                void* rax_152 = sub_142591550()
                                void* rdx_61 = *(rbx_15 + 0x10)
                                int64_t rax_153 = sx.q(*(rax_152 + 0x38))
                                
                                if (rax_153.d s<= *(rdx_61 + 0x38)
                                        && *(*(rdx_61 + 0x30) + (rax_153 << 3)) == rax_152 + 0x30)
                                    uint32_t rax_155
                                    void* r8_30
                                    
                                    if (data_143de5480 != 0)
                                        rax_155, r8_30 = GetCurrentThreadId()
                                        rax_155.b = rax_155 == data_143de5470
                                    
                                    if (data_143de5480 == 0 || rax_155.b != 0)
                                        r8_30.b = 1
                                        sub_141f3e990(*(rax_134 + 0x20), 1, r8_30.b)
                            
                            int64_t* r15_6 = *(rax_134 + 0x240)
                            
                            if (r15_6 == 0)
                                int64_t* rax_157 = (*(*rax_134 + 0x300))(rax_134)
                                *(rax_134 + 0x240) = rax_157
                                r15_6 = rax_157
                            
                            void** rbx_16 = &var_1c0
                            
                            if (var_1a0_1 != 0)
                                rbx_16 = var_1a0_1
                            
                            int64_t r12_7 = 0
                            uint64_t r13_4 = sx.q(var_198_1) << 3 u>> 3
                            
                            if (rbx_16 u> &rbx_16[sx.q(var_198_1)])
                                r13_4 = 0
                            
                            if (r13_4 != 0)
                                uint64_t rdi_1 = var_298
                                
                                do
                                    void* r14_11 = *rbx_16
                                    
                                    if (*(r14_11 + 0x88) != 0)
                                        (*(*r15_6 + 0x90))(r15_6, rax_134)
                                        void var_220
                                        sub_140dd5b90(&var_220, rdi_1)
                                        sub_141e2a4a0(r14_11, &var_220)
                                        void var_218
                                        sub_140dd5b90(&var_218, rdi_1)
                                        sub_141e170d0(r14_11, &var_218)
                                        (*(*r15_6 + 0x98))(r15_6)
                                    
                                    rbx_16 = &rbx_16[1]
                                    r12_7 += 1
                                while (r12_7 != r13_4)
                                
                                rdi = arg1
                        
                        r12_2 = var_2a0
                        int64_t r14_12 = sx.q(*(r12_2 + 0x6c8))
                        int32_t rax_163 = (r14_12 + 1).d
                        *(r12_2 + 0x6c8) = rax_163
                        
                        if (rax_163 s> *(r12_2 + 0x6cc))
                            sub_1405a4d70(r12_2 + 0x6c0)
                        
                        *(*(r12_2 + 0x6c0) + (r14_12 << 3)) = rax_134
                        rcx_37 = var_1a0_1
                    else
                        int32_t rax_122 = *(rsi_12 + 0xc)
                        void* const rax_128
                        
                        if (rax_122 s>= data_143e1d9b4)
                            rax_128 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_122)
                            uint32_t rdx_53 = zx.d(temp2_1)
                            int32_t rax_124 = temp3_1 + rdx_53
                            rax_128 = *(data_143e1d9a0 + (sx.q(rax_124 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_124.w) - rdx_53) * 0x18
                        
                        if (((*(rax_128 + 8) u>> 0x1d).b & 1) != 0)
                            goto label_141e09192
                        
                        void* rax_131 = sub_14245f6d0()
                        void* rdx_55 = *(rsi_12 + 0x10)
                        int64_t rax_132 = sx.q(*(rax_131 + 0x38))
                        
                        if (rax_132.d s> *(rdx_55 + 0x38)
                                || *(*(rdx_55 + 0x30) + (rax_132 << 3)) != rax_131 + 0x30
                                || rax_121 != rdx_55)
                            goto label_141e09192
                        
                        rcx_37 = var_1a0_1
            else
                rcx_37 = var_1a0_1
                int128_t* r13_2 = &var_1c0
                
                if (rcx_37 != 0)
                    r13_2 = rcx_37
                
                void* rax_52 = (sx.q(var_198_1) << 3) + r13_2
                var_260 = rax_52
                
                if (r13_2 != rax_52)
                    do
                        uint64_t r15_2 = *r13_2
                        var_268 = var_290
                        var_298 = r15_2
                        int64_t* rax_55 = (*arg3)(*(arg3 + 8), &var_268, &var_298)
                        
                        if (rax_55 == 0 || rax_55 == rdi[2])
                            sub_141e30e00(r15_2, rdi, nullptr)
                            
                            if (arg4 == 0)
                                int64_t* rbx_10 = *(r15_2 + 0x30)
                                
                                if (rbx_10 == 0)
                                    rbx_10 = nullptr
                                else
                                    int32_t rax_92 = *(rbx_10 + 0xc)
                                    void* const rax_98
                                    
                                    if (rax_92 s>= data_143e1d9b4)
                                        rax_98 = nullptr
                                    else
                                        int16_t temp6_1
                                        int32_t temp7_1
                                        temp6_1:temp7_1 = sx.q(rax_92)
                                        uint32_t rdx_41 = zx.d(temp6_1)
                                        int32_t rax_94 = temp7_1 + rdx_41
                                        rax_98 = *(data_143e1d9a0 + (sx.q(rax_94 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_94.w) - rdx_41) * 0x18
                                    
                                    if (((*(rax_98 + 8) u>> 0x1d).b & 1) != 0)
                                        rbx_10 = nullptr
                                    else
                                        void* rax_101 = sub_14245f6d0()
                                        void* rdx_43 = rbx_10[2]
                                        int64_t rax_102 = sx.q(*(rax_101 + 0x38))
                                        
                                        if (rax_102.d s> *(rdx_43 + 0x38)
                                                || *(*(rdx_43 + 0x30) + (rax_102 << 3))
                                                != rax_101 + 0x30)
                                            rbx_10 = nullptr
                                
                                if (*(r15_2 + 0x88) != 0 && rbx_10 != 0)
                                    void* rsi_8 = rdi[4]
                                    
                                    if (rsi_8 != 0)
                                        void* rax_104 = sub_142591550()
                                        void* rdx_44 = *(rsi_8 + 0x10)
                                        int64_t rax_105 = sx.q(*(rax_104 + 0x38))
                                        
                                        if (rax_105.d s<= *(rdx_44 + 0x38)
                                                && *(*(rdx_44 + 0x30) + (rax_105 << 3))
                                                == rax_104 + 0x30)
                                            uint32_t rax_107
                                            void* r8_23
                                            
                                            if (data_143de5480 != 0)
                                                rax_107, r8_23 = GetCurrentThreadId()
                                                rax_107.b = rax_107 == data_143de5470
                                            
                                            if (data_143de5480 == 0 || rax_107.b != 0)
                                                r8_23.b = 1
                                                sub_141f3e990(rdi[4], 1, r8_23.b)
                                    
                                    int64_t r14_8 = rdi[0x48]
                                    
                                    if (r14_8 == 0)
                                        int64_t rax_109 = (*(*rdi + 0x300))(rdi)
                                        rdi[0x48] = rax_109
                                        r14_8 = rax_109
                                    
                                    void* rsi_9 = rbx_10[4]
                                    
                                    if (rsi_9 != 0)
                                        void* rax_110 = sub_142591550()
                                        void* rdx_45 = *(rsi_9 + 0x10)
                                        int64_t rax_111 = sx.q(*(rax_110 + 0x38))
                                        
                                        if (rax_111.d s<= *(rdx_45 + 0x38)
                                                && *(*(rdx_45 + 0x30) + (rax_111 << 3))
                                                == rax_110 + 0x30)
                                            uint32_t rax_113
                                            void* r8_24
                                            
                                            if (data_143de5480 != 0)
                                                rax_113, r8_24 = GetCurrentThreadId()
                                                rax_113.b = rax_113 == data_143de5470
                                            
                                            if (data_143de5480 == 0 || rax_113.b != 0)
                                                r8_24.b = 1
                                                sub_141f3e990(rbx_10[4], 1, r8_24.b)
                                    
                                    int64_t* rsi_10 = rbx_10[0x48]
                                    
                                    if (rsi_10 == 0)
                                        int64_t* rax_115 = (*(*rbx_10 + 0x300))(rbx_10)
                                        rbx_10[0x48] = rax_115
                                        rsi_10 = rax_115
                                    
                                    (*(*rsi_10 + 0x90))(rsi_10, rbx_10)
                                    void var_230
                                    sub_140dd5b90(&var_230, r14_8)
                                    sub_141e2a4a0(r15_2, &var_230)
                                    void var_228
                                    sub_140dd5b90(&var_228, r14_8)
                                    sub_141e170d0(r15_2, &var_228)
                                    (*(*rsi_10 + 0x98))(rsi_10)
                        else
                            void* rbx_8 = *(r15_2 + 0x30)
                            
                            if (rbx_8 == 0)
                            label_141e08c22:
                                int64_t r14_5 = 0
                                uint64_t var_258_1 = 0
                                
                                if ((sub_140b5b8a0(0, 0) & 1) != 0)
                                    sub_140d19010(r12_2, 
                                        NewObject with empty name can't be used to create default "
                                    "subobjects (inside of UObject derived class constructor) as it "
                                    "produces incon")
                                
                                int64_t var_2c8
                                var_2c8.b = 0
                                char var_2d0
                                var_2d0.q = 0
                                int64_t var_2d8
                                var_2d8.d = 0
                                void* rax_69 = sub_140d2dfc0(rax_55, r12_2, var_258_1, 0, 
                                    var_2d8.d, var_2d0, var_2c8.b, 0, 0)
                                *(rax_69 + 0x31) |= 8
                                char rdx_27 = ((*(r15_2 + 0x98) << 4 ^ *(rax_69 + 0x31)) & 0x20)
                                    ^ *(rax_69 + 0x31)
                                *(rax_69 + 0x31) = rdx_27
                                *(rax_69 + 0x31) = ((*(r15_2 + 0x98) << 4 ^ rdx_27) & 0x10) ^ rdx_27
                                sub_141e05a00(rax_69, 0)
                                void* rax_71 = sub_141e01bc0(*(rax_69 + 0x10))
                                int64_t rdx_28 = *rax_71
                                int64_t* rax_72 = (*(rdx_28 + 0x40))(rax_71, rdx_28)
                                int64_t* rsi_4 = *rax_72
                                uint64_t r12_4 = sx.q(rax_72[1].d) << 3 u>> 3
                                
                                if (rsi_4 u> &rsi_4[rax_72[1]])
                                    r12_4 = 0
                                
                                if (r12_4 != 0)
                                    do
                                        sub_141e1be90(sx.q(*(*rsi_4 + 0x4c)) + rax_69)
                                        r14_5 += 1
                                        rsi_4 = &rsi_4[1]
                                    while (r14_5 != r12_4)
                                
                                sub_141e30e00(r15_2, rdi, rax_69)
                                
                                if (arg4 == 0 && *(r15_2 + 0x88) != 0)
                                    void* rsi_5 = rdi[4]
                                    
                                    if (rsi_5 != 0)
                                        void* rax_76 = sub_142591550()
                                        void* rdx_31 = *(rsi_5 + 0x10)
                                        int64_t rax_77 = sx.q(*(rax_76 + 0x38))
                                        
                                        if (rax_77.d s<= *(rdx_31 + 0x38)
                                                && *(*(rdx_31 + 0x30) + (rax_77 << 3))
                                                == rax_76 + 0x30)
                                            uint32_t rax_79
                                            void* r8_19
                                            
                                            if (data_143de5480 != 0)
                                                rax_79, r8_19 = GetCurrentThreadId()
                                                rax_79.b = rax_79 == data_143de5470
                                            
                                            if (data_143de5480 == 0 || rax_79.b != 0)
                                                r8_19.b = 1
                                                sub_141f3e990(rdi[4], 1, r8_19.b)
                                    
                                    int64_t r14_6 = rdi[0x48]
                                    
                                    if (r14_6 == 0)
                                        int64_t rax_81 = (*(*rdi + 0x300))(rdi)
                                        rdi[0x48] = rax_81
                                        r14_6 = rax_81
                                    
                                    void* rsi_6 = *(rax_69 + 0x20)
                                    
                                    if (rsi_6 != 0)
                                        void* rax_82 = sub_142591550()
                                        void* rdx_32 = *(rsi_6 + 0x10)
                                        int64_t rax_83 = sx.q(*(rax_82 + 0x38))
                                        
                                        if (rax_83.d s<= *(rdx_32 + 0x38)
                                                && *(*(rdx_32 + 0x30) + (rax_83 << 3))
                                                == rax_82 + 0x30)
                                            uint32_t rax_85
                                            void* r8_20
                                            
                                            if (data_143de5480 != 0)
                                                rax_85, r8_20 = GetCurrentThreadId()
                                                rax_85.b = rax_85 == data_143de5470
                                            
                                            if (data_143de5480 == 0 || rax_85.b != 0)
                                                r8_20.b = 1
                                                sub_141f3e990(*(rax_69 + 0x20), 1, r8_20.b)
                                    
                                    int64_t* rsi_7 = *(rax_69 + 0x240)
                                    
                                    if (rsi_7 == 0)
                                        int64_t* rax_87 = (*(*rax_69 + 0x300))(rax_69)
                                        *(rax_69 + 0x240) = rax_87
                                        rsi_7 = rax_87
                                    
                                    (*(*rsi_7 + 0x90))(rsi_7, rax_69)
                                    void var_240
                                    sub_140dd5b90(&var_240, r14_6)
                                    sub_141e2a4a0(r15_2, &var_240)
                                    void var_238
                                    sub_140dd5b90(&var_238, r14_6)
                                    sub_141e170d0(r15_2, &var_238)
                                    (*(*rsi_7 + 0x98))(rsi_7)
                                
                                r12_2 = var_2a0
                                int64_t r14_7 = sx.q(*(r12_2 + 0x6c8))
                                int32_t rax_90 = (r14_7 + 1).d
                                *(r12_2 + 0x6c8) = rax_90
                                
                                if (rax_90 s> *(r12_2 + 0x6cc))
                                    sub_1405a4d70(r12_2 + 0x6c0)
                                
                                *(*(r12_2 + 0x6c0) + (r14_7 << 3)) = rax_69
                            else
                                int32_t rax_56 = *(rbx_8 + 0xc)
                                void* const rax_62
                                
                                if (rax_56 s>= data_143e1d9b4)
                                    rax_62 = nullptr
                                else
                                    int16_t temp8_1
                                    int32_t temp9_1
                                    temp8_1:temp9_1 = sx.q(rax_56)
                                    uint32_t rdx_23 = zx.d(temp8_1)
                                    int32_t rax_58 = temp9_1 + rdx_23
                                    rax_62 = *(data_143e1d9a0 + (sx.q(rax_58 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_58.w) - rdx_23) * 0x18
                                
                                if (((*(rax_62 + 8) u>> 0x1d).b & 1) != 0)
                                    goto label_141e08c22
                                
                                void* rax_65 = sub_14245f6d0()
                                void* rdx_25 = *(rbx_8 + 0x10)
                                int64_t rax_66 = sx.q(*(rax_65 + 0x38))
                                
                                if (rax_66.d s> *(rdx_25 + 0x38)
                                        || *(*(rdx_25 + 0x30) + (rax_66 << 3)) != rax_65 + 0x30
                                        || rax_55 != rdx_25)
                                    goto label_141e08c22
                        
                        r13_2 += 8
                    while (r13_2 != var_260)
                    
                    rcx_37 = var_1a0_1
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            var_1e0_1:8.d &= not.d(var_1f0:0xc.d)
            sub_140b4fe60(&var_1f0:8)
            rax_43 = var_1f8_1
            r15 = arg4
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        result = sub_141df2ca0(&var_190)
    else
        void* rax_2 = sub_14245f6d0()
        
        if (rax_2 == 0)
            goto label_141e0864b
        
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> arg2[7].d || *(arg2[6] + (rax_3 << 3)) != rax_2 + 0x30)
            goto label_141e0864b
        
        void* rax_5 = sub_141e01bc0(arg2)
        int64_t rdx_1 = *rax_5
        int64_t rax_6 = (*(rdx_1 + 0x98))(rax_5, rdx_1)
        int64_t rdx_2 = *result_1
        result = (*(rdx_2 + 0x98))(result_1, rdx_2)
        
        if (rax_6 == result)
            goto label_141e08650

__security_check_cookie(rax_1 ^ &var_2f8)
return result
