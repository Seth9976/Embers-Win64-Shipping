// 函数: sub_141f4d2c0
// 地址: 0x141f4d2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1[0xa]

if (result == 0 || (*result & 1) == 0)
    result.b = 0
else if ((*(*arg1 + 0x9d8))().b == 0)
    result.b = 0
else
    result.b = 1

char* rcx = arg1[0x109]

if (rcx == 0 || (*rcx & 1) == 0)
    rcx.b = 0
else
    rcx.b = 1

if (result.b != rcx.b)
    if (result.b == 0)
        return sub_1423cb370(&arg1[0x105])
    
    result = sub_141ef7be0(arg1, &arg1[0x105])
    
    if (result.b != 0)
        arg1[0x10a] = arg1
        sub_1423bc410(&arg1[0x105], arg1, &arg1[6])
        return sub_1423bc410(&arg1[0x105], arg1, &arg1[0x136]) __tailcall

return result
