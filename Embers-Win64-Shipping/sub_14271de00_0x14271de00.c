// 函数: sub_14271de00
// 地址: 0x14271de00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
void* result

if (sub_141f156a0(arg3, arg4) f<= 0f)
    result.b = 0
else
    int128_t zmm0_1 = sub_141f15680(arg3, arg4)
    
    if (*((*(*arg2 + 0x150))(arg2, (zx.o(0)).d) + 0x520) f- zmm0_1.d f> *(arg1 + 0xc0))
        result.b = 0
    else
        result = sub_14271d890(arg1)
        
        if (result == 0 || zmm0_1.d f< *(result + 0x9c))
            result.b = 0
        else
            result.b = 1

return result
