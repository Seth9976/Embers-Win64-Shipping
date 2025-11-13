// 函数: sub_14087f330
// 地址: 0x14087f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* rbx = arg2

if (arg4 != 0)
    int128_t* rsi_1 = arg3 - arg2
    int32_t i
    
    do
        *rbx = *(rsi_1 + rbx)
        *(rbx + 0x10) = *(rsi_1 + rbx + 0x10)
        sub_14081d8c0(rbx + 0x18, rsi_1 + 0x18 + rbx)
        rbx += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
