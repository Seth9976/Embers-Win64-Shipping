// 函数: sub_1424501f0
// 地址: 0x1424501f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int512_t zmm1
result, zmm1 = sub_140ce8e10(arg1, arg2)

if ((arg2[6].d & 0x400000) == 0)
    return result

return sub_1408dc5a0(arg2, arg1 + 0x48, 
    sub_14244c3f0(arg2, arg1 + 0x38, sub_140a1d9d0(arg2, arg1 + 0x28, zmm1)))
