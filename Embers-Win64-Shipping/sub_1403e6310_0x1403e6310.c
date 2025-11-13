// 函数: sub_1403e6310
// 地址: 0x1403e6310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
char* rbp = arg2
char var_37 = 0
int32_t result = (arg3 + 8) s>> 4
int64_t result_1 = sx.q(result)

if (result s> 0)
    do
        int32_t rcx = *(arg6 + (rsi << 2))
        
        if (rcx s> 0)
            int32_t rcx_1 = rcx & 0x1f
            int32_t rax_4 = 6
            char* rbx_1 = rbp
            int64_t i_1 = 0x10
            
            if (rcx_1 s< 6)
                rax_4 = rcx_1
            
            char var_38 = *(sx.q(rax_4) + sx.q(sx.d(arg4 * 2 + arg5) * 7) + &data_1436fda50)
            int64_t i
            
            do
                result = zx.d(*rbx_1)
                
                if (result.b != 0)
                    result = sub_1403fe400(arg1, (sx.d(result.b) s>> 7) + 1, &var_38, 8)
                
                rbx_1 = &rbx_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rsi += 1
        rbp = &rbp[0x10]
    while (rsi s< result_1)

return result
