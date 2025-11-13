// 函数: sub_141cfd330
// 地址: 0x141cfd330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = data_143a21040
int32_t result = 0

if (r8_1 s> 0)
    int64_t* rdx_1 = arg1 + 0x168
    
    do
        if (*rdx_1 == 0)
            if (result s>= 0)
                return sub_141d05f20(arg1, 1) __tailcall
            
            break
        
        result += 1
        rdx_1 = &rdx_1[4]
    while (result s< r8_1)

result.b = 0
return result
