// 函数: sub_142113850
// 地址: 0x142113850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142113760(arg1)
uint64_t result =
    zx.q(*(arg1 + 0x7c)) | zx.q(arg1[0xf].d) | zx.q(*(arg1 + 0x74)) | zx.q(arg1[0xe].d)

if (result.d == 0)
    void var_18
    result = sub_140b214c0(&var_18)
    *(arg1 + 0x70) = *result

return result
