// 函数: sub_1425c2b40
// 地址: 0x1425c2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_1425bf990(arg1, &var_18, arg2)
int16_t* const rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t* rcx = *(arg1 + 8)
int64_t result = (*(*rcx + 0xc0))(rcx, rdx_1, zx.q(arg3))
int64_t rcx_1 = var_18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if (result == 0 && sub_1425c26f0(arg1, arg2, 0) != 0)
    jump(*(**(arg1 + 8) + 0xc0))

return result
