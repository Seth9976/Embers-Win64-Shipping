// 函数: sub_141c709f0
// 地址: 0x141c709f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int512_t zmm2
int128_t zmm6
result, zmm2, zmm6 = sub_141c5d7c0(arg1)

if (result == 0)
    return result

int64_t r9_1 = *result
zmm2.o = zmm6
return (*(r9_1 + 0x108))(result, arg3, zmm2, r9_1, arg4)
