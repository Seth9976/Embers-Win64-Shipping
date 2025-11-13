// 函数: sub_142a6b570
// 地址: 0x142a6b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a6c030(arg1, 0x15, 0)

if (arg2 - 1 u<= 0x12)
    switch (arg2)
        case 1, 0x13
            sub_142a6c030(arg1, 6, (*(*arg1 + 0x80))(arg1, 6))
        case 2
            goto label_142a6b60f
        case 3, 4
            int32_t r8 = arg1[0x20].d
            
            if (arg3 != 0)
                r8 = (r8 + 6) s% 7
                
                if (r8 s< 1)
                    r8 += 7
            
            sub_142a6c030(arg1, 7, r8)
        case 8
            sub_142a6c030(arg1, 5, 1)
            sub_142a6c030(arg1, 7, sub_142a695b0(arg1, 7, arg4))
        case 0x11
            sub_142a6c030(arg1, 3, (*(*arg1 + 0x80))(arg1, 3))
        label_142a6b60f:
            sub_142a6c030(arg1, 5, (*(*arg1 + 0x80))(arg1, 5))

return sub_142a6c030(arg1, arg2, (*(*arg1 + 0x80))(arg1, zx.q(arg2))) __tailcall
