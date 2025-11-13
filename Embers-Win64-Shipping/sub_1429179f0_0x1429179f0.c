// 函数: sub_1429179f0
// 地址: 0x1429179f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = arg4
int32_t* rax = sub_142896660(arg1)

if (arg2 != 1)
    if (arg2 - 6 u> 1)
        return 0xfffffffe
    
    int64_t rcx
    int64_t var_18[0x2]
    
    if (arg2 != 6)
        int64_t rax_2 = sub_142896790(sub_14060aa60(arg1), &var_18)
        rcx = var_18[0]
        rdi = rax_2
    else
        rcx = sx.q(arg3)
        var_18[0] = rcx
    int32_t rax_3
    
    if (rdi != 0 && rcx == 0x20)
        rax_3 = sub_1428e61a0(rax, rdi, rcx.d)
    
    if (rdi == 0 || rcx != 0x20 || rax_3 == 0)
        return 0
    
    sub_142902eb0(&rax[6], sub_14060aa50(rax))

return 1
