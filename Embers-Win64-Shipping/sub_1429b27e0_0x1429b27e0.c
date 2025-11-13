// 函数: sub_1429b27e0
// 地址: 0x1429b27e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rax = sub_142988800(arg2)
uint64_t result = sub_1429b2840(*(arg1 + 8), rax)
int64_t* rcx_2 = *(arg1 + 8)
int64_t* rdx_1 = rcx_2[1]

if (rcx_2[2] == rdx_1)
    return sub_1427c6dc0(rcx_2, rdx_1, &arg_10)

*rdx_1 = arg2
rcx_2[1] += 8
return result
