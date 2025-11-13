// 函数: sub_142b75260
// 地址: 0x142b75260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg3 s> 0)
    void* r9_1 = *arg2
    result = *arg1
    int64_t i = 0
    int16_t* rdx = r9_1 + 8
    void* r9_2 = r9_1 - result
    
    do
        int32_t* rcx = r9_2 + result
        
        if (result != rcx && (*result != *rcx || result[1] != *(rdx - 4) || result[2].w != *rdx
                || *(result + 0xa) != rdx[1] || result[3] != *(rdx + 4)))
            result.b = 0
            return result
        
        i += 1
        rdx = &rdx[8]
        result = &result[4]
    while (i s< sx.q(arg3))

result.b = 1
return result
