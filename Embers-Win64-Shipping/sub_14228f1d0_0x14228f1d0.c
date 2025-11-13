// 函数: sub_14228f1d0
// 地址: 0x14228f1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[0x6b]
int64_t r8 = sx.q(arg1[0x6c].d)
int64_t* rcx = rdx
int64_t r14 = r8 << 3
uint64_t result = &rdx[r8]

if (rdx != result)
    while (*rcx != arg2)
        rcx = &rcx[1]
        
        if (rcx == result)
            goto label_14228f230

if (rdx == result || ((rcx - rdx) s>> 3).d == 0xffffffff)
label_14228f230:
    int32_t rdx_1 = *(arg1 + 0x34)
    int32_t rax = arg1[6].d
    int32_t rcx_3 = arg1[7].d
    
    if (rax s>= rdx_1)
        rdx_1 = rax
    
    if (rdx_1 s>= rcx_3)
        rcx_3 = rdx_1
    
    uint64_t var_b8
    uint128_t var_a8
    int32_t var_88
    int64_t* arg_8
    
    if (rcx_3 s<= 0)
        char result_2 = *(arg1 + 0xc)
        
        if (result_2 != 4)
            result = zx.q(result_2)
        else
            result = zx.q(data_1439c7a08)
        
        if (result.d s< 3)
            if (*(arg2 + 0x50) s> 0)
                int32_t rax_68 = (r8 + 1).d
                arg1[0x6c].d = rax_68
                
                if (rax_68 s> *(arg1 + 0x364))
                    sub_1405a4d70(&arg1[0x6b])
                
                int64_t rax_69 = arg1[0x6b]
                arg_8 = arg1
                *(r14 + rax_69) = arg2
                result = sub_14228dec0(arg2 + 0x378, &arg_8)
                int32_t i = 0
                arg1[0x76].d = result.d
                char rdi_7 = result.b
                
                if (arg1[0x60].d s> 0)
                    int64_t* r10_1 = nullptr
                    
                    do
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(i)
                        var_b8 = *(arg1 + 0x7c)
                        int32_t r8_4 = var_b8.d
                        uint32_t rcx_57 = (var_b8 u>> 0x20).d
                        void* rcx_58 = arg1[0x5f]
                        int32_t temp20_1
                        int32_t temp21_1
                        temp20_1:temp21_1 = sx.q(i)
                        
                        if ((rcx_58.b & 1) != 0)
                            rcx_58 = (rcx_58 s>> 1) + &arg1[0x5f]
                        
                        uint64_t zmm0_5 = *(r10_1 + rcx_58)
                        i += 1
                        int32_t rax_78 = *(arg2 + 0x34) * *(r10_1 + rcx_58 + 8)
                        r10_1 += 0xc
                        var_a8.q = zmm0_5
                        int32_t rdx_43 =
                            ((var_a8.q u>> 0x20).d + rax_78) * *(arg2 + 0x30) + var_a8.d
                        char* rcx_62 = sx.q((&data_1439c85f4)[sx.q(*(arg2 + 0x5c)) * 0xa] * rdx_43)
                            + *(arg2 + 0x48)
                        *rcx_62 = (mods.dp.d(temp8_1:temp9_1, r8_4)).b
                        rcx_62[1] = (mods.dp.d(sx.q(divs.dp.d(temp8_1:temp9_1, r8_4)), rcx_57)).b
                        rcx_62[2] = (divs.dp.d(temp20_1:temp21_1, r8_4 * rcx_57)).b
                        rcx_62[3] = 1
                        result = *(arg2 + 0x368)
                        *(sx.q(rdx_43) + result) = rdi_7
                    while (i s< arg1[0x60].d)
        else if (*(arg2 + 0x60) != 0)
            int32_t rax_51 = (r8 + 1).d
            arg1[0x6c].d = rax_51
            
            if (rax_51 s> *(arg1 + 0x364))
                sub_1405a4d70(&arg1[0x6b])
            
            *(r14 + arg1[0x6b]) = arg2
            sub_1422a4ad0(arg1)
            char rax_53 = *(arg1 + 0xc)
            uint32_t rax_54
            
            if (rax_53 != 4)
                rax_54 = zx.d(rax_53)
            else
                rax_54 = data_1439c7a08
            
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(rax_54)]), &var_a8, 
                &data_143f52ca0, 0)
            int32_t rcx_46 = arg1[0x60].d
            int32_t var_84_2 = arg1[0x6a].d
            int64_t var_78_2 = *(arg2 + 0x68)
            int64_t var_80_1 = arg1[0x67]
            int32_t temp26_1
            int32_t temp27_1
            temp26_1:temp27_1 = sx.q(rcx_46 + 0x3f)
            var_b8:4.d = 1
            var_a8 = var_a8
            var_88 = rcx_46
            var_b8.d = (temp27_1 + (temp26_1 & 0x3f)) s>> 6
            var_b8 = var_b8
            int32_t var_b0_3 = 1
            sub_1422842d0(&data_143f02b98, &var_a8, &var_88, &var_b8)
            int64_t* rcx_47 = *(arg2 + 0x68)
            int64_t** rdi_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            arg_8 = rcx_47
            void* rax_64 = &rdi_4[1]
            
            if (rax_64 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x10)
                rcx_47 = arg_8
                rdi_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_64 = &rdi_4[1]
            
            data_143f02bc8 = rax_64
            *rdi_4 = rcx_47
            void*** rcx_50 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_65 = &rcx_50[6]
            
            if (rax_65 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x38)
                rcx_50 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_65 = &rcx_50[6]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_65
            *data_143f02ba0 = rcx_50
            data_143f02ba0 = &rcx_50[1]
            rcx_50[1] = 0
            *rcx_50 = &data_142da7798
            rcx_50[2].d = 1
            rcx_50[3] = rdi_4
            rcx_50[4].d = 0
            *(rcx_50 + 0x24) = 1
            rcx_50[5] = 0
            return sub_1422a9280(arg1)
    else
        int32_t rax_1 = (r8 + 1).d
        arg1[0x6c].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x364))
            sub_1405a4d70(&arg1[0x6b])
        
        *(r14 + arg1[0x6b]) = arg2
        *(arg2 + 0x10) = *(arg1 + 0x10)
        *(arg2 + 0x20) = arg1[4]
        *(arg2 + 0x28) = arg1[5].d
        *(arg2 + 0x78) = arg1[0xf].d
        *(arg2 + 0x7c) = *(arg1 + 0x7c)
        *(arg2 + 0x80) = arg1[0x10].d
        *(arg2 + 0x84) = *(arg1 + 0x84)
        *(arg2 + 0x5c) = *(arg1 + 0x5c)
        *(arg2 + 0x30) = arg1[6].d
        *(arg2 + 0x34) = *(arg1 + 0x34)
        *(arg2 + 0x38) = arg1[7].d
        char result_1 = *(arg1 + 0xc)
        uint32_t result_3 = data_1439c7a08
        
        if (result_1 != 4)
            result = zx.q(result_1)
        else
            result = zx.q(result_3)
        
        if (result.d s< 3)
            sub_14081d8c0(arg2 + 0x48, &arg1[9])
            int32_t r12_1 = 0
            *(arg2 + 0x370) = 0
            
            if (*(arg2 + 0x374) != 0)
                sub_1405c5510(arg2 + 0x368, 0)
                r12_1 = *(arg2 + 0x370)
            
            int32_t r15_5 = arg1[7].d * *(arg1 + 0x34) * arg1[6].d
            int32_t rax_50 = r12_1 + r15_5
            *(arg2 + 0x370) = rax_50
            
            if (rax_50 s> *(arg2 + 0x374))
                sub_1405daba0(arg2 + 0x368)
            
            memset(sx.q(r12_1) + *(arg2 + 0x368), 0, sx.q(r15_5))
            *(arg2 + 0x380) = 0
            
            if (*(arg2 + 0x384) != 0)
                sub_1405c5570(arg2 + 0x378, 0)
            
            *(arg2 + 0x3a8) = 0xffffffff
            *(arg2 + 0x3ac) = 0
            sub_14059a8e0(arg2 + 0x388, 0)
            arg_8 = arg1
            result = sub_14228dec0(arg2 + 0x378, &arg_8)
            arg1[0x76].d = result.d
        else
            if (arg1[1].d == 0xffffffff)
                result = (*(*arg1 + 0x28))(arg1)
                result_3 = data_1439c7a08
            
            if (arg1[0xc] != 0)
                int32_t rdx_4 = arg1[0xf].d + 1
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(arg1 + 0x84) * arg1[0x10].d * *(arg1 + 0x7c))
                char result_4 = *(arg1 + 0xc)
                
                if (result_4 != 4)
                    result_3 = zx.d(result_4)
                
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(result_3)]), &var_a8, 
                    &data_143f52db0, 0)
                var_a8 = var_a8
                void** var_68
                sub_142289700(&var_68, arg2 + 0x40)
                int32_t rax_20 = arg1[7].d
                var_b8 = arg1[6]
                int32_t var_b0_1 = rax_20
                sub_142296b00(&var_68, &var_b8)
                int64_t* rcx_13 = data_143f0f180
                void* var_48
                (*(*rcx_13 + 0x5a0))(rcx_13, &arg_8, &data_143f02b98, var_48, 0)
                int64_t* var_40
                sub_1405d1600(&var_40, &arg_8)
                sub_1405d1550(&arg_8)
                int64_t var_80
                var_80.d = arg1[0x6a].d
                int64_t var_78_1 = arg1[0xc]
                int32_t rax_25 = arg1[6].d + 3
                var_88 = divs.dp.d(temp2_1:temp3_1, rdx_4 * rdx_4 * rdx_4)
                int64_t* r15_2 = var_40
                int32_t temp28_1
                int32_t temp29_1
                temp28_1:temp29_1 = sx.q(rax_25)
                int32_t var_84_1 = 0
                int64_t* var_70_1 = r15_2
                var_b8.d = (temp29_1 + (temp28_1 & 3)) s>> 2
                int32_t temp30_1
                int32_t temp31_1
                temp30_1:temp31_1 = sx.q(*(arg1 + 0x34) + 3)
                var_b8:4.d = (temp31_1 + (temp30_1 & 3)) s>> 2
                int32_t temp32_1
                int32_t temp33_1
                temp32_1:temp33_1 = sx.q(arg1[7].d + 3)
                var_b8 = var_b8
                int32_t var_b0_2 = (temp33_1 + (temp32_1 & 3)) s>> 2
                sub_142284140(&data_143f02b98, &var_a8, &var_88, &var_b8)
                int64_t var_60
                sub_14081d8c0(arg2 + 0x48, &var_60)
                void* rdx_20 = var_48
                int32_t var_50
                *(arg2 + 0x58) = var_50
                int32_t var_4c
                *(arg2 + 0x5c) = var_4c
                sub_1405d16e0(arg2 + 0x60, rdx_20)
                sub_1405d16e0(arg2 + 0x68, r15_2)
                char var_38
                *(arg2 + 0x70) = var_38
                sub_14228a920(&arg1[8], arg2 + 0x40)
                int64_t* rcx_20 = arg1[0xc]
                int64_t rbx_2 = data_143f02bc8 + 7
                arg_8 = rcx_20
                int64_t** rbx_3 = rbx_2 & 0xfffffffffffffff8
                void* rax_42 = &rbx_3[1]
                
                if (rax_42 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x10)
                    rcx_20 = arg_8
                    rbx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_42 = &rbx_3[1]
                
                data_143f02bc8 = rax_42
                *rbx_3 = rcx_20
                void*** rcx_23 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_43 = &rcx_23[5]
                
                if (rax_43 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x30)
                    rcx_23 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_43 = &rcx_23[5]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_43
                *data_143f02ba0 = rcx_23
                data_143f02ba0 = &rcx_23[1]
                rcx_23[1] = 0
                rcx_23[3] = rbx_3
                *rcx_23 = &data_142d549c8
                rcx_23[2].d = 1
                rcx_23[4].d = 0
                int64_t rbx_7 = data_143f02bc8 + 7
                arg_8 = r15_2
                void** rbx_8 = rbx_7 & 0xfffffffffffffff8
                void* rax_46 = &rbx_8[1]
                
                if (rax_46 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x10)
                    r15_2 = arg_8
                    rbx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_46 = &rbx_8[1]
                
                data_143f02bc8 = rax_46
                *rbx_8 = r15_2
                void*** rcx_28 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_47 = &rcx_28[6]
                
                if (rax_47 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x38)
                    rcx_28 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_47 = &rcx_28[6]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_47
                *data_143f02ba0 = rcx_28
                data_143f02ba0 = &rcx_28[1]
                rcx_28[1] = 0
                *rcx_28 = &data_142da7798
                rcx_28[2].d = 1
                rcx_28[3] = rbx_8
                rcx_28[4].d = 0
                *(rcx_28 + 0x24) = 1
                rcx_28[5] = 0
                sub_1405d1550(&var_40)
                result = sub_14081c9d0(&var_48)
                int64_t rcx_33 = var_60
                
                if (rcx_33 != 0)
                    return sub_140a74f90(rcx_33)

return result
