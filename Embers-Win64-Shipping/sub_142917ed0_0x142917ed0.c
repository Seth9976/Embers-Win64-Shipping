// 函数: sub_142917ed0
// 地址: 0x142917ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = arg4
int64_t rbp = sx.q(arg3)
int32_t* rax = sub_142896660(arg1)

if (arg2 == 1)
    return 1

if (arg2 s> 5)
    if (arg2 s<= 7)
        int64_t rax_2
        int64_t var_18[0x2]
        
        if (arg2 != 6)
            rsi = sub_1428967e0(sub_14060aa60(arg1), &var_18)
            rax_2 = var_18[0]
        else
            rax_2 = rbp
            var_18[0] = rax_2
        
        if (rsi != 0 && rax_2 == 0x10 && sub_1428e61a0(rax, rsi, rax_2.d) != 0)
            return sub_1429509b0(&rax[6], sub_14060aa50(rax), 0, 0)
        
        return 0
    
    if (arg2 == 0xe)
        return sub_142950d40(&rax[6], rbp)

return 0xfffffffe
