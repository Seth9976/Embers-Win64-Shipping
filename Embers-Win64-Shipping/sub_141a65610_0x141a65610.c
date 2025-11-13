// 函数: sub_141a65610
// 地址: 0x141a65610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x460) != 0 && (sub_140d3c6e0(arg1 + 0x4a0) == 0 || *(arg1 + 0x4a8) == 0))
    sub_141a54260(arg1 + 0x4a0, *(arg1 + 0x460), arg1 + 0x28)

int64_t* rdi = *(arg1 + 0x848)
int64_t var_18 = *(arg1 + 0x7d4)
int64_t var_10 = *(arg1 + 0x7c0)
*(arg1 + 0x458) = 3
(*(*rdi + 0x18))(rdi, &var_18)

if (rdi[3].b != 0)
    rdi[3].b = 0

int32_t result = sub_141a53830(arg1)

if (result.b != 0)
    *(arg1 + 0x828) = *(arg1 + 0x7d4)
    *(arg1 + 0x830) = *(arg1 + 0x458)
    result = *(arg1 + 0x470)
    *(arg1 + 0x834) = result

return result
