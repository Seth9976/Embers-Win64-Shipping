// 函数: sub_142bf2510
// 地址: 0x142bf2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t r9 = 0x4c
int32_t result
void* rcx

while (true)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 + r8)
    result = (temp1_1 - temp0_1) s>> 1
    int64_t result_1 = sx.q(result)
    rcx = &data_143699e70 + (result_1 << 3)
    
    if (arg1 u< *(&data_143699e70 + (result_1 << 3)))
        r9 = result - 1
    else
        if (arg1 u<= *(rcx + 4))
            break
        
        r8 = result + 1
    
    if (r8 s> r9)
        rcx = nullptr
        break

result.b = rcx != 0
return result
