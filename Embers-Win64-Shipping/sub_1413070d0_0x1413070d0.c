// 函数: sub_1413070d0
// 地址: 0x1413070d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
int64_t* rcx = *(data_143f5b298 + 0xb08)
int64_t* rax_2 = (*(*rcx + 0x100))(rcx)
(*(*rax_2 + 0xc0))(rax_2, arg2, arg3, arg4, arg1)

if (*arg1 == 0)
label_141307153:
    void var_28
    int128_t* rax_5 = sub_141305b90(&var_28, arg2, arg3, arg4)
    *arg1 = *rax_5
    arg1[1].d = *(rax_5 + 8)
    *(arg1 + 0xc) = *(rax_5 + 0xc)
    arg1[2].d = rax_5[1].d
    *(arg1 + 0x14) = *(rax_5 + 0x14)
else if (arg1[2].d == arg1[1].d && *(arg1 + 0x14) == *(arg1 + 0xc))
    goto label_141307153

return arg1
