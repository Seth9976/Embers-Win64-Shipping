// 函数: sub_142a47d50
// 地址: 0x142a47d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = arg3
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 0

if (arg2 == 0)
    arg1[1].w = 2
    return arg1

if (rax_3 s< 0xffffffff || arg4 s< 0 || rax_3 s> arg4)
    arg1[3] = 0
    arg1[1].w = 1
    arg1[2].d = 0
    return arg1

if (rax_3 == 0xffffffff)
    int16_t* rax_1 = arg2
    void* rdx = &arg2[sx.q(arg4)]
    
    if (arg2 != rdx)
        while (*rax_1 != 0)
            rax_1 = &rax_1[1]
            
            if (rax_1 == rdx)
                break
    
    rax_3 = ((rax_1 - arg2) s>> 1).d

if (rax_3 s> 0x3ff)
    *(arg1 + 0xc) = rax_3
    arg1[1].w = 0xffe0
    arg1[3] = arg2
    arg1[2].d = arg4
    return arg1

rax_3.w <<= 5
arg1[1].w = rax_3.w
arg1[3] = arg2
arg1[2].d = arg4
return arg1
