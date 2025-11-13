// 函数: sub_140835450
// 地址: 0x140835450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
sub_140cd85e0(arg1[8])
uint64_t result = zx.q(*(arg1 + 0x54)) | zx.q(arg1[0xa].d) | zx.q(*(arg1 + 0x4c)) | zx.q(arg1[9].d)

if (result.d == 0)
    void var_18
    result = sub_140b214c0(&var_18)
    *(arg1 + 0x48) = *result

return result
