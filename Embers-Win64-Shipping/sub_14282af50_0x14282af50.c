// 函数: sub_14282af50
// 地址: 0x14282af50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
uint64_t i_1 = zx.q(arg3)
int64_t* result = arg2
int32_t var_18 = 0
*(arg2 + 0x10) = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
int32_t var_18_1 = 1

if (arg3 s> 0)
    sub_14058c000(result, sx.q(i_1.d))
    uint64_t i
    
    do
        char rax_1 = sub_14282aff8(arg1)
        int64_t rdx_1 = result[2]
        
        if (rdx_1 u>= result[3])
            sub_14058b730(result, 1, 0, rax_1)
        else
            result[2] = rdx_1 + 1
            int64_t* result_1 = result
            
            if (result[3] u>= 0x10)
                result_1 = *result
            
            *(result_1 + rdx_1) = rax_1
            *(result_1 + rdx_1 + 1) = 0
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
