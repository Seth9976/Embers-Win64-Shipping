// 函数: sub_1425c12e0
// 地址: 0x1425c12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
int64_t* rax = sub_1425bf990(arg1, &var_48, arg3)
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int64_t* rcx = *(arg1 + 8)
(*(*rcx + 0xf0))(rcx, arg2, r8)
int64_t rcx_1 = var_48

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if ((arg2[2].b & 4) == 0 && sub_1425c26f0(arg1, arg3, 0) != 0 && sub_1425c26f0(arg1, arg3, 1) != 0)
    int64_t* rcx_4 = *(arg1 + 8)
    void var_38
    int128_t* rax_5 = (*(*rcx_4 + 0xf0))(rcx_4, &var_38, arg3)
    *arg2 = *rax_5
    arg2[1] = rax_5[1]
    arg2[2].q = rax_5[2].q

return arg2
