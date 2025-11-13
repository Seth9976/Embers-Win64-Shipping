// 函数: sub_141f46e20
// 地址: 0x141f46e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94e8)
uint64_t result
int512_t zmm1
result, zmm1 = sub_140b4e7c0(arg2, &data_1439a94e8)

if (result.d s< 1)
    int32_t arg_10
    
    if (arg2[8].d s>= 0x11d)
        int64_t* rcx_3 = arg2[1]
        result = *rcx_3 + 4
        
        if (result u> rcx_3[1])
            int64_t rax_3 = *arg2
            arg_10 = 0
            result = (*(rax_3 + 0x150))(arg2, &arg_10, 4)
        else
            *rcx_3 = result
    
    if (arg2[8].d s>= 0x15e)
        int64_t var_118 = 0
        int64_t var_110_1 = 0
        sub_1409ac860(arg2, &var_118, zmm1)
        int32_t var_138 = 0x3f800000
        int32_t rax_4
        int512_t zmm1_1
        uint128_t zmm6_1
        rax_4, zmm1_1, zmm6_1 = sub_140b4e7c0(arg2, &data_1439a9478)
        
        if (rax_4 s>= 5)
            int64_t* rcx_7 = arg2[1]
            int32_t* rdx_2 = *rcx_7
            
            if (&rdx_2[1] u> rcx_7[1])
                int32_t* rdx_3 = &var_138
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_3, zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_3, 4)
            else
                var_138 = *rdx_2
                *rcx_7 += 4
        
        int64_t* rcx_9 = arg2[1]
        int32_t arg_18 = 0
        int32_t* rdx_4 = *rcx_9
        
        if (&rdx_4[1] u> rcx_9[1])
            int32_t* rdx_5 = &arg_18
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_5, zmm1_1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_5, 4)
        else
            arg_18 = *rdx_4
            *rcx_9 += 4
        
        if (((var_110_1:4.d ^ 0x5812f4d3) | (var_118.d ^ 0xc669396) | (var_118:4.d ^ 0x9cb849ae)
                | (var_110_1.d ^ 0x9f4120ff)) != 0)
            return (*(*arg2 + 0x178))(arg2, sx.q(arg_18))
        
        uint64_t* rcx_17 = arg2[1]
        uint64_t rdx_7 = *rcx_17
        bool cond:2_1
        
        if (rdx_7 + 4 u> rcx_17[1])
            int64_t rax_19 = *arg2
            arg_10 = 0
            result = (*(rax_19 + 0x150))(arg2, &arg_10, 4)
            cond:2_1 = arg_10 != 0
        else
            cond:2_1 = *rdx_7 != 0
            result = rdx_7 + 4
            *rcx_17 = result
        
        if (cond:2_1 != 0)
            uint128_t var_48_1 = zmm6_1
            int32_t* rax_20 = j_sub_140a82f30(0x40)
            int32_t* r14_1 = rax_20
            
            if (rax_20 == 0)
                r14_1 = nullptr
            else
                *rax_20 = 0
                rax_20[2] = 0
                __builtin_memset(&rax_20[4], 0, 0x21)
                *(rax_20 + 0x38) = 0
            
            int32_t rax_21
            int512_t zmm1_2
            rax_21, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9478)
            
            if (rax_21 s< 2)
                *r14_1 = 0x80
            else
                int64_t* rcx_20 = arg2[1]
                int32_t* rdx_9 = *rcx_20
                
                if (&rdx_9[1] u<= rcx_20[1])
                    *r14_1 = *rdx_9
                    int64_t* rax_24 = arg2[1]
                    *rax_24 += 4
                else if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, r14_1, zmm1_2)
                else
                    (*(*arg2 + 0x150))(arg2, r14_1, 4)
            
            int64_t rax_26 = *arg2
            int64_t* var_130 = nullptr
            int64_t var_128_1 = 0
            (*(rax_26 + 8))(arg2, 0, 0)
            int32_t rax_27 = var_128_1.d
            int64_t* rcx_23 = arg2[1]
            
            if ((arg2[5].b & 1) != 0)
                rax_27 = 0
            
            int32_t arg_20 = rax_27
            int32_t* rdx_11 = *rcx_23
            
            if (&rdx_11[1] u> rcx_23[1])
                int32_t* rdx_12 = &arg_20
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_12, zmm1_2)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_12, 4)
            else
                arg_20 = *rdx_11
                *rcx_23 += 4
            
            int32_t rcx_27 = arg_20
            
            if (rcx_27 != 0)
                char rax_31 = *(arg2 + 0x29)
                
                if ((rax_31 & 1) != 0 || rcx_27 s<= 0
                        || ((*(arg2 + 0x2b) & 8) != 0 && rcx_27 s> 0x1000000))
                    *(arg2 + 0x29) = rax_31 | 1
                else
                    var_128_1.d = rcx_27
                    
                    if ((arg2[5].b & 1) != 0)
                        sub_1405da9e0(&var_130, rcx_27, var_128_1:4.d)
                        rcx_27 = var_128_1.d
                    
                    (*(*arg2 + 0x150))(arg2, var_130, sx.q(rcx_27))
            else if ((arg2[5].b & 1) != 0 && var_128_1:4.d != 0)
                sub_1405c5510(&var_130, 0)
            
            void** var_f8
            memset(&var_f8, 0, 0x90)
            sub_140b4c2a0(&var_f8)
            int32_t var_68_1 = 0
            var_f8 = &data_142d6b230
            int64_t* var_60_1 = &var_130
            int64_t var_58_1 = 0x7fffffffffffffff
            sub_140b55290(&var_f8, 1)
            var_f8[0x1b](&var_f8, 0)
            int64_t* var_f0
            int32_t* rdx_16 = *var_f0
            char var_cf
            
            if (&rdx_16[1] u> var_f0[1])
                int32_t* rdx_17 = &arg_10
                void*** rcx_34 = &var_f8
                
                if ((var_cf & 0x20) != 0)
                    sub_140b54070(rcx_34, rdx_17, zmm1_2)
                else
                    var_f8[0x2a](rcx_34, rdx_17, 4)
            else
                arg_10 = *rdx_16
                *var_f0 += 4
            
            int32_t* rdx_18 = *var_f0
            int32_t var_134
            
            if (&rdx_18[1] u> var_f0[1])
                int32_t* rdx_19 = &var_134
                void*** rcx_36 = &var_f8
                
                if ((var_cf & 0x20) != 0)
                    sub_140b54070(rcx_36, rdx_19, zmm1_2)
                else
                    var_f8[0x2a](rcx_36, rdx_19, 4)
            else
                var_134 = *rdx_18
                *var_f0 += 4
            
            int32_t rax_40 = arg_10
            int32_t rdx_20 = 0
            r14_1[6] = 0
            
            if (r14_1[7] != rax_40)
                sub_1405c5510(&r14_1[4], rax_40)
                rdx_20 = r14_1[6]
                rax_40 = arg_10
            
            int32_t rax_41 = rax_40 + rdx_20
            r14_1[6] = rax_41
            
            if (rax_41 s> r14_1[7])
                sub_1405daba0(&r14_1[4])
            
            int32_t var_148_1 = 0
            int32_t var_104_1 = 0
            sub_140b02330((*sub_140b5e500(&arg_20, 0x101)).q, *(r14_1 + 0x10), arg_10, 
                sx.q(var_68_1) + var_130, var_134, 0)
            sub_140b4cb40(&var_f8)
            int64_t* rcx_43 = var_130
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            r14_1[1] = var_138.d
            r14_1[2] = *(arg1 + 0x20c)
            uint128_t zmm6_2 = *(arg1 + 0x21c)
            EnterCriticalSection(&data_143a2e738)
            int64_t r8_5 = zmm6_2.q
            data_143a2e768.o = zmm6_2
            data_143a2e760 = arg1
            int64_t rcx_44 = _mm_bsrli_si128(zmm6_2, 8).q
            data_143a2e778 = r14_1
            
            if (((r8_5 u>> 0x20).d | (rcx_44 u>> 0x20).d | rcx_44.d | r8_5.d) != 0)
                if (data_143a2e6f0 == data_143a2e71c)
                    sub_140d186f0(&data_143e1d990, &data_143a2e6e0)
                
                var_130 = &data_143a2e760
                int64_t* var_128_2 = &data_143a2e768
                sub_141f2c030(&data_143a2e6e8, &arg_10, &var_130, nullptr)
            else
                sub_141f222b0(&data_143a2e6e0, arg1)
            
            return LeaveCriticalSection(&data_143a2e738)

return result
