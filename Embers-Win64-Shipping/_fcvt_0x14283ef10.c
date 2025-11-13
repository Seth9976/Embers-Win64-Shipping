// 函数: _fcvt
// 地址: 0x14283ef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rcx = arg1[2].d
int32_t result

if (rcx == arg2 || arg2 - 1 u> 0xbd)
    result = -0x7ff8ffa9
else if (arg1[5] == 0)
    result = -0x7fffbffd
else if ((rcx s< 0x46 || (rcx s> 0x54 && rcx - 0x5e u> 5))
        && (arg2 s< 0x46 || (arg2 s> 0x54 && arg2 - 0x5e u> 5)))
    if (sub_14284b4d0(rcx) != 0)
        result = -0x7ff8ffce
    else if (sub_14284b4d0(arg2) != 0)
        result = -0x7ff8ffce
    else
        int32_t rcx_2 = arg1[2].d
        
        if (rcx_2 - 0x6f u<= 3 || arg2 - 0x6f u<= 3)
            result = -0x7ff8ffce
        else if (sub_14284b530(rcx_2, 1) != 0)
            result = -0x7ff8ffce
        else if (sub_14284b530(arg2, 1) != 0)
            result = -0x7ff8ffce
        else
            uint64_t r8 = *arg1
            
            if (r8 u> 0xffffffff)
                result = -0x7ff8ffa9
            else
                uint64_t r9_1 = arg1[1]
                
                if (r9_1 u> 0xffffffff)
                    result = -0x7ff8ffa9
                else
                    int32_t var_78_1 = 0
                    result = sub_14284d3b0(arg5, arg2, r8, r9_1, 1, 1)
                    
                    if (result s>= 0)
                        void* rax_11 = sub_14284d320(arg5, 0, 0, 0)
                        
                        if (rax_11 != 0)
                            int128_t var_68
                            int128_t var_58
                            char rax_12
                            int32_t r9_3
                            int64_t zmm1_1
                            rax_12, r9_3, zmm1_1 =
                                sub_14283f890(arg3, arg1[2].d, arg2, &var_58, &var_68)
                            int32_t* rcx_8 = arg1
                            int32_t result_1
                            
                            if (rax_12 == 0)
                                int64_t var_88_3 = 0
                                result_1 = sub_14283f130(rcx_8, arg3, rax_11, r9_3)
                            else
                                int128_t* var_88_2
                                var_88_2.d = arg4.d
                                result_1 = sub_14283f440(rcx_8, &var_58, &var_68, arg3, zmm1_1, 
                                    var_88_2.d, rax_11)
                            
                            if (result_1 s>= 0)
                                result = 0
                            else
                                sub_14284d590(arg5)
                                result = result_1
                        else
                            sub_14284d590(arg5)
                            result = -0x7fffbffd
else
    result = -0x7ff8ffce

__security_check_cookie(rax_1 ^ &var_a8)
return result
