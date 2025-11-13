// 函数: sub_14105ce40
// 地址: 0x14105ce40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg2
void*** result = nullptr
void*** result_3 = nullptr

if (arg2 != 0)
    do
        void*** rax_1 = j_sub_140a82f30(0xa8)
        void*** result_1
        
        if (rax_1 == 0)
            result_1 = nullptr
        else
            result_1 = sub_14100d6c0(rax_1, *(i + 0x28))
        
        if (data_143f02ba8 != 0 || (*(i + 0x1c) & 6) == 0)
            int32_t var_38_1 = *(arg3 + 8)
            int32_t var_34_1 = *(arg3 + 0xc)
            char var_30_1 = *(arg3 + 0x10)
            int64_t var_50_1 = 0
            void** const var_58 = &data_142f03538
            void* i_1 = i
            void*** result_2 = result_1
            sub_141060950(&var_58)
        else
            void*** rax_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rcx_1 = &rax_5[6]
            
            if (rcx_1 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x38)
                rax_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rcx_1 = &rax_5[6]
            
            data_143f02bac += 1
            data_143f02bc8 = rcx_1
            *data_143f02ba0 = rax_5
            data_143f02ba0 = &rax_5[1]
            int32_t r8 = *(arg3 + 0xc)
            int32_t rdx_1 = *(arg3 + 8)
            char r9_1 = *(arg3 + 0x10)
            rax_5[1] = 0
            rax_5[4].d = rdx_1
            *(rax_5 + 0x24) = r8
            r8.b = 1
            *rax_5 = &data_142f03538
            rax_5[2] = i
            rax_5[3] = result_1
            rax_5[5].b = r9_1
            int64_t* arg_20
            sub_141980430(&data_143f02b98, &arg_20, r8.b)
            int64_t* rcx_4 = arg_20
            
            if (rcx_4 != 0)
                rcx_4[9].d -= 1
                
                if (rcx_4[9].d == 1)
                    sub_140a2f6e0(rcx_4)
        
        if (result_3 != 0)
            sub_1405d16e0(&result_3[0x12], result_1)
            
            if (result_1 != 0)
                result_1[0x13].b = 0
        else
            result = result_1
        
        i = *(i + 0xd8)
        result_3 = result_1
    while (i != 0)

return result
