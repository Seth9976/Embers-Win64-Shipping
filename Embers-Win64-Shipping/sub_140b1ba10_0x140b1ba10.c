// 函数: sub_140b1ba10
// 地址: 0x140b1ba10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg1
int32_t result = 0
int16_t* r9 = arg1

while (i != 0)
    result <<= 4
    
    if (i - 0x30 u<= 9)
        result = result - 0x30 + zx.d(i)
    else if (i - 0x61 u<= 5)
        result = result - 0x57 + zx.d(i)
    else if (i - 0x41 u<= 5)
        result = result - 0x37 + zx.d(i)
    
    i = r9[1]
    r9 = &r9[1]

return result
