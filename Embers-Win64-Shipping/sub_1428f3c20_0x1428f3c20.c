// 函数: sub_1428f3c20
// 地址: 0x1428f3c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg1 == 0 || arg2 == 0)
    sub_1428a5670(0x25, 0x84, 0x43, "crypto\dso\dso_lib.c", 0x10c)
    return 0

if ((*(arg1 + 0x14) & 1) == 0)
    int64_t rax_1 = arg1[5]
    
    if (rax_1 != 0)
        return rax_1()
    
    int64_t r10_1 = *(*arg1 + 0x30)
    
    if (r10_1 != 0)
        return r10_1()

return 0
