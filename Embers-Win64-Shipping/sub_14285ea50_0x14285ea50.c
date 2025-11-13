// 函数: sub_14285ea50
// 地址: 0x14285ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rax = sub_1428a2de0(arg3, nullptr)
int64_t rdi = sx.q(rax)

if (rax s>= 0)
    int64_t var_18[0x2]
    int32_t rax_1 = sub_142873ff0(arg2, rdi, &var_18, 3)
    int32_t rax_2
    
    if (rax_1 != 0)
        rax_2 = sub_1428a2de0(arg3, &var_18)
    
    if (rax_1 == 0 || rax_2 != rdi.d)
        sub_142856580(arg1, 0x50, 0x1ed, 0x44, "ssl\statem\statem_lib.c", 0x370)
    else
        int32_t* rcx_3 = *(arg1 + 8)
        
        if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) != 0)
            return 1
        
        int32_t rax_4 = *rcx_3
        
        if (rax_4 s< 0x304 || rax_4 == 0x10000)
            return 1
        
        if (sub_142875910(arg1, arg2, 0x1000, arg3, sx.q(arg4)) != 0)
            return 1
else
    sub_142856580(arg1, 0x50, 0x1ed, 7, "ssl\statem\statem_lib.c", 0x36a)

return 0
