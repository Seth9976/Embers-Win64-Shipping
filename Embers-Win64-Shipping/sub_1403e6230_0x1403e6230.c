// 函数: sub_1403e6230
// 地址: 0x1403e6230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t rdi = arg2
char var_27 = 0
char* result = zx.q((arg3 + 8) s>> 4)
int64_t r15 = sx.q(result.d)

if (result.d s> 0)
    do
        int32_t rcx = *(arg6 + (rsi << 2))
        
        if (rcx s> 0)
            int32_t result_2 = rcx & 0x1f
            int32_t result_1 = 6
            
            if (result_2 s< 6)
                result_1 = result_2
            
            int64_t i = 0
            result = sx.q(result_1)
            char var_28 = *(result + sx.q(sx.d(arg4 * 2 + arg5) * 7) + &data_1436fda50)
            
            do
                if (*(rdi + (i << 2)) s> 0)
                    result = zx.q(((sub_1403f73c0(arg1, &var_28, 8) << 1) + -ffffffffffffffff).d)
                    *(rdi + (i << 2)) *= result.d
                
                i += 1
            while (i s< 0x10)
        
        rsi += 1
        rdi += 0x40
    while (rsi s< r15)

return result
