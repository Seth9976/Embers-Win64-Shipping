// 函数: sub_141ac9370
// 地址: 0x141ac9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)
void arg_8
int64_t* result
int64_t rbx_1

if (rbx != 0)
    sub_140d21950(rbx, sub_1424972f0())
    rbx_1 = *(arg1 + 0x20)
    result = sub_1424985e0(&arg_8, *(arg1 + 0x30))

if (rbx == 0 || *result != rbx_1)
    result = sub_141e030c0(arg2)
    int64_t* result_1 = result
    
    if (result != 0)
        void* rax_3 = sub_140d21950(result_1, sub_1424972f0())
        int64_t rbx_2
        
        if (rax_3 != 0)
            rbx_2 = *(arg1 + 0x20)
            result = sub_1424985e0(&arg_8, result_1)
        
        if (rax_3 == 0 || *result != rbx_2)
            void* rax_4 = result_1[2]
            void* var_98 = rax_4
            int64_t* rcx_5
            
            if (rax_4 == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(rax_4 + 0x50)
            
            int32_t var_88_1 = 0xffffffff
            int16_t var_84_1 = 0x101
            char var_82_1 = 0
            sub_141ac6940(&var_98)
            int64_t* rdi_2 = rcx_5
            
            if (rdi_2 == 0)
            label_141ac94f2:
                int32_t rcx_13 = 0
                var_98.d = 0
                int32_t r10_1 = result_1[0x39].d
                int32_t r8_1 = 0
                var_98:4.d = 1
                void* var_90_3 = &result_1[0x36]
                int32_t var_88_2 = 0xffffffff
                var_84_1.q = 0
                
                if (r10_1 != 0)
                    void* rax_12 = result_1[0x38]
                    void* r9_1 = &result_1[0x36]
                    
                    if (rax_12 != 0)
                        r9_1 = rax_12
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r10_1 - 1)
                    int32_t rdx_11 = *r9_1
                    
                    if (rdx_11 != 0)
                    label_141ac9588:
                        int32_t rax_19 = neg.d(rdx_11) & rdx_11
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
                        var_98:4.d = rax_19
                        int32_t rax_20
                        
                        if (rax_19 == 0)
                            rax_20 = 0x20
                        else
                            rax_20 = 0x1f - temp0_2
                        
                        var_84_1.d = r8_1 - rax_20 + 0x1f
                        
                        if (r8_1 - rax_20 + 0x1f s> r10_1)
                            var_84_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_12 = sx.q(rcx_13)
                            r8_1 += 0x20
                            rcx_13 += 1
                            int32_t var_80_1 = r8_1
                            var_98.d = rcx_13
                            
                            if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                            var_88_2 = 0xffffffff
                            
                            if (rdx_11 != 0)
                                goto label_141ac9588
                        
                        var_84_1.d = r10_1
                
                int32_t rdx_13 = result_1[0x39].d
                double zmm2[0x2] = var_88_2.o
                var_84_1.d = rdx_13
                double var_38_1[0x2] = zmm2
                int128_t var_48_1 = var_98.o
                int32_t rsi_2 = 0xffffffff << (rdx_13 & 0x1f).b
                int32_t r8_4 = rdx_13 s>> 5
                int32_t r9_3 = rdx_13 & 0xffffffe0
                int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                int32_t var_88_3 = rsi_2
                int128_t var_78 = (&result_1[0x34]).o
                int96_t var_68_1 = var_48_1:8.12
                
                if (rdx_13 != r10_1)
                    void* rax_23 = result_1[0x38]
                    void* r11_1 = &result_1[0x36]
                    
                    if (rax_23 != 0)
                        r11_1 = rax_23
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                    int32_t rdx_17 = *(r11_1 + (sx.q(r8_4) << 2)) & rsi_2
                    
                    if (rdx_17 != 0)
                    label_141ac9665:
                        int32_t rax_29 = neg.d(rdx_17) & rdx_17
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_29)
                        int32_t rbx_4
                        
                        if (rax_29 == 0)
                            rbx_4 = 0x20
                        else
                            rbx_4 = 0x1f - temp0_4
                        
                        result = zx.q(r9_3 - rbx_4 + 0x1f)
                        var_84_1.d = result.d
                        
                        if (result.d s> r10_1)
                            var_84_1.d = r10_1
                    else
                        while (true)
                            int64_t rcx_17 = sx.q(r8_4)
                            r9_3 += 0x20
                            r8_4 += 1
                            
                            if (rcx_17.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_17 = *(r11_1 + (rcx_17 << 2) + 4)
                            var_88_3 = 0xffffffff
                            
                            if (rdx_17 != 0)
                                goto label_141ac9665
                        
                        var_84_1.d = r10_1
                
                while (true)
                    int32_t var_5c
                    int64_t rcx_19 = sx.q(var_5c)
                    
                    if (rcx_19.d != (var_88_3.q u>> 0x20).d || var_68_1.q != &result_1[0x36])
                        result.b = 0
                    else
                        result.b = 1
                    
                    int64_t* rdx_18 = var_78.q
                    
                    if (result.b == 0 || rdx_18 != &result_1[0x34])
                        result.b = 1
                    else
                        result.b = 0
                    
                    if (result.b == 0)
                        break
                    
                    int64_t* rdi_4 = *(*rdx_18 + rcx_19 * 0x10)
                    void* rsi_3
                    
                    if (rdi_4 == 0)
                        rsi_3 = nullptr
                    else
                        rsi_3 = sub_140d21950(rdi_4, sub_1424972f0())
                    
                    if (rsi_3 != 0)
                        int64_t rbx_5 = *(arg1 + 0x20)
                        result = sub_1424985e0(&arg_8, rdi_4)
                        
                        if (*result == rbx_5)
                            *(arg1 + 0x30) = rdi_4
                            *(arg1 + 0x38) = rsi_3
                            break
                    
                    var_68_1:8.d &= not.d(var_78:0xc.d)
                    sub_14059bdd0(&var_78:8)
            else
                while (true)
                    int64_t* rax_6 = (*(*rdi_2 + 0x140))(rdi_2, sx.q(*(rdi_2 + 0x4c)) + result_1)
                    int64_t* rsi_1 = rax_6
                    void* rax_7
                    void* rcx_8
                    int64_t rdx_6
                    
                    if (rax_6 != 0)
                        rax_7 = sub_142459c10()
                        rcx_8 = rsi_1[2]
                        rdx_6 = sx.q(*(rax_7 + 0x38))
                    
                    void* r14_1
                    
                    if (rax_6 == 0 || rdx_6.d s> *(rcx_8 + 0x38)
                            || *(*(rcx_8 + 0x30) + (rdx_6 << 3)) != rax_7 + 0x30)
                        rsi_1 = nullptr
                        r14_1 = nullptr
                    else
                        r14_1 = sub_140d21950(rsi_1, sub_1424972f0())
                    
                    if (r14_1 != 0)
                        int64_t rbx_3 = *(arg1 + 0x20)
                        result = sub_1424985e0(&arg_8, rsi_1)
                        
                        if (*result == rbx_3)
                            *(arg1 + 0x30) = rsi_1
                            *(arg1 + 0x38) = r14_1
                            break
                    
                    int64_t* rax_11 = rdi_2[4]
                    sub_141ac6940(&var_98)
                    rdi_2 = rax_11
                    
                    if (rdi_2 == 0)
                        goto label_141ac94f2
        else
            *(arg1 + 0x30) = result_1
            *(arg1 + 0x38) = rax_3

return result
