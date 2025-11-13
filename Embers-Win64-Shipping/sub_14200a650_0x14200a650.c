// 函数: sub_14200a650
// 地址: 0x14200a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
char rdi = arg4
void* rbx = arg2
void* r14 = arg1
uint64_t result

if (arg2 == 0)
    result.b = 0
else
    int16_t* r15_1 = *(arg2 + 0x140)
    int16_t* var_118 = r15_1
    
    if (r15_1 == 0)
        result.b = 0
    else
        int32_t r8 = *(arg2 + 0x704)
        int16_t* const rsi_1 = &data_142d40450
        
        if (r8 == 0xffffffff)
        label_14200a94f:
            
            if (rdi == 0)
                result.b = 0
            else
                if (*(r15_1 + 0xf0) == rbx)
                    result = sub_142440380(r15_1, arg3)
                
                if (*(r15_1 + 0xf0) == rbx && result.b != 0)
                    result.b = 1
                else
                    result = sub_1423de4f0(r14, r15_1)
                    int32_t var_110
                    
                    if (*(result + 0x230) != 0xffffffff)
                        void** rbx_5 = sx.q(arg3[1].d)
                        int64_t r14_2 = *arg3
                        int64_t var_e8 = 0
                        int32_t var_e0_1 = rbx_5.d
                        
                        if (rbx_5.d != 0)
                            sub_1405a4c70(&var_e8, rbx_5.d, 0)
                            memcpy(var_e8, r14_2, rbx_5.d * 2)
                        else
                            int32_t var_dc_1 = rbx_5.d
                        
                        sub_140bbcf00(&var_e8, &var_e8, nullptr)
                        int64_t var_98
                        sub_14242f630(&var_98, arg3, *(result + 0x230))
                        int16_t* var_c8
                        sub_14242f630(&var_c8, &var_e8, *(result + 0x230))
                        arg_10 = *(sub_140d21d80(r15_1) + 0x18)
                        int16_t* var_a8
                        sub_140b63b70(&arg_10, &var_a8)
                        int16_t* rdx_23 = &data_142d40450
                        int16_t* const rcx_34 = &data_142d40450
                        int32_t var_c0
                        
                        if (var_c0 != 0)
                            rdx_23 = var_c8
                        
                        int32_t var_a0
                        
                        if (var_a0 != 0)
                            rcx_34 = var_a8
                        
                        if (sub_140a54510(rcx_34, rdx_23) != 0)
                            rbx_5 = *(r15_1 + 0x98)
                            void* r14_3 = &rbx_5[sx.q(*(r15_1 + 0xa0))]
                            
                            if (rbx_5 == r14_3)
                            label_14200aba5:
                                rbx_5.b = 0
                            else
                                while (true)
                                    void* rcx_36 = *rbx_5
                                    
                                    if (rcx_36 != 0)
                                        sub_1415206f0(rcx_36 + 0x38, &var_118)
                                        int16_t* rdx_26 = &data_142d40450
                                        int16_t* rdi_3 = var_118
                                        int16_t* const rcx_38 = &data_142d40450
                                        
                                        if (var_c0 != 0)
                                            rdx_26 = var_c8
                                        
                                        if (var_110 != 0)
                                            rcx_38 = rdi_3
                                        
                                        if (sub_140a54510(rcx_38, rdx_26) == 0)
                                            sub_140597df0(arg3, &var_98)
                                            
                                            if (rdi_3 != 0)
                                                sub_140a74f90(rdi_3)
                                            
                                            rbx_5.b = 1
                                            break
                                        
                                        if (rdi_3 != 0)
                                            sub_140a74f90(rdi_3)
                                    
                                    rbx_5 = &rbx_5[1]
                                    
                                    if (rbx_5 == r14_3)
                                        goto label_14200aba5
                        else
                            sub_140597df0(arg3, &var_98)
                            rbx_5.b = 1
                        
                        int16_t* rcx_40 = var_a8
                        
                        if (rcx_40 != 0)
                            sub_140a74f90(rcx_40)
                        
                        int16_t* rcx_41 = var_c8
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                        
                        int64_t rcx_42 = var_98
                        
                        if (rcx_42 != 0)
                            sub_140a74f90(rcx_42)
                        
                        int64_t rcx_43 = var_e8
                        
                        if (rcx_43 != 0)
                            sub_140a74f90(rcx_43)
                        
                        return zx.q(rbx_5.b)
                    
                    if (*(r14 + 0xc40) s<= 1)
                        result.b = 0
                    else
                        sub_142441630(&var_118, arg3)
                        int16_t* const rdx_13
                        
                        if (arg3[1].d == 0)
                            rdx_13 = &data_142d40450
                        else
                            rdx_13 = *arg3
                        
                        int16_t* r8_5 = var_118
                        
                        if (var_110 != 0)
                            rsi_1 = r8_5
                        
                        void* rdx_15 = rdx_13 - rsi_1
                        uint32_t rcx_21
                        
                        do
                            rcx_21 = zx.d(*rsi_1)
                            result = zx.q(*(rsi_1 + rdx_15))
                            
                            if (rcx_21 != result.d)
                                break
                            
                            rsi_1 = &rsi_1[1]
                        while (result.d != 0)
                        
                        if (rcx_21 - result.d == 0)
                            if (r8_5 != 0)
                                sub_140a74f90(r8_5)
                            
                            result.b = 0
                        else
                            sub_140597df0(arg3, &var_118)
                        label_14200aa36:
                            int16_t* rcx_24 = var_118
                            
                            if (rcx_24 != 0)
                                sub_140a74f90(rcx_24)
                            
                            result.b = 1
        else
            if (arg4 != 0)
                uint64_t result_1
                int64_t* rax = sub_14242f630(&result_1, arg3, r8)
                int16_t* rdx_1
                
                if (rax[1].d == 0)
                    rdx_1 = &data_142d40450
                else
                    rdx_1 = *rax
                
                int64_t var_d0
                sub_140b58260(&var_d0, rdx_1, 1)
                uint64_t result_2 = result_1
                
                if (result_2 != 0)
                    sub_140a74f90(result_2)
                
                void* rcx_2 = *(r15_1 + 0x158)
                void* var_d8_1 = rcx_2
                result = sx.q(*(r15_1 + 0x160)) * 0x78 + rcx_2
                result_1 = result
                
                if (rcx_2 != result)
                    void* r14_1 = rcx_2 + 0x48
                    
                    while (true)
                        if (*(r14_1 - 0x38) != rbx && *(r14_1 - 0x30) != rbx)
                        label_14200a92d:
                            rcx_2 += 0x78
                            r14_1 += 0x78
                            var_d8_1 = rcx_2
                            
                            if (rcx_2 != result)
                                continue
                            
                            r15_1 = var_118
                            rdi = arg4
                            r14 = arg1
                            break
                        
                        int32_t r10_1 = *(r14_1 + 8)
                        void* r9 = r14_1 - 0x10
                        int32_t rcx_3 = 0
                        int32_t var_104_1 = 1
                        int32_t r8_1 = 0
                        int32_t var_108_1 = 0
                        void* var_100_1 = r9
                        int32_t var_f8_1 = 0xffffffff
                        int64_t var_f4_1 = 0
                        
                        if (r10_1 != 0)
                            void* rax_3 = *r14_1
                            
                            if (rax_3 != 0)
                                r9 = rax_3
                            
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(r10_1 - 1)
                            int32_t rdx_4 = *r9
                            
                            if (rdx_4 != 0)
                            label_14200a7bb:
                                int32_t rax_10 = neg.d(rdx_4) & rdx_4
                                uint64_t rflags_1
                                int32_t temp0_1
                                temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                                int32_t var_104_2 = rax_10
                                int32_t rax_11
                                
                                if (rax_10 == 0)
                                    rax_11 = 0x20
                                else
                                    rax_11 = 0x1f - temp0_1
                                
                                var_f4_1.d = r8_1 - rax_11 + 0x1f
                                
                                if (r8_1 - rax_11 + 0x1f s> r10_1)
                                    var_f4_1.d = r10_1
                            else
                                while (true)
                                    int64_t rdx_5 = sx.q(rcx_3)
                                    r8_1 += 0x20
                                    rcx_3 += 1
                                    var_f4_1:4.d = r8_1
                                    var_108_1 = rcx_3
                                    
                                    if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_4 = *(r9 + (rdx_5 << 2) + 4)
                                    int32_t var_f8_2 = 0xffffffff
                                    
                                    if (rdx_4 != 0)
                                        goto label_14200a7bb
                                
                                var_f4_1.d = r10_1
                        
                        int32_t rbx_1 = *(r14_1 + 8)
                        int128_t var_48_1 = 0xffffffff
                        int128_t var_58_1 = var_108_1.o
                        int32_t rdi_1 = 0xffffffff << (r10_1.b & 0x1f)
                        int32_t r8_4 = r10_1 s>> 5
                        int32_t r9_2 = r10_1 & 0xffffffe0
                        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                        int32_t var_f8_3 = rdi_1
                        var_f4_1.d = r10_1
                        int128_t var_88 = (r14_1 - 0x20).o
                        int128_t var_78_1 = var_58_1
                        
                        if (r10_1 != rbx_1)
                            void* rax_13 = *r14_1
                            void* r10_2 = r14_1 - 0x10
                            
                            if (rax_13 != 0)
                                r10_2 = rax_13
                            
                            int32_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(rbx_1 - 1)
                            int32_t rdx_9 = *(r10_2 + (sx.q(r8_4) << 2)) & rdi_1
                            
                            if (rdx_9 != 0)
                            label_14200a895:
                                int32_t rax_20 = neg.d(rdx_9) & rdx_9
                                uint64_t rflags_2
                                int32_t temp0_3
                                temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
                                int32_t rax_21
                                
                                if (rax_20 == 0)
                                    rax_21 = 0x20
                                else
                                    rax_21 = 0x1f - temp0_3
                                
                                var_f4_1.d = r9_2 - rax_21 + 0x1f
                                
                                if (r9_2 - rax_21 + 0x1f s> rbx_1)
                                    var_f4_1.d = rbx_1
                            else
                                while (true)
                                    int64_t rcx_8 = sx.q(r8_4)
                                    r9_2 += 0x20
                                    r8_4 += 1
                                    
                                    if (rcx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_9 = *(r10_2 + (rcx_8 << 2) + 4)
                                    var_f8_3 = 0xffffffff
                                    
                                    if (rdx_9 != 0)
                                        goto label_14200a895
                                
                                var_f4_1.d = rbx_1
                        
                        while (true)
                            int64_t rcx_10 = sx.q(var_78_1:0xc.d)
                            int64_t* rax_23 = var_88.q
                            
                            if (rcx_10.d == (var_f8_3.q u>> 0x20).d && var_78_1.q == r14_1 - 0x10
                                    && rax_23 == r14_1 - 0x20)
                                rcx_2 = var_d8_1
                                rbx = arg_10
                                result = result_1
                                goto label_14200a92d
                            
                            void* rcx_12 = *(*rax_23 + rcx_10 * 0x10)
                            
                            if (rcx_12 != 0)
                                void* rax_25 = sub_140d21d80(rcx_12)
                                
                                if (rax_25 != 0 && *(rax_25 + 0x18) == var_d0)
                                    result = sub_140b63b70(&var_d0, &var_118)
                                    
                                    if (arg3 != result)
                                        int64_t rcx_19 = *arg3
                                        
                                        if (rcx_19 != 0)
                                            sub_140a74f90(rcx_19)
                                        
                                        *arg3 = *result
                                        *result = 0
                                        arg3[1].d = *(result + 8)
                                        *(arg3 + 0xc) = *(result + 0xc)
                                        *(result + 8) = 0
                                    
                                    break
                            
                            var_78_1:8.d &= not.d(var_88:0xc.d)
                            sub_14059bdd0(&var_88:8)
                        
                        goto label_14200aa36
                
                goto label_14200a94f
            
            result.b = 0

return result
