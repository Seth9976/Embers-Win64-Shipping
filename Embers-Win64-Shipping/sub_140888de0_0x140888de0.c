// 函数: sub_140888de0
// 地址: 0x140888de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_14396e7c0)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_14396e7c0)
int64_t* result
int512_t zmm1_2
result, zmm1_2 = sub_140a1d9d0(arg2, &arg1[2], sub_140a1d9d0(arg2, arg1, zmm1))

if ((arg2[5].b & 1) == 0 || rax_1 s>= 0x37)
    sub_1408834a0(arg2, &arg1[4], zmm1_2)

result.b = 1
return result
