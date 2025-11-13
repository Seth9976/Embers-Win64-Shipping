// 函数: sub_142907910
// 地址: 0x142907910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
*arg3 = 0
int32_t r9 = *arg1

if (r9 != 0)
    int32_t rax_1 = sub_142907e30(arg1, arg2, &arg1[2], r9)
    
    if (rax_1 s< 0)
        return 0xffffffff
    
    *arg1 = 0
    *arg3 = rax_1

return 1
