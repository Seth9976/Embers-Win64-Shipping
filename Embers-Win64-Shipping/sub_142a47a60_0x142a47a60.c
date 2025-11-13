// 函数: sub_142a47a60
// 地址: 0x142a47a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 8

if (arg3 == 0)
    arg1[1].w = 2
    return arg1

if (arg4 s>= 0xffffffff)
    int32_t rax_4
    
    if (arg4 != 0xffffffff)
        if (arg4 s< 0)
            goto label_142a47ae3
        
        if (arg2 == 0)
        label_142a47aec:
            rax_4 = arg4
        label_142a47aef:
            
            if (arg4 s> 0x3ff)
                arg1[1].w |= 0xffe0
                arg1[2].d = rax_4
                *(arg1 + 0xc) = arg4
                arg1[3] = arg3
                return arg1
            
            arg1[1].w &= 0x1f
            arg4.w <<= 5
            arg1[1].w |= arg4.w
            arg1[2].d = rax_4
            arg1[3] = arg3
            return arg1
        
        if (*(arg3 + (sx.q(arg4) << 1)) == 0)
            goto label_142a47ae3
    else if (arg2 != 0)
        arg4 = std::_WChar_traits<wchar_t>::length(arg3)
    label_142a47ae3:
        rax_4 = arg4 + 1
        
        if (arg2 != 0)
            goto label_142a47aef
        
        goto label_142a47aec

arg1[1].w = 1
arg1[3] = 0
arg1[2].d = 0
return arg1
