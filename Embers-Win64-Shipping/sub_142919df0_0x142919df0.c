// 函数: sub_142919df0
// 地址: 0x142919df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t result = sub_142919ee0(arg1, arg2, arg3, nullptr, 0, nullptr)

if (result != 0)
    char* rax = sub_1428a6730(result)
    
    if (rax == 0)
        sub_1428a5670((&rax[0x10]).d, 0x119, (&rax[0x41]).d, "crypto\ec\ec_oct.c", 0x8c)
        return 0
    
    result = sub_142919ee0(arg1, arg2, zx.q(arg3), rax, result, arg5)
    
    if (result == 0)
        sub_1428a6780(rax)
        return 0
    
    *arg4 = rax

return result
