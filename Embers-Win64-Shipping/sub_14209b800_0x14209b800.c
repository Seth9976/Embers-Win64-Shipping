// 函数: sub_14209b800
// 地址: 0x14209b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)
int32_t i = 0

if (arg1[7].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t r9_1 = arg1[6]
        
        if (*(rsi_1 + r9_1) == 0)
            int32_t rcx = arg1[7].d
            int32_t rax_1 = rcx - i
            
            if (rax_1 != 1)
                memmove(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(i + 1) << 3), (rax_1 - 1) << 3)
                rcx = arg1[7].d
            
            arg1[7].d = rcx - 1
            result = sub_1405c53d0(&arg1[6])
        else
            i += 1
            rsi_1 = &rsi_1[1]
    while (i s< arg1[7].d)

return result
