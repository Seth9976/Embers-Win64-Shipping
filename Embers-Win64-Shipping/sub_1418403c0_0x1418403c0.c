// 函数: sub_1418403c0
// 地址: 0x1418403c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = (*(*arg1 + 0x80))()
int64_t* rax_2 = sub_141850d50(&arg_8)
*arg2 = *rax_2
void* rcx_2 = rax_2[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg2[2].d = rax_2[2].d
return arg2
