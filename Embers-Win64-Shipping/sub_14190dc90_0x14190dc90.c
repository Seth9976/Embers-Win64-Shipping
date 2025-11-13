// 函数: sub_14190dc90
// 地址: 0x14190dc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 2
void** rsi = arg1 + 8
void*** result
int64_t i

do
    result = j_sub_140a82f30(0x68)
    void*** result_1 = result
    
    if (result == 0)
        result_1 = nullptr
    else
        *result = &data_142d3ff08
        result[1].d = 0
        *(result + 0xc) = 0
        result[2].w = 0x100
        result[3].d = arg2
        *(result + 0x1c) = 4
        result[4] = 0
        *result = &data_142ff49a8
        result[5].d = 0
        result[6] = 0
        int32_t rax_2 = result[7].d & 0xfffffff4
        *(result_1 + 0x3c) = 0
        __builtin_memset(&result_1[9], 0, 0x14)
        result_1[7].d = rax_2 | 4
        *(result_1 + 0x5c) = arg2
        char rax_4
        
        if (data_143f01c92 != 0)
            rax_4 = sub_140a80f10()
        
        void*** result_2
        int64_t var_90
        int64_t var_88
        
        if (data_143f01c92 == 0 || rax_4 != 0)
            result = sub_14190c770(result_1, 0, 0, 0, result_2, var_90, var_88)
        else
            void*** rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            void* rax_5 = &rcx_2[0xa]
            
            if (rax_5 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x60)
                rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                rax_5 = &rcx_2[0xa]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_5
            result_2 = result_1
            var_90 = 0
            *data_143f02ba0 = rcx_2
            void** const var_58 = &data_142ff5dc8
            data_143f02ba0 = &rcx_2[1]
            int128_t var_50_1 = result_2.o
            var_88 = 0
            int64_t var_40_1 = 0
            rcx_2[1] = 0
            *rcx_2 = &data_142ff4958
            rcx_2[2] = sub_14190a4f0
            rcx_2[4] = 0
            
            if (rcx_2[2] != 0)
                void** const* rcx_5 = &var_58
                (**rcx_5)(rcx_5)
            
            void** const* rcx_6 = &var_58
            result = (*rcx_6)[2](rcx_6)
    
    int64_t* rdi_1 = *rsi
    *rsi = result_1
    
    if (result_1 != 0)
        result_1[1].d += 1
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        rdi_1[1].d -= 1
        
        if (result.d == 1)
            char rax_10
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_10 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                result = (**rdi_1)(rdi_1, 1)
            else
                result = nullptr
                bool z_1
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_1 = true
                else
                    result = zx.q(*(rdi_1 + 0xc))
                    z_1 = false
                
                if (z_1)
                    result = sub_1405dcc10(&data_143f02390, rdi_1)
    
    rsi = &rsi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = arg2 u>> 4
return result
