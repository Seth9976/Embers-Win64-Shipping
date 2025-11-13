// 函数: sub_140f8ba90
// 地址: 0x140f8ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = arg1[0x7b].b
char result = arg2[1].b

if (r8 != result)
label_140f8bac0:
    
    if (arg2 != &arg1[0x7a])
        if (r8 != 0)
            arg1[0x7b].b = 0
            result = arg2[1].b
        
        if (result != 0)
            arg1[0x7a] = *arg2
            arg1[0x7b].b = 1
    
    result = sub_140f89930(arg1)
else if (r8 != 0 && not(*arg2 f== arg1[0x7a]))
    goto label_140f8bac0

if (arg2[1].b != 0)
    arg2[1].b = 0

return result
