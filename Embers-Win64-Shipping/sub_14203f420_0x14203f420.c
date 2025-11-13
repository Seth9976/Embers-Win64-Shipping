// 函数: sub_14203f420
// 地址: 0x14203f420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* result

if (arg2 == 0)
    result = nullptr
else
    int64_t* rcx = data_143f5b298
    
    if (rcx == 0)
        result = nullptr
    else if ((*(*rcx + 0x388))(rcx) == 0)
        result = nullptr
    else
        void* rax_4 = sub_1423de540(data_143f5b298, arg1, 1)
        
        if (rax_4 == 0 || (*(rax_4 + 0x11e) & 2) == 0)
            result = nullptr
        else
            char rax_5 = sub_14243ade0(rax_4)
            int64_t var_d8
            sub_141e714a0(&var_d8, rax_4, 0)
            int32_t var_100_1 = arg3[1].d
            int64_t var_108 = *arg3
            float zmm0_2[0x4] = sub_141e86f40(&var_d8, &var_108)
            int64_t arg_48
            bool cond:0_1 = arg_48 == 0
            var_d8 = arg8
            void var_f8
            void var_c8
            
            if (not(cond:0_1))
                zmm0_2 = sub_141e6db90(&var_c8, &var_f8, &arg_48, nullptr)
            int64_t* result_1 = sub_141e78140(arg2, &var_d8, zmm0_2)
            
            if (result_1 != 0)
                int32_t var_100_2 = arg4[1].d
                char rbx_2 = 0
                int32_t rcx_9 = arg3[1].d
                var_108 = *arg4
                int32_t var_e0_1 = rcx_9
                char var_110_1 = 0
                int64_t var_e8 = *arg3
                int32_t zmm0_4
                int512_t zmm1_3
                zmm0_4, zmm1_3 = sub_141ef68b0(result_1, arg6, 
                    sub_141ef78b0(result_1, arg5, 
                        sub_141f4a260(result_1, &var_e8, &var_108, 0, 0, var_110_1)))
                result_1[0x42].b &= 0xb7
                
                if (rax_5 == 0)
                    rbx_2 = 0x40
                
                result_1[0x42].b = ((rbx_2 | result_1[0x42].b) & 0xfe) | (rax_5 & 0xf7) << 3 | arg9
                (*(*arg2 + 0x2a8))(arg2)
                zmm1_3.o = arg7
                result_1[0x48].d = zmm0_4
                (*(*result_1 + 0x530))(result_1, zmm1_3)
            
            sub_141afcf50(&var_d8)
            result = result_1

__security_check_cookie(rax_1 ^ &var_138)
return result
