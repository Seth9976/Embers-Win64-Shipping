// 函数: sub_1420edf30
// 地址: 0x1420edf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140ce8e10(arg1, arg2)

if ((*(arg2 + 0x28) & 1) != 0)
    result = sub_140d21d80(arg1)
    
    if (((*(result + 0x50) u>> 0x14).b & 1) != 0)
        result = sub_140d21d80(arg1)
        
        if (*(result + 0x58) != 0xffffffff)
            return sub_1420ebbf0(arg1, *(sub_140d21d80(arg1) + 0x58))

return result
