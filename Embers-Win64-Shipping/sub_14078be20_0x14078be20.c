// 函数: sub_14078be20
// 地址: 0x14078be20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_14074d7c0(arg1, arg2).b != 0 && *(arg2 + 0x30) == *(arg1 + 0x30)
        && *(arg1 + 0x38) == *(arg2 + 0x38) && *(arg1 + 0x40) == *(arg2 + 0x40)
        && *(arg1 + 0x48) == *(arg2 + 0x48) && *(arg2 + 0x68) == *(arg1 + 0x68)
        && sub_140781190(arg2 + 0x70, arg1 + 0x70).b != 0 && *(arg2 + 0x80) == *(arg1 + 0x80)
        && sub_140781190(arg2 + 0x88, arg1 + 0x88).b != 0
        && sub_140781190(arg2 + 0x98, arg1 + 0x98).b != 0)
    result.b = *(arg2 + 0xb0) ^ *(arg1 + 0xb0)
    
    if ((result.b & 1) == 0 && *(arg2 + 0xa8) == *(arg1 + 0xa8))
        result.b = 1
        return result

result.b = 0
return result
