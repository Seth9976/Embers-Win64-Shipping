// 函数: sub_14289aba0
// 地址: 0x14289aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x20) != 0)
        int64_t r10 = arg1[1]
        int32_t var_38
        int32_t var_30
        int32_t var_28
        int64_t var_20
        int32_t result
        
        if (r10 != 0 || arg1[2] != 0)
            int64_t rax_2 = arg1[2]
            
            if (rax_2 == 0)
                if (arg3 u> 0x7fffffff)
                    return -1
                
                var_30 = 1
                var_38 = 0
                result = r10(arg1, 2, arg2, zx.q(arg3.d), 0, 1)
            else
                var_20 = 0
                var_28 = 1
                var_30 = 0
                var_38 = 0
                result = rax_2(arg1, 2, arg2, arg3, 0, 0, 1, 0)
        
        if ((r10 == 0 && arg1[2] == 0) || result s> 0)
            if (arg1[4].d == 0)
                sub_1428a5670(0x20, 0x78, 0x78, "crypto\bio\bio_lib.c", 0x10a)
                return -2
            
            result = (*(*arg1 + 0x20))(arg1, arg2, arg3, arg4, var_38, var_30, var_28, var_20)
            
            if (result s> 0)
                arg1[0xb] += *arg4
            
            if (arg1[1] != 0 || arg1[2] != 0)
                result = sub_14289aa80(arg1, 0x82, arg2, arg3, 0, 0, result, arg4)
            
            if (result s> 0 && *arg4 u> arg3)
                sub_1428a5670(0x20, 0x78, 0x44, "crypto\bio\bio_lib.c", 0x119)
                return -1
        
        return result

sub_1428a5670(0x20, 0x78, 0x79, "crypto\bio\bio_lib.c", 0x100)
return 0xfffffffe
