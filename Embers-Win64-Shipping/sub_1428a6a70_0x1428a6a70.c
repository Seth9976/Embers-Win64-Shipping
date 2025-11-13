// 函数: sub_1428a6a70
// 地址: 0x1428a6a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = data_143b85290
int64_t result

if (rax == 0 || rax == sub_1428a6730)
    if (arg1 == 0)
        return 0
    
    data_143b85288 = 0
    result = malloc(arg1)
else
    result = rax(arg1)

if (result != 0)
    memset(result, 0, arg1)

return result
