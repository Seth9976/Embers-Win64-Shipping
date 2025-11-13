// 函数: sub_142874bf0
// 地址: 0x142874bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_142853560(arg1)

if (rax != 0 && sub_142898c70(rax) != 0)
    int32_t rax_2 = sub_142873b60(arg2, 0x2f, 2)
    int32_t rax_3
    
    if (rax_2 != 0)
        rax_3 = sub_142873e80(arg2, 2)
    
    if (rax_2 == 0 || rax_3 == 0)
        sub_142856580(arg1, 0x50, 0x21e, 0x44, "ssl\statem\extensions.c", 0x4ba)
    else if (sub_14285dde0(arg1, arg2) != 0)
        if (sub_1428736e0(arg2) != 0)
            return 1
        
        sub_142856580(arg1, 0x50, 0x21e, 0x44, "ssl\statem\extensions.c", 0x4c6)
    
    return 0

return 2
