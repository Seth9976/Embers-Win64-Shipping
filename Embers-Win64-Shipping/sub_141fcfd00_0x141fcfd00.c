// 函数: sub_141fcfd00
// 地址: 0x141fcfd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
uint64_t result = __security_cookie ^ &var_338
uint64_t result_2 = result
int64_t* r9 = *(arg1 + 0x48)

if (r9 != 0)
    int32_t rax_1 = *(r9 + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_7 =
            *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q((rax_3 & 0xffff) - rdx_1) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)

if (r9 == 0 || (result.b & 1) != 0)
    *arg2 = 0
else
    void* r8_2 = *(arg1 + 0x50)
    
    if (*(r8_2 + 0x134) != 1)
        int64_t* rdx_3 = **(arg1 + 0x30)
        char var_2f6 = 0
        char var_2f7 = 0
        int64_t var_1e0_1 = *(r8_2 + 0x58)
        void** const var_1e8 = &data_14328ac98
        void* rcx_4 = *(arg1 + 0x20)
        int128_t var_1d8
        __builtin_memset(&var_1d8, 0, 0x21)
        int64_t var_1b0_1 = 0
        int64_t* var_1a8_1 = nullptr
        int128_t var_278
        __builtin_memset(&var_278, 0, 0x28)
        int128_t var_248
        __builtin_memset(&var_248, 0, 0x1c)
        int64_t var_220
        __builtin_memset(&var_220, 0, 0x18)
        int16_t var_208_1 = 0xffff
        int64_t var_200_1 = 0
        int64_t var_1f8_1 = 0
        int64_t* var_228_1 = r9
        void* var_250_1 = r8_2
        int32_t var_230
        var_230:7.b = (*(r8_2 + 0xa4) u>> 1).b & 1
        int64_t var_258_1 = *(r8_2 + 0x68)
        void** const* var_238_1 = &var_1e8
        var_230.b = 1
        sub_1422d31a0(rcx_4, rdx_3, *(r8_2 + 0x68), r9, &var_278, &var_2f6, &var_2f7, arg2)
        var_2f7 |= var_230:1.b
        *arg2 |= var_230:3.b
        char temp2_1 = var_2f6 | var_230:2.b
        var_2f6 = temp2_1
        
        if (temp2_1 != 0)
            int64_t* rcx_5 = *(arg1 + 0x48)
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x1e0))(rcx_5)
            
            sub_141fce700(arg1)
        
        sub_141faa150(arg1, 0)
        result = *(arg1 + 0x50)
        int64_t* rbx_1 = *(result + 0x68)
        
        if (rbx_1 != 0)
            void* rax_18 = sub_14254d5d0()
            void* rdx_4 = rbx_1[2]
            result = sx.q(*(rax_18 + 0x38))
            
            if (result.d s<= *(rdx_4 + 0x38))
                uint64_t result_3 = result
                result = *(rdx_4 + 0x30)
                
                if (*(result + (result_3 << 3)) == rax_18 + 0x30 && *(arg1 + 0x58) != 0)
                    int64_t* rcx_8 = *(*(arg1 + 0x50) + 0x58)
                    char rax_21 = (*(*rcx_8 + 0x368))(rcx_8)
                    result = sub_140bdcf70(*(*(*(arg1 + 0x50) + 0x58) + 0x160), *(arg1 + 0x40))
                    uint64_t result_4 = result
                    uint64_t result_1 = result
                    
                    if (*(arg1 + 0x80) s> 0)
                        while (true)
                            int32_t* r12_1 = *(arg1 + 0x78)
                            uint64_t result_5 = result_4
                            int32_t r9_1 = *r12_1
                            int64_t* r14_1
                            
                            if (result_4 == 0)
                            label_141fcff90:
                                r14_1 = nullptr
                            else
                                while (true)
                                    int32_t r8_5 = *result_5
                                    
                                    if (r9_1 s>= r8_5 && r9_1 s< *(result_5 + 0x28) + r8_5)
                                        r14_1 = (sx.q(r9_1 - r8_5) << 5) + *(result_5 + 0x20)
                                        break
                                    
                                    result_5 = *(result_5 + 8)
                                    
                                    if (result_5 == 0)
                                        goto label_141fcff90
                            
                            void var_158
                            sub_140bd5b20(&var_158, *(*(arg1 + 0x50) + 0x68), *(r12_1 + 8), 
                                *(r12_1 + 0x18))
                            int32_t rcx_12 = 0
                            char var_2f8 = 0
                            int32_t var_2e0_1 = 0
                            int32_t rbx_2 = r12_1[0x12]
                            int32_t r8_7 = 0
                            int32_t var_2dc_1 = 1
                            void* var_2d8_1 = &r12_1[0xc]
                            int32_t var_2d0_1 = 0xffffffff
                            int64_t var_2cc_1 = 0
                            
                            if (rbx_2 != 0)
                                void* rax_22 = *(r12_1 + 0x40)
                                void* r9_3 = &r12_1[0xc]
                                
                                if (rax_22 != 0)
                                    r9_3 = rax_22
                                
                                int32_t temp7_1
                                int32_t temp8_1
                                temp7_1:temp8_1 = sx.q(rbx_2 - 1)
                                int32_t rdx_13 = *r9_3
                                
                                if (rdx_13 != 0)
                                label_141fd003b:
                                    int32_t rax_29 = neg.d(rdx_13) & rdx_13
                                    uint64_t rflags_1
                                    int32_t temp0_2
                                    temp0_2, rflags_1 = _bit_scan_reverse(rax_29)
                                    int32_t var_2dc_2 = rax_29
                                    int32_t rax_30
                                    
                                    if (rax_29 == 0)
                                        rax_30 = 0x20
                                    else
                                        rax_30 = 0x1f - temp0_2
                                    
                                    var_2cc_1.d = r8_7 - rax_30 + 0x1f
                                    
                                    if (r8_7 - rax_30 + 0x1f s> rbx_2)
                                        var_2cc_1.d = rbx_2
                                else
                                    while (true)
                                        int64_t rdx_14 = sx.q(rcx_12)
                                        r8_7 += 0x20
                                        rcx_12 += 1
                                        var_2cc_1:4.d = r8_7
                                        var_2e0_1 = rcx_12
                                        
                                        if (rdx_14.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_13 = *(r9_3 + (rdx_14 << 2) + 4)
                                        int32_t var_2d0_2 = 0xffffffff
                                        
                                        if (rdx_13 != 0)
                                            goto label_141fd003b
                                    
                                    var_2cc_1.d = rbx_2
                            
                            int32_t rdx_15 = r12_1[0x12]
                            var_2cc_1.d = rdx_15
                            int128_t var_170_1 = 0xffffffff
                            int128_t var_180_1 = var_2e0_1.o
                            int32_t rdi_1 = 0xffffffff << (rdx_15 & 0x1f).b
                            int32_t r8_10 = rdx_15 s>> 5
                            int32_t r9_6 = rdx_15 & 0xffffffe0
                            int64_t var_288_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                            int32_t var_2d0_3 = rdi_1
                            int128_t var_2a8 = (&r12_1[8]).o
                            int128_t var_298_1 = var_180_1
                            
                            if (rdx_15 != rbx_2)
                                void* rax_34 = *(r12_1 + 0x40)
                                void* r10_1 = &r12_1[0xc]
                                
                                if (rax_34 != 0)
                                    r10_1 = rax_34
                                
                                int32_t temp9_1
                                int32_t temp10_1
                                temp9_1:temp10_1 = sx.q(rbx_2 - 1)
                                int32_t rdx_19 = *(r10_1 + (sx.q(r8_10) << 2)) & rdi_1
                                
                                if (rdx_19 != 0)
                                label_141fd0137:
                                    int32_t rax_40 = neg.d(rdx_19) & rdx_19
                                    uint64_t rflags_2
                                    int32_t temp0_4
                                    temp0_4, rflags_2 = _bit_scan_reverse(rax_40)
                                    int32_t rax_41
                                    
                                    if (rax_40 == 0)
                                        rax_41 = 0x20
                                    else
                                        rax_41 = 0x1f - temp0_4
                                    
                                    var_2cc_1.d = r9_6 - rax_41 + 0x1f
                                    
                                    if (r9_6 - rax_41 + 0x1f s> rbx_2)
                                        var_2cc_1.d = rbx_2
                                else
                                    while (true)
                                        int64_t rcx_16 = sx.q(r8_10)
                                        r9_6 += 0x20
                                        r8_10 += 1
                                        
                                        if (rcx_16.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_19 = *(r10_1 + (rcx_16 << 2) + 4)
                                        var_2d0_3 = 0xffffffff
                                        
                                        if (rdx_19 != 0)
                                            goto label_141fd0137
                                    
                                    var_2cc_1.d = rbx_2
                            
                            void* rsi_1
                            
                            while (true)
                                int64_t rcx_18 = sx.q(var_298_1:0xc.d)
                                int32_t rax_33
                                
                                if (rcx_18.d != (var_2d0_3.q u>> 0x20).d
                                        || var_298_1.q != &r12_1[0xc])
                                    rax_33.b = 0
                                else
                                    rax_33.b = 1
                                
                                int64_t* rdx_20 = var_2a8.q
                                
                                if (rax_33.b == 0 || rdx_20 != &r12_1[8])
                                    rax_33.b = 1
                                else
                                    rax_33.b = 0
                                
                                if (rax_33.b == 0)
                                    rsi_1 = zx.q(var_2f8)
                                    break
                                
                                int64_t r8_11 = *rbx_1
                                
                                if ((*(r8_11 + 0x2d8))(rbx_1, *rdx_20 + rcx_18 * 0xc, r8_11) != 0)
                                    rsi_1.b = 1
                                    break
                                
                                var_298_1:8.d &= not.d(var_2a8:0xc.d)
                                sub_14059bdd0(&var_2a8:8)
                            
                            int32_t var_6c_1 = 0x80
                            int64_t var_98
                            __builtin_memset(&var_98, 0, 0x2c)
                            int32_t var_68_1 = 0xffffffff
                            int32_t var_64_1 = 0
                            int64_t var_58_1 = 0
                            int32_t var_50_1 = 0
                            var_2f8 = 0
                            int64_t var_2f0 = 0
                            int32_t var_2e8_1 = 0
                            sub_1405947f0(&var_2f0, 0xa)
                            int32_t rax_45 = var_2e8_1 + 0xa
                            var_2e8_1 = rax_45
                            
                            if (rax_45 s> 0)
                                sub_140594770(&var_2f0)
                            
                            int64_t rbx_5 = var_2f0
                            UnDecorator::getReferenceType(rbx_5, u"(Unknown)", 0x14)
                            char rax_49
                            
                            if (r14_1 != 0)
                                int64_t var_198
                                int64_t* rax_46 = sub_140cbcd60(r14_1, &var_198)
                                
                                if (&var_2f0 != rax_46)
                                    if (rbx_5 != 0)
                                        sub_140a74f90(rbx_5)
                                    
                                    rbx_5 = *rax_46
                                    *rax_46 = 0
                                    var_2e8_1 = rax_46[1].d
                                    var_2e8_1 = *(rax_46 + 0xc)
                                    rax_46[1] = 0
                                
                                int64_t rcx_27 = var_198
                                
                                if (rcx_27 != 0)
                                    sub_140a74f90(rcx_27)
                                
                                int64_t* var_318_1
                                var_318_1.b = rsi_1.b
                                rax_49 = sub_141fc26f0(arg1, &var_158, &r12_1[1], r14_1, 
                                    var_318_1.b, &var_2f8, &var_98)
                            
                            int64_t var_c8
                            int64_t var_90_1
                            int64_t var_88
                            int64_t var_78
                            
                            if (r14_1 != 0 && rax_49 != 0)
                                if (var_2f8 == 0)
                                    goto label_141fd0357
                                
                                sub_140780cc0(&r12_1[8], &var_98)
                                *arg2 = 1
                            else if (rax_21 == 0 || ((*(*(arg1 + 0x50) + 0xa4) u>> 1).b & 1) != 0)
                            label_141fd0357:
                                sub_141fc3e00(arg1 + 0x78, 0, 1, 1)
                                
                                if (rbx_5 != 0)
                                    sub_140a74f90(rbx_5)
                                
                                int32_t var_50_2 = 0
                                
                                if (var_58_1 != 0)
                                    sub_140a74f90(var_58_1)
                                
                                var_90_1.d = 0
                                int32_t var_68_2 = 0xffffffff
                                int32_t var_64_2 = 0
                                sub_14059a8e0(&var_88, 0)
                                
                                if (var_78 != 0)
                                    sub_140a74f90(var_78)
                                
                                int64_t rcx_38 = var_98
                                
                                if (rcx_38 != 0)
                                    sub_140a74f90(rcx_38)
                                
                                if (var_c8 != 0)
                                    sub_140a74f90(var_c8)
                                
                                result = sub_140b4cb40(&var_158)
                                
                                if (0 s>= *(arg1 + 0x80))
                                    break
                                
                                result_4 = result_1
                                continue
                            else
                                sub_141fb0410(arg1 + 0x78, 0)
                                *arg2 = 0
                                sub_14213f9e0(*(arg1 + 0x50))
                            
                            if (rbx_5 != 0)
                                sub_140a74f90(rbx_5)
                            
                            int32_t var_50_3 = 0
                            
                            if (var_58_1 != 0)
                                sub_140a74f90(var_58_1)
                            
                            var_90_1.d = 0
                            int32_t var_68_3 = 0xffffffff
                            int32_t var_64_3 = 0
                            sub_14059a8e0(&var_88, 0)
                            
                            if (var_78 != 0)
                                sub_140a74f90(var_78)
                            
                            int64_t rcx_48 = var_98
                            
                            if (rcx_48 != 0)
                                sub_140a74f90(rcx_48)
                            
                            if (var_c8 != 0)
                                sub_140a74f90(var_c8)
                            
                            result = sub_140b4cb40(&var_158)
                            break
        
        if (var_200_1 != 0)
            result = sub_140a74f90(var_200_1)
        
        if (var_1a8_1 != 0)
            var_1a8_1[1].d -= 1
            
            if (var_1a8_1[1].d == 1)
                result = (**var_1a8_1)(var_1a8_1)
                int32_t temp5_1 = *(var_1a8_1 + 0xc)
                *(var_1a8_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*var_1a8_1 + 8))(var_1a8_1, 1)
        
        int128_t var_1c8
        int64_t* rbx_7 = var_1c8:8.q
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                result = (**rbx_7)(rbx_7)
                int32_t temp6_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rbx_7 + 8))(rbx_7, 1)

__security_check_cookie(result_2 ^ &var_338)
return result
