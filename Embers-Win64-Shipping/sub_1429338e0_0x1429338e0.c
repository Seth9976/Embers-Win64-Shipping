// 函数: sub_1429338e0
// 地址: 0x1429338e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    if (arg2 == 3 && strncmp(arg1, "DIR", zx.q(arg2)) == 0)
        *arg3 |= 0x2906
        return zx.q(arg2 - 2)
    
    int32_t rax_3 = sub_142932e90(arg1, arg2)
    
    if (rax_3 != 0 && not(test_bit(rax_3, 0x10)))
        int32_t rax_4 = sub_1428c42e0(rax_3)
        
        if (rax_4 != 0)
            *arg3 |= rax_4
            return 1

return 0
