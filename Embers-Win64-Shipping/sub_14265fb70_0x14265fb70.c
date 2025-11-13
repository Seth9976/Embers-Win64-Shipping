// 函数: sub_14265fb70
// 地址: 0x14265fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
char result = sub_140d3a3a0(&arg_8, arg2)
int32_t rdi = *(arg1 + 0x90)

if (rdi != 0)
    int32_t i = 0
    int32_t r14_1 = 0
    result = sub_140664af0(*(arg1 + 0x88), &arg_8)
    int64_t rbp
    rbp.b = result == 0
    
    do
        int64_t i_1 = sx.q(i)
        
        for (i += 1; i s< rdi; i += 1)
            result = sub_140664af0(*(arg1 + 0x88) + (sx.q(i) << 3), &arg_8)
            int32_t rcx_4
            rcx_4.b = result == 0
            
            if (zx.d(rbp.b) != rcx_4)
                break
        
        int32_t rsi_3 = i - i_1.d
        
        if (rbp.b != 0)
            if (r14_1 != i_1.d)
                int64_t rcx_5 = *(arg1 + 0x88)
                result = memmove(rcx_5 + (sx.q(r14_1) << 3), rcx_5 + (i_1 << 3), rsi_3 << 3)
            
            r14_1 += rsi_3
        
        rbp.b ^= 1
    while (i s< rdi)
    
    *(arg1 + 0x90) = r14_1

return result
