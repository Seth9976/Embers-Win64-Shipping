// 函数: sub_14289a750
// 地址: 0x14289a750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t result_2 = 0

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x30) != 0)
        int64_t r10 = arg1[1]
        int32_t var_18
        int64_t var_10
        int32_t result
        
        if (r10 != 0 || arg1[2] != 0)
            int64_t rax_2 = arg1[2]
            
            if (rax_2 == 0)
                result = r10(arg1, 4, arg2, 0, 0, 1)
            else
                var_10 = 0
                var_18 = 1
                result = rax_2(arg1, 4, arg2, 0, 0, 0, 1, 0)
        
        if ((r10 == 0 && arg1[2] == 0) || result s> 0)
            if (arg1[4].d == 0)
                sub_1428a5670(0x20, 0x6e, 0x78, "crypto\bio\bio_lib.c", 0x194)
                return -2
            
            result = (*(*arg1 + 0x30))(arg1, arg2)
            int64_t result_1
            
            if (result s<= 0)
                result_1 = result_2
            else
                result_1 = sx.q(result)
                result = 1
                arg1[0xc] += result_1
                result_2 = result_1
            
            int64_t r11_1 = arg1[1]
            
            if (r11_1 != 0 || arg1[2] != 0)
                int64_t r10_1 = arg1[2]
                
                if (r10_1 == 0)
                    if (result != 0)
                        if (result_1 u> 0x7fffffff)
                            return -1
                        
                        result = result_1.d
                    
                    result = r11_1(arg1, 0x84, arg2, 0, 0, result, var_18, var_10)
                    
                    if (result s< 0)
                        result_1 = result_2
                    else
                        result_1 = sx.q(result)
                        result = 1
                        result_2 = result_1
                else
                    result = r10_1(arg1, 0x84, arg2, 0, 0, 0, result, &result_2)
                    result_1 = result_2
            
            if (result s> 0)
                if (result_1 u<= 0x7fffffff)
                    return result_1.d
                
                sub_1428a5670(0x20, 0x6e, 0x66, "crypto\bio\bio_lib.c", 0x1a6)
                return -1
        
        return result

sub_1428a5670(0x20, 0x6e, 0x79, "crypto\bio\bio_lib.c", 0x189)
return 0xfffffffe
