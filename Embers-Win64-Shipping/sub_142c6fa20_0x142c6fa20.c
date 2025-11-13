// 函数: sub_142c6fa20
// 地址: 0x142c6fa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const r8
int64_t r9

if (arg1 s< 0x186a0)
    r9 = arg1
    r8 = "%5I64d"
else if (arg1 s>= 0x9c4000)
    int64_t rdx_6
    char* r8_1
    int64_t r9_3
    
    if (arg1 s< 0x6400000)
        r8_1 = "%2I64d.%0I64dM"
        int64_t rax_4
        int32_t rdx_2
        rdx_2:rax_4 = sx.o(arg1)
        uint64_t rdx_3 = zx.q(rdx_2) & 0xfffff
        int64_t rax_5 = rax_4 + rdx_3
        uint64_t rax_7 = (zx.q(rax_5.d) & 0xfffff) - rdx_3
        r9_3 = rax_5 s>> 0x14
        int64_t rax_8
        int64_t rdx_4
        rdx_4:rax_8 = muls.dp.q(-0x5fffc3ffe97ff78f, rax_7)
        rdx_6 = (rdx_4 + rax_7) s>> 0x10
    label_142c6faba:
        int64_t var_18 = rdx_6 + (rdx_6 u>> 0x3f)
        sub_142c564b0(arg2, 6, r8_1, r9_3, arg3)
        return arg2
    
    if (arg1 s>= 0x271000000)
        if (arg1 s< 0x1900000000)
            r8_1 = "%2I64d.%0I64dG"
            int64_t rax_15
            int32_t rdx_10
            rdx_10:rax_15 = sx.o(arg1)
            uint64_t rdx_11 = zx.q(rdx_10) & 0x3fffffff
            int64_t rax_16 = rax_15 + rdx_11
            uint64_t rax_18 = (zx.q(rax_16.d) & 0x3fffffff) - rdx_11
            r9_3 = rax_16 s>> 0x1e
            int64_t rax_19
            int64_t rdx_12
            rdx_12:rax_19 = muls.dp.q(-0x5ffffff5ffffff5f, rax_18)
            rdx_6 = (rdx_12 + rax_18) s>> 0x1a
            goto label_142c6faba
        
        if (arg1 s>= 0x9c400000000)
            int64_t rax_23
            int64_t rdx_16
            rdx_16:rax_23 = sx.o(arg1)
            
            if (arg1 s>= 0x27100000000000)
                r8 = "%4I64dP"
                r9 = ((0x3ffffffffffff & rdx_16) + rax_23) s>> 0x32
            else
                r8 = "%4I64dT"
                r9 = ((0xffffffffff & rdx_16) + rax_23) s>> 0x28
        else
            r8 = "%4I64dG"
            int64_t rax_21
            int32_t rdx_14
            rdx_14:rax_21 = sx.o(arg1)
            r9 = ((zx.q(rdx_14) & 0x3fffffff) + rax_21) s>> 0x1e
    else
        r8 = "%4I64dM"
        int64_t rax_13
        int32_t rdx_8
        rdx_8:rax_13 = sx.o(arg1)
        r9 = ((zx.q(rdx_8) & 0xfffff) + rax_13) s>> 0x14
else
    r8 = "%4I64dk"
    int64_t rax_2
    int32_t rdx
    rdx:rax_2 = sx.o(arg1)
    r9 = ((zx.q(rdx) & 0x3ff) + rax_2) s>> 0xa

sub_142c564b0(arg2, 6, r8, r9, arg3)
return arg2
