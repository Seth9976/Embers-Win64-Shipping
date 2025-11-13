// 函数: sub_142c8cf50
// 地址: 0x142c8cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t i = 0
char* rax = arg2

if (*arg2 != 0)
    while (i u< 0x80000000)
        rax = &rax[1]
        i += 1
        
        if (*rax == 0)
            break

return sub_14289aa40(arg1, arg2, i & 0x7fffffff) __tailcall
