// 函数: sub_141b1af50
// 地址: 0x141b1af50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3[4]
int32_t var_78

if (*(arg1 + 0x24) != 0xffffffff)
    sub_141a644b0(arg1 + 0x24, &var_78, rbx, *((*(*arg4 + 8))(arg4) + 8) + 0xd0)
    rbx = var_78

int128_t zmm0 = *(arg1 + 0x2c)
int32_t var_50 = rbx
int128_t var_60 = zmm0
void* var_48
void** result = sub_141a4a790(arg4, &var_48, &var_60, &var_50)
int32_t var_40

if (var_40 != 0)
    result = sub_140d3c6e0(var_48)
    void** result_1 = result
    
    if (result != 0)
        void* rax_3 = sub_142452380()
        void* rcx_4 = result[2]
        result = rax_3 + 0x30
        int64_t rdx_2 = sx.q(result[1].d)
        
        if (rdx_2.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rdx_2 << 3)) == result)
            sub_141a4a790(arg4, &var_78, arg3, &arg3[4])
            int64_t* r14_1 = var_78.q
            int64_t r15_1 = 0
            int32_t result_2
            result = sx.q(result_2)
            void* rcx_7 = &r14_1[result]
            uint64_t r12_4 = (rcx_7 - r14_1 + 7) u>> 3
            
            if (r14_1 u> rcx_7)
                r12_4 = 0
            
            if (r12_4 != 0)
                do
                    int64_t arg_18 = *r14_1
                    result = sub_140d3c6e0(&arg_18)
                    
                    if (result != 0)
                        result = sub_141a655a0(result)
                        
                        if (result != 0)
                            int64_t rax_5 = data_143f2c840
                            void** const var_c8 = &data_143050f48
                            
                            if (rax_5 == 0)
                                rax_5 = sub_141a54240(&data_143f2c840, 0)
                            
                            int32_t var_b0_1 = arg4[0x5b].d
                            int64_t var_b8 = arg4[0x5a]
                            sub_1405c5900(&arg4[0x1f], rax_5, &var_c8, result, *(arg4 + 0x2dc), 
                                &var_b8)
                            int64_t rax_6 = data_143f2c848
                            var_c8 = &data_143050f60
                            
                            if (rax_6 == 0)
                                rax_6 = sub_141a54240(&data_143f2c848, 0)
                            
                            int32_t var_a4_1 = 0xffffffff
                            int64_t var_98 = data_1439e5888.q
                            int32_t var_90_1 = 0xffffffff
                            sub_1405c5900(&arg4[0x1f], rax_6, &var_c8, result, 1, &var_98)
                            int64_t rax_7 = data_143f2c5f0
                            
                            if (rax_7 == 0)
                                rax_7 = sub_141a54240(&data_143f2c5f0, 0)
                            
                            int64_t zmm0_3 = arg4[0x5a]
                            char var_d0_1 = *(arg1 + 8)
                            char var_cf_1 = *(arg1 + 9)
                            char var_ce_1 = *(arg1 + 0xa)
                            char var_cd_1 = *(arg1 + 0xb)
                            char var_cc_1 = *(arg1 + 0xc)
                            char var_cb_1 = *(arg1 + 0xd)
                            void** const var_d8 = &data_143050f88
                            int32_t var_80_1 = arg4[0x5b].d
                            char rcx_22 = *(arg4 + 0x2dc)
                            int64_t var_88 = zmm0_3
                            sub_1405c5900(&arg4[0x1f], rax_7, &var_d8, result, rcx_22, &var_88)
                            var_d8 = &data_142d4ba10
                            sub_140d3a3a0(arg1 + 0x10, sub_141b214d0(arg1, result_1))
                            (*(*result + 0x4e0))(result, 2)
                            result = sub_141b04d20(arg1 + 8, result)
                    
                    r14_1 = &r14_1[1]
                    r15_1 += 1
                while (r15_1 != r12_4)

return result
