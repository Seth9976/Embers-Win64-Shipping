// 函数: sub_141bc3340
// 地址: 0x141bc3340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xdc]

if (rdi == 0 || *(arg1 + 0x75e) == 0 || (*(arg1 + 0x75d) == 0 && *(arg4 + 0x19) == 1))
    sub_141bc3180(arg1, arg2, arg3, arg4, arg5)
else
    int32_t rax_2 = (*(*arg1 + 0x268))()
    int64_t i = arg1[0xd0]
    int32_t r10_1 = -1
    int32_t rcx
    
    if (i != 0)
        int64_t* r9 = *rdi
        int64_t* rcx_1 = r9
        void* r8 = &r9[sx.q(rdi[1].d)]
        
        if (r9 == r8)
        label_141bc33ce:
            rcx = -1
        else
            while (*rcx_1 != i)
                rcx_1 = &rcx_1[1]
                
                if (rcx_1 == r8)
                    goto label_141bc33ce
            
            rcx = ((rcx_1 - r9) s>> 3).d
    else
        rcx = 0
    
    int32_t rdx = arg1[0x9b].d
    char rax_4 = *(arg4 + 0x18)
    
    if (rdx != 1)
        if (rdx != 0)
            sub_141bc3180(arg1, arg2, arg3, arg4, arg5)
        else
            if (rax_4 == 2)
                goto label_141bc3428
            
            if (rax_4 == 3)
                goto label_141bc3448
            
            sub_141bc3180(arg1, arg2, arg3, arg4, arg5)
    else if (rax_4 == 0)
    label_141bc3428:
        
        if (arg1[0xed].b != 0)
            goto label_141bc345e
        
        if (mods.dp.d(sx.q(rcx), rax_2) s> 0)
            goto label_141bc345e
        
        sub_141bc3180(arg1, arg2, arg3, arg4, arg5)
    else if (rax_4 == rdx.b)
    label_141bc3448:
        int32_t temp8_1
        int32_t temp9_1
        
        if (arg1[0xed].b == 0)
            temp8_1:temp9_1 = sx.q(rcx)
        
        if (arg1[0xed].b == 0 && mods.dp.d(temp8_1:temp9_1, rax_2) s>= rax_2 - 1)
            sub_141bc3180(arg1, arg2, arg3, arg4, arg5)
        else
            r10_1 = 1
        label_141bc345e:
            int32_t rax_12 = rcx + r10_1
            
            if (rax_12 s< 0 || rax_12 s>= rdi[1].d)
                sub_141bc3180(arg1, arg2, arg3, arg4, arg5)
            else
                int64_t r9_2 = *arg1
                (*(r9_2 + 0x2b0))(arg1, *rdi + (sx.q(rax_12) << 3), arg4, r9_2)
                int128_t var_18 = zx.o(0)
                sub_140eb9b00(arg2, &var_18, arg5)
    else
        sub_141bc3180(arg1, arg2, arg3, arg4, arg5)

return arg2
