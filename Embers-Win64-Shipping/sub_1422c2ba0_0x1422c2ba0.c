// 函数: sub_1422c2ba0
// 地址: 0x1422c2ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r8 = *arg2
void* r10 = arg1
int64_t* var_1d8 = arg2
int64_t rdi = **(arg1 + 0x58)
int64_t* var_1a0 = r8
uint64_t rax_4 = zx.q(r8[0xe].w) * 3
void* r9 = rdi + (rax_4 << 3)
int64_t result = sx.q(*(rdi + (rax_4 << 3) + 4))
void* var_190 = r9

if (result.d == 0xffffffff)
label_1422c2d05:
    result.b = 0
else
    int64_t r14_1 = *r8
    int64_t* r12_1 = arg2[1]
    int64_t result_2 = 0
    int64_t* r15_3 = (result << 5) + *(arg1 + 0x38)
    int32_t rax_5 = result.d + 1
    uint32_t rcx_1 = zx.d(*(r15_3 + 0xa))
    int32_t rax_7 = zx.d(r15_3[1].w) - 1
    void* rax_8 = r8[4]
    int64_t rcx_2 = r8[0xa]
    int64_t* rdi_2 = sx.q(*(r15_3 + 0xc)) + rcx_2
    uint8_t r11_2 = (*(r8[5] + 0xa4) u>> 1).b & 1
    int64_t* var_188_1 = rdi_2
    int64_t rsi_1 = *rdi_2
    int64_t var_1b8_1 = rsi_1
    int32_t var_244 = rdi_2[1].d
    int128_t var_1c8
    int64_t* var_1c0
    
    if (r11_2 == 0)
    label_1422c2e39:
        int32_t var_288
        char* var_280
        char var_278
        uint64_t* var_270
        bool var_248
        int32_t var_240
        int32_t var_23c
        int32_t var_228
        void* var_218
        int64_t* var_170
        void var_164
        void* var_128
        int128_t* var_e8
        void* var_d8
        int32_t var_d0
        int32_t var_c8
        int32_t var_b8
        int64_t var_b0
        int64_t* var_98
        
        if (r14_1 == 0)
            void* r13_8 = arg2[0x24]
            void* rsi_4 = r8[1]
            var_128 = arg2[0x25]
            void* rax_170 = *r15_3
            int64_t* r15_15 = var_1d8
            int32_t i_5 = 0
            void* rcx_131 = *(rax_170 + 0x78)
            char rdx_61 = (*(rax_170 + 0x80)).b
            var_218 = rcx_131
            result = zx.q(*(rcx_131 + 0x3c))
            int32_t var_238_2 = result.d
            int32_t var_208_2 = result.d
            char var_247 = 0
            var_248 = false
            
            if (r15_15[0x26].d s> 0)
                int32_t i
                
                do
                    int64_t* rcx_132 = *(rsi_4 + 8)
                    var_244 = 0
                    int32_t* rdx_62 = *rcx_132
                    
                    if (&rdx_62[1] u> rcx_132[1])
                        int32_t* rdx_63 = &var_244
                        
                        if ((*(rsi_4 + 0x29) & 0x20) != 0)
                            sub_140b54070(rsi_4, rdx_63, arg4)
                        else
                            (*(*rsi_4 + 0x150))(rsi_4, rdx_63, 4)
                    else
                        var_244 = *rdx_62
                        *rcx_132 += 4
                    
                    int32_t rdx_72
                    int64_t* rdi_37
                    int32_t r14_22
                    
                    if (r12_1[1].d == *(r12_1 + 0x34))
                    label_1422c3fd5:
                        int32_t rax_176 = sub_140cd78f0(&var_218, 1)
                        int32_t rdi_35 = var_244
                        r14_22 = rax_176
                        sub_14090a150(r12_1, &var_1c8)
                        int32_t* rdx_69 = var_1c0
                        var_280 = nullptr
                        var_288 = var_1c8.d
                        *rdx_69 = rdi_35
                        rdx_69[1] = r14_22
                        rdx_69[2] = 0xffffffff
                        sub_140908a30(r12_1, &var_164, rdi_35, rdx_69, var_288, var_280)
                        void* r15_16 = var_128
                        int64_t rdi_36 = sx.q(*(r15_16 + 0x28))
                        int32_t rax_177 = (rdi_36 + 1).d
                        *(r15_16 + 0x28) = rax_177
                        
                        if (rax_177 s> *(r15_16 + 0x2c))
                            sub_141ce8380(r15_16, rdi_36.d)
                        
                        void* rax_178 = *(r15_16 + 0x20)
                        void* rcx_142 = r15_16
                        rdx_72 = var_208_2
                        r15_15 = var_1d8
                        
                        if (rax_178 != 0)
                            rcx_142 = rax_178
                        
                        var_238_2 = rdx_72
                        *(rcx_142 + (rdi_36 << 2)) = r14_22
                        rdi_37 = rdi_2
                        var_188_1 = rdi_37
                    else
                        void* rcx_134 = r12_1[8]
                        void* rdi_33 = &r12_1[7]
                        int64_t r8_30 = sx.q(var_244)
                        
                        if (rcx_134 != 0)
                            rdi_33 = rcx_134
                        
                        int32_t rax_175 = *(rdi_33 + (((sx.q(r12_1[9].d) - 1) & r8_30) << 2))
                        
                        if (rax_175 == 0xffffffff)
                            goto label_1422c3fd5
                        
                        int64_t rdi_34 = *r12_1
                        int64_t rdx_67
                        
                        while (true)
                            rdx_67 = sx.q(rax_175)
                            int64_t rcx_136 = rdx_67 * 2
                            
                            if (*(rdi_34 + (rcx_136 << 3)) == r8_30.d)
                                break
                            
                            rax_175 = *(rdi_34 + (rcx_136 << 3) + 8)
                            
                            if (rax_175 == 0xffffffff)
                                goto label_1422c3fd5
                        
                        if (rax_175 == 0xffffffff)
                            goto label_1422c3fd5
                        
                        int64_t rdx_73 = rdx_67 << 4
                        void* rdx_74 = rdx_73 + rdi_34
                        
                        if (rdx_73 == neg.q(rdi_34) || rdx_74 == -4)
                            goto label_1422c3fd5
                        
                        int64_t rdi_38 = sx.q(*(r13_8 + 0x28))
                        r14_22 = *(rdx_74 + 4)
                        int32_t rax_181 = (rdi_38 + 1).d
                        *(r13_8 + 0x28) = rax_181
                        
                        if (rax_181 s> *(r13_8 + 0x2c))
                            sub_141ce8380(r13_8, rdi_38.d)
                        
                        void* rax_182 = *(r13_8 + 0x20)
                        void* rcx_145 = r13_8
                        rdx_72 = var_238_2
                        
                        if (rax_182 != 0)
                            rcx_145 = rax_182
                        
                        *(rcx_145 + (rdi_38 << 2)) = r14_22
                        rdi_37 = var_188_1
                    
                    int64_t* r14_23
                    
                    if (rdi_37[1].d != 0)
                        void* rcx_146 = *rdi_37
                        
                        if ((not.b(rdx_61) & 1) == 0 && (rcx_146.b & 1) != 0)
                            rcx_146 = (rcx_146 s>> 1) + rdi_37
                        
                        r14_23 = sx.q(rdx_72 * r14_22) + rcx_146
                    else
                        r14_23 = nullptr
                    
                    void* rcx_148 = &r15_15[0x1e]
                    var_228 = var_244
                    void* rax_187 = r15_15[0x1c]
                    var_170 = r14_23
                    
                    if (rax_187 != 0)
                        rcx_148 = rax_187
                    
                    int64_t* var_268
                    int64_t* result_5
                    char* var_258
                    char* var_250
                    r15_15[0x1a]((*(*rcx_148 + 8))(rcx_148), &var_170, r15_15, &var_228, var_288, 
                        var_280, var_278, var_270, var_268, result_5, var_258, var_250)
                    int32_t rdx_78 = var_244
                    var_228 = rdx_78
                    result, arg4 = sub_1422b3880(&r12_1[0x15], rdx_78, &var_228)
                    int64_t* result_4 = result
                    
                    if (r11_2 != 0)
                        var_250 = &var_247
                        var_258 = &var_248
                        result_5 = result_4
                        var_268 = r14_23
                        var_270 = r14_23
                        var_278.q = 0
                        var_280.d = rax_7
                        var_288 = rax_5
                        result, arg4 = sub_1422cd260(arg1, nullptr, result_2, rsi_4, arg4, var_288, 
                            var_280.d, var_278, var_270.d, var_268, result_5, var_258, var_250)
                        
                        if (result.b == 0)
                            goto label_1422c2d05_1
                        
                    label_1422c434d:
                        
                        if ((*(rsi_4 + 0x29) & 1) != 0)
                            goto label_1422c2d05_1
                        
                        *(var_1a0 + 0x4c) |= var_247
                        *(var_1a0 + 0x4b) |= var_248
                    else if ((*(rsi_4 + 0x29) & 1) == 0)
                        int64_t rdx_79 = *(rsi_4 + 0xa8)
                        
                        if (rdx_79 s< *(rsi_4 + 0xa0))
                            char rdi_39 = *(sx.q((rdx_79 s>> 3).d) + *(rsi_4 + 0x90))
                            *(rsi_4 + 0xa8) = rdx_79 + 1
                            
                            if ((rdi_39 & 1 << (zx.d(rdx_79.b) & 7).b) != 0)
                                var_e8.b = 0
                                int64_t var_e0_5 = 0
                                var_d8 = rsi_4
                                int64_t var_a8_4 = 0
                                int16_t var_a0 = 0
                                var_e8:1.b = not.b(*(arg1 + 0x20)) & 1
                                var_d0.q = &var_248
                                var_c8.q = &var_247
                                int32_t var_c0
                                var_c0.q = arg1 + 0x28
                                var_b8.q = arg1 + 0x38
                                var_b0 = rcx_2
                                int32_t var_80_3 = rax_5
                                int32_t var_7c_4 = rax_7
                                var_23c = 0
                                int64_t rax_203 = *rsi_4
                                var_98 = r14_23
                                int64_t var_90_3 = 0
                                int64_t* result_6 = result_4
                                int32_t var_78_2 = 0
                                int16_t var_74_1 = 0
                                (*(rax_203 + 0x168))(rsi_4, &var_23c)
                                
                                if (var_e8.b != 0)
                                    void* rcx_157 = var_d8
                                    var_240 = 0xabadf00d
                                    int64_t* rdx_83 = *(rcx_157 + 8)
                                    int32_t* rdi_40 = *rdx_83
                                    
                                    if (&rdi_40[1] u> rdx_83[1])
                                        int32_t* rdx_84 = &var_240
                                        
                                        if ((*(rcx_157 + 0x29) & 0x20) != 0)
                                            sub_140b54070(rcx_157, rdx_84, arg4)
                                        else
                                            (*(*rcx_157 + 0x150))(rcx_157, rdx_84, 4)
                                    else
                                        var_240 = *rdi_40
                                        *rdx_83 += 4
                                
                                int16_t rax_207 = var_23c.w
                                result, arg4 = sub_1422cd720(&var_e8, &var_98, arg4)
                                
                                if (result.b == 0)
                                    goto label_1422c2d05_1
                                
                                if (0 != rax_207)
                                    goto label_1422c2d05_1
                                
                                goto label_1422c434d
                        else
                            sub_140b55370(rsi_4)
                    
                    i = i_5 + 1
                    i_5 = i
                while (i s< r15_15[0x26].d)
            
            result.b = 1
        else
            int64_t* r11_3 = *r8
            void* rdi_7 = nullptr
            int64_t rcx_21 = *(r10 + 0x48)
            int64_t* r8_3 = arg2[0x22]
            uint64_t rax_23 = zx.q(*(r15_3 + 0x14)) << 4
            int64_t* var_1f0_1 = r11_3
            int32_t* var_1b0_1 = r8_3
            void* var_180 = nullptr
            void* r14_2 = *(rax_23 + rcx_21 - 8)
            void* var_1d8_1 = r14_2
            int32_t i_7 = 0
            
            if (r11_2 == 0)
                if (arg3 == 0)
                    goto label_1422c3c03
                
                void* r12_3 = sx.q(*(r9 + 8)) * 0x1660 + *(*(arg3 + 0x808) + 8)
                void* rcx_23 = arg2[0x23]
                void* var_1a8_1 = r12_3
                int64_t* r14_3 = *(rcx_23 + 0x10)
                int64_t* var_140_2 = r14_3
                
                if (r14_3 != 0)
                    int32_t rax_26 = r14_3[1].d
                    
                    if (rax_26 == 0)
                        r14_3 = nullptr
                        var_140_2 = nullptr
                    label_1422c2ed3:
                        
                        if (r14_3 != 0)
                            int32_t rax_28 = r14_3[1].d
                            r14_3[1].d = rax_28
                            
                            if (rax_28 == 0)
                                (**r14_3)(r14_3)
                                int32_t temp11_1 = *(r14_3 + 0xc)
                                *(r14_3 + 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    (*(*r14_3 + 8))(r14_3, 1)
                    else
                        r14_3[1].d = rax_26 + 1
                        
                        if (r14_3 != 0)
                            rdi_7 = *(rcx_23 + 8)
                            goto label_1422c2ed3
                
                int32_t r14_16 = *(r12_3 + 0x165c)
                int32_t rax_31 = *(rdi_7 + 0x6c)
                int32_t rdx_5 = r14_16 - rax_31
                var_228 = rax_31
                *(rdi_7 + 0x6c) = r14_16
                int32_t rcx_27 = r14_16 - *(r12_3 + 0x1658)
                r8_3 = sx.q(r15_3[2].d) + *(arg3 + 0x820)
                var_240 = r14_16
                void* rax_35 = (zx.q(r14_16) & 0x3f) * 0x58 + r12_3
                var_170 = r8_3
                var_128 = rax_35
                int64_t var_1e8
                int64_t var_1e0
                
                if (*(rax_35 + 0x50) == 0)
                    int32_t r13_1 = var_244
                    *(rax_35 + 0x50) = 1
                    *(r12_3 + 0x1600) = *(rdi_7 + 0x68)
                    void* rax_37 = *r15_3
                    uint32_t r14_5 = (r13_1 + 0x1f) u>> 5
                    int64_t** var_88_1 = nullptr
                    int32_t var_7c_1 = 0x80
                    void* rcx_28 = *(rax_37 + 0x78)
                    char rdx_6 = (*(rax_37 + 0x80)).b
                    int32_t rax_38 = *(rcx_28 + 0x3c)
                    var_218 = rcx_28
                    int64_t* rcx_29 = r8_3
                    void** var_210_1 = rcx_29
                    
                    if (r14_5 u<= 4)
                        var_98 = nullptr
                        int64_t var_90_1 = 0
                    else
                        sub_1405a4a00(&var_98, 0, r14_5, 4)
                        int64_t** r12_4 = &var_98
                        uint32_t var_7c_2 = r14_5 << 5
                        
                        if (var_88_1 != 0)
                            r12_4 = var_88_1
                        
                        if (r14_5 u> 8)
                            memset(r12_4, 0, zx.q(r14_5) << 2)
                        else if (r14_5 != 0)
                            __builtin_memset(r12_4, 0, zx.q(r14_5) << 2)
                        
                        uint64_t rdx_7 = zx.q(r14_5 - 1)
                        *(r12_4 + (rdx_7 << 2)) &= 0xffffffff u>> ((neg.d(r13_1)).b & 0x1f)
                        rcx_29 = var_210_1
                    
                    void* rax_43 = *r15_3
                    int32_t r14_6 = rcx_27
                    var_248 = r14_6 == 1
                    int32_t r15_4 = *(rax_43 + 0x80)
                    void* rax_44 = *(rax_43 + 0x78)
                    int32_t var_22c = r15_4
                    var_23c = *(rax_44 + 0x3c)
                    int32_t rax_46 = rcx_29[1].d
                    int32_t r12_5 = rax_46
                    int32_t var_194
                    
                    if (r13_1 != 0 && rax_46 != 0 && r14_6 != 1)
                        var_e8 = nullptr
                        int32_t var_e0_1 = 0
                        int32_t var_bc_1 = 0x80
                        __builtin_memset(&var_d8, 0, 0x1c)
                        int32_t var_b8_1 = 0xffffffff
                        int32_t var_b4_1 = 0
                        int64_t var_a8_1 = 0
                        int32_t var_a0_1 = 0
                        arg4 = sub_140780e10(&var_e8, var_1a8_1 + 0x1608)
                        int64_t* r15_5 = *(var_1a8_1 + 0x1648)
                        int64_t* var_1a0_1 = r15_5
                        
                        if (r15_5 == 0)
                            memmove(&var_b0, var_1a8_1 + 0x1640, (r15_5 + 4).d)
                        
                        if (var_a8_1 != 0)
                            arg4 = sub_140a74f90(var_a8_1)
                            r15_5 = *(var_1a8_1 + 0x1648)
                            var_1a0_1 = r15_5
                        
                        *(var_1a8_1 + 0x1648) = 0
                        int32_t rax_47 = *(var_1a8_1 + 0x1650)
                        int32_t var_a0_2 = rax_47
                        *(var_1a8_1 + 0x1650) = 0
                        int64_t* var_a8 = r15_5
                        
                        if (r13_1 s> *(var_1a8_1 + 0x1610) - *(var_1a8_1 + 0x163c))
                            sub_14090a510(var_1a8_1 + 0x1608, r13_1)
                            int32_t rax_54
                            
                            if (r13_1 u< 4)
                                rax_54 = 1
                            else
                                uint32_t rax_51 = r13_1 u>> 1
                                uint64_t rflags_1
                                int32_t temp0_2
                                temp0_2, rflags_1 = _bit_scan_reverse(rax_51 + 8)
                                int32_t rcx_40
                                
                                if (rax_51 == 0xfffffff8)
                                    rcx_40 = 0x20
                                else
                                    rcx_40 = 0x1f - temp0_2
                                
                                uint64_t rflags_2
                                char temp0_3
                                temp0_3, rflags_2 = _bit_scan_reverse(rax_51 + 7)
                                
                                if (rax_51 == 0xfffffff9)
                                    rax_54 = 1
                                else
                                    rax_54 = 1 << ((not.d(rcx_40 << 0x1a s>> 0x1f)).b
                                        & (0x20 - (0x1f - temp0_3)))
                            
                            int32_t rcx_45 = *(var_1a8_1 + 0x1650)
                            
                            if (rcx_45 == 0 || rcx_45 s< rax_54)
                                *(var_1a8_1 + 0x1650) = rax_54
                                arg4 = sub_140908c40(var_1a8_1 + 0x1608)
                        
                        int32_t r13_2 = 0
                        
                        if (var_244 s> 0)
                            int32_t rcx_47 = 0
                            int32_t var_1f8_1 = 0
                            int32_t rax_55 = 0
                            
                            while (rax_55 s< r12_5)
                                void* rcx_48
                                
                                if (var_188_1[1].d != 0)
                                    void* rax_57 = *var_188_1
                                    
                                    if ((not.b(var_22c.b) & 1) == 0 && (rax_57.b & 1) != 0)
                                        rax_57 = (rax_57 s>> 1) + var_188_1
                                    
                                    rcx_48 = sx.q(rcx_47) + rax_57
                                else
                                    rcx_48 = nullptr
                                
                                int32_t* r14_9 = sx.q(*(var_190 + 0x14))
                                int64_t r15_6 = sx.q(*(r14_9 + rcx_48))
                                int32_t rdx_12 = var_210_1[1].d
                                var_194 = r15_6.d
                                void* rdi_11
                                
                                if (rdx_12 != 0)
                                    void* rcx_51 = *var_210_1
                                    
                                    if ((not.b(rdx_6) & 1) == 0 && (rcx_51.b & 1) != 0)
                                        rcx_51 = (rcx_51 s>> 1) + var_210_1
                                    
                                    rdi_11 = sx.q(rax_38 * r13_2) + rcx_51
                                else
                                    rdi_11 = nullptr
                                
                                sub_14090a150(var_1a8_1 + 0x1608, &var_1c8)
                                int32_t rax_63 = var_1c8.d
                                var_280 = nullptr
                                *var_1c0 = r15_6.d
                                *(var_1c0 + 4) = r13_2
                                var_1c0[1].d = 0xffffffff
                                arg4 = sub_140908a30(var_1a8_1 + 0x1608, &var_164, r15_6.d, 
                                    var_1c0, rax_63, var_280)
                                
                                if (r15_6.d != *(r14_9 + rdi_11))
                                    if (var_e0_1 == var_b4_1)
                                    label_1422c3344:
                                        int64_t** rcx_62 = &var_98
                                        
                                        if (var_88_1 != 0)
                                            rcx_62 = var_88_1
                                        
                                        int32_t rax_70 = r13_2
                                        
                                        if (r13_2 s< 0)
                                            rax_70 = r13_2 + 0x1f
                                        
                                        void* rdi_14 = rcx_62 + (sx.q(rax_70 s>> 5) << 2)
                                        *rdi_14 |= 1 << (r13_2.b & 0x1f)
                                        int32_t r14_10 = var_210_1[1].d
                                        var_210_1[1].d = r14_10 + 1
                                        void* rcx_69
                                        void* rdx_20
                                        uint32_t count
                                        
                                        if ((not.b(rdx_6) & 1) != 0)
                                            if (r14_10 + 1 s> *(var_210_1 + 0xc))
                                                sub_140ce4cd0(var_210_1, zx.q(r14_10), rax_38)
                                            
                                            void* rdi_18 = *var_210_1
                                            count = (r14_10 - r13_2) * rax_38
                                            rdx_20 = sx.q(rax_38 * r13_2) + rdi_18
                                            rcx_69 = sx.q((r13_2 + 1) * rax_38) + rdi_18
                                        else
                                            if (r14_10 + 1 s> *(var_210_1 + 0xc))
                                                sub_140ce4c40(var_210_1, r14_10, rax_38)
                                            
                                            void* r10_1 = *var_210_1
                                            int64_t rcx_67 = r10_1 s>> 1
                                            void* r11_4 = rcx_67 + var_210_1
                                            char r9_2 = *var_210_1 & 1
                                            
                                            if (r9_2 == 0)
                                                r11_4 = r10_1
                                            
                                            void* rcx_68 = rcx_67 + var_210_1
                                            count = (r14_10 - r13_2) * rax_38
                                            rdx_20 = sx.q(rax_38 * r13_2) + r11_4
                                            
                                            if (r9_2 == 0)
                                                rcx_68 = r10_1
                                            
                                            rcx_69 = rcx_68 + sx.q((r13_2 + 1) * rax_38)
                                        
                                        memmove(rcx_69, rdx_20, count)
                                        sub_1420b6b60(&var_218, r13_2, 1)
                                        void* rdx_32
                                        
                                        if (var_210_1[1].d != 0)
                                            void* rcx_77 = *var_210_1
                                            
                                            if ((not.b(rdx_6) & 1) == 0 && (rcx_77.b & 1) != 0)
                                                rcx_77 = (rcx_77 s>> 1) + var_210_1
                                            
                                            rdx_32 = sx.q(rax_38 * r13_2) + rcx_77
                                        else
                                            rdx_32 = nullptr
                                        
                                        r12_5 += 1
                                        *(sx.q(*(var_190 + 0x14)) + rdx_32) = var_194
                                    else
                                        int64_t* rax_67 = &var_b0
                                        
                                        if (var_1a0_1 != 0)
                                            rax_67 = var_1a0_1
                                        
                                        int32_t rax_68 =
                                            *(rax_67 + ((sx.q(rax_47 - 1) & r15_6) << 2))
                                        
                                        if (rax_68 == 0xffffffff)
                                            goto label_1422c3344
                                        
                                        int128_t* rdi_13 = var_e8
                                        int64_t rdx_16
                                        
                                        while (true)
                                            rdx_16 = sx.q(rax_68)
                                            
                                            if (rdi_13[rdx_16].d == r15_6.d)
                                                break
                                            
                                            rax_68 = *(&rdi_13[rdx_16] + 8)
                                            
                                            if (rax_68 == 0xffffffff)
                                                goto label_1422c3344
                                        
                                        if (rax_68 == 0xffffffff)
                                            goto label_1422c3344
                                        
                                        void* rdx_22 = &rdi_13[rdx_16]
                                        
                                        if (rdx_16 << 4 == neg.q(rdi_13) || rdx_22 == -4)
                                            goto label_1422c3344
                                        
                                        int32_t rax_84
                                        void* rdi_16
                                        int64_t r8_13
                                        int64_t* r9_4
                                        
                                        if ((not.b(rdx_6) & 1) != 0)
                                            rdi_16 = *var_210_1
                                            r8_13 = sx.q(rax_38)
                                            rax_84 = r8_13.d
                                            r9_4 = sx.q(r8_13.d * r13_2) + rdi_16
                                        else
                                            void* rdx_24 = *var_210_1
                                            rdi_16 = rdx_24
                                            char rcx_70 = *var_210_1 & 1
                                            
                                            if (rcx_70 != 0)
                                                rdi_16 = (rdi_16 s>> 1) + var_210_1
                                            
                                            if (rcx_70 != 0)
                                                rdx_24 = (rdx_24 s>> 1) + var_210_1
                                            
                                            int64_t rcx_71 = sx.q(rax_38)
                                            r8_13 = rcx_71
                                            rax_84 = rcx_71.d
                                            r9_4 = sx.q(rcx_71.d * r13_2) + rdx_24
                                        
                                        sub_140635010(r9_4, 
                                            sx.q(rax_84 * (r12_5 - rax_46 + *(rdx_22 + 4)))
                                                + rdi_16, 
                                            r8_13)
                                
                                r13_2 += 1
                                rcx_47 = var_1f8_1 + var_23c
                                rax_55 = r13_2
                                var_1f8_1 = rcx_47
                                
                                if (r13_2 s>= var_244)
                                    break
                            
                            rsi_1 = var_1b8_1
                            r15_5 = var_1a0_1
                        
                        int32_t var_a0_3 = 0
                        
                        if (r15_5 != 0)
                            arg4 = sub_140a74f90(r15_5)
                        
                        var_e0_1 = 0
                        var_b8 = 0xffffffff
                        int32_t var_b4_2 = 0
                        sub_14059a8e0(&var_d8, 0)
                        int64_t rcx_84 = var_c8.q
                        
                        if (rcx_84 != 0)
                            arg4 = sub_140a74f90(rcx_84)
                        
                        int128_t* rcx_85 = var_e8
                        
                        if (rcx_85 != 0)
                            arg4 = sub_140a74f90(rcx_85)
                        
                        r14_6 = rcx_27
                        r15_4 = var_22c
                        r13_1 = var_244
                    
                    sub_1422cf5a0(&var_218, r13_1)
                    int64_t* rdi_20 = *var_170
                    var_170 = rdi_20
                    bool cond:6_1 = r14_6 == 1
                    
                    if (r14_6 == 1)
                        goto label_1422c35f4
                    
                    if (r12_5 s< r13_1)
                        cond:6_1 = r14_6 == 1
                    label_1422c35f4:
                        
                        if (cond:6_1)
                            r12_5 = 0
                        
                        var_22c = r12_5
                        
                        if (r12_5 s< r13_1)
                            r15_4.b = not.b(r15_4.b)
                            r15_4.b &= 1
                            
                            do
                                void* rax_97
                                
                                if (var_188_1[1].d != 0)
                                    void* rcx_87 = *var_188_1
                                    
                                    if (r15_4.b == 0 && (rcx_87.b & 1) != 0)
                                        rcx_87 = (rcx_87 s>> 1) + var_188_1
                                    
                                    rax_97 = sx.q(var_23c * r12_5) + rcx_87
                                else
                                    rax_97 = nullptr
                                
                                int64_t r8_16 = sx.q(*(var_190 + 0x14))
                                int32_t r9_6 = *(rax_97 + r8_16)
                                var_194 = r9_6
                                void* rax_102
                                
                                if (var_210_1[1].d != 0)
                                    void* rcx_91 = *var_210_1
                                    
                                    if ((not.b(rdx_6) & 1) == 0 && (rcx_91.b & 1) != 0)
                                        rcx_91 = (rcx_91 s>> 1) + var_210_1
                                    
                                    rax_102 = sx.q(rax_38 * r12_5) + rcx_91
                                else
                                    rax_102 = nullptr
                                
                                int64_t** rdx_36 = &var_98
                                *(rax_102 + r8_16) = r9_6
                                int32_t rax_106 = r12_5
                                
                                if (var_88_1 != 0)
                                    rdx_36 = var_88_1
                                
                                if (r12_5 s< 0)
                                    rax_106 = r12_5 + 0x1f
                                
                                void* rdx_37 = rdx_36 + (sx.q(rax_106 s>> 5) << 2)
                                *rdx_37 |= 1 << (r12_5.b & 0x1f)
                                r8_3, arg4 = sub_1422b3610(var_1a8_1 + 0x1608, &var_194, &var_22c)
                                r12_5 = var_22c + 1
                                var_22c = r12_5
                            while (r12_5 s< r13_1)
                            
                            rdi_20 = var_170
                            rsi_1 = var_1b8_1
                            r14_6 = rcx_27
                    
                    int32_t rcx_95 = 0
                    int32_t* r15_8 = var_1b0_1
                    var_1e8 = 0
                    var_1e0 = 0
                    int32_t* rax_110 = *(var_1b0_1 + 0x40)
                    
                    if (rax_110 != 0)
                        r15_8 = rax_110
                    
                    void* r13_3 = &r15_8[sx.q(var_1b0_1[0x12]) * 2]
                    
                    if (r15_8 != r13_3)
                        void* r10_5 = arg1
                        void* r9_7 = r10_5 + 0x28
                        void* var_1b8_2 = r9_7
                        
                        while (true)
                            var_1e0.d = 0
                            
                            if (rcx_95 != 1)
                                sub_1405947f0(&var_1e8, 1)
                                r9_7 = var_1b8_2
                                r10_5 = arg1
                            
                            int32_t rcx_97 = *r15_8
                            var_e8.b = var_248
                            int32_t rax_114
                            int64_t** rdx_40
                            
                            if (r14_6 != 1)
                                rdx_40 = &var_98
                                
                                if (var_88_1 != 0)
                                    rdx_40 = var_88_1
                                
                                rax_114 = rcx_97
                                
                                if (rcx_97 s< 0)
                                    rax_114 = rcx_97 + 0x1f
                                
                                var_e8:1.b = 0
                            
                            if (r14_6 == 1 || (*(rdx_40 + (sx.q(rax_114 s>> 5) << 2))
                                    & 1 << (rcx_97.b & 0x1f)) != 0)
                                var_e8:1.b = 1
                            
                            int64_t rcx_99 = sx.q(rcx_97 * rcx_1)
                            var_e8:2.b = *(r10_5 + 0x20)
                            var_d8 = r10_5 + 0x38
                            void* var_e0_2 = r9_7
                            void* r12_8 = rcx_99 + rdi_20
                            void* var_100 = rcx_99 + rsi_1
                            __builtin_memset(&var_d0, 0, 0x2a)
                            int64_t* var_f0_1 = &var_1e8
                            void* var_f8_1 = r12_8
                            var_288.w = 0
                            r8_3, arg4 =
                                sub_1422be6d0(&var_e8, &var_100, rax_5.w, rax_7.w, var_288.w)
                            int64_t r14_14 = sx.q(var_1e0.d)
                            
                            if (r14_14.d != 0)
                                int32_t rax_121 = (r14_14 + 1).d
                                var_1e0.d = rax_121
                                
                                if (rax_121 s> var_1e0:4.d)
                                    sub_140594770(&var_1e8)
                                
                                void* rcx_102 = var_128
                                *(var_1e8 + (r14_14 << 1)) = 0
                                var_1c0 = &var_1e8
                                var_1c8.q = &r15_8[1]
                                r8_3, arg4 = sub_14178d4d0(rcx_102, &var_164, &var_1c8, nullptr)
                                *(sx.q(*(var_190 + 0x14)) + r12_8) = r15_8[1]
                            
                            r15_8 = &r15_8[2]
                            
                            if (r15_8 == r13_3)
                                break
                            
                            rcx_95 = var_1e0:4.d
                            r9_7 = var_1b8_2
                            r14_6 = rcx_27
                            r10_5 = arg1
                        
                        int64_t rcx_104 = var_1e8
                        
                        if (rcx_104 != 0)
                            r8_3, arg4 = sub_140a74f90(rcx_104)
                    
                    if (var_88_1 != 0)
                        r8_3, arg4 = sub_140a74f90(var_88_1)
                    
                    r14_16 = var_240
                    r12_3 = var_1a8_1
                
                int32_t rdi_22 = var_228
                
                if (rdi_22 != 0 && rdx_5 - 1 u<= 0x3d)
                    int32_t* r15_9 = var_1b0_1
                    r8_3.b = 1
                    r8_3, arg4 = sub_1422d1f90(&var_180, r15_9[0x12], r8_3.b)
                    int32_t rax_126 = rdi_22 + 1
                    var_23c = rax_126
                    
                    while (rax_126 u<= r14_16)
                        int32_t i_4 = 0
                        
                        if (r15_9[0x12] s> 0)
                            r8_3 = nullptr
                            int64_t* var_1b8_3 = nullptr
                            void* r13_5 = (zx.q(rax_126) & 0x3f) * 0x58 + r12_3
                            void* r14_18 = var_180 + 8
                            int32_t i_1
                            
                            do
                                int32_t* rax_128 = *(r15_9 + 0x40)
                                
                                if (rax_128 != 0)
                                    r15_9 = rax_128
                                
                                int32_t* r15_10 = r15_9 + r8_3
                                int64_t r8_22 = sx.q(r15_10[1])
                                
                                if (*(r13_5 + 8) != *(r13_5 + 0x34))
                                    void* rcx_107 = *(r13_5 + 0x40)
                                    void* rdi_23 = r13_5 + 0x38
                                    
                                    if (rcx_107 != 0)
                                        rdi_23 = rcx_107
                                    
                                    int32_t j =
                                        *(rdi_23 + (((sx.q(*(r13_5 + 0x48)) - 1) & r8_22) << 2))
                                    
                                    if (j != 0xffffffff)
                                        int64_t rdi_24 = *r13_5
                                        
                                        do
                                            int64_t j_1 = sx.q(j)
                                            int32_t* rdx_50 = j_1 << 5
                                            
                                            if (*(rdx_50 + rdi_24) == r8_22.d)
                                                if (j != 0xffffffff)
                                                    int64_t rcx_108 = j_1 << 5
                                                    
                                                    if (rcx_108 != neg.q(rdi_24)
                                                            && rcx_108 + rdi_24 != -8
                                                            && *(rcx_108 + rdi_24 + 0x10) s> 1)
                                                        var_1e8 = 0
                                                        var_1e8 = *(r14_18 - 8)
                                                        *(r14_18 - 8) = 0
                                                        var_1e0.d = *r14_18
                                                        var_1e0:4.d = *(r14_18 + 4)
                                                        *r14_18 = 0
                                                        sub_1405947f0(r14_18 - 8, 1)
                                                        int64_t rdx_51 = *(arg1 + 0x60)
                                                        int32_t rax_134 = *r15_10 * rcx_1
                                                        var_1c8.q = rcx_108 + rdi_24 + 8
                                                        var_1c0.d = 0
                                                        var_e8 = &var_1c8
                                                        int32_t rcx_111 = *(var_1d8_1 + 8)
                                                        int64_t rax_136 = sx.q(rax_134) + rsi_1
                                                        void* var_e0_3 = arg1 + 0x38
                                                        var_d8 = var_1d8_1
                                                        int32_t var_d0_1 = rcx_111
                                                        uint32_t var_cc_1 = rcx_1
                                                        int32_t var_c8_1 = 1
                                                        int32_t var_c4_1 = rax_5
                                                        int32_t var_c0_1 = rax_7
                                                        int64_t var_a8_2 = rdx_51
                                                        int32_t var_a0_4 = 0xffffffff
                                                        
                                                        if (var_1e0.d != 0)
                                                            int32_t var_80_2 = rcx_111
                                                            var_128 = &var_1e8
                                                            uint32_t var_7c_3 = rcx_1
                                                            int32_t var_120_1 = 0
                                                            int32_t var_70_1 = rax_7
                                                            int64_t var_58_1 = rdx_51
                                                            var_98 = &var_128
                                                            void* var_90_2 = arg1 + 0x38
                                                            void* var_88_2 = var_1d8_1
                                                            int32_t var_78_1 = 1
                                                            int16_t var_74
                                                            var_74.d = rax_5
                                                            int32_t var_50_1 = 0xffffffff
                                                            var_288.q = r14_18 - 8
                                                            sub_1422ca9c0(arg1, &var_e8, &var_98, 
                                                                rax_136, var_288)
                                                        else
                                                            sub_1422cc4a0(arg1, &var_e8, rax_136, 
                                                                r14_18 - 8)
                                                        
                                                        int64_t r15_12 = sx.q(*r14_18)
                                                        int32_t rax_137 = (r15_12 + 1).d
                                                        *r14_18 = rax_137
                                                        
                                                        if (rax_137 s> *(r14_18 + 4))
                                                            sub_140594770(r14_18 - 8)
                                                        
                                                        *(*(r14_18 - 8) + (r15_12 << 1)) = 0
                                                        int64_t rcx_115 = var_1e8
                                                        
                                                        if (rcx_115 != 0)
                                                            arg4 = sub_140a74f90(rcx_115)
                                                
                                                break
                                            
                                            j = *(rdx_50 + rdi_24 + 0x18)
                                        while (j != 0xffffffff)
                                
                                r14_18 += 0x10
                                i_1 = i_4 + 1
                                r15_9 = var_1b0_1
                                r8_3 = &var_1b8_3[1]
                                i_4 = i_1
                                var_1b8_3 = r8_3
                            while (i_1 s< r15_9[0x12])
                            rax_126 = var_23c
                            r14_16 = var_240
                        
                        r12_3 = var_1a8_1
                        rax_126 += 1
                        var_23c = rax_126
                
                if (var_140_2 != 0)
                    var_140_2[1].d -= 1
                    
                    if (var_140_2[1].d == 1)
                        (**var_140_2)(var_140_2)
                        int32_t temp10_1 = *(var_140_2 + 0xc)
                        *(var_140_2 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*var_140_2 + 8))(var_140_2, 1)
                
                if (i_7 != 0)
                    r8_3 = var_1b0_1
                    rdi_7 = var_180
                else
                    r14_2 = var_1d8_1
                label_1422c3c03:
                    r8_3.b = 1
                    arg4 = sub_1422d1f90(&var_180, var_1b0_1[0x12], r8_3.b)
                    r8_3 = var_1b0_1
                    int32_t i_2 = 0
                    rdi_7 = var_180
                    
                    if (r8_3[9].d s> 0)
                        int64_t r13_6 = 0
                        void* rdi_27 = rdi_7 + 8
                        
                        do
                            int64_t* rax_143 = r8_3[8]
                            int64_t* rcx_119 = r8_3
                            
                            if (rax_143 != 0)
                                rcx_119 = rax_143
                            
                            var_280.d = 0
                            var_288.q = sx.q(*(rcx_119 + r13_6) * rcx_1) + rsi_1
                            arg4 = sub_1422b9f80(arg1, r14_2, rax_5, rax_7, var_288, var_280.w, 1, 
                                rdi_27 - 8)
                            int64_t r14_19 = sx.q(*rdi_27)
                            
                            if (r14_19.d != 0)
                                int32_t rax_148 = (r14_19 + 1).d
                                *rdi_27 = rax_148
                                
                                if (rax_148 s> *(rdi_27 + 4))
                                    sub_140594770(rdi_27 - 8)
                                
                                *(*(rdi_27 - 8) + (r14_19 << 1)) = 0
                            
                            r8_3 = var_1b0_1
                            i_2 += 1
                            r14_2 = var_1d8_1
                            r13_6 += 8
                            rdi_27 += 0x10
                        while (i_2 s< r8_3[9].d)
                        
                        rdi_7 = var_180
                
                r11_3 = var_1f0_1
            
            int32_t r13_7 = 0
            int64_t* rdi_31
            
            if (r8_3[9].d s<= 0)
                rdi_31 = var_1f0_1
            else
                void* r12_11 = nullptr
                void* r15_14 = rdi_7
                
                while (true)
                    int64_t* rax_150 = r8_3[8]
                    int64_t* rcx_122 = r8_3
                    
                    if (rax_150 != 0)
                        rcx_122 = rax_150
                    
                    int64_t* rcx_123 = r11_3[1]
                    var_240 = *(r12_11 + rcx_122 + 4)
                    int32_t* rdx_58 = *rcx_123
                    
                    if (&rdx_58[1] u> rcx_123[1])
                        int32_t* rdx_59 = &var_240
                        
                        if ((*(r11_3 + 0x29) & 0x20) != 0)
                            sub_140b54070(r11_3, rdx_59, arg4)
                        else
                            (*(*r11_3 + 0x150))(r11_3, rdx_59, 4)
                        
                        r11_3 = var_1f0_1
                    else
                        var_240 = *rdx_58
                        *rcx_123 += 4
                    
                    int64_t rdi_30 = sx.q(*(r12_11 + rcx_122) * rcx_1) + rsi_1
                    
                    if (r11_2 == 0)
                        int32_t r14_20 = *(r15_14 + 8)
                        rdx_58.b = r14_20 s> 1
                        sub_140b560b0(r11_3, rdx_58.b)
                        
                        if (r14_20 s<= 1)
                            rdi_31 = var_1f0_1
                        else
                            var_e8 = &var_1c8
                            void* var_e0_4 = arg1 + 0x38
                            var_d8 = var_1d8_1
                            var_1c8.q = r15_14
                            var_1c0.d = 0
                            int32_t var_d0_2 = *(var_1d8_1 + 8)
                            uint32_t var_cc_2 = rcx_1
                            int32_t var_c4_2 = rax_5
                            int32_t var_c0_2 = rax_7
                            var_278.d = 1
                            rdi_31 = var_1f0_1
                            int64_t var_a8_3 = *(arg1 + 0x60)
                            int32_t var_c8_2 = 1
                            var_288.q = &var_e8
                            int32_t var_a0_5 = 0xffffffff
                            arg4 = sub_1422d0a00(arg1, 0, rdi_31, 0, arg4, var_288, rdi_30, 
                                var_278, nullptr)
                            int64_t rax_168 = *rdi_31
                            var_228 = 0
                            (*(rax_168 + 0x168))(rdi_31, &var_228)
                    else
                        int64_t var_268_1 = rdi_30
                        var_270.d = rax_7
                        var_278.d = rax_5
                        var_288.q = rax_8
                        arg4 = sub_1422cfad0(arg1, 0, r11_3, 0, arg4, var_288, result_2, var_278)
                        rdi_31 = var_1f0_1
                    
                    r8_3 = var_1b0_1
                    r13_7 += 1
                    r12_11 += 8
                    r15_14 += 0x10
                    
                    if (r13_7 s>= r8_3[9].d)
                        break
                    
                    r11_3 = var_1f0_1
            
            int32_t i_6 = i_7
            void* r14_21 = var_180
            char result_3 = not.b(*(rdi_31 + 0x29)) & 1
            void* rdi_32 = r14_21
            
            if (i_6 != 0)
                int32_t i_3
                
                do
                    int64_t rcx_129 = *rdi_32
                    
                    if (rcx_129 != 0)
                        sub_140a74f90(rcx_129)
                    
                    rdi_32 += 0x10
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
            
            if (r14_21 != 0)
                sub_140a74f90(r14_21)
            
            result = zx.q(result_3)
    else
        int64_t var_110
        arg4 = sub_140d21e10(*(r10 + 0x60), &var_110, 0)
        int64_t result_1
        sub_142168720(rax_8, &result_1, &var_110)
        result = result_1
        result_2 = result
        int64_t* var_150
        
        if (result != 0)
        label_1422c2df0:
            
            if (var_150 != 0)
                var_150[1].d -= 1
                
                if (var_150[1].d == 1)
                    (**var_150)(var_150)
                    int32_t temp1_1 = *(var_150 + 0xc)
                    *(var_150 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_150 + 8))(var_150, 1)
            
            int64_t rcx_20 = var_110
            
            if (rcx_20 != 0)
                arg4 = sub_140a74f90(rcx_20)
            
            r10 = arg1
            r9 = var_190
            rdi_2 = var_188_1
            arg2 = var_1d8
            r8 = var_1a0
            goto label_1422c2e39
        
        if (r14_1 != 0)
            int64_t* rax_13 = sub_1422c0af0(arg1, &var_1c8)
            
            if (&result_1 != rax_13)
                result_1 = *rax_13
                *rax_13 = 0
                int64_t* rcx_12 = rax_13[1]
                int64_t* rdi_4 = var_150
                
                if (rcx_12 != rdi_4)
                    rax_13[1] = 0
                    var_150 = rcx_12
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            (**rdi_4)(rdi_4)
                            int32_t temp8_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rdi_4 + 8))(rdi_4, 1)
            
            if (var_1c0 != 0)
                var_1c0[1].d -= 1
                
                if (var_1c0[1].d == 1)
                    (**var_1c0)(var_1c0)
                    int32_t temp5_1 = *(var_1c0 + 0xc)
                    *(var_1c0 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_1c0 + 8))(var_1c0, 1)
            
            var_1c8 = result_1.o
            
            if (var_150 != 0)
                var_150[1].d += 1
            
            arg4 = sub_14215f5f0(rax_8, &var_110, &var_1c8)
            result_2 = result_1
            goto label_1422c2df0
        
        if (var_150 != 0)
            var_150[1].d -= 1
            
            if (var_150[1].d == 1)
                (**var_150)(var_150)
                int32_t temp4_1 = *(var_150 + 0xc)
                *(var_150 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_150 + 8))(var_150, 1)
        
        int64_t rcx_7 = var_110
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
    label_1422c2d05_1:
        result.b = 0

__security_check_cookie(rax_1 ^ &var_2a8)
return result
