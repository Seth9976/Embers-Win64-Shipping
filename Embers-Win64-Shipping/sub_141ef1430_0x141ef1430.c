// 函数: sub_141ef1430
// 地址: 0x141ef1430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f22070(arg1, arg2)
char* result

if (arg2 == 0)
    result = arg1[0x95]
    
    if (result != 0 && (*result & 1) != 0)
        return sub_1423cb370(&arg1[0x91])
else
    result = sub_141ef7be0(arg1, &arg1[0x91])
    
    if (result.b != 0)
        arg1[0x96] = arg1
        return sub_1423bc410(&arg1[0x91], arg1, &arg1[6]) __tailcall

return result
