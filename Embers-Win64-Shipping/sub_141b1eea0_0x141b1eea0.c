// 函数: sub_141b1eea0
// 地址: 0x141b1eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1
sub_141a4a790(arg4, &i_1, arg3, &arg3[4])
int64_t* i = i_1
int32_t result_1
int64_t result = sx.q(result_1)

for (void* rbp = &i[result]; i != rbp; i = &i[1])
    int64_t arg_18 = *i
    result = sub_140d3c6e0(&arg_18)
    int64_t result_3 = result
    
    if (result != 0)
        void* rax_1 = sub_1424a23e0()
        void* rdx_1 = *(result_3 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38))
            result = *(rdx_1 + 0x30)
        
        int64_t* result_4
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(result + (rax_2 << 3)) != rax_1 + 0x30)
            void* rax_3 = sub_14255cbc0()
            void* rdx_2 = *(result_3 + 0x10)
            result = sx.q(*(rax_3 + 0x38))
            
            if (result.d s<= *(rdx_2 + 0x38))
                int64_t result_2 = result
                result = *(rdx_2 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_3 + 0x30)
                    result_4 = result_3
                    goto label_141b1ef7e
        else
            result_4 = *(result_3 + 0x220)
        label_141b1ef7e:
            
            if (result_4 != 0)
                int64_t rax_4 = data_143f2c778
                void** const var_58 = &data_143058170
                
                if (rax_4 == 0)
                    rax_4 = sub_141a54240(&data_143f2c778, 0)
                
                int32_t var_40_1 = arg4[0x5b].d
                int64_t var_48 = arg4[0x5a]
                sub_1405c5900(&arg4[0x1f], rax_4, &var_58, result_3, *(arg4 + 0x2dc), &var_48)
                result = zx.q(*(arg1 + 8))
                int64_t r8_3
                
                if (result.b != 0)
                    if (result.b == 1)
                        r8_3.b = 1
                        result = (*(*result_4 + 0x278))(result_4, 0, r8_3)
                    else if (result.b == 2)
                        result = sub_142185b40(result_4, 1)
                else if ((*(result_4 + 0x8a) & 1) == 0)
                    r8_3.b = 1
                    result = (*(*result_4 + 0x278))(result_4, 1, r8_3)

return result
