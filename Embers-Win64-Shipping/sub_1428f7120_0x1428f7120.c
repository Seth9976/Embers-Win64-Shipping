// 函数: sub_1428f7120
// 地址: 0x1428f7120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t r14 = sx.q(arg4)
char* i = arg3

if (arg2 != 0)
    for (; i != &arg3[r14]; i = &i[1])
        uint32_t rcx = zx.d(*i)
        char arg_10 = (*"0123456789ABCDEF")[zx.q(rcx) u>> 4]
        char arg_11 = *((zx.q(rcx) & 0xf) + "0123456789ABCDEF")
        
        if (arg1(arg2, &arg_10, 2) == 0)
            return 0xffffffff

return zx.q((r14 * 2).d)
