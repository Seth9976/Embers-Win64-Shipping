// 函数: sub_142656380
// 地址: 0x142656380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8

if (arg2 != 0)
    int32_t rcx = arg2[0x80].d
    r8 = (rcx u>> 1 & 4) | ((rcx & 4) * 2) | (rcx & 0xfff3)
else
    r8 = 0

int64_t var_18 = 0
int64_t var_10 = 0
int64_t result = sub_142653880(arg3, arg2, r8, &var_18)
int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
