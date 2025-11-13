// 函数: sub_1428a6ba0
// 地址: 0x1428a6ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rbx = arg1

if (arg1 == 0)
    return 0

int32_t i = 0

if (*arg1 != 0)
    while (i u< 0x80000000)
        arg1 = &arg1[1]
        i += 1
        
        if (*arg1 == 0)
            break

int64_t result = sub_1428a6730(zx.q((i & 0x7fffffff) + 1))

if (result != 0)
    char* rdx_2 = result - rbx
    char i_1
    
    do
        i_1 = *rbx
        *(rdx_2 + rbx) = i_1
        rbx = &rbx[1]
    while (i_1 != 0)

return result
