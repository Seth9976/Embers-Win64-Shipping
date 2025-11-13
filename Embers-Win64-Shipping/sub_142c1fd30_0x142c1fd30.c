// 函数: sub_142c1fd30
// 地址: 0x142c1fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg1[5])
uint32_t r9_1 = zx.d(arg1[4]) << 8
uint32_t r9_2 = r9_1 + rax

if (r9_1 != neg.d(rax))
    if (r9_2 u<= 3)
        if (*(arg2 + 0x2c) != 0)
            int32_t rax_2 = sub_142c1ea80(arg1, *(arg2 + 0x2c))
            
            if (rax_2 != 0)
                return divs.dp.q(sx.o(sx.q(*(arg2 + 0x24)) * sx.q(rax_2)), zx.q(*(arg2 + 0x2c)))
    else if (r9_2 == 0x8000)
        return sub_142c1fda0(arg1, arg2, arg3) __tailcall

return 0
