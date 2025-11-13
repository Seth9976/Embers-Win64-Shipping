// 函数: sub_1427b5f30
// 地址: 0x1427b5f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x90) = *arg2
*(arg1 + 0xa0) = arg2[1]
*(arg1 + 0xb0) = arg2[2]
int64_t rax = *arg1

if (*(arg1 + 0x71) != 0)
    jump(*(rax + 0x290))

(*(rax + 0x298))()
int128_t zmm1 = *(arg1 + 0xa0)
int128_t var_38 = *(arg1 + 0x90)
int128_t var_18 = *(arg1 + 0xb0)
int128_t var_28 = zmm1
return sub_1427a1740(&arg1[5], arg1, &var_38)
