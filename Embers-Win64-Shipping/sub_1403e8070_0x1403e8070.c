// 函数: sub_1403e8070
// 地址: 0x1403e8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx
int32_t r11

if (arg4 != 8)
    if (arg5 != 4)
        rbx = &data_1436fdcf8
        r11 = 0xc
    else
        rbx = &data_1436fdc50
        r11 = arg5 + 0x1e
else if (arg5 != 4)
    rbx = &data_1436fdcf0
    r11 = 3
else
    rbx = &data_1436fdc20
    r11 = arg5 + 7

uint64_t result = zx.q(sx.d(arg4.w))
uint32_t result_2 = (result * 2).d
uint32_t result_1 = (result * 9).d * 2

if (arg5 s> 0)
    uint64_t i_1 = zx.q(arg5)
    void* r9_1 = sx.q(arg2) + rbx
    uint64_t i
    
    do
        result = zx.q(sx.d(*r9_1) + sx.d(arg1) + result_2)
        *arg3 = result.d
        
        if (result_2 s<= result_1)
            if (result.d s> result_1)
                result = zx.q(result_1)
            else if (result.d s< result_2)
                result = zx.q(result_2)
        else if (result.d s> result_2)
            result = zx.q(result_2)
        else if (result.d s< result_1)
            result = zx.q(result_1)
        
        *arg3 = result.d
        arg3 = &arg3[1]
        r9_1 += sx.q(r11)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
