// 函数: sub_1414ca4b0
// 地址: 0x1414ca4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t result = __security_cookie ^ &var_338
int64_t result_1 = result
int64_t rbx = sx.q(arg4)

if (data_1439b70a0 != 0 && data_1439c7a15 != 0)
    result = sub_14139bee0()
    int32_t r8 = data_1439b7098
    int64_t* r9 = &data_143ec4c60
    int64_t* var_2b0_1 = &data_143ec4c60
    
    if (r8 != 0)
        int32_t rcx_1 = data_1439b70ac
        int32_t r12_1
        
        if (rcx_1 s>= 4)
            r12_1 = 0x800
            
            if (rcx_1 s< 0x800)
                r12_1 = rcx_1
        else
            r12_1 = 4
        
        uint64_t rdx = 0
        bool cond:1_1 = data_1439b70a0 == 0
        int64_t var_1e0_1 = data_14395da18
        int64_t var_1d8_1 = data_14395d9e8
        int64_t var_1e8_1 = data_14395da00
        int32_t var_304_1 = r12_1
        int128_t var_218
        __builtin_memset(&var_218, 0, 0x30)
        int64_t var_1bc
        __builtin_memset(&var_1bc, 0, 0x43)
        int128_t var_1d0_1 = zx.o(0)
        int16_t var_178_1 = 0
        char var_308_1
        
        if (not(cond:1_1) && data_1439c7a15 != 0)
            var_308_1 = 1
        
        if (cond:1_1 || data_1439c7a15 == 0 || *(arg3 + 0x13e8) == 0)
            var_308_1 = 0
        
        int32_t r15_1 = 0
        int64_t r13_2 = rbx * 0x18
        void* r14_1 = &data_143ec4da8
        int64_t* r11_1 = &data_143ec4dd0
        int64_t var_2a8_1 = r13_2
        int64_t rdi_1 = r13_2
        int64_t var_2c8_1 = r13_2
        void* var_2b8_1 = &data_143ec4da8
        int64_t* var_2c0_1 = &data_143ec4dd0
        
        while (true)
            void* const r10_1
            
            if (r9[0x2d].d == 0)
                r10_1 = nullptr
            else
                if (r8 == 0)
                    if (r15_1 != 0 && r15_1 == 1)
                        rdx = zx.q(r15_1 + 7)
                else if (r15_1 == 0)
                    rdx = zx.q(r15_1 + 0x10)
                
                void* rax_4 = *(r14_1 + 0x18)
                void* rcx_2 = r14_1
                
                if (rax_4 != 0)
                    rcx_2 = rax_4
                
                r10_1 = *(rcx_2 + r13_2 + rdx)
            
            int64_t* r8_1
            void* const r9_1
            
            if (r9[0x32].d == 0)
                r8_1 = r11_1[3]
                r9_1 = nullptr
            else
                uint64_t rcx_4
                
                if (r8 == 0)
                    if (r15_1 == 0)
                        rcx_4 = 0
                    else
                        rcx_4 = 8
                        
                        if (r15_1 != 1)
                            rcx_4 = 0
                else if (r15_1 != 0)
                    rcx_4 = 0
                else
                    rcx_4 = zx.q(r15_1 + 0x10)
                
                r8_1 = r11_1[3]
                int64_t* rax_5 = r11_1
                
                if (r8_1 != 0)
                    rax_5 = r8_1
                
                r9_1 = *(rax_5 + r13_2 + rcx_4)
            
            void* rax_7 = *(r14_1 + 0x18)
            void* rcx_5 = r14_1
            
            if (rax_7 != 0)
                rcx_5 = rax_7
            
            int64_t* rax_8 = r11_1
            
            if (r8_1 != 0)
                rax_8 = r8_1
            
            int64_t r8_2 = *(r10_1 + 8)
            int64_t var_2f8_1 = r8_2
            int64_t rax_9 = *(r9_1 + 8)
            int64_t rax_10 = *(*(rcx_5 + rdi_1) + 8)
            int64_t rax_11 = *(*(rax_8 + rdi_1) + 8)
            
            if (var_308_1 == 0 || r15_1 s> 0)
                int64_t* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_12 = &rdi_4[2]
                
                if (rax_12 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x18)
                    r8_2 = var_2f8_1
                    rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_12 = &rdi_4[2]
                
                *(arg2 + 0x30) = rax_12
                *rdi_4 = r8_2
                rdi_4[1] = rax_9
                void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_14 = &rcx_10[5]
                
                if (rax_14 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_14 = &rcx_10[5]
                
                *(arg2 + 0x30) = rax_14
                void**** rax_15 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_15 = rcx_10
                *(arg2 + 8) = &rcx_10[1]
                rcx_10[1] = 0
                *rcx_10 = &data_142d549c8
                rcx_10[2].d = 2
                rcx_10[3] = rdi_4
                rcx_10[4].d = 1
            
            int64_t* rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_17 = &rdi_9[2]
            
            if (rax_17 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_17 = &rdi_9[2]
            
            *(arg2 + 0x30) = rax_17
            *rdi_9 = rax_10
            rdi_9[1] = rax_11
            void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_20 = &rcx_17[5]
            
            if (rax_20 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_20 = &rcx_17[5]
            
            *(arg2 + 0x30) = rax_20
            void**** rax_21 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            int128_t zmm1 = data_142d3f5a0
            *rax_21 = rcx_17
            *(arg2 + 8) = &rcx_17[1]
            *rcx_17 = &data_142d549c8
            rcx_17[2].d = 2
            rcx_17[3] = rdi_9
            rcx_17[4].d = 0
            rcx_17[1] = 0
            int64_t var_168 = var_2f8_1
            int64_t var_150_1 = rax_9
            int32_t var_90_1 = 0
            int32_t var_8c
            __builtin_memset(&var_8c, 0xff, 0x14)
            int128_t var_78_1 = zmm1
            int64_t var_68
            __builtin_memset(&var_68, 0, 0x1a)
            int64_t var_160_1 = 0
            int32_t var_158_1 = 0xffffffff
            int16_t var_154_1 = 0x500
            int64_t var_148_1 = 0
            int32_t var_140_1 = 0xffffffff
            int16_t var_13c_1 = 0x500
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x11)
            int32_t var_94_1 = 0
            void var_138
            memset(&var_138, 0, 0x90)
            sub_1410e0180(arg2, &var_168)
            int64_t rdi_14 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_25 = rdi_14 + 0x40
            
            if (rax_25 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x42)
                rdi_14 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_25 = rdi_14 + 0x40
            
            *(arg2 + 0x30) = rax_25
            wchar16 const* const rcx_24 = u"FilterTranslucentVolumeLighting"
            wchar16 const i
            
            do
                i = *rcx_24
                *(rdi_14 - u"FilterTranslucentVolumeLighting" + rcx_24) = i
                rcx_24 = &rcx_24[1]
            while (i != 0)
            void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_26 = &rcx_27[0x27]
            
            if (rax_26 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_26 = &rcx_27[0x27]
            
            *(arg2 + 0x30) = rax_26
            void**** rax_27 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_27 = rcx_27
            *(arg2 + 8) = &rcx_27[1]
            sub_1405d11b0(rcx_27, &var_168, rdi_14)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_168)
            int64_t var_58
            *(arg2 + 0x178) = var_58:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            sub_140fdc870(arg2, &var_218)
            int64_t var_2e8 = 0
            int32_t var_2e0_1 = 0
            int32_t var_2dc_1 = r12_1
            int32_t var_2d8_1 = r12_1
            int32_t var_2d4_1 = r12_1
            void* var_268
            sub_1419a2ec0(*(arg3 + 0x5150), &var_268, &data_143f5e630, 0)
            void var_228
            void** rax_30 = sub_1419a2ec0(*(arg3 + 0x5150), &var_228, &data_143f5e530, 0)
            void* r13_3 = *rax_30
            void* r12_2 = rax_30[1]
            void* var_258
            sub_1419a2ec0(*(arg3 + 0x5150), &var_258, &data_143ee8560, 0)
            void* rcx_36 = var_268
            var_218.q = data_143a2fe60
            int64_t rax_32 = 0
            
            if (rcx_36 != 0)
                int64_t rdx_11 = sx.q(*(rcx_36 + 0x10c))
                void* var_260
                int64_t* rdi_18 = *(var_260 + 0x10)
                int64_t r14_2 = rdx_11 << 3
                int64_t rax_34 = rdi_18[3]
                
                if (*(r14_2 + rax_34) == 0)
                    sub_1419ccf30(rdi_18, rdx_11.d)
                    rax_34 = rdi_18[3]
                
                rax_32 = *(r14_2 + rax_34)
            
            var_218:8.q = rax_32
            int64_t rax_35 = 0
            
            if (r13_3 != 0)
                int64_t* rdi_19 = *(r12_2 + 0x10)
                int64_t rdx_12 = sx.q(*(r13_3 + 0x10c))
                int64_t rax_36 = rdi_19[3]
                int64_t r14_3 = rdx_12 << 3
                
                if (*(r14_3 + rax_36) == 0)
                    sub_1419ccf30(rdi_19, rdx_12.d)
                    rax_36 = rdi_19[3]
                
                rax_35 = *(r14_3 + rax_36)
            
            int128_t var_1f8_1
            var_1f8_1:8.q = rax_35
            int64_t rax_37 = 0
            void* r14_4 = var_258
            
            if (r14_4 != 0)
                int64_t rdx_13 = sx.q(*(r14_4 + 0x10c))
                void* var_250
                int64_t* rdi_20 = *(var_250 + 0x10)
                int64_t r12_3 = rdx_13 << 3
                int64_t rax_39 = rdi_20[3]
                
                if (*(r12_3 + rax_39) == 0)
                    sub_1419ccf30(rdi_20, rdx_13.d)
                    rax_39 = rdi_20[3]
                
                rax_37 = *(r12_3 + rax_39)
            
            var_1f8_1.q = rax_37
            int32_t var_1c0_1 = 1
            sub_1419870b0(arg2, &var_218, 2)
            r12_1 = var_304_1
            void* rcx_41 = var_268
            int32_t var_29c_1 = r12_1
            int64_t var_288 = r12_1.q
            int32_t var_280_1 = r12_1
            sub_1412f1e20(rcx_41, arg2, &var_2e8, &var_288)
            
            if (r13_3 != 0)
                sub_14137f4a0(r13_3, arg2, var_2e0_1)
            
            sub_1414dd790(r14_4, arg2, arg3, r15_1, rbx.d)
            int128_t var_248 = var_2e8.o
            int64_t var_238_1 = var_2d8_1.q
            sub_14243f510(arg2, &var_248)
            sub_141096650(arg2)
            int64_t* rdi_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_40 = &rdi_23[2]
            
            if (rax_40 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rdi_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_40 = &rdi_23[2]
            
            *(arg2 + 0x30) = rax_40
            *rdi_23 = var_2f8_1
            rdi_23[1] = rax_9
            void*** rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_43 = &rcx_49[5]
            
            if (rax_43 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_43 = &rcx_49[5]
            
            *(arg2 + 0x30) = rax_43
            void**** rax_44 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_44 = rcx_49
            *(arg2 + 8) = &rcx_49[1]
            rcx_49[1] = 0
            *rcx_49 = &data_142d549c8
            rcx_49[2].d = 2
            rcx_49[3] = rdi_23
            rcx_49[4].d = 0
            int64_t var_60
            result = sub_1405d1550(&var_60, 0)
            r15_1 += 1
            rdi_1 = var_2c8_1 + 8
            var_2c8_1 = rdi_1
            
            if (r15_1 s>= 2)
                break
            
            r8 = data_1439b7098
            rdx = 0
            r11_1 = var_2c0_1
            r14_1 = var_2b8_1
            r9 = var_2b0_1
            r13_2 = var_2a8_1

__security_check_cookie(result_1 ^ &var_338)
return result
