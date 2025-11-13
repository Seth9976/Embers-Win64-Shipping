// 函数: sub_142837350
// 地址: 0x142837350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int64_t r8
result, r8 = malloc(0x7b0)

if (result != 0)
    *result = 0
    char* _Destination
    int64_t r8_1
    _Destination, r8_1 = malloc(sx.q(strlen(arg1) + 1))
    result[1] = _Destination
    
    if (_Destination != 0)
        strcpy(_Destination, arg1)
        result[2] = 0
        result[3].d = 0
        result[4].d = 0
        *(result + 0x1c) = 0x80
        *(result + 0x24) = 0x80
        sub_14283bac4(&result[5])
        result[0xf5] = 0
        return result
    
    sub_142833a04((&_Destination[1]).d, "Out of memory", r8_1)
    free(result)
else
    sub_142833a04((result + 1).d, "Out of memory", r8)

return nullptr
