// 函数: sub_142b13680
// 地址: 0x142b13680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = arg1
uint64_t result

if (arg2 s> 0)
    void* r9_1 = &arg1[sx.q(arg2)]
    
    while (true)
        result = zx.q(*r8)
        
        if (result.d u<= 0xff)
            arg2.b = *(result + &data_14366a9f0) & 1
        else if (result.d u< 0x200e)
            arg2.b = 0
        else if (result.d u<= 0x3030)
            arg2.b = (
                *((zx.q(*((sx.q((result - 0x2000).d) s>> 5) + 0x14366aaf0)) << 2) + 0x14366aba0)
                u>> (result.d & 0x1f).b).b & 1
        else if ((result - 0xfd3e).d u> 0x108)
            arg2.b = 0
        else
            arg2.b = result.d - 0xfd40 u> 0x104
        
        r8 = &r8[1]
        
        if (arg2.b != 0)
            break
        
        if (r8 u>= r9_1)
            result.b = 1
            return result

result.b = 0
return result
