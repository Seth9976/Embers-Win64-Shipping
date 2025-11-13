// 函数: sub_14085b6d0
// 地址: 0x14085b6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    int64_t* rcx_2 = (rdi << 5) + *arg1
    
    if (i_1 != 0)
        uint64_t rax = rcx_2 + 0x1c
        int32_t i
        
        do
            *rcx_2 = 0
            rcx_2 = &rcx_2[4]
            __builtin_memset(rax - 0x14, 0, 0x18)
            rax += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_140858a10(arg1, arg2, rdi.d - arg2, arg3) __tailcall
