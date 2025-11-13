// 函数: sub_142218d60
// 地址: 0x142218d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x26]

if (rcx != 0 && (*(*rcx + 0x3e8))(rcx, 0) != 0)
    int64_t* rcx_1 = arg1[0x26]
    (*(*rcx_1 + 0x440))(rcx_1, arg2)
    return arg2

void* rax_6 = (*(*arg1 + 0x628))(arg1)
int64_t* rax_7

if (rax_6 == 0)
    rax_7 = &data_143dbb1f8
else
    rax_7 = rax_6 + 0xc4

*arg2 = *rax_7
arg2[1].d = rax_7[1].d
return arg2
