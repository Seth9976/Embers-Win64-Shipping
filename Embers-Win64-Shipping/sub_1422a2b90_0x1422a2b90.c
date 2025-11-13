// 函数: sub_1422a2b90
// 地址: 0x1422a2b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
*(arg1 + 0x350) = arg3
int32_t r9 = *(arg1 + 0x34)
int32_t r8 = *(arg1 + 0x38)

if (*(arg1 + 0x30) s>= r9)
    r9 = *(arg1 + 0x30)

if (r9 s>= r8)
    r8 = r9

uint64_t result

if (r8 s<= 0)
    sub_1422a4ad0(arg1)
    int64_t* i = *(arg1 + 0x358)
    void* r12_1 = &i[sx.q(*(arg1 + 0x360))]
    void* var_178_1 = r12_1
    
    for (; i != r12_1; i = &i[1])
        void* r13_3 = *i
        
        if (*(r13_3 + 0x60) != 0)
            char rax_56 = *(arg1 + 0xc)
            uint32_t rax_57
            
            if (rax_56 != 4)
                rax_57 = zx.d(rax_56)
            else
                rax_57 = data_1439c7a08
            
            int128_t var_e8
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(rax_57)]), &var_e8, 
                &data_143f52ca0, 0)
            int32_t rcx_42 = *(arg1 + 0x300)
            void* rdi_7 = nullptr
            int128_t zmm0_2 = var_e8
            int32_t var_a4_1 = *(arg1 + 0x350)
            int64_t var_98_1 = *(r13_3 + 0x68)
            int64_t var_a0_1 = *(arg1 + 0x338)
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(rcx_42 + 0x3f)
            int32_t var_a8 = rcx_42
            int128_t var_d8 = zmm0_2
            void* rcx_43 = zmm0_2.q
            int32_t rax_66 = (temp9_1 + (temp8_1 & 0x3f)) s>> 6
            int32_t r15_3 = rax_66
            
            if (rcx_43 != 0)
                int64_t rdx_28 = sx.q(*(rcx_43 + 0x10c))
                int64_t* r15_4 = *(var_e8:8.q + 0x10)
                int64_t rdi_8 = r15_4[3]
                
                if (*(rdi_8 + (rdx_28 << 3)) == 0)
                    sub_1419ccf30(r15_4, rdx_28.d)
                    rdi_8 = r15_4[3]
                
                rdi_7 = *(rdi_8 + (rdx_28 << 3))
                r12_1 = var_178_1
                r15_3 = rax_66
            
            data_143f02d48 = rdi_7
            sub_14198aa60(rdi_7)
            void*** rcx_49 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_67 = &rcx_49[3]
            
            if (rax_67 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x20)
                rcx_49 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_67 = &rcx_49[3]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_67
            *data_143f02ba0 = rcx_49
            data_143f02ba0 = &rcx_49[1]
            rcx_49[1] = 0
            *rcx_49 = &data_142dd5b40
            rcx_49[2] = rdi_7
            sub_142286480(&data_143f02b98, &var_d8, rdi_7, &var_a8)
            void*** rcx_54 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_70 = &rcx_54[4]
            
            if (rax_70 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x28)
                rcx_54 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_70 = &rcx_54[4]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_70
            *data_143f02ba0 = rcx_54
            data_143f02ba0 = &rcx_54[1]
            rcx_54[1] = 0
            *rcx_54 = &data_142ef57a8
            rcx_54[2].d = r15_3
            *(rcx_54 + 0x14) = 1
            rcx_54[3].d = 1
            sub_14116d320(&data_143f02b98, &var_d8, rdi_7)
            int64_t rcx_57 = *(r13_3 + 0x68)
            int64_t* rdi_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_73 = &rdi_11[1]
            
            if (rax_73 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x10)
                rdi_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_73 = &rdi_11[1]
            
            data_143f02bc8 = rax_73
            *rdi_11 = rcx_57
            void*** rcx_60 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_74 = &rcx_60[6]
            
            if (rax_74 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x38)
                rcx_60 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_74 = &rcx_60[6]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_74
            *data_143f02ba0 = rcx_60
            data_143f02ba0 = &rcx_60[1]
            rcx_60[1] = 0
            *rcx_60 = &data_142da7798
            rcx_60[2].d = 1
            rcx_60[3] = rdi_11
            rcx_60[4].d = 0
            *(rcx_60 + 0x24) = 1
            rcx_60[5] = 0
    
    sub_1405d16e0(arg1 + 0x330, nullptr)
    sub_1405d16e0(arg1 + 0x338, nullptr)
    sub_1405d16e0(arg1 + 0x340, nullptr)
    result = sub_1405d16e0(arg1 + 0x348, nullptr)
