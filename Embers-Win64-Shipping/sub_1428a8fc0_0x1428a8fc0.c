// 函数: sub_1428a8fc0
// 地址: 0x1428a8fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t i = 0
int64_t result = 0
int32_t i_2 = arg3

if (arg3 == 0)
    return 0

int32_t rbp = 0
int32_t rax_6

if (arg3 s> 0)
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i_2 + rbp)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        result = sx.q(i_1 * arg4) + arg2
        rax_6 = arg5(arg1, result)
        
        if (rax_6 s>= 0)
            if (rax_6 s<= 0)
                break
            
            rbp = i + 1
        else
            i_2 = i
    while (rbp s< i_2)

if (arg3 s<= 0 || rax_6 == 0)
    if ((arg6 & 2) != 0)
        if (i s> 0)
            int32_t rdi_2 = (i - 1) * arg4
            
            do
                if (arg5(arg1, sx.q(rdi_2) + arg2) != 0)
                    break
                
                i -= 1
                rdi_2 -= arg4
            while (i s> 0)
        
        return sx.q(i * arg4) + arg2
else if ((arg6 & 1) == 0)
    return 0

return result
