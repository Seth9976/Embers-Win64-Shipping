// 函数: sub_14242e9e0
// 地址: 0x14242e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
char result = sub_140d3a3a0(&arg_10, arg1)
int32_t rdi = data_143f5e930

if (rdi != 0)
    int32_t i = 0
    int32_t r14_1 = 0
    result = sub_14077a170(data_143f5e928, &arg_10)
    int64_t rbp
    rbp.b = result == 0
    
    do
        int64_t i_1 = sx.q(i)
        
        for (i += 1; i s< rdi; i += 1)
            result = sub_14077a170(data_143f5e928 + (sx.q(i) << 3), &arg_10)
            int32_t rcx_4
            rcx_4.b = result == 0
            
            if (zx.d(rbp.b) != rcx_4)
                break
        
        int32_t rsi_3 = i - i_1.d
        
        if (rbp.b != 0)
            if (r14_1 != i_1.d)
                int64_t rcx_5 = data_143f5e928
                result = memmove(rcx_5 + (sx.q(r14_1) << 3), rcx_5 + (i_1 << 3), rsi_3 << 3)
            
            r14_1 += rsi_3
        
        rbp.b ^= 1
    while (i s< rdi)
    
    data_143f5e930 = r14_1

return result
