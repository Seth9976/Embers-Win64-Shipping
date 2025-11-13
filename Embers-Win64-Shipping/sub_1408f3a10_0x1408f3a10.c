// 函数: sub_1408f3a10
// 地址: 0x1408f3a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
arg1 = 0
int32_t arg_20 = 0
int32_t result_2 = arg4
int32_t result_1 = 0
int32_t rdi = arg3

if (arg3 != 0)
    while (arg1 == 0)
        char rax_1 = (*(*arg2 + 0x100))(arg2, zx.q(rdi), &arg_20)
        int32_t r8_1 = arg_20
        arg1 = rax_1
        
        if (rax_1 == 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rdi)
            int32_t rax_5 = (temp1_1 - temp0_1) s>> 1
            
            if (r8_1 s< rax_5)
                rdi = rax_5
        
        if (r8_1 == rdi)
            break
    
    result = result_1

arg1 = 0

if (result != result_2)
    while (arg1 == 0)
        result = (*(*arg2 + 0x108))(arg2, zx.q(result_2), &result_1)
        int32_t result_3 = result_1
        arg1 = result.b
        
        if (result.b == 0)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(result_2)
            result = (temp3_1 - temp2_1) s>> 1
            
            if (result_3 s< result)
                result_2 = result
        
        if (result_3 == result_2)
            break

return result
