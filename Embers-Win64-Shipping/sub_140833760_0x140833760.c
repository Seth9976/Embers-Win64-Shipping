// 函数: sub_140833760
// 地址: 0x140833760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x18))(arg1, 0)

if (arg2 != 0)
    sub_140822520(&arg1[2], arg2 + 0x10)
    sub_14081d8c0(&arg1[4], arg2 + 0x20)
    sub_140780c40(&arg1[6], arg2 + 0x30)
    result = sub_140780c40(&arg1[8], arg2 + 0x40)
    
    if (arg3 != 0)
        int32_t rdx_4 = arg1[5].d
        arg1[0x16].d |= 7
        
        if (*(arg1 + 0x2c) s< ((rdx_4 + 0xf) & 0xfffffff0) + 0x10)
            sub_1405c5510(&arg1[4], ((rdx_4 + 0xf) & 0xfffffff0) + 0x10)
        
        result = sub_140835b50(arg1)
        *(arg1 + 0xb4) += 1

return result
