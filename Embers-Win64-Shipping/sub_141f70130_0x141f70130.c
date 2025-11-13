// 函数: sub_141f70130
// 地址: 0x141f70130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_141f23e50(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
int32_t i = sub_141f52180(arg2, arg1 + 0x460, zmm1)

if ((arg2[5].b & 1) != 0)
    i = 0
    
    if (*(arg1 + 0x468) s> 0)
        int64_t rdx_1 = 0
        
        do
            rdx_1 += 0x90
            i += 1
            *(*(arg1 + 0x460) + rdx_1 - 8) = arg1
        while (i s< *(arg1 + 0x468))

return i
