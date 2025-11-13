// 函数: sub_1425c2bf0
// 地址: 0x1425c2bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_1425bf990(arg1, &var_18, arg2)
int16_t* const rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t* rcx = *(arg1 + 8)
int64_t result = (*(*rcx + 0xd0))(rcx, rdx_1, zx.q(arg3), zx.q(arg4))
int64_t rcx_1 = var_18

if (rcx_1 == 0)
    return result

sub_140a74f90(rcx_1)
return result
