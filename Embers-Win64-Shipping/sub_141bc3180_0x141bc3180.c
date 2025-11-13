// 函数: sub_141bc3180
// 地址: 0x141bc3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xdc]

if (rdi == 0 || *(arg1 + 0x75e) == 0 || (*(arg1 + 0x75d) == 0 && *(arg4 + 0x19) == 1))
    sub_140dc1a00(arg1, arg2, arg3, arg4)
else
    int32_t rax_2 = (*(*arg1 + 0x268))()
    int64_t i = arg1[0xd0]
    int32_t rcx
    
    if (i != 0)
        int64_t* r9 = *rdi
        int64_t* rcx_1 = r9
        void* r8 = &r9[sx.q(rdi[1].d)]
        
        if (r9 == r8)
        label_141bc320e:
            rcx = -1
        else
            while (*rcx_1 != i)
                rcx_1 = &rcx_1[1]
                
                if (rcx_1 == r8)
                    goto label_141bc320e
            
            rcx = ((rcx_1 - r9) s>> 3).d
    else
        rcx = 0
    
    int32_t rdx = arg1[0x9b].d
    char rax_4 = *(arg4 + 0x18)
    
    if (rdx != 1)
        if (rdx != 0)
            sub_140dc1a00(arg1, arg2, arg3, arg4)
        else
            if (rax_4 == 0)
                goto label_141bc326d
            
            if (rax_4 == 1)
                goto label_141bc3275
            
            sub_140dc1a00(arg1, arg2, arg3, arg4)
    else
        int32_t rdx_2
        
        if (rax_4 == 2)
        label_141bc326d:
            rdx_2 = rcx - rax_2
        label_141bc32ec:
            
            if (rdx_2 s< 0 || rdx_2 s>= rdi[1].d)
                sub_140dc1a00(arg1, arg2, arg3, arg4)
            else
                int64_t r9_2 = *arg1
                (*(r9_2 + 0x2b0))(arg1, *rdi + (sx.q(rdx_2) << 3), arg4, r9_2)
                int128_t var_18 = zx.o(0)
                sub_140eb9b00(arg2, &var_18, arg5)
        else
            if (rax_4 == 3)
            label_141bc3275:
                rdx_2 = rcx + rax_2
                
                if (rdx_2 s< 0 || rdx_2 s>= rdi[1].d)
                    int32_t r8_2 = rdi[1].d
                    
                    if (r8_2 s> 0)
                        float zmm2 = 1f f/ float.s(rax_2)
                        arg5.d = float.s(r8_2)
                        int32_t zmm3 = float.s(rcx + 1) f* zmm2
                        arg5.d = arg5.d f* zmm2
                        arg5.d = arg5.d f+ arg5.d
                        
                        if (neg.d(int.d(-0.5f f- (zmm3 f+ zmm3)) s>> 1)
                                s< neg.d(int.d(-0.5f f- arg5.d) s>> 1))
                            rdx_2 = r8_2 - 1
                
                goto label_141bc32ec
            
            sub_140dc1a00(arg1, arg2, arg3, arg4)

return arg2
