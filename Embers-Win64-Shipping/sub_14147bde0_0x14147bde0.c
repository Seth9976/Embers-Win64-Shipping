// 函数: sub_14147bde0
// 地址: 0x14147bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t result = __security_cookie ^ &var_228
int64_t result_1 = result
int64_t* rbx = arg3
int64_t* var_1c0 = rbx
uint64_t r14 = arg2

if (arg3[1].d s> 0)
    int64_t var_1e0
    sub_14139db90(&data_143ec4c60, &var_1e0)
    int32_t rax_1 = var_1e0.d
    int32_t rdx_1 = var_1e0:4.d
    int32_t rcx_1 = data_1439c7b48
    int128_t zmm0 = data_1439c7b38
    int32_t rdi_1 = *(arg1 + 0x318)
    int16_t var_19c_1 = rax_1.w
    int32_t var_114_1 = rax_1
    wchar16 const* const var_e8_1 = u"UnknownTexture2D"
    int32_t rax_2 = data_143ed3424
    int32_t var_1b8 = 1
    int64_t var_1b4_1 = 1
    int32_t var_138_1 = 1
    int16_t var_19a_1 = rdx_1.w
    int32_t var_118_1 = rcx_1
    int64_t rcx_2 = *rbx
    int32_t var_110_1 = rdx_1
    int32_t rdx_2 = rbx[1].d
    int32_t var_108_1 = 1
    int16_t var_100_1 = 1
    int16_t var_e0_1 = 1
    int32_t var_f8_1 = rax_2
    int32_t var_1d8_1 = rdi_1
    int16_t var_1ac_1 = 0
    int64_t* var_140_1 = nullptr
    int32_t var_134_1 = 5
    int64_t var_1a8 = -1
    int32_t var_1a0_1 = 0
    char var_198_1 = 0
    int16_t var_f0_1 = 0
    int128_t var_128 = zmm0
    int32_t var_10c_1 = 0
    int32_t var_104_1 = 0x10000
    int32_t var_fc_1 = 0xc
    int32_t var_f4_1 = 0xc
    char var_de_1 = 0
    char var_1e8
    result = sub_14146f970(rcx_2, rdx_2, var_1e8)
    int32_t i_1 = 0
    
    if (rbx[1].d s> 0)
        void** rcx_3 = nullptr
        void** var_1c8_1 = nullptr
        int32_t i
        
        do
            void* rbx_1 = *(rcx_3 + *rbx)
            
            if (*(rbx_1 + 0x40) != 0 || *(rbx_1 + 0x610) s> 0 || *(rbx_1 + 0x84c) s> 0
                    || *(rbx_1 + 0x660) s> 0)
                if (*(arg1 + 0x318) == rdi_1)
                    int64_t rsi_1 = sx.q(*(arg1 + 0x318))
                    int32_t rax_7 = (rsi_1 + 1).d
                    *(arg1 + 0x318) = rax_7
                    
                    if (rax_7 s> *(arg1 + 0x31c))
                        sub_14149c2e0(arg1 + 0x310, rsi_1.d)
                    
                    int64_t rax_8 = *(arg1 + 0x310)
                    int64_t rcx_10 = rsi_1 * 9
                    *(rax_8 + (rcx_10 << 3) + 0x20) = 0
                    *(rax_8 + (rcx_10 << 3) + 0x28) = 0
                    *(rax_8 + (rcx_10 << 3) + 0x2c) = 4
                    *(rax_8 + (rcx_10 << 3) + 0x30) = 0
                    *(rax_8 + (rcx_10 << 3) + 0x38) = 0
                    *(rax_8 + (rcx_10 << 3) + 0x40) = 0
                
                int32_t rdi_2 = *(rbx_1 + 0x548)
                int32_t rcx_11 = *(rbx_1 + 0x550) * 2
                int32_t rsi_3 = *(rbx_1 + 0x54c) + rcx_11
                int32_t rdi_3 = rdi_2 + rcx_11
                char var_208
                
                if (rdi_2 == neg.d(rcx_11) || rsi_3 == 0)
                    *(rbx_1 + 0x540) = 0
                    *(rbx_1 + 0x570) |= 1
                else
                    if (var_1ac_1:1.b != 0)
                        rdi_3 = (rdi_3 + 3) & 0xfffffffc
                        rsi_3 = (rsi_3 + 3) & 0xfffffffc
                    
                    int32_t rax_10 = sub_141479db0(&var_1b8, 0, rdi_3, rsi_3, 0)
                    int32_t rcx_13 = rax_10
                    int32_t rax_11
                    
                    if (rax_10 == 0xffffffff)
                        rax_11 = sub_141479db0(&var_1b8, 0, rdi_3, rsi_3, 1)
                        rcx_13 = rax_11
                    
                    if (rax_10 != 0xffffffff || rax_11 != 0xffffffff)
                        int64_t* r9_6 = &var_1a8
                        
                        if (var_140_1 != 0)
                            r9_6 = var_140_1
                        
                        int64_t r10_2 = sx.q(rcx_13) * 5
                        uint32_t rax_20 = zx.d(*(r9_6 + (r10_2 << 2) + 8))
                        *(r9_6 + (r10_2 << 2) + 0x10) = 1
                        *(rbx_1 + 0x540) = rax_20
                        *(rbx_1 + 0x544) = zx.d(*(r9_6 + (r10_2 << 2) + 0xa))
                        int32_t rdx_12 = zx.d(*(r9_6 + (r10_2 << 2) + 8)) + rdi_3
                        char temp1_1 = var_1ac_1.b
                        
                        if (temp1_1 == 0)
                            if (var_1b8 u>= rdx_12)
                                rdx_12 = var_1b8
                            
                            var_1b8 = rdx_12
                            int32_t rcx_35 = zx.d(*(r9_6 + (r10_2 << 2) + 0xa)) + rsi_3
                            
                            if (var_1b4_1.d u>= rcx_35)
                                rcx_35 = var_1b4_1.d
                            
                            var_1b4_1.d = rcx_35
                        else
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rdx_12)
                            int32_t rcx_22
                            
                            if (temp1_1 == 0)
                                rcx_22 = 0x20
                            else
                                rcx_22 = 0x1f - temp0_2
                            
                            int32_t rcx_24 = rcx_22 << 0x1a s>> 0x1f
                            uint64_t rflags_2
                            char temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rdx_12 - 1)
                            char rdx_13
                            
                            if (rcx_24 == 0)
                                rdx_13 = 0x20
                            else
                                rdx_13 = 0x1f - temp0_3
                            
                            int32_t r8_7 = 1 << ((not.d(rcx_24)).b & (0x20 - rdx_13))
                            
                            if (var_1b8 u>= r8_7)
                                r8_7 = var_1b8
                            
                            var_1b8 = r8_7
                            uint32_t rax_25 = zx.d(*(r9_6 + (r10_2 << 2) + 0xa))
                            int32_t rax_26 = rax_25 + rsi_3
                            uint64_t rflags_3
                            int32_t temp0_4
                            temp0_4, rflags_3 = _bit_scan_reverse(rax_26)
                            int32_t rcx_27
                            
                            if (rax_25 == neg.d(rsi_3))
                                rcx_27 = 0x20
                            else
                                rcx_27 = 0x1f - temp0_4
                            
                            uint64_t rflags_4
                            char temp0_5
                            temp0_5, rflags_4 = _bit_scan_reverse(rax_26 - 1)
                            char rdx_15
                            
                            if (rax_26 == 1)
                                rdx_15 = 0x20
                            else
                                rdx_15 = 0x1f - temp0_5
                            
                            int32_t rdx_16 =
                                1 << ((not.d(rcx_27 << 0x1a s>> 0x1f)).b & (0x20 - rdx_15))
                            int32_t rcx_32 = var_1b4_1:4.d
                            
                            if (var_1b4_1.d u>= rdx_16)
                                rdx_16 = var_1b4_1.d
                            
                            var_1b4_1.d = rdx_16
                            
                            if (rcx_32 == 1)
                                int32_t rax_29 = rdx_16 * 2
                                
                                if (r8_7 u>= rax_29)
                                    rax_29 = r8_7
                                
                                var_1b8 = rax_29
                                uint32_t rax_30 = rax_29 u>> 1
                                
                                if (rdx_16 u>= rax_30)
                                    rax_30 = rdx_16
                                
                                var_1b4_1.d = rax_30
                            else if (rcx_32 == 2)
                                if (r8_7 u>= rdx_16)
                                    rdx_16 = r8_7
                                
                                var_1b8 = rdx_16
                                var_1b4_1.d = rdx_16
                        
                        *(rbx_1 + 0x570) |= 1
                    else
                        int16_t var_bc_1 = var_1e0.w
                        int16_t rax_13 = var_1e0:4.w
                        int64_t* rdi_5 = nullptr
                        int32_t var_d8_1 = 1
                        int32_t r14_1 = 1
                        int64_t var_d4_1 = 1
                        int16_t var_cc_1 = 0
                        int32_t rsi_5 = 5
                        int64_t* var_60_1 = nullptr
                        int32_t var_58_1 = 1
                        int32_t var_c0_1 = 0
                        char var_b8_1 = 0
                        var_1b8 = 1
                        var_1b4_1 = 1
                        var_1ac_1 = 0
                        int32_t var_54_1 = 5
                        int64_t var_c8 = -1
                        int16_t var_ba_1 = rax_13
                        memmove(&var_1a8, &var_c8, 0x64)
                        
                        if (var_140_1 != 0)
                            sub_140a74f90(var_140_1)
                            rsi_5 = var_54_1
                            r14_1 = var_58_1
                            rdi_5 = var_60_1
                        
                        int32_t var_134_2 = rsi_5
                        int64_t rsi_6 = sx.q(*(arg1 + 0x318))
                        var_140_1 = rdi_5
                        int32_t var_138_2 = r14_1
                        int32_t rax_14 = (rsi_6 + 1).d
                        *(arg1 + 0x318) = rax_14
                        
                        if (rax_14 s> *(arg1 + 0x31c))
                            sub_14149c2e0(arg1 + 0x310, rsi_6.d)
                        
                        int64_t rax_15 = *(arg1 + 0x310)
                        int64_t rcx_18 = rsi_6 * 9
                        *(rax_15 + (rcx_18 << 3) + 0x20) = 0
                        *(rax_15 + (rcx_18 << 3) + 0x28) = 0
                        *(rax_15 + (rcx_18 << 3) + 0x2c) = 4
                        *(rax_15 + (rcx_18 << 3) + 0x30) = 0
                        *(rax_15 + (rcx_18 << 3) + 0x38) = 0
                        *(rax_15 + (rcx_18 << 3) + 0x40) = 0
                        int32_t r9_4 = *(rbx_1 + 0x550) * 2
                        var_208.d = *(rbx_1 + 0x54c) + r9_4
                        r14 = arg2
                        
                        if (sub_141478bd0(&var_1b8, rbx_1 + 0x540, rbx_1 + 0x544, 
                                r9_4 + *(rbx_1 + 0x548), var_208) != 0)
                            *(rbx_1 + 0x570) |= 1
                
                int64_t rcx_36 = sx.q(*(arg1 + 0x318)) * 9
                int64_t rax_32 = *(arg1 + 0x310)
                void* rsi_7 = rax_32 + (rcx_36 << 3)
                
                if (*(rax_32 + (rcx_36 << 3) - 0x18) != 0)
                    if (data_143ed3440 != 0)
                        var_208.q = u"ShadowDepthAtlas"
                        sub_1419a0ce0(&data_1439c9260, r14, &var_128, rsi_7 - 0x18, var_208, 1, 0, 
                            0)
                else if (*(rsi_7 - 0x20) s<= 0 || data_143ed3440 != 0)
                    var_208.q = u"ShadowDepthAtlas"
                    sub_1419a0ce0(&data_1439c9260, r14, &var_128, rsi_7 - 0x18, var_208, 1, 0, 0)
                
                int64_t r14_2 = sx.q(*(rsi_7 - 0x20))
                int32_t r15_1 = 0
                *(rbx_1 + 0x30) = 0
                
                if (*(rbx_1 + 0x34) != r14_2.d)
                    sub_14083ad10(rbx_1 + 0x28, r14_2.d)
                    r15_1 = *(rbx_1 + 0x30)
                
                int32_t rax_33 = r14_2.d + r15_1
                *(rbx_1 + 0x30) = rax_33
                
                if (rax_33 s> *(rbx_1 + 0x34))
                    sub_14083a440(rbx_1 + 0x28, r15_1)
                
                memset(*(rbx_1 + 0x28) + (sx.q(r15_1) << 3), 0, r14_2 << 3)
                int64_t r8_10 = 0
                
                if (r14_2 s> 0)
                    do
                        void* rax_35 = *(rsi_7 - 0x28)
                        void* rdx_20 = rsi_7 - 0x48
                        
                        if (rax_35 != 0)
                            rdx_20 = rax_35
                        
                        *(*(rbx_1 + 0x28) + (r8_10 << 3)) = *(rdx_20 + (r8_10 << 3))
                        r8_10 += 1
                    while (r8_10 s< r14_2)
                
                r14 = arg2
                *(rbx_1 + 0x38) = *(rsi_7 - 0x18)
                sub_1414a2f50(rbx_1, r14, arg1)
                int64_t rdi_6 = sx.q(*(rsi_7 - 8))
                int32_t rax_38 = (rdi_6 + 1).d
                *(rsi_7 - 8) = rax_38
                
                if (rax_38 s> *(rsi_7 - 4))
                    sub_14083a310(rsi_7 - 0x10, rdi_6.d)
                
                result = *(rsi_7 - 0x10)
                *(result + (rdi_6 << 3)) = rbx_1
                rdi_1 = var_1d8_1
            else
                void* r9_1 = *(arg1 + 8)
                int32_t* rdx_5
                
                if (*(r9_1 + 0x1ac0) == *(r9_1 + 0x1aec))
                label_14147bfe4:
                    rdx_5 = nullptr
                else
                    void* r8_1 = r9_1 + 0x1af0
                    void* rdx_3 = *(r8_1 + 8)
                    int64_t r10_1 = sx.q(*(*(rbx_1 + 0x5c0) + 0x28))
                    
                    if (rdx_3 != 0)
                        r8_1 = rdx_3
                    
                    int32_t rax_6 = *(r8_1 + (((sx.q(*(r9_1 + 0x1b00)) - 1) & r10_1) << 2))
                    
                    if (rax_6 == 0xffffffff)
                    label_14147bfe4_1:
                        rdx_5 = nullptr
                    else
                        while (true)
                            rdx_5 = sx.q(rax_6) * 0x290 + *(r9_1 + 0x1ab8)
                            
                            if (*rdx_5 == r10_1.d)
                                break
                            
                            rax_6 = rdx_5[0xa0]
                            
                            if (rax_6 == 0xffffffff)
                                goto label_14147bfe4_2
                        
                        if (rax_6 == 0xffffffff)
                        label_14147bfe4_2:
                            rdx_5 = nullptr
                
                *(rbx_1 + 0x570) |= 1
                *(rbx_1 + 0x540) = 0
                result = sub_141483fe0(rbx_1 + 0x28, &rdx_5[0x90])
            
            i = i_1 + 1
            rbx = var_1c0
            rcx_3 = &var_1c8_1[1]
            i_1 = i
            var_1c8_1 = rcx_3
        while (i s< rbx[1].d)
    
    if (var_140_1 != 0)
        result = sub_140a74f90(var_140_1)

__security_check_cookie(result_1 ^ &var_228)
return result
