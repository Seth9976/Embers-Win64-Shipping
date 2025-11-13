// 函数: sub_142112c50
// 地址: 0x142112c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
uint32_t result = zx.d(*(arg1 + 0x150))
bool c_1

if (result.b u<= 6)
    c_1 = test_bit(0x4b, zx.d(result.b))

if (result.b u> 6 || not(c_1))
    *arg2 = 0
else if (sub_142110b90(arg1, arg3).b == 0 && (*(arg1 + 0x1f8) & 0x40) == 0)
    bool cond:0_1 = (1 << arg3.b & *(arg1 + 0x21c)) != 0
    *arg2 = 0
    
    if (not(cond:0_1))
        result.b = 1
        return result

result.b = 0
return result
