// 函数: sub_140a7e560
// 地址: 0x140a7e560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140af5690(data_143ddb400, u"Core.StringTable", 0, 1, &data_143de5780)

if (result != 0)
    int32_t r10_1 = result[5].d
    void* r9_1 = &result[2]
    int32_t var_104_1 = 1
    int32_t rcx_1 = 0
    int32_t var_108 = 0
    int32_t r8_1 = 0
    void* var_100_1 = r9_1
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (r10_1 != 0)
        void* rax = *(r9_1 + 0x10)
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140a7e62c:
            int32_t rax_7 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_104_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_f4_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r10_1)
                var_f4_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_f4_1:4.d = r8_1
                var_108 = rcx_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_f8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140a7e62c
            
            var_f4_1.d = r10_1
    
    uint128_t zmm4_1 = var_f8_1.o
    int64_t* result_2 = result
    uint128_t zmm0_1 = var_108.o
    uint128_t var_58_1 = zmm4_1
    int64_t* result_1 = result
    int16_t var_90_1 = 0
    void* rax_10 = zmm0_1.q
    uint128_t var_b8_1 = zmm0_1
    int128_t var_c8 = result.o
    zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
    result = zx.q(_mm_bsrli_si128(zmm4_1, 4).d)
    uint128_t var_a8_1 = zmm0_1
    
    if (result.d s< *(rax_10 + 0x18))
        int32_t i = var_b8_1:0xc.d
        TEB* gsbase
        int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
        
        do
            if (data_143db9a00 s> *rsi_2)
                _Init_thread_header(&data_143db9a00)
                
                if (data_143db9a00 == 0xffffffff)
                    sub_140b58260(&data_143db99f8, u"StringTableRedirects", 1)
                    _Init_thread_footer(&data_143db9a00)
            
            void* rdx_5 = *var_c8.q
            int64_t rcx_6 = sx.q(i) * 0x30
            
            if (*(rcx_6 + rdx_5) == data_143db99f8)
                int64_t* rbx_2 = rdx_5 + 0x18 + rcx_6
                int32_t rax_16 = rbx_2[1].d
                
                if (rax_16 == 0 || rax_16 - 1 s<= 0)
                    rbx_2 = rdx_5 + 8 + rcx_6
                
                int64_t arg_18 = 0
                int64_t arg_20 = 0
                int64_t var_d8 = 0
                int32_t var_d0_1 = 0
                int64_t var_e8 = 0
                int32_t var_e0_1 = 0
                int16_t* rcx_7
                
                if (rbx_2[1].d == 0)
                    rcx_7 = &data_142d40450
                else
                    rcx_7 = *rbx_2
                
                char rax_18 = sub_140b2ac50(rcx_7, u"OldStringTable=", &arg_18)
                int32_t rcx_8 = rbx_2[1].d
                
                if (rax_18 == 0)
                    int16_t* rcx_10
                    
                    if (rcx_8 == 0)
                        rcx_10 = &data_142d40450
                    else
                        rcx_10 = *rbx_2
                    
                    if (sub_140b2ac50(rcx_10, u"StringTable=", &arg_18) != 0)
                        int16_t* rcx_11
                        
                        if (rbx_2[1].d == 0)
                            rcx_11 = &data_142d40450
                        else
                            rcx_11 = *rbx_2
                        
                        sub_140b2acc0(rcx_11, u"OldKey=", &var_d8, 1)
                        int16_t* rcx_12
                        
                        if (rbx_2[1].d == 0)
                            rcx_12 = &data_142d40450
                        else
                            rcx_12 = *rbx_2
                        
                        sub_140b2acc0(rcx_12, u"NewKey=", &var_e8, 1)
                        
                        if (var_d0_1 s> 1 && var_e0_1 s> 1)
                            int64_t rax_20 = arg_18
                            int32_t r10_3 = sub_140b5ead0(rax_20.d) + rax_20:4.d
                            int64_t* rdi_1
                            
                            if (data_14399eb08 == data_14399eb34)
                            labelid_1f:
                                rdi_1 = sub_140a5ced0(&data_14399eb00, r10_3, &arg_18)
                            else
                                void* rcx_14 = data_14399eb40
                                void* rax_26 = &data_14399eb38
                                
                                if (rcx_14 != 0)
                                    rax_26 = rcx_14
                                
                                int32_t rax_27 =
                                    *(rax_26 + ((sx.q(data_14399eb48 - 1) & sx.q(r10_3)) << 2))
                                
                                if (rax_27 == 0xffffffff)
                                label_140a7e900:
                                    rdi_1 = sub_140a5ced0(&data_14399eb00, r10_3, &arg_18)
                                else
                                    void* r9_4 = data_14399eb00
                                    int64_t r8_10
                                    
                                    while (true)
                                        r8_10 = sx.q(rax_27) * 0x60
                                        
                                        if (*(r9_4 + r8_10) == arg_18)
                                            break
                                        
                                        rax_27 = *(r9_4 + r8_10 + 0x58)
                                        
                                        if (rax_27 == 0xffffffff)
                                            goto label_140a7e900_2
                                    
                                    if (rax_27 == 0xffffffff)
                                    label_140a7e900_1:
                                        rdi_1 = sub_140a5ced0(&data_14399eb00, r10_3, &arg_18)
                                    else
                                        void* rax_29 = r8_10 + r9_4
                                        
                                        if (rax_29 == 0)
                                        label_140a7e900_2:
                                            rdi_1 = sub_140a5ced0(&data_14399eb00, r10_3, &arg_18)
                                        else
                                            rdi_1 = rax_29 + 8
                            
                            sub_1405d1820(rdi_1, &var_108)
                            sub_140596d10(var_100_1, &var_d8)
                            sub_140596d10(var_100_1 + 0x10, &var_e8)
                            *(var_100_1 + 0x20) = 0xffffffff
                            int16_t* rcx_19
                            
                            if (*(var_100_1 + 8) == 0)
                                rcx_19 = &data_142d40450
                            else
                                rcx_19 = *var_100_1
                            
                            void arg_10
                            sub_140a70650(rdi_1, &arg_10, sub_140a5ff80(rcx_19, 0), var_100_1, 
                                var_108, nullptr)
                else
                    int16_t* rcx_9
                    
                    if (rcx_8 == 0)
                        rcx_9 = &data_142d40450
                    else
                        rcx_9 = *rbx_2
                    
                    sub_140b2ac50(rcx_9, u"NewStringTable=", &arg_20)
                    
                    if (arg_20 != 0)
                        int64_t* var_80 = &arg_18
                        int64_t* var_78_1 = &arg_20
                        void arg_8
                        sub_140a5c490(&data_14399eab0, &arg_8, &var_80, nullptr)
                
                int64_t rbx_5 = var_e8
                
                if (rbx_5 != 0)
                    int64_t* rcx_22 = data_143ddb3f0
                    
                    if (rcx_22 == 0)
                        sub_140a750a0()
                        rcx_22 = data_143ddb3f0
                    
                    (*(*rcx_22 + 0x30))(rcx_22, rbx_5)
                
                int64_t rbx_6 = var_d8
                
                if (rbx_6 != 0)
                    int64_t* rcx_23 = data_143ddb3f0
                    
                    if (rcx_23 == 0)
                        sub_140a750a0()
                        rcx_23 = data_143ddb3f0
                    
                    (*(*rcx_23 + 0x30))(rcx_23, rbx_6)
            
            var_b8_1:8.d &= not.d(var_c8:0xc.d)
            sub_14059bdd0(&var_c8:8)
            result = var_b8_1.q
            i = var_b8_1:0xc.d
        while (i s< result[3].d)
        
        if (var_90_1.b != 0 && var_90_1:1.b != 0)
            return sub_140a6d3f0(result_1, result_1[1].d - *(result_1 + 0x34), 1)

return result