else
    int64_t* r12 = *(arg1 + 0x358)
    int32_t rdx_1 = *(arg1 + 0x78) + 1
    result = zx.q(divs.dp.d(sx.q(*(arg1 + 0x84) * *(arg1 + 0x80) * *(arg1 + 0x7c)), 
        rdx_1 * rdx_1 * rdx_1))
    int32_t var_194_1 = result.d
    uint64_t result_1 = &r12[sx.q(*(arg1 + 0x360))]
    
    if (r12 != result_1)
        result = result_1
        
        do
            void* rdi_1 = *r12
            int64_t* r15_1 = rdi_1 + 0x60
            
            if (*(rdi_1 + 0x60) != 0)
                char rax_6 = *(arg1 + 0xc)
                uint32_t rax_7
                
                if (rax_6 != 4)
                    rax_7 = zx.d(rax_6)
                else
                    rax_7 = data_1439c7a08
                
                uint128_t var_108
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(rax_7)]), &var_108, 
                    &data_143f52db0, 0)
                int64_t r13_1 = *(rdi_1 + 0x48)
                void** const var_170_1 = &data_143314ec0
                uint32_t count = *(rdi_1 + 0x50)
                uint128_t var_f8 = var_108
                int64_t var_168 = 0
                uint32_t count_1 = count
                
                if (count != 0)
                    sub_1405da9e0(&var_168, count, 0)
                    memcpy(var_168, r13_1, count)
                else
                    int32_t var_15c_1 = 0
                
                int32_t rax_10 = *(rdi_1 + 0x58)
                int32_t rax_11 = *(rdi_1 + 0x5c)
                void* rax_12 = *r15_1
                void* var_150 = rax_12
                
                if (rax_12 != 0)
                    *(rax_12 + 8) += 1
                
                void* rax_13 = *(rdi_1 + 0x68)
                void* var_148 = rax_13
                
                if (rax_13 != 0)
                    *(rax_13 + 8) += 1
                
                char rax_14 = *(rdi_1 + 0x70)
                int32_t r8_2 = *(arg1 + 0x38)
                int128_t zmm1 = data_143dbb1e0
                int64_t* rcx_9 = data_143f0f180
                int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
                wchar16 const* const var_58_1 = u"VolumetricLightmap"
                int128_t var_88
                int128_t* var_1a0_1 = &var_88
                uint64_t var_118_1 = *(arg1 + 0x30)
                int32_t var_1a8_1 = 0x10408
                int32_t var_1b0_1 = 1
                var_88 = zx.o(0)
                int32_t var_78_1 = 1
                int128_t var_74_1 = zmm1
                char var_60_1 = 0
                int32_t var_50_1 = 0
                int32_t var_198
                int32_t var_188
                void* var_178
                void var_138
                (*(*rcx_9 + 0x580))(zx.o(0), &var_138, &data_143f02b98, zx.q(var_118_1.d), 
                    (var_118_1 u>> 0x20).d, r8_2, rax_11.b, var_1b0_1, var_1a8_1, var_1a0_1, 
                    var_198, arg2, var_188, result_1, var_178, var_170_1)
                sub_1405d1600(&var_150, &var_138)
                sub_14081c9d0(&var_138)
                int64_t* rcx_12 = data_143f0f180
                void var_130
                (*(*rcx_12 + 0x5a0))(rcx_12, &var_130, &data_143f02b98, var_150, 0)
                sub_1405d1600(&var_148, &var_130)
                sub_1405d1550(&var_130)
                void* r13_2 = var_148
                int32_t var_c8 = var_194_1
                int32_t var_c4_1 = arg2
                int32_t var_c0_1 = *(arg1 + 0x350)
                int64_t var_b8_1 = *r15_1
                void* var_b0_1 = r13_2
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(*(arg1 + 0x30) + 3)
                int32_t temp12_1
                int32_t temp13_1
                temp12_1:temp13_1 = sx.q(*(arg1 + 0x34) + 3)
                var_188 = (temp13_1 + (temp12_1 & 3)) s>> 2
                int32_t temp14_1
                int32_t temp15_1
                temp14_1:temp15_1 = sx.q(*(arg1 + 0x38) + 3)
                void* rcx_15 = var_108.q
                void* r14_1 = nullptr
                var_198 = (temp15_1 + (temp14_1 & 3)) s>> 2
                
                if (rcx_15 != 0)
                    int64_t rdx_19 = sx.q(*(rcx_15 + 0x10c))
                    int64_t rax_38 = rdx_19
                    int64_t* r15_2 = *(var_108:8.q + 0x10)
                    int64_t r14_2 = r15_2[3]
                    
                    if (*(r14_2 + (rdx_19 << 3)) == 0)
                        sub_1419ccf30(r15_2, rdx_19.d)
                        rax_38 = rdx_19
                        r14_2 = r15_2[3]
                    
                    r14_1 = *(r14_2 + (rax_38 << 3))
                    r15_1 = rdi_1 + 0x60
                
                data_143f02d48 = r14_1
                sub_14198aa60(r14_1)
                void*** rcx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_39 = &rcx_21[3]
                
                if (rax_39 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x20)
                    rcx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_39 = &rcx_21[3]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_39
                *data_143f02ba0 = rcx_21
                data_143f02ba0 = &rcx_21[1]
                rcx_21[1] = 0
                *rcx_21 = &data_142dd5b40
                rcx_21[2] = r14_1
                sub_142285ec0(&data_143f02b98, &var_f8, r14_1, &var_c8)
                void*** rcx_26 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_42 = &rcx_26[4]
                
                if (rax_42 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x28)
                    rcx_26 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_42 = &rcx_26[4]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_42
                *data_143f02ba0 = rcx_26
                data_143f02ba0 = &rcx_26[1]
                rcx_26[1] = 0
                *rcx_26 = &data_142ef57a8
                rcx_26[2].d = (temp11_1 + (temp10_1 & 3)) s>> 2
                *(rcx_26 + 0x14) = var_188
                rcx_26[3].d = var_198
                sub_14116d320(&data_143f02b98, &var_f8, r14_1)
                sub_14081d8c0(rdi_1 + 0x48, &var_168)
                void* rdx_23 = var_150
                *(rdi_1 + 0x58) = rax_10
                *(rdi_1 + 0x5c) = rax_11
                sub_1405d16e0(r15_1, rdx_23)
                sub_1405d16e0(rdi_1 + 0x68, r13_2)
                *(rdi_1 + 0x70) = rax_14
                var_178 = r13_2
                void** rdi_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_51 = &rdi_4[1]
                
                if (rax_51 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x10)
                    r13_2 = var_178
                    rdi_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_51 = &rdi_4[1]
                
                data_143f02bc8 = rax_51
                *rdi_4 = r13_2
                void*** rcx_34 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_52 = &rcx_34[6]
                
                if (rax_52 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x38)
                    rcx_34 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_52 = &rcx_34[6]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_52
                *data_143f02ba0 = rcx_34
                data_143f02ba0 = &rcx_34[1]
                rcx_34[1] = 0
                *rcx_34 = &data_142da7798
                rcx_34[2].d = 1
                rcx_34[3] = rdi_4
                rcx_34[4].d = 0
                *(rcx_34 + 0x24) = 1
                rcx_34[5] = 0
                sub_1405d1550(&var_148)
                sub_14081c9d0(&var_150)
                int64_t rcx_39 = var_168
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                result = result_1
            
            r12 = &r12[1]
        while (r12 != result)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
