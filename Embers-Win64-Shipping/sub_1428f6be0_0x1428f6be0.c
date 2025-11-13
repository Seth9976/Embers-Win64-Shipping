// 函数: sub_1428f6be0
// 地址: 0x1428f6be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t var_28
int32_t* arg_10 = &var_28

if (arg2 != 0)
    int64_t rax_1 = sx.q(arg2[1])
    
    if (rax_1.d u<= 0x1e)
        int32_t r9_1 = sx.d(*(rax_1 + &data_143517ca8))
        
        if (r9_1 != 0xffffffff)
            int32_t r8_1 = *arg2
            char* rdx = *(arg2 + 8)
            int64_t var_20_1 = 0
            var_28 = 0
            int32_t var_18_1 = 0
            int32_t result = sub_1429352a0(&arg_10, rdx, r8_1, r9_1 | 0x1000, 0x2000)
            
            if (result s< 0)
                return result
            
            *arg1 = var_20_1
            return zx.q(var_28)

return -1
