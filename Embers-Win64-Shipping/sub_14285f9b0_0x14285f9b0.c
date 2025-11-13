// 函数: sub_14285f9b0
// 地址: 0x14285f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax_1

if (arg3 != 0x101)
    rax_1 = sub_1428736e0(arg2)

int64_t arg_20

if ((arg3 == 0x101 || rax_1 != 0) && sub_142873820(arg2, &arg_20) != 0)
    int64_t rax_3 = arg_20
    
    if (rax_3 u<= 0x7fffffff)
        *(arg1 + 0x98) = sx.q(rax_3.d)
        *(arg1 + 0xa0) = 0
        return 1

return 0
