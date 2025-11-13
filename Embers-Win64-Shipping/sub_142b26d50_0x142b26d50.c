// 函数: sub_142b26d50
// 地址: 0x142b26d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char temp0 = *(arg1 + 0x21)
uint32_t result

if (temp0 == 0)
    sub_142b26520(arg1, arg2, arg3, arg4)
    result.b = arg1[0x5f].d s<= 0
else if (temp0 s>= 0)
    if (arg2 != arg3)
        if (sub_142a9f430(&arg1[5], arg2, arg3) != 0)
            sub_142b26520(arg1, arg2, arg3, arg4)
            result.b = arg1[0x5f].d s<= 0
        else
            sub_142aa00c0(sub_142aa0550(&arg1[0x1e], arg2, arg3), &arg1[5])
            result = sub_142a9fa50(&arg1[0x1e])
            int32_t rsi_1 = 0
            
            if (result s> 0)
                do
                    int32_t rax_2 = sub_142a9fa60(&arg1[0x1e], zx.q(rsi_1))
                    sub_142b26520(arg1, sub_142a9fa80(&arg1[0x1e], rsi_1), rax_2, arg4)
                    rsi_1 += 1
                while (rsi_1 s< result)
            
            result.b = arg1[0x5f].d s<= 0
    else if (sub_142a9f280(&arg1[5], arg2).b == 0)
        sub_142b26520(arg1, arg2, arg3, arg4)
        result.b = arg1[0x5f].d s<= 0
    else
        result.b = 1
else if (arg4 == 0xc0)
    result.b = 1
else
    sub_142a9e9d0(&arg1[5], arg2, arg3)
    sub_142b26520(arg1, arg2, arg3, arg4)
    result.b = arg1[0x5f].d s<= 0

return result
