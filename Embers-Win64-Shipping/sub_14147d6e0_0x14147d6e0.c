// 函数: sub_14147d6e0
// 地址: 0x14147d6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t result = __security_cookie ^ &var_1f8
int64_t result_1 = result
int64_t* rdi = arg3
uint64_t rsi = arg2

if (arg3[1].d s> 0 && *(arg1 + 0x3b0) s>= 3)
    int32_t var_1b0
    sub_14139f5d0(&data_143ec4c60, &var_1b0)
    int64_t* r12_1 = arg1 + 0x388
    int64_t rbx_1 = sx.q(r12_1[1].d)
    int64_t* var_188_1 = r12_1
    int32_t rax_1 = (rbx_1 + 1).d
    r12_1[1].d = rax_1
    
    if (rax_1 s> *(r12_1 + 0xc))
        sub_14149c2e0(r12_1, rbx_1.d)
    
    int64_t rax_2 = *r12_1
    int64_t rcx_2 = rbx_1 * 9
    *(rax_2 + (rcx_2 << 3) + 0x20) = 0
    *(rax_2 + (rcx_2 << 3) + 0x28) = 0
    *(rax_2 + (rcx_2 << 3) + 0x2c) = 4
    *(rax_2 + (rcx_2 << 3) + 0x30) = 0
    *(rax_2 + (rcx_2 << 3) + 0x38) = 0
    *(rax_2 + (rcx_2 << 3) + 0x40) = 0
    int32_t rdx_2 = rdi[1].d
    int64_t rcx_3 = *rdi
    int32_t var_168 = 1
    int64_t var_164_1 = 1
    int32_t var_e8_1 = 1
    int16_t var_14c_1 = var_1b0.w
    int16_t var_1ac
    int16_t var_14a_1 = var_1ac
    int16_t var_15c_1 = 0
    int64_t* var_f0_1 = nullptr
    int32_t var_e4_1 = 5
    int64_t var_158 = -1
    int32_t var_150_1 = 0
    char var_148_1 = 0
    char var_1b8
    result = sub_14146f970(rcx_3, rdx_2, var_1b8)
    int32_t i_1 = 0
    
    if (rdi[1].d s> 0)
        int64_t* rcx_4 = nullptr
        int64_t* var_198_1 = nullptr
        int32_t i
        
        do
            void* r13_1 = *(rcx_4 + *rdi)
            int32_t rbx_2 = *(r13_1 + 0x548)
            int32_t rcx_5 = *(r13_1 + 0x550) * 2
            int32_t rdi_2 = *(r13_1 + 0x54c) + rcx_5
            int32_t rbx_3 = rbx_2 + rcx_5
            char var_1d8
            int32_t var_d8
            int64_t var_c8
            int16_t var_bc
            char var_b8
            
            if (rbx_2 == neg.d(rcx_5) || rdi_2 == 0)
                *(r13_1 + 0x540) = 0
                *(r13_1 + 0x570) |= 1
            else
                if (var_15c_1:1.b != 0)
                    rbx_3 = (rbx_3 + 3) & 0xfffffffc
                    rdi_2 = (rdi_2 + 3) & 0xfffffffc
                
                int32_t rax_7 = sub_141479db0(&var_168, 0, rbx_3, rdi_2, 0)
                int32_t rcx_7 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0xffffffff)
                    rax_8 = sub_141479db0(&var_168, 0, rbx_3, rdi_2, 1)
                    rcx_7 = rax_8
                
                if (rax_7 != 0xffffffff || rax_8 != 0xffffffff)
                    int64_t* r9_5 = &var_158
                    
                    if (var_f0_1 != 0)
                        r9_5 = var_f0_1
                    
                    int64_t r10_1 = sx.q(rcx_7) * 5
                    uint32_t rax_17 = zx.d(*(r9_5 + (r10_1 << 2) + 8))
                    *(r9_5 + (r10_1 << 2) + 0x10) = 1
                    *(r13_1 + 0x540) = rax_17
                    *(r13_1 + 0x544) = zx.d(*(r9_5 + (r10_1 << 2) + 0xa))
                    int32_t rdx_7 = zx.d(*(r9_5 + (r10_1 << 2) + 8)) + rbx_3
                    char temp1_1 = var_15c_1.b
                    
                    if (temp1_1 == 0)
                        if (var_168 u>= rdx_7)
                            rdx_7 = var_168
                        
                        var_168 = rdx_7
                        int32_t rcx_29 = zx.d(*(r9_5 + (r10_1 << 2) + 0xa)) + rdi_2
                        
                        if (var_164_1.d u>= rcx_29)
                            rcx_29 = var_164_1.d
                        
                        var_164_1.d = rcx_29
                    else
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rdx_7)
                        int32_t rcx_16
                        
                        if (temp1_1 == 0)
                            rcx_16 = 0x20
                        else
                            rcx_16 = 0x1f - temp0_2
                        
                        int32_t rcx_18 = rcx_16 << 0x1a s>> 0x1f
                        uint64_t rflags_2
                        char temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rdx_7 - 1)
                        char rdx_8
                        
                        if (rcx_18 == 0)
                            rdx_8 = 0x20
                        else
                            rdx_8 = 0x1f - temp0_3
                        
                        int32_t r8_5 = 1 << ((not.d(rcx_18)).b & (0x20 - rdx_8))
                        
                        if (var_168 u>= r8_5)
                            r8_5 = var_168
                        
                        var_168 = r8_5
                        uint32_t rax_22 = zx.d(*(r9_5 + (r10_1 << 2) + 0xa))
                        int32_t rax_23 = rax_22 + rdi_2
                        uint64_t rflags_3
                        int32_t temp0_4
                        temp0_4, rflags_3 = _bit_scan_reverse(rax_23)
                        int32_t rcx_21
                        
                        if (rax_22 == neg.d(rdi_2))
                            rcx_21 = 0x20
                        else
                            rcx_21 = 0x1f - temp0_4
                        
                        uint64_t rflags_4
                        char temp0_5
                        temp0_5, rflags_4 = _bit_scan_reverse(rax_23 - 1)
                        char rdx_10
                        
                        if (rax_23 == 1)
                            rdx_10 = 0x20
                        else
                            rdx_10 = 0x1f - temp0_5
                        
                        int32_t rdx_11 = 1 << ((not.d(rcx_21 << 0x1a s>> 0x1f)).b & (0x20 - rdx_10))
                        int32_t rcx_26 = var_164_1:4.d
                        
                        if (var_164_1.d u>= rdx_11)
                            rdx_11 = var_164_1.d
                        
                        var_164_1.d = rdx_11
                        
                        if (rcx_26 == 1)
                            int32_t rax_26 = rdx_11 * 2
                            
                            if (r8_5 u>= rax_26)
                                rax_26 = r8_5
                            
                            var_168 = rax_26
                            uint32_t rax_27 = rax_26 u>> 1
                            
                            if (rdx_11 u>= rax_27)
                                rax_27 = rdx_11
                            
                            var_164_1.d = rax_27
                        else if (rcx_26 == 2)
                            if (r8_5 u>= rdx_11)
                                rdx_11 = r8_5
                            
                            var_168 = rdx_11
                            var_164_1.d = rdx_11
                    
                    *(r13_1 + 0x570) |= 1
                else
                    var_bc = var_1b0.w
                    int64_t* rbx_5 = nullptr
                    var_d8 = 1
                    int32_t rsi_1 = 1
                    int64_t var_d4_1 = 1
                    int16_t var_cc_1 = 0
                    int32_t rdi_4 = 5
                    int64_t* var_60_1 = nullptr
                    int32_t var_58_1 = 1
                    int32_t var_c0_1 = 0
                    var_b8 = 0
                    var_168 = 1
                    var_164_1 = 1
                    var_15c_1 = 0
                    int32_t var_54_1 = 5
                    var_c8 = -1
                    int16_t var_ba_1 = var_1ac
                    memmove(&var_158, &var_c8, 0x64)
                    
                    if (var_f0_1 != 0)
                        sub_140a74f90(var_f0_1)
                        rdi_4 = var_54_1
                        rsi_1 = var_58_1
                        rbx_5 = var_60_1
                    
                    var_f0_1 = rbx_5
                    int64_t rbx_6 = sx.q(r12_1[1].d)
                    int32_t var_e8_2 = rsi_1
                    int32_t var_e4_2 = rdi_4
                    int32_t rax_11 = (rbx_6 + 1).d
                    r12_1[1].d = rax_11
                    
                    if (rax_11 s> *(r12_1 + 0xc))
                        sub_14149c2e0(r12_1, rbx_6.d)
                    
                    int64_t rax_12 = *r12_1
                    int64_t rcx_12 = rbx_6 * 9
                    *(rax_12 + (rcx_12 << 3) + 0x20) = 0
                    *(rax_12 + (rcx_12 << 3) + 0x28) = 0
                    *(rax_12 + (rcx_12 << 3) + 0x2c) = 4
                    *(rax_12 + (rcx_12 << 3) + 0x30) = 0
                    *(rax_12 + (rcx_12 << 3) + 0x38) = 0
                    *(rax_12 + (rcx_12 << 3) + 0x40) = 0
                    int32_t r9_3 = *(r13_1 + 0x550) * 2
                    var_1d8.d = *(r13_1 + 0x54c) + r9_3
                    rsi = arg2
                    
                    if (sub_141478bd0(&var_168, r13_1 + 0x540, r13_1 + 0x544, 
                            r9_3 + *(r13_1 + 0x548), var_1d8) != 0)
                        *(r13_1 + 0x570) |= 1
            
            int64_t rax_28 = sx.q(r12_1[1].d)
            int64_t rax_29 = *r12_1
            void* rbx_9 = rax_29 + ((rax_28 * 9 - 9) << 3)
            
            if (*(rax_29 + ((rax_28 * 9 - 9) << 3) + 0x28) == 0)
                sub_141489200(rbx_9, 2)
                int64_t rdi_5 = sx.q(*(rbx_9 + 0x28))
                int32_t rax_30 = (rdi_5 + 2).d
                *(rbx_9 + 0x28) = rax_30
                
                if (rax_30 s> *(rbx_9 + 0x2c))
                    sub_14083a490(rbx_9, rdi_5.d)
                
                void* rax_31 = *(rbx_9 + 0x20)
                void* rcx_32 = rbx_9
                
                if (rax_31 != 0)
                    rcx_32 = rax_31
                
                *(rcx_32 + (rdi_5 << 3)) = 0
                *(rcx_32 + (rdi_5 << 3) + 8) = 0
                
                for (int32_t j = 0; j s< 2; j += 1)
                    var_c8.d = data_143f02318
                    var_c8:4.d = var_1b0
                    int32_t var_c0_2 = var_1ac.d
                    int16_t var_a0_1 = 0
                    var_bc.d = 0
                    var_b8.d = 1
                    int32_t var_b4_1 = 0x10000
                    int16_t var_b0_1 = 1
                    int64_t var_ac_1 = 0xa
                    int32_t var_a4_1 = 1
                    wchar16 const* const var_98_1 = u"UnknownTexture2D"
                    int16_t var_90_1 = 1
                    char var_8e_1 = 0
                    var_d8.o = data_143f02308
                    wchar16 const* const rdx_13
                    
                    if (j == 0)
                        rdx_13 = u"TranslucencyShadowTransmission0"
                    else if (j == 1)
                        rdx_13 = u"TranslucencyShadowTransmission1"
                    else
                        rdx_13 = u"InvalidName"
                    
                    void* rax_35 = *(rbx_9 + 0x20)
                    void* rcx_33 = rbx_9
                    
                    if (rax_35 != 0)
                        rcx_33 = rax_35
                    
                    var_1d8.q = rdx_13
                    sub_1419a0ce0(&data_1439c9260, rsi, &var_d8, rcx_33 + (sx.q(j) << 3), var_1d8, 
                        1, 0, 0)
                
                r12_1 = var_188_1
            
            int64_t rsi_2 = sx.q(*(rbx_9 + 0x28))
            int32_t r14_1 = 0
            *(r13_1 + 0x30) = 0
            
            if (*(r13_1 + 0x34) != rsi_2.d)
                sub_14083ad10(r13_1 + 0x28, rsi_2.d)
                r14_1 = *(r13_1 + 0x30)
            
            int32_t rax_37 = rsi_2.d + r14_1
            *(r13_1 + 0x30) = rax_37
            
            if (rax_37 s> *(r13_1 + 0x34))
                sub_14083a440(r13_1 + 0x28, r14_1)
            
            memset(*(r13_1 + 0x28) + (sx.q(r14_1) << 3), 0, rsi_2 << 3)
            int64_t r8_8 = 0
            
            if (rsi_2 s> 0)
                do
                    void* rax_39 = *(rbx_9 + 0x20)
                    void* rdx_17 = rbx_9
                    
                    if (rax_39 != 0)
                        rdx_17 = rax_39
                    
                    *(*(r13_1 + 0x28) + (r8_8 << 3)) = *(rdx_17 + (r8_8 << 3))
                    r8_8 += 1
                while (r8_8 s< rsi_2)
            
            rsi = arg2
            *(r13_1 + 0x38) = *(rbx_9 + 0x30)
            sub_1414a2f50(r13_1, rsi, arg1)
            int64_t rdi_6 = sx.q(*(rbx_9 + 0x40))
            int32_t rax_42 = (rdi_6 + 1).d
            *(rbx_9 + 0x40) = rax_42
            
            if (rax_42 s> *(rbx_9 + 0x44))
                sub_14083a310(rbx_9 + 0x38, rdi_6.d)
            
            i = i_1 + 1
            result = *(rbx_9 + 0x38)
            rcx_4 = &var_198_1[1]
            i_1 = i
            var_198_1 = rcx_4
            *(result + (rdi_6 << 3)) = r13_1
            rdi = arg3
        while (i s< rdi[1].d)
    
    if (var_f0_1 != 0)
        result = sub_140a74f90(var_f0_1)

__security_check_cookie(result_1 ^ &var_1f8)
return result
