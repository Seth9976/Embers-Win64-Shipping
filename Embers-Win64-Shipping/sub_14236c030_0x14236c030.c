// 函数: sub_14236c030
// 地址: 0x14236c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d23dc0(arg1, 0x30)

if (result == 0)
    result = sub_141f8dc00(sub_141f88540())
    
    if (result != 0)
        result = sub_1423b27f0(arg1)
        
        if (result != 0)
            jump(*(*sub_140963350(sub_141f88540()) + 0xc0))

*(arg1 + 0x34) = 0xffffffff
return result
