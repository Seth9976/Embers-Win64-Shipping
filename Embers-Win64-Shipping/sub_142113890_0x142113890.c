// 函数: sub_142113890
// 地址: 0x142113890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142113760(arg1)
uint64_t result =
    zx.q(arg1[0x10].d) | zx.q(*(arg1 + 0x7c)) | zx.q(arg1[0xf].d) | zx.q(*(arg1 + 0x74))

if (result.d == 0)
    void var_18
    result = sub_140b214c0(&var_18)
    *(arg1 + 0x74) = *result

return result
