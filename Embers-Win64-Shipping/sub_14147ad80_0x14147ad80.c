// 函数: sub_14147ad80
// 地址: 0x14147ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int32_t* result = __security_cookie ^ &var_188
int32_t* result_1 = result
void* r14 = arg1

if (arg3[1].d s> 0)
    uint64_t rsi
    
    if (data_143f0f1c0 == 0 || *(arg1 + 0x3b0) s< 3)
        rsi.b = 1
    else
        rsi.b = 0
    
    char var_148_1 = rsi.b
    int32_t rdi_1 = 1 << ((data_1439c7a00).b - 1)
    int32_t var_140_1 = rdi_1
    int32_t* var_138 = nullptr
    int64_t var_130_1 = 1
    int128_t var_e8
    int32_t* rax_1 = sub_141475860(&var_e8, rdi_1.w)
    sub_14149c000(&var_138, 0)
    result = sub_141475760(var_138, rax_1)
    int64_t var_70
    
    if (var_70 != 0)
        result = sub_140a74f90(var_70)
    
    int32_t i = 0
    int32_t i_5
    int32_t i_4
    
    if (arg3[1].d s<= 0)
        i_4 = var_130_1.d
        i_5 = i_4
    else
        int32_t i_6 = var_130_1.d
        int64_t r15_1 = 0
        i_5 = i_6
        
        do
            int32_t i_8
            
            if (rsi.b != 0 || r15_1 s<= 0)
                i_8 = i_5
            else
                int32_t* rax_2 = sub_141475860(&var_e8, rdi_1.w)
                int64_t i_7 = sx.q(i_6)
                i_8 = (i_7 + 1).d
                i_5 = i_8
                var_130_1.d = i_8
                
                if (i_8 s> var_130_1:4.d)
                    sub_14149c000(&var_138, i_7.d)
                    i_8 = var_130_1.d
                    i_5 = i_8
                
                sub_141475760(&var_138[i_7 * 0x26], rax_2)
                
                if (var_70 != 0)
                    sub_140a74f90(var_70)
            
            void* r14_1 = *(*arg3 + (r15_1 << 3))
            int32_t* rbx_3 = &var_138[sx.q(i_8 - 1) * 0x26]
            int32_t rsi_1 = *(r14_1 + 0x548)
            int32_t rcx_12 = *(r14_1 + 0x550) * 2
            int32_t rdi_4 = *(r14_1 + 0x54c) + rcx_12
            int32_t rsi_2 = rsi_1 + rcx_12
            
            if (rsi_1 == neg.d(rcx_12) || rdi_4 == 0)
                *(r14_1 + 0x540) = 0
            label_14147b0a6:
                *(r14_1 + 0x570) |= 1
                int64_t rdi_6 = sx.q(rbx_3[0x24])
                result = zx.q((rdi_6 + 1).d)
                rbx_3[0x24] = result.d
                
                if (result.d s> rbx_3[0x25])
                    result = sub_14083a310(&rbx_3[0x22], rdi_6.d)
                
                *(*(rbx_3 + 0x88) + (rdi_6 << 3)) = r14_1
            else
                if (*(rbx_3 + 0xd) != 0)
                    rsi_2 = (rsi_2 + 3) & 0xfffffffc
                    rdi_4 = (rdi_4 + 3) & 0xfffffffc
                
                int32_t rax_6 = sub_141479db0(rbx_3, 0, rsi_2, rdi_4, 0)
                int32_t rcx_14 = rax_6
                
                if (rax_6 == 0xffffffff)
                    result = sub_141479db0(rbx_3, 0, rsi_2, rdi_4, 1)
                    rcx_14 = result.d
                
                if (rax_6 != 0xffffffff || result.d != 0xffffffff)
                    void* rax_7 = *(rbx_3 + 0x78)
                    void* r9_3 = &rbx_3[4]
                    
                    if (rax_7 != 0)
                        r9_3 = rax_7
                    
                    int64_t r10_1 = sx.q(rcx_14) * 5
                    uint32_t rax_9 = zx.d(*(r9_3 + (r10_1 << 2) + 8))
                    *(r9_3 + (r10_1 << 2) + 0x10) = 1
                    *(r14_1 + 0x540) = rax_9
                    *(r14_1 + 0x544) = zx.d(*(r9_3 + (r10_1 << 2) + 0xa))
                    int32_t rdx_6 = zx.d(*(r9_3 + (r10_1 << 2) + 8)) + rsi_2
                    char temp2_1 = rbx_3[3].b
                    
                    if (temp2_1 == 0)
                        if (*rbx_3 u>= rdx_6)
                            rdx_6 = *rbx_3
                        
                        *rbx_3 = rdx_6
                        int32_t rcx_29 = zx.d(*(r9_3 + (r10_1 << 2) + 0xa)) + rdi_4
                        
                        if (rbx_3[1] u>= rcx_29)
                            rcx_29 = rbx_3[1]
                        
                        rbx_3[1] = rcx_29
                    else
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rdx_6)
                        int32_t rcx_16
                        
                        if (temp2_1 == 0)
                            rcx_16 = 0x20
                        else
                            rcx_16 = 0x1f - temp0_2
                        
                        int32_t rcx_18 = rcx_16 << 0x1a s>> 0x1f
                        uint64_t rflags_2
                        char temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rdx_6 - 1)
                        char rdx_7
                        
                        if (rcx_18 == 0)
                            rdx_7 = 0x20
                        else
                            rdx_7 = 0x1f - temp0_3
                        
                        int32_t r8_3 = 1 << ((not.d(rcx_18)).b & (0x20 - rdx_7))
                        
                        if (*rbx_3 u>= r8_3)
                            r8_3 = *rbx_3
                        
                        *rbx_3 = r8_3
                        uint32_t rax_14 = zx.d(*(r9_3 + (r10_1 << 2) + 0xa))
                        int32_t rax_15 = rax_14 + rdi_4
                        uint64_t rflags_3
                        int32_t temp0_4
                        temp0_4, rflags_3 = _bit_scan_reverse(rax_15)
                        int32_t rcx_21
                        
                        if (rax_14 == neg.d(rdi_4))
                            rcx_21 = 0x20
                        else
                            rcx_21 = 0x1f - temp0_4
                        
                        uint64_t rflags_4
                        char temp0_5
                        temp0_5, rflags_4 = _bit_scan_reverse(rax_15 - 1)
                        char rdx_9
                        
                        if (rax_15 == 1)
                            rdx_9 = 0x20
                        else
                            rdx_9 = 0x1f - temp0_5
                        
                        int32_t rdx_10 = 1 << ((not.d(rcx_21 << 0x1a s>> 0x1f)).b & (0x20 - rdx_9))
                        int32_t rcx_26 = rbx_3[2]
                        
                        if (rbx_3[1] u>= rdx_10)
                            rdx_10 = rbx_3[1]
                        
                        rbx_3[1] = rdx_10
                        
                        if (rcx_26 == 1)
                            int32_t rax_18 = rdx_10 * 2
                            
                            if (r8_3 u>= rax_18)
                                rax_18 = r8_3
                            
                            *rbx_3 = rax_18
                            int32_t rax_19 = rax_18 u>> 1
                            
                            if (rdx_10 u>= rax_19)
                                rax_19 = rdx_10
                            
                            rbx_3[1] = rax_19
                        else if (rcx_26 == 2)
                            if (r8_3 u>= rdx_10)
                                rdx_10 = r8_3
                            
                            *rbx_3 = rdx_10
                            rbx_3[1] = rdx_10
                    
                    goto label_14147b0a6
            
            rdi_1 = var_140_1
            i += 1
            rsi = zx.q(var_148_1)
            r15_1 += 1
            i_6 = i_5
        while (i s< arg3[1].d)
        
        i_4 = i_6
        r14 = arg1
    
    if (i_4 s> 0)
        void* r15_2 = r14 + 0x310
        int32_t j_1 = 0
        int32_t j = 1
        int64_t var_110_1 = 0
        int64_t rsi_4 = 0
        void* var_f8_1 = r15_2
        int32_t j_2 = 1
        TEB* gsbase
        void* r12_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint64_t i_3 = zx.q(i_4)
        void* var_100_1 = r12_1
        uint64_t i_1
        
        do
            int64_t rbx_4 = sx.q(*(r15_2 + 8))
            int32_t rax_22 = (rbx_4 + 1).d
            int32_t* rdi_8 = &var_138[rsi_4 * 0x26]
            int32_t* var_118_1 = rdi_8
            *(r15_2 + 8) = rax_22
            
            if (rax_22 s> *(r15_2 + 0xc))
                sub_14149c2e0(r15_2, rbx_4.d)
            
            int64_t rdx_13 = *r15_2
            int64_t rcx_34 = rbx_4 * 9
            *(rdx_13 + (rcx_34 << 3) + 0x20) = 0
            *(rdx_13 + (rcx_34 << 3) + 0x28) = 0
            *(rdx_13 + (rcx_34 << 3) + 0x2c) = 4
            *(rdx_13 + (rcx_34 << 3) + 0x30) = 0
            *(rdx_13 + (rcx_34 << 3) + 0x38) = 0
            *(rdx_13 + (rcx_34 << 3) + 0x40) = 0
            void* r15_3 = *r15_2 + sx.q(*(r15_2 + 8)) * 0x48
            int32_t rdx_15 = rdi_8[1]
            int32_t rcx_36 = *rdi_8
            int32_t var_d8_1 = data_1439c7b48
            int32_t var_c8_1 = 1
            int16_t var_c0_1 = 1
            wchar16 const* const var_a8_1 = u"UnknownTexture2D"
            int32_t var_b8_1 = data_143ed3428
            int16_t var_b0_1 = 0
            var_e8 = data_1439c7b38
            int32_t var_d4_1 = rcx_36
            int32_t var_d0_1 = rdx_15
            int32_t var_cc_1 = 0
            int32_t var_c4_1 = 0x10000
            int32_t var_bc_1 = 0xc
            int32_t var_b4_1 = 0xc
            int16_t var_a0_1 = 1
            char var_9e_1 = 0
            
            if (data_143ee1cf0 s> *(r12_1 + 0x14))
                _Init_thread_header(&data_143ee1cf0)
                
                if (data_143ee1cf0 == 0xffffffff)
                    data_143ee1ce0 = 0
                    data_143ee1ce8.q = 0
                    atexit(sub_142ce60b0)
                    _Init_thread_footer(&data_143ee1cf0)
            
            if (data_143ee1ce8 s< j)
                do
                    int64_t* rax_27 = j_sub_140a82f30(0x10)
                    int64_t* rbx_5 = rax_27
                    
                    if (rsi_4 != 0)
                        if (rbx_5 == 0)
                            rbx_5 = nullptr
                        else
                            sub_140a2e390(rbx_5, u"WholeSceneShadowmap%d", zx.q(data_143ee1ce8))
                    else if (rax_27 == 0)
                        rbx_5 = nullptr
                    else
                        *rax_27 = 0
                        rax_27[1] = rsi_4
                        sub_1405947f0(rax_27, (rsi_4 + 0x14).d)
                        int32_t rax_28 = rbx_5[1].d + 0x14
                        rbx_5[1].d = rax_28
                        
                        if (rax_28 s> *(rbx_5 + 0xc))
                            sub_140594770(rbx_5)
                        
                        UnDecorator::getReferenceType(*rbx_5, u"WholeSceneShadowmap", 0x28)
                    
                    int64_t rdi_9 = sx.q(data_143ee1ce8)
                    int32_t rax_29 = (rdi_9 + 1).d
                    bool cond:5_1 = rax_29 s<= data_143ee1cec
                    data_143ee1ce8 = rax_29
                    
                    if (not(cond:5_1))
                        sub_1405a4d70(&data_143ee1ce0)
                    
                    *(data_143ee1ce0 + (rdi_9 << 3)) = rbx_5
                while (data_143ee1ce8 s< j)
                
                rdi_8 = var_118_1
            
            int64_t* rcx_41 = *(data_143ee1ce0 + (rsi_4 << 3))
            int16_t* const rax_32
            
            if (rcx_41[1].d == 0)
                rax_32 = &data_142d40450
            else
                rax_32 = *rcx_41
            
            char var_168
            var_168.q = rax_32
            result = sub_1419a0ce0(&data_1439c9260, arg2, &var_e8, r15_3 - 0x18, var_168, 1, 1, 0)
            
            if (rdi_8[0x24] s> 0)
                int64_t* r12_2 = nullptr
                
                do
                    result = *(rdi_8 + 0x88)
                    void* r14_2 = *(r12_2 + result)
                    
                    if ((*(r14_2 + 0x570) & 1) != 0)
                        int64_t rsi_5 = sx.q(*(r15_3 - 0x20))
                        int32_t rdi_10 = 0
                        *(r14_2 + 0x30) = 0
                        
                        if (*(r14_2 + 0x34) != rsi_5.d)
                            sub_14083ad10(r14_2 + 0x28, rsi_5.d)
                            rdi_10 = *(r14_2 + 0x30)
                        
                        int32_t rax_33 = rsi_5.d + rdi_10
                        *(r14_2 + 0x30) = rax_33
                        
                        if (rax_33 s> *(r14_2 + 0x34))
                            sub_14083a440(r14_2 + 0x28, rdi_10)
                        
                        memset(*(r14_2 + 0x28) + (sx.q(rdi_10) << 3), 0, rsi_5 << 3)
                        int64_t r8_7 = 0
                        
                        if (rsi_5 s> 0)
                            do
                                void* rax_35 = *(r15_3 - 0x28)
                                void* rdx_22 = r15_3 - 0x48
                                
                                if (rax_35 != 0)
                                    rdx_22 = rax_35
                                
                                *(*(r14_2 + 0x28) + (r8_7 << 3)) = *(rdx_22 + (r8_7 << 3))
                                r8_7 += 1
                            while (r8_7 s< rsi_5)
                        
                        *(r14_2 + 0x38) = *(r15_3 - 0x18)
                        sub_1414a2f50(r14_2, arg2, arg1)
                        int64_t rdi_11 = sx.q(*(r15_3 - 8))
                        int32_t rax_38 = (rdi_11 + 1).d
                        *(r15_3 - 8) = rax_38
                        
                        if (rax_38 s> *(r15_3 - 4))
                            sub_14083a310(r15_3 - 0x10, rdi_11.d)
                        
                        result = *(r15_3 - 0x10)
                        *(result + (rdi_11 << 3)) = r14_2
                        rdi_8 = var_118_1
                    
                    j_1 += 1
                    r12_2 = &r12_2[1]
                while (j_1 s< rdi_8[0x24])
                
                rsi_4 = var_110_1
                j = j_2
                r12_1 = var_100_1
            
            r15_2 = var_f8_1
            j += 1
            rsi_4 += 1
            j_2 = j
            i_1 = i_3
            i_3 -= 1
            j_1 = 0
            var_110_1 = rsi_4
        while (i_1 != 1)
        i_4 = i_5
    
    if (i_4 != 0)
        void* rbx_7 = &var_138[0x1e]
        int32_t i_2
        
        do
            int64_t rcx_49 = *rbx_7
            
            if (rcx_49 != 0)
                result = sub_140a74f90(rcx_49)
            
            rbx_7 += 0x98
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

__security_check_cookie(result_1 ^ &var_188)
return result
