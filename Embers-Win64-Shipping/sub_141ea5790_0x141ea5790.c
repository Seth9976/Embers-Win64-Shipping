// 函数: sub_141ea5790
// 地址: 0x141ea5790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t result = __security_cookie ^ &var_188
int64_t result_1 = result

if (arg1[0x1c].b == 0)
    result = sub_1419c6730()
    
    if (result.b != 0)
        int64_t* rax_1 = sub_140af5690(data_143ddb400, Engine.BufferVisualizationMaterials", 0, 1, 
            &data_143de5780)
        
        if (rax_1 != 0)
            int32_t r11_1 = rax_1[5].d
            void* r9_2 = &rax_1[2]
            int32_t var_114_1 = 1
            int32_t rcx_1 = 0
            int32_t var_118_1 = 0
            int32_t r8_1 = 0
            void* var_110_1 = r9_2
            int32_t var_108_1 = 0xffffffff
            int64_t var_104_1 = 0
            
            if (r11_1 != 0)
                void* rax_2 = *(r9_2 + 0x10)
                
                if (rax_2 != 0)
                    r9_2 = rax_2
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(r11_1 - 1)
                int32_t rdx_3 = *r9_2
                
                if (rdx_3 != 0)
                label_141ea5889:
                    int32_t rax_9 = neg.d(rdx_3) & rdx_3
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
                    int32_t var_114_2 = rax_9
                    int32_t var_60_1 = temp0_1
                    int32_t rax_10
                    
                    if (rax_9 == 0)
                        rax_10 = 0x20
                    else
                        rax_10 = 0x1f - temp0_1
                    
                    var_104_1.d = r8_1 - rax_10 + 0x1f
                    
                    if (r8_1 - rax_10 + 0x1f s> r11_1)
                        var_104_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_4 = sx.q(rcx_1)
                        r8_1 += 0x20
                        rcx_1 += 1
                        var_104_1:4.d = r8_1
                        var_118_1 = rcx_1
                        
                        if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_3 = *(r9_2 + (rdx_4 << 2) + 4)
                        int32_t var_108_2 = 0xffffffff
                        
                        if (rdx_3 != 0)
                            goto label_141ea5889
                    
                    var_104_1.d = r11_1
            
            int64_t* var_68_1 = rax_1
            int64_t* var_b8 = rax_1
            int128_t var_a0_1 = 0xffffffff
            int128_t var_b0_1 = var_118_1.o
            int16_t var_c0_1 = 0
            int128_t var_e8_1 = var_b0_1
            int128_t var_f8 = var_b8.o
            int128_t zmm0_1
            zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_70_1 = zmm0_1
            int128_t var_d8_1 = zmm0_1
            
            if (0 s< *(var_b0_1.q + 0x18))
                int32_t i = var_e8_1:0xc.d
                
                do
                    int64_t* rdi_1 = var_f8.q
                    int16_t* var_138 = nullptr
                    int32_t var_130_1 = 0
                    int64_t r14_2 = sx.q(i) * 0x30
                    void* rdx_6 = *rdi_1 + r14_2
                    int32_t rax_14 = *(rdx_6 + 0x20)
                    int32_t rcx_3 = rax_14 - 1
                    int16_t** rax_15 = 0x18
                    
                    if (rax_14 == 0)
                        rcx_3 = 0
                    
                    if (rcx_3 s<= 0)
                        rax_15 = 8
                    
                    int16_t* rcx_4
                    
                    if (*(rax_15 + rdx_6 + 8) == 0)
                        rcx_4 = &data_142d40450
                    else
                        rcx_4 = *(rax_15 + rdx_6)
                    
                    r9_2.b = 1
                    char rax_16
                    int64_t r8_4
                    rax_16, r8_4 = sub_140b2acc0(rcx_4, u"Display=", &var_138, r9_2.b)
                    
                    if (rax_16 == 0)
                    label_141ea59f1:
                        int16_t* var_128 = nullptr
                        int32_t var_120_1 = 0
                        void* rdx_10 = *rdi_1 + r14_2
                        int32_t rax_20 = *(rdx_10 + 0x20)
                        int32_t rcx_7 = rax_20 - 1
                        int64_t* rax_21 = 0x18
                        
                        if (rax_20 == 0)
                            rcx_7 = 0
                        
                        if (rcx_7 s<= 0)
                            rax_21 = 8
                        
                        int16_t* rcx_8
                        
                        if (*(rax_21 + rdx_10 + 8) == 0)
                            rcx_8 = &data_142d40450
                        else
                            rcx_8 = *(rax_21 + rdx_10)
                        
                        if (sub_140b2acc0(rcx_8, u"Material=", &var_128, 1) != 0)
                            int16_t* const rbx_2 = &data_142d40450
                            
                            if (var_120_1 != 0)
                                rbx_2 = var_128
                            
                            int64_t* var_168_1
                            var_168_1.d = 0
                            void* rax_24 =
                                sub_140d2f6f0(sub_142543940(), 0, rbx_2, 0, var_168_1.d, 0, 1, 0)
                            
                            if (rax_24 != 0)
                                int32_t rcx_10 = *(rax_24 + 0xc)
                                void* const rax_27
                                
                                if (rcx_10 s>= data_143e1d9b4)
                                    rax_27 = nullptr
                                else
                                    uint32_t rdx_11 = zx.d(rcx_10.w)
                                    
                                    if (rcx_10 s< 0)
                                        rcx_10 += 0xffff
                                        rdx_11 -= 0x10000
                                    
                                    rax_27 = *(data_143e1d9a0 + (sx.q(rcx_10 s>> 0x10) << 3))
                                        + sx.q(rdx_11) * 0x18
                                
                                *(rax_27 + 8) |= 0x40000000
                                int64_t var_90
                                __builtin_memset(&var_90, 0, 0x30)
                                int64_t var_80
                                sub_140a96170(&var_80)
                                int64_t* rax_28 = sub_141e8db30(arg1, *rdi_1 + r14_2, &var_90)
                                int64_t* var_78
                                
                                if (var_78 != 0)
                                    var_78[1].d -= 1
                                    
                                    if (var_78[1].d == 1)
                                        int64_t rdx_16 = *var_78
                                        (*rdx_16)(var_78, rdx_16)
                                        int32_t rax_29 = *(var_78 + 0xc)
                                        *(var_78 + 0xc) -= 1
                                        
                                        if (rax_29 == 1)
                                            (*(*var_78 + 8))(var_78, 1)
                                    
                                    rdi_1 = var_f8.q
                                
                                int64_t rcx_18 = var_90
                                
                                if (rcx_18 != 0)
                                    sub_140a74f90(rcx_18)
                                
                                int64_t var_50
                                sub_140597da0(rax_28, sub_140b5e690(*rdi_1 + r14_2, &var_50))
                                int64_t rcx_22 = var_50
                                
                                if (rcx_22 != 0)
                                    sub_140a74f90(rcx_22)
                                
                                rax_28[5] = rax_24
                                sub_140a96170(&var_b8)
                                void* rdx_20 = *rdi_1 + r14_2
                                int32_t rax_32 = *(rdx_20 + 0x20)
                                int32_t rcx_24 = rax_32 - 1
                                int16_t** rax_33 = 0x18
                                
                                if (rax_32 == 0)
                                    rcx_24 = 0
                                
                                if (rcx_24 s<= 0)
                                    rax_33 = 8
                                
                                int16_t* rcx_25
                                
                                if (*(rax_33 + rdx_20 + 8) == 0)
                                    rcx_25 = &data_142d40450
                                else
                                    rcx_25 = *(rax_33 + rdx_20)
                                
                                sub_140b2aec0(rcx_25, Name=", &var_b8, 
                                    Engine.BufferVisualizationMaterials")
                                int64_t* rcx_26 = var_b0_1.q
                                int64_t* var_148 = var_b8
                                int64_t* var_140_1 = rcx_26
                                
                                if (rcx_26 != 0)
                                    rcx_26[1].d += 1
                                    rcx_26 = var_140_1
                                
                                if (&var_148 != &rax_28[2])
                                    int128_t zmm1_2 = var_148.o
                                    int128_t var_40_1 = zmm1_2
                                    var_148.o = *(rax_28 + 0x10)
                                    rcx_26 = var_140_1
                                    *(rax_28 + 0x10) = zmm1_2
                                
                                if (rcx_26 != 0)
                                    rcx_26[1].d -= 1
                                    
                                    if (rcx_26[1].d == 1)
                                        (**var_140_1)(var_140_1)
                                        int32_t rax_37 = *(var_140_1 + 0xc)
                                        *(var_140_1 + 0xc) -= 1
                                        
                                        if (rax_37 == 1)
                                            (*(*var_140_1 + 8))(var_140_1, 1)
                                
                                rax_28[4].d = var_b0_1:8.d
                                int64_t var_5c = *(rax_24 + 0x18)
                                sub_141e8dc10(&arg1[0xa], &var_5c, rax_28)
                                int64_t* rbx_5 = var_b0_1.q
                                
                                if (rbx_5 != 0)
                                    rbx_5[1].d -= 1
                                    
                                    if (rbx_5[1].d == 1)
                                        (**rbx_5)(rbx_5)
                                        int32_t rax_43 = *(rbx_5 + 0xc)
                                        *(rbx_5 + 0xc) -= 1
                                        
                                        if (rax_43 == 1)
                                            (*(*rbx_5 + 8))(rbx_5, 1)
                        
                        int16_t* rcx_32 = var_128
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                    else
                        int64_t* rcx_5 = data_143db18d0
                        
                        if (rcx_5 == 0)
                            sub_140a53c40()
                            rcx_5 = data_143db18d0
                        
                        int16_t* const rdx_7 = &data_142d40450
                        r8_4.b = 1
                        
                        if (var_130_1 != 0)
                            rdx_7 = var_138
                        
                        int64_t* rax_18 = (*(*rcx_5 + 0xb0))(rcx_5, rdx_7, r8_4)
                        
                        if (rax_18 == 0)
                            goto label_141ea59f1
                        
                        int64_t rdx_8 = *rax_18
                        
                        if ((*(rdx_8 + 0x88))(rax_18, rdx_8) != 0)
                            goto label_141ea59f1
                    
                    int16_t* rcx_33 = var_138
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                    
                    var_e8_1:8.d &= not.d(var_f8:0xc.d)
                    sub_14059bdd0(&var_f8:8)
                    i = var_e8_1:0xc.d
                while (i s< *(var_e8_1.q + 0x18))
                
                if (var_c0_1.b != 0 && var_c0_1:1.b != 0)
                    sub_140a6d3f0(rax_1, rax_1[1].d - *(rax_1 + 0x34), 1)
        
        result = sub_141e98470(arg1)
    
    arg1[0x1c].b = 1

__security_check_cookie(result_1 ^ &var_188)
return result
