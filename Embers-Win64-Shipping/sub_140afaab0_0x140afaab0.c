// 函数: sub_140afaab0
// 地址: 0x140afaab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
int64_t* result = sub_140aefb30(arg1, arg6, 0)
int64_t* result_2 = result

if (result != 0)
    int32_t rdx_1 = 0
    int32_t rcx = 0
    int64_t rsi_1 = 0
    int64_t var_f8_1 = 0
    int64_t var_100 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_100, rbx_1.d + 1)
            rcx = var_f8_1:4.d
            rdx_1 = var_f8_1.d
            rsi_1 = var_100
        
        int32_t rax = rbx_1.d + 1 + rdx_1
        var_f8_1.d = rax
        
        if (rax s> rcx)
            sub_140594770(&var_100)
            rsi_1 = var_100
        
        UnDecorator::getReferenceType(rsi_1, arg2, (rbx_1.d + 1) * 2)
    
    sub_140a452d0(result_2, &result_1, &var_100)
    result = sx.q(result_1)
    void* rdi_1
    
    if (result.d == 0xffffffff)
        rdi_1 = nullptr
    else
        int64_t rax_1 = result * 0xb8
        result = rax_1 + *result_2
        
        if (rax_1 == neg.q(*result_2))
            rdi_1 = nullptr
        else
            rdi_1 = &result[2]
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    if (rdi_1 != 0)
        int32_t r11_1 = *(rdi_1 + 0x28)
        void* r9 = rdi_1 + 0x10
        int32_t rcx_6 = 0
        int32_t var_ec_1 = 1
        void* rbx_3 = nullptr
        int32_t var_f0 = 0
        int32_t r8_3 = 0
        void* var_e8_1 = r9
        int32_t var_e0_1 = 0xffffffff
        int64_t var_dc_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(r9 + 0x10)
            
            if (rax_2 != 0)
                r9 = rax_2
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_7 = *r9
            
            if (rdx_7 != 0)
            label_140afac3c:
                int32_t rax_9 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_ec_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_dc_1.d = r8_3 - rax_10 + 0x1f
                
                if (r8_3 - rax_10 + 0x1f s> r11_1)
                    var_dc_1.d = r11_1
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_6)
                    r8_3 += 0x20
                    rcx_6 += 1
                    var_dc_1:4.d = r8_3
                    var_f0 = rcx_6
                    
                    if (rdx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                    var_e0_1 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_140afac3c
                
                var_dc_1.d = r11_1
        
        uint128_t zmm4_1 = var_e0_1.o
        void* var_48_1 = rdi_1
        uint128_t zmm0_1 = var_f0.o
        uint128_t var_58_1 = zmm4_1
        int16_t var_90_1 = 0
        void* rax_12 = zmm0_1.q
        uint128_t var_b8_1 = zmm0_1
        int128_t var_c8 = rdi_1.o
        zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
        result = zx.q(_mm_bsrli_si128(zmm4_1, 4).d)
        uint128_t var_a8_1 = zmm0_1
        
        if (result.d s< *(rax_12 + 0x18))
            int32_t i = var_b8_1:0xc.d
            
            do
                int64_t* r14 = var_c8.q
                int64_t rdi_3 = sx.q(i) * 0x30
                int64_t var_40
                char rax_15 = sub_140a32ae0(sub_140b63b70(*r14 + rdi_3, &var_40), arg3, 1)
                int64_t rcx_12 = var_40
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                if (rax_15 == 0)
                    char rsi_2
                    
                    if (sub_140a32ae0(sub_140b63b70(*r14 + rdi_3, &var_f0), arg4, 1) == 0
                            || rbx_3 == 0)
                        rsi_2 = 0
                    else
                        rsi_2 = 1
                    
                    int64_t rcx_27 = var_f0.q
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    if (rsi_2 == 0)
                        rbx_3 = nullptr
                    else
                        void* rdx_23 = *r14
                        int64_t* rcx_29 = rdx_23 + 0x18 + rdi_3
                        int32_t rax_28 = rcx_29[1].d
                        
                        if (rax_28 == 0 || rax_28 - 1 s<= 0)
                            rcx_29 = rdx_23 + 8 + rdi_3
                        
                        int16_t* rdx_24
                        
                        if (rcx_29[1].d == 0)
                            rdx_24 = &data_142d40450
                        else
                            rdx_24 = *rcx_29
                        
                        int64_t* rax_30 = sub_140b58260(&var_100, rdx_24, 1)
                        int64_t rdi_5 = sx.q(*(rbx_3 + 8))
                        int32_t rcx_32 = (rdi_5 + 1).d
                        *(rbx_3 + 8) = rcx_32
                        
                        if (rcx_32 s> *(rbx_3 + 0xc))
                            sub_1405a4d70(rbx_3)
                        
                        *(*rbx_3 + (rdi_5 << 3)) = *rax_30
                else
                    void* rdx_11 = *r14
                    int64_t* rcx_14 = rdx_11 + 0x18 + rdi_3
                    int32_t rax_16 = rcx_14[1].d
                    
                    if (rax_16 == 0 || rax_16 - 1 s<= 0)
                        rcx_14 = rdx_11 + 8 + rdi_3
                    
                    int16_t* rdx_12
                    
                    if (rcx_14[1].d == 0)
                        rdx_12 = &data_142d40450
                    else
                        rdx_12 = *rcx_14
                    
                    int64_t var_d0
                    sub_140b58260(&var_d0, rdx_12, 1)
                    int64_t rbx_4 = var_d0
                    
                    if (arg5[1].d == *(arg5 + 0x34))
                    label_140afade7:
                        int32_t var_80
                        sub_140a696e0(arg5, &var_80)
                        int64_t* var_78
                        *var_78 = var_d0
                        var_78[1] = 0
                        var_78[2] = 0
                        var_78[3].d = 0xffffffff
                        int64_t rbx_5 = *var_78
                        sub_140aee0e0(arg5, &result_1, (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d), 
                            var_78, var_80, nullptr)
                        rbx_3 = *arg5 + 8 + (sx.q(result_1) << 5)
                    else
                        int32_t rax_20 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                        void* r8_5 = &arg5[7]
                        void* rcx_18 = *(r8_5 + 8)
                        
                        if (rcx_18 != 0)
                            r8_5 = rcx_18
                        
                        int32_t rax_22 = *(r8_5 + (((sx.q(arg5[9].d) - 1) & sx.q(rax_20)) << 2))
                        
                        if (rax_22 == 0xffffffff)
                            goto label_140afade7
                        
                        int64_t* rdx_18
                        
                        while (true)
                            rdx_18 = (sx.q(rax_22) << 5) + *arg5
                            
                            if (*rdx_18 == rbx_4)
                                break
                            
                            rax_22 = rdx_18[3].d
                            
                            if (rax_22 == 0xffffffff)
                                goto label_140afade7
                        
                        if (rax_22 == 0xffffffff || rdx_18 == 0)
                            goto label_140afade7
                        
                        rbx_3 = &rdx_18[1]
                        
                        if (rbx_3 == 0)
                            goto label_140afade7
                
                var_b8_1:8.d &= not.d(var_c8:0xc.d)
                sub_14059bdd0(&var_c8:8)
                result = var_b8_1.q
                i = var_b8_1:0xc.d
            while (i s< result[3].d)
            
            if (var_90_1.b != 0 && var_90_1:1.b != 0)
                return sub_140a6d3f0(rdi_1, *(rdi_1 + 8) - *(rdi_1 + 0x34), 1)

return result
