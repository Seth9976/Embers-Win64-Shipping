// 函数: sub_142a41bd0
// 地址: 0x142a41bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (*(&data_14400f380 + arg1 * 0x18) != -1)
    if (*arg4 == 0 && *arg5 == 0)
        result = *(arg1 * 0x18 + 0x14400f388)
    
    if (*arg4 != 0 || *arg5 != 0 || (result & 0xfffffffffffffffc) == 0 || *arg4 != 0
            || (result.b & 1) == 0 || *arg5 != 0 || (result.b u>> 1 & 1) == 0)
        int64_t* result_1 = *(&data_14400f380 + arg1 * 0x18)
        uint64_t i = 0x40
        
        if (result_1 != -1)
            result = not.q(result_1)
            
            if (result != 0)
                uint64_t rflags_1
                result, rflags_1 = _bit_scan_forward(result)
                int32_t arg_8 = result.d
                i = zx.q(result.d)
            
            int64_t rdx_3 = ((1 << arg2.b) - 1) << i.b
            
            while (i u<= 0x40 - arg2)
                result = rdx_3 & result_1
                
                if (result != 0)
                    int64_t rcx_5
                    
                    if (arg2 != 1)
                        uint64_t rflags_2
                        result, rflags_2 = _bit_scan_reverse(result)
                        int32_t var_28_1 = result.d
                        rcx_5 = zx.q(result.d) - i + 1
                    else
                        rcx_5 = arg2
                    
                    i += rcx_5
                    rdx_3 <<= rcx_5.b
                else
                    result = result_1
                    
                    if (result == *(&data_14400f380 + arg1 * 0x18))
                        *(&data_14400f380 + arg1 * 0x18) = rdx_3 | result_1
                    else
                        result = *(&data_14400f380 + arg1 * 0x18)
                    
                    if (result_1 == result)
                        return sub_142a41970(&data_14400f380 + arg1 * 0x18, arg1, i, arg2.b, arg3, 
                            arg4, arg5, arg6, arg7, arg8, arg9)
                    
                    result_1 = *(&data_14400f380 + arg1 * 0x18)

result.b = 1
return result
