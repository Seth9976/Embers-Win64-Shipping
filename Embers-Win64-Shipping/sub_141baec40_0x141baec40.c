// 函数: sub_141baec40
// 地址: 0x141baec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x508)
int128_t zmm6 = 0xff7fffff
int512_t result

if (rax != 0)
    int32_t arg_8 = 0xff7fffff
    int32_t* rax_1
    rax_1, result = sub_140f466a0(rax + 0x4c8)
    
    if (rax_1[1].b != 0)
        zmm6 = *rax_1
else if ((*(arg1 + 0x4f0) & 1) != 0)
    result.o = *(arg1 + 0x4f4)
    return result

result.o = zmm6
return result
