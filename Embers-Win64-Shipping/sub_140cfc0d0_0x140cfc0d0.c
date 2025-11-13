// 函数: sub_140cfc0d0
// 地址: 0x140cfc0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rax_1
wchar16 const* const r8

if ((arg4 & 0x10000000) == 0)
    rax_1 = u"True"
    r8 = u"False"
else
    rax_1 = u"true"
    r8 = u"false"

if ((*(zx.q(*(arg1 + 0x79)) + arg3) & *(arg1 + 0x7b)) != 0)
    r8 = rax_1

int64_t var_18
sub_140a2e390(&var_18, u"%s", r8)
int32_t var_10
int32_t r8_2

if (var_10 == 0)
    r8_2 = 0
else
    r8_2 = var_10 - 1

int64_t result = sub_140a20ba0(arg2, var_18, r8_2)
int64_t rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
