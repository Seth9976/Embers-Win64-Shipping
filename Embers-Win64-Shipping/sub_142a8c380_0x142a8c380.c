// 函数: sub_142a8c380
// 地址: 0x142a8c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_10 = arg2
uint32_t r8 = zx.d(arg2)

if ((r8 & 0xfffff800) == 0xd800)
    return sub_142a8c060(arg1, 0xffffffff, &arg_10, 1)

int16_t* result = nullptr

while (true)
    int16_t rax_3 = *arg1
    
    if (rax_3 == r8.w)
        result = arg1
    
    if (rax_3 == 0)
        break
    
    arg1 = &arg1[1]

return result
