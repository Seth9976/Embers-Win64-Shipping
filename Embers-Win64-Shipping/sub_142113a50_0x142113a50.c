// 函数: sub_142113a50
// 地址: 0x142113a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
uint64_t result = zx.q(*(arg1 + 0x34)) | zx.q(arg1[6].d) | zx.q(*(arg1 + 0x2c)) | zx.q(arg1[5].d)

if (result.d == 0)
    void var_18
    result = sub_140b214c0(&var_18)
    *(arg1 + 0x28) = *result

return result
