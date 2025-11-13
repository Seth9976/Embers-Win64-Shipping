// 函数: sub_1405e7680
// 地址: 0x1405e7680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result

if (**(arg1 + 0xa8) != 0)
    int64_t rax_3 = *arg2
    int32_t var_f8 = 0
    int64_t* var_b0 = nullptr
    int64_t* var_f0 = nullptr
    int32_t var_c0 = 0
    int64_t* var_a8 = nullptr
    int32_t result_2 = (*(rax_3 + 0x138))(arg2, &var_f8)
    int32_t result_1 = result_2
    
    if (result_2 s>= 0)
        if (var_f8 != 1)
        label_1405e7725:
            int64_t* rcx_3 = var_b0
            int32_t result_4 = (**rcx_3)(rcx_3, &data_142d5b578, &var_f0)
            result_1 = result_4
            
            if (result_4 s>= 0)
                int64_t* rcx_4 = var_f0
                int32_t result_5 = (*(*rcx_4 + 0x18))(rcx_4, &data_142d5b568, &var_a8)
                result_1 = result_5
                
                if (result_5 s>= 0)
                    int64_t* rcx_5 = var_f0
                    int32_t result_6 = (*(*rcx_5 + 0x20))(rcx_5, &var_c0)
                    result_1 = result_6
                    
                    if (result_6 s>= 0)
                        int64_t var_e8
                        __builtin_memset(&var_e8, 0, 0x20)
                        sub_1405e6b80(arg1 + 0xa0, &var_e8)
                        int64_t* rcx_7 = *(arg1 + 0x70)
                        int64_t var_98
                        int64_t* var_110_1 = &var_98
                        int32_t var_118_1 = 0
                        (*(*rcx_7 + 0x70))(rcx_7, **(arg1 + 0xf0), 0, 4, var_118_1, var_110_1)
                        int64_t r12_1 = var_e8
                        uint32_t count
                        memcpy(var_98, r12_1, count)
                        int64_t* rcx_9 = *(arg1 + 0x70)
                        (*(*rcx_9 + 0x78))(rcx_9, **(arg1 + 0xf0), 0)
                        int64_t var_d8
                        int64_t r15_1 = var_d8
                        
                        if (*(arg1 + 0xb0) == 0x494d767a4861704d
                                && *(arg1 + 0xb8) == 0x3790dc259df278b4)
                            int64_t* rcx_10 = *(arg1 + 0x70)
                            int64_t var_88
                            var_110_1 = &var_88
                            var_118_1 = 0
                            (*(*rcx_10 + 0x70))(rcx_10, *(*(arg1 + 0xf0) + 8), 0, 4, var_118_1, 
                                var_110_1)
                            uint32_t count_1
                            memcpy(var_88, r15_1, count_1)
                            int64_t* rcx_12 = *(arg1 + 0x70)
                            (*(*rcx_12 + 0x78))(rcx_12, *(*(arg1 + 0xf0) + 8), 0)
                        
                        void* rdx_13 = *(arg1 + 0xf0)
                        int64_t r8_6 = *(rdx_13 + 0x10)
                        int64_t r8_7
                        int64_t* r9_1
                        
                        if (*(arg1 + 0xb0) != 0x494d767a4861704d
                                || *(arg1 + 0xb8) != 0x3790dc259df278b4)
                            int64_t var_68 = r8_6
                            r9_1 = &var_68
                            r8_7 = 1
                        else
                            int64_t rax_14 = *(rdx_13 + 0x18)
                            int64_t var_78
                            r9_1 = &var_78
                            var_78 = r8_6
                            r8_7 = 2
                            int64_t var_70_1 = rax_14
                        
                        int64_t* rcx_13 = *(arg1 + 0x70)
                        (*(*rcx_13 + 0x40))(rcx_13, 0, r8_7, r9_1, var_118_1, var_110_1)
                        bool cond:0_1 = *(arg1 + 0xb0) != 0x494d767a48617031
                        int32_t var_b8 = 0x14
                        int32_t var_bc = 0
                        
                        if (not(cond:0_1) && *(arg1 + 0xb8) == 0x3790dc259df278b4)
                            *(arg1 + 0xd8) = 0
                        else if (*(arg1 + 0xb0) != 0x494d767a48617035
                                || *(arg1 + 0xb8) != 0x3790dc259df278b4)
                            int64_t rcx_14 = *(arg1 + 0xb0)
                            int64_t rcx_15 = rcx_14 - 0x494d767a48617059
                            
                            if (rcx_14 == 0x494d767a48617059)
                                rcx_15 = *(arg1 + 0xb8) + -0x3790dc259df278b4
                            
                            int32_t rax_20
                            rax_20.b = rcx_15 != 0
                            *(arg1 + 0xd8) = rax_20 + 2
                        else
                            *(arg1 + 0xd8) = 1
                        
                        bool cond:2_1 = *(arg1 + 0xb0) != 0x494d767a48617035
                        int32_t i = 0
                        int64_t var_58
                        __builtin_memset(&var_58, 0, 0x18)
                        
                        if (not(cond:2_1) && *(arg1 + 0xb8) == 0x3790dc259df278b4)
                            i = 1
                        else if (*(arg1 + 0xb0) == 0x494d767a4861704d
                                && *(arg1 + 0xb8) == 0x3790dc259df278b4)
                            i = 1
                        
                        do
                            void* rax_26 = *(arg1 + 0xe8)
                            int32_t rax_31
                            int64_t rcx_17
                            int128_t zmm0_1
                            int128_t var_50_1
                            
                            if (i != 0)
                                rcx_17 = *(rax_26 + 8)
                                zmm0_1.d = float.s(zx.q(*(arg1 + 0x48)))
                                rax_31 = 1
                                var_50_1.d = zmm0_1.d
                                var_50_1:4.d = float.s(zx.q(*(arg1 + 0x4c)))
                            else
                                rcx_17 = *(rax_26 + 0x10)
                                zmm0_1.d = float.s(zx.q(*(arg1 + 0x48) u>> 1))
                                var_50_1.d = zmm0_1.d
                                zmm0_1.d = float.s(zx.q(*(arg1 + 0x4c) u>> 1))
                                rax_31 = 0
                                var_50_1:4.d = zmm0_1.d
                            int64_t var_a0 = rcx_17
                            *(arg1 + 0xe0) = rax_31
                            (*(**(arg1 + 0x70) + 0x160))(zmm0_1, 1, &var_58)
                            int64_t* rcx_19 = *(arg1 + 0x70)
                            var_110_1.d = 0
                            var_118_1.q = arg1 + 0xd8
                            (*(*rcx_19 + 0x180))(rcx_19, *(arg1 + 0xd0), 0, 0, var_118_1, 
                                var_110_1, 0)
                            int64_t* rcx_20 = *(arg1 + 0x70)
                            (*(*rcx_20 + 0x108))(rcx_20, 1, &var_a0, 0)
                            int64_t* rcx_21 = *(arg1 + 0x70)
                            var_118_1.q = &var_b8
                            (*(*rcx_21 + 0x90))(rcx_21, 0, 1, arg1 + 0xc8, var_118_1, &var_bc)
                            int64_t* rcx_22 = *(arg1 + 0x70)
                            (*(*rcx_22 + 0xc0))(rcx_22, 5)
                            int64_t* rcx_23 = *(arg1 + 0x70)
                            (*(*rcx_23 + 0x68))(rcx_23, 4, 0)
                            i += 1
                        while (i s< 2)
                        
                        int64_t* rax_40 = j_sub_140a82f30(0x30)
                        int64_t var_c8
                        
                        if (rax_40 != 0)
                            *rax_40 = 0
                            rax_40[1] = r12_1
                            __builtin_memset(&rax_40[2], 0, 0x18)
                            rax_40[5] = var_c8
                            int64_t** rax_42 = *(arg1 + 0x90)
                            __builtin_memset(&var_e8, 0, 0x20)
                            *(arg1 + 0x90) = rax_40
                            int64_t var_d8_1
                            r15_1 = var_d8_1
                            r12_1 = var_e8
                            *rax_42 = rax_40
                        
                        int32_t result_7 = (*(*arg2 + 0xa8))(arg2, &data_1434cb780, 1)
                        result_1 = result_7
                        
                        if (result_7 s>= 0)
                            int32_t result_8 = (*(*arg2 + 0x120))(arg2, var_c8)
                            result_1 = result_8
                            
                            if (result_8 s>= 0)
                                result_1 = (*(*arg2 + 0x130))(arg2, *(arg1 + 0x80))
                        
                        if (r15_1 != 0)
                            sub_140a74f90(r15_1)
                        
                        if (r12_1 != 0)
                            sub_140a74f90(r12_1)
        else
            int32_t result_3 = (*(*arg2 + 0x140))(arg2, 0, &var_b0)
            result_1 = result_3
            
            if (result_3 s>= 0)
                goto label_1405e7725
    
    int64_t* rcx_29 = var_a8
    
    if (rcx_29 != 0)
        (*(*rcx_29 + 0x10))(rcx_29)
    
    int64_t* rcx_30 = var_f0
    
    if (rcx_30 != 0)
        int64_t rdx_18 = *rcx_30
        (*(rdx_18 + 0x10))(rcx_30, rdx_18)
    
    int64_t* rcx_31 = var_b0
    
    if (rcx_31 != 0)
        int64_t rdx_19 = *rcx_31
        (*(rdx_19 + 0x10))(rcx_31, rdx_19)
    
    result = zx.q(result_1)
else
    result = 0xc00d6d72

__security_check_cookie(rax_1 ^ &var_138)
return result
