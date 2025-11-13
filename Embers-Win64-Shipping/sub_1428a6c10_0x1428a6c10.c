// 函数: sub_1428a6c10
// 地址: 0x1428a6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

char* rbx = arg1

while (arg2 != 0)
    arg2 -= 1
    
    if (*rbx == 0)
        break
    
    rbx = &rbx[1]

void* rbx_1 = rbx - arg1
char* result = sub_1428a6730(rbx_1 + 1)

if (result != 0)
    memcpy(result, arg1, rbx_1.d)
    *(result + rbx_1) = 0

return result
