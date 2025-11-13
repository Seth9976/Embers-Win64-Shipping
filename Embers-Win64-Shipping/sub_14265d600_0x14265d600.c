// 函数: sub_14265d600
// 地址: 0x14265d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t var_38 = __security_cookie ^ &var_128
uint64_t result

if ((arg1[0xd].b & 0x80) != 0)
label_14265dabe:
    result.b = 1
else
    int32_t var_104_1 = 1
    int32_t r10_1 = arg1[0x26].d
    int32_t rcx = 0
    void* var_100_1 = &arg1[0x23]
    int32_t r8_1 = 0
    int32_t var_108_1 = 0
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = arg1[0x25]
        void* r9_1 = &arg1[0x23]
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_14265d6cc:
            int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_104_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_f4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r10_1)
                var_f4_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_f4_1:4.d = r8_1
                var_108_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_f8_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_14265d6cc
            
            var_f4_1.d = r10_1
    
    int32_t rdx_5 = arg1[0x26].d
    var_f4_1.d = rdx_5
    int128_t var_a8_1 = 0xffffffff
    int128_t var_b8_1 = var_108_1.o
    int32_t r15_1 = 0xffffffff << (rdx_5 & 0x1f).b
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_c8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_f8_3 = r15_1
    int128_t var_e8 = (&arg1[0x21]).o
    int128_t var_d8_1 = var_b8_1
    
    if (rdx_5 != r10_1)
        void* rax_13 = arg1[0x25]
        void* r11_1 = &arg1[0x23]
        
        if (rax_13 != 0)
            r11_1 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_9 = *(r11_1 + (sx.q(r8_4) << 2)) & r15_1
        
        if (rdx_9 != 0)
        label_14265d7a7:
            int32_t rax_19 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rbx_1
            
            if (rax_19 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            var_f4_1.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r10_1)
                var_f4_1.d = r10_1
        else
            while (true)
                int64_t rcx_4 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r11_1 + (rcx_4 << 2) + 4)
                var_f8_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_14265d7a7
            
            var_f4_1.d = r10_1
    
    while (true)
        int64_t rcx_6 = sx.q(var_d8_1:0xc.d)
        int32_t rax_12
        
        if (rcx_6.d != (var_f8_3.q u>> 0x20).d || var_d8_1.q != &arg1[0x23])
            rax_12.b = 0
        else
            rax_12.b = 1
        
        uint64_t* rdx_10 = var_e8.q
        
        if (rax_12.b == 0 || rdx_10 != &arg1[0x21])
            rax_12.b = 1
        else
            rax_12.b = 0
        
        if (rax_12.b == 0)
            void* rdi_1
            rdi_1.b = 0
            void* rax_22 = sub_1426a0270()
            char var_98
            sub_142640350(&var_98, (*(*arg1 + 0x150))(arg1), rax_22, 5)
            void* var_90
            int64_t var_88
            char var_74
            int64_t var_60
            
            if (var_74 == 0)
                void* var_68
                rdi_1 = var_68
                int32_t var_78
                int32_t rsi_2 = var_78
                
                while (true)
                    if (rdi_1 != 0)
                        int32_t rax_25 = *(rdi_1 + 0xc)
                        void* const rax_31
                        
                        if (rax_25 s>= data_143e1d9b4)
                            rax_31 = nullptr
                        else
                            int16_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(rax_25)
                            uint32_t rdx_13 = zx.d(temp4_1)
                            int32_t rax_27 = temp5_1 + rdx_13
                            rax_31 = *(data_143e1d9a0 + (sx.q(rax_27 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_27.w) - rdx_13) * 0x18
                        
                        if (((*(rax_31 + 8) u>> 0x1d).b & 1) == 0)
                            rdi_1.b = 1
                            break
                    
                    int32_t var_58
                    int32_t r8_7 = var_58
                    rsi_2 += 1
                    int32_t var_80
                    int32_t rdx_15 = var_80
                    
                    if (rsi_2 s>= r8_7 + rdx_15)
                    label_14265da56:
                        int64_t var_68_1 = 0
                        char var_74_1 = 1
                    else
                        void** r12_1 = sx.q(rsi_2) << 3
                        
                        while (true)
                            if (rsi_2 s>= rdx_15)
                                rdi_1 = *(var_60 + (sx.q(rsi_2 - rdx_15) << 3))
                            else
                                rdi_1 = *(r12_1 + var_88)
                            
                            int32_t var_70 = var_70 + 1
                            
                            if (rdi_1 != 0)
                                void* rax_40 = sub_141dc9840(rdi_1)
                                
                                if (rax_40 != 0)
                                    void* const rax_47
                                    
                                    if ((var_98 & 1) != 0)
                                        int32_t rax_41 = *(rdi_1 + 0xc)
                                        
                                        if (rax_41 s>= data_143e1d9b4)
                                            rax_47 = nullptr
                                        else
                                            int16_t temp6_1
                                            int32_t temp7_1
                                            temp6_1:temp7_1 = sx.q(rax_41)
                                            uint32_t rdx_17 = zx.d(temp6_1)
                                            int32_t rax_43 = temp7_1 + rdx_17
                                            rax_47 =
                                                *(data_143e1d9a0 + (sx.q(rax_43 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_43.w) - rdx_17) * 0x18
                                    
                                    if ((var_98 & 1) == 0 || ((*(rax_47 + 8) u>> 0x1d).b & 1) == 0)
                                        int32_t rcx_22 = var_98.d
                                        
                                        if (((rcx_22 u>> 1).b & 1) == 0)
                                            goto label_14265d989
                                        
                                        uint64_t rax_51 = sub_1405949a0()
                                        
                                        if (rax_51.b != 0)
                                            rcx_22 = var_98.d
                                        label_14265d989:
                                            
                                            if (((rcx_22 u>> 2).b & 1) == 0)
                                            label_14265da06:
                                                
                                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                        rax_40) == var_90)
                                                    if (rax_40 == *(var_90 + 0x30))
                                                        break
                                                    
                                                    void* rax_53 = sub_1425bd0d0()
                                                    void* rdx_19 = *(rdi_1 + 0x10)
                                                    int64_t rax_54 = sx.q(*(rax_53 + 0x38))
                                                    
                                                    if (rax_54.d s> *(rdx_19 + 0x38))
                                                        break
                                                    
                                                    if (*(*(rdx_19 + 0x30) + (rax_54 << 3))
                                                            != rax_53 + 0x30)
                                                        break
                                            else
                                                if ((*(rax_40 + 0x1f4) & 0x20) == 0
                                                        || (*(rax_40 + 0x1f6) & 8) != 0)
                                                    rax_51 = zx.q(*(rax_40 + 0x1f5))
                                                
                                                if (((*(rax_40 + 0x1f4) & 0x20) != 0
                                                        && (*(rax_40 + 0x1f6) & 8) == 0)
                                                        || (rax_51.b & 0x40) != 0 || rax_51.b s< 0)
                                                    r15_1.b = 1
                                                else
                                                    r15_1.b = 0
                                                
                                                void* rcx_24 = *(rax_40 + 0xb8)
                                                char* r14_2 = *(rax_40 + 0x248)
                                                
                                                if (rcx_24 != 0)
                                                    rax_51 = sub_1424359b0(rcx_24)
                                                
                                                if (rcx_24 == 0 || rax_51 == 0 || r14_2 == rax_51)
                                                    rcx_24.b = 1
                                                else
                                                    rcx_24.b = 0
                                                
                                                if (r14_2 == 0 || *r14_2 == 2)
                                                    rax_51.b = 1
                                                else
                                                    rax_51.b = 0
                                                
                                                if (rcx_24.b != 0 || rax_51.b != 0)
                                                    rax_51.b = 1
                                                
                                                if (r15_1.b != 0 && rax_51.b != 0)
                                                    goto label_14265da06
                                
                                r8_7 = var_58
                                rdx_15 = var_80
                            
                            rsi_2 += 1
                            r12_1 = &r12_1[1]
                            
                            if (rsi_2 s>= r8_7 + rdx_15)
                                goto label_14265da56
                        
                        void* var_68_2 = rdi_1
                        int32_t var_78_1 = rsi_2
                        
                        if (var_74 == 0)
                            continue
                    
                    rdi_1.b = 0
                    break
            
            char var_40
            
            if (var_40 != 0)
                char var_40_1 = 0
                int64_t var_48
                sub_142441560(var_90, var_48)
                
                if (var_60 != 0)
                    sub_140a74f90(var_60)
                
                if (var_88 != 0)
                    sub_140a74f90(var_88)
            
            result = zx.q(rdi_1.b)
            break
        
        if (*(rcx_6 * 0x34 + *rdx_10 + 0x1c) != 0)
            goto label_14265dabe
        
        var_d8_1:8.d &= not.d(var_e8:0xc.d)
        sub_14059bdd0(&var_e8:8)

__security_check_cookie(var_38 ^ &var_128)
return result
