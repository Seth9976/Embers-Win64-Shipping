// 函数: sub_141b1f630
// 地址: 0x141b1f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1
sub_141a4a790(arg4, &i_1, arg3, &arg3[4])
int64_t* i = i_1
int32_t result_1
int64_t result = sx.q(result_1)

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    int64_t arg_18 = *i
    result = sub_140d3c6e0(&arg_18)
    int64_t* result_3 = result
    
    if (result != 0)
        void* rax_1 = sub_142452380()
        void* rdx_1 = result_3[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        void** const var_58
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            void* rax_9 = sub_1425881f0()
            void* rdx_7 = result_3[2]
            result = sx.q(*(rax_9 + 0x38))
            
            if (result.d s<= *(rdx_7 + 0x38))
                int64_t result_2 = result
                result = *(rdx_7 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_9 + 0x30)
                    void* rax_10 = sub_1425881f0()
                    void* rdx_8 = result_3[2]
                    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                    
                    if (rax_11.d s> *(rdx_8 + 0x38)
                            || *(*(rdx_8 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                        result_3 = nullptr
                    
                    int64_t rax_13 = data_143f2c850
                    var_58 = &data_14305a008
                    
                    if (rax_13 == 0)
                        rax_13 = sub_141a54240(&data_143f2c850, 0)
                    
                    int32_t var_30_1 = arg4[0x5b].d
                    int64_t var_38 = arg4[0x5a]
                    sub_1405c5900(&arg4[0x1f], rax_13, &var_58, result_3, *(arg4 + 0x2dc), &var_38)
                    result = sub_141f479b0(result_3, *(arg1 + 8), 1)
        else
            void* rax_4 = sub_142452380()
            void* rdx_2 = result_3[2]
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                result_3 = nullptr
            
            int64_t rax_7 = data_143f2c850
            var_58 = &data_14305a008
            
            if (rax_7 == 0)
                rax_7 = sub_141a54240(&data_143f2c850, 0)
            
            int32_t var_40_1 = arg4[0x5b].d
            int64_t var_48 = arg4[0x5a]
            sub_1405c5900(&arg4[0x1f], rax_7, &var_58, result_3, *(arg4 + 0x2dc), &var_48)
            result = (*(*result_3 + 0x2f8))(result_3, zx.q(*(arg1 + 8)))

return result
