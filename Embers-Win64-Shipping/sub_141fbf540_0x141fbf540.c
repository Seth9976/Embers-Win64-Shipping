// 函数: sub_141fbf540
// 地址: 0x141fbf540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x570) & 4) == 0)
    return sub_140594850() __tailcall

int64_t* result = sub_14226e260(arg1)

if (result != 0)
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0x628))(result, rdx_1)
    
    if (result != 0)
        int64_t rdx_2 = *result
        *(result + 0xc4) = data_143dbb1f8.q
        *(result + 0xcc) = data_143dbb200
        jump(*(rdx_2 + 0x460))

return result
