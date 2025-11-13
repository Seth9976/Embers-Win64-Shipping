// 函数: sub_142bf0ab0
// 地址: 0x142bf0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int32_t* rax = sub_142b99860(arg2, 0x60, &arg_10)

if (arg_10 == 0)
    void* const rdx = &data_143698cd0
    
    if (arg3 != 0)
        rdx = arg3
    
    *(rax + 0x30) = rdx
    rax[3].w = 0x7fff
    rax[0x16] = *(arg1 + 8)
    *(rax + 0x50) = arg2
    *(rax + 0x38) = 0
    *(rax + 0x40) = 0
    *(rax + 0x48) = arg2
    void var_28
    int32_t rax_1 = sub_142beff40(arg1, sub_142bef7d0, rax, &var_28)
    arg_10 = rax_1
    
    if (rax_1 != 0)
        goto label_142bf0c35
    
    void* rcx_3 = *(rax + 0x28)
    
    if (rcx_3 != 0)
        if (*(rcx_3 + 0x20) != 8)
            *(rcx_3 + 0x24) = *(rcx_3 + 8)
        
        if (**(rax + 0x30) != 0)
            void* rdx_1 = *(rax + 0x28)
            
            if (*(rdx_1 + 0x38) u> 0 || *(rdx_1 + 0x4c) u> 0)
                int32_t r8_2 = sx.d(rax[4].w)
                int32_t r9_1 = sx.d(rax[3].w)
                
                if (r8_2 - r9_1 != zx.d(*(rdx_1 + 8)))
                    r8_2.w -= r9_1.w
                    *(rdx_1 + 8) = r8_2.w
                
                void* rax_5 = *(rax + 0x28)
                int16_t rcx_6 = rax[3].w
                
                if (*(rax_5 + 0xc) != rcx_6)
                    *(rax_5 + 0xc) = rcx_6
                
                void* rax_6 = *(rax + 0x28)
                int16_t rcx_7 = *(rax + 0x12)
                
                if (*(rax_6 + 0x10) != rcx_7)
                    *(rax_6 + 0x10) = rcx_7
                
                void* rax_7 = *(rax + 0x28)
                int16_t rcx_8 = rax[5].w
                
                if (*(rax_7 + 0x12) != rcx_8)
                    *(rax_7 + 0x12) = rcx_8
                    *(*(rax + 0x28) + 0xe) = neg.w(rax[5].w)
                
                int32_t rdx_2 = sx.d(rax[5].w)
                int32_t r8_3 = sx.d(*(rax + 0x12))
                void* r9_2 = *(rax + 0x28)
                
                if (r8_3 + rdx_2 != zx.d(*(r9_2 + 0xa)))
                    rdx_2.w += r8_3.w
                    *(r9_2 + 0xa) = rdx_2.w
    
    char rax_10 = (*rax).b
    
    if ((rax_10 & 1) == 0)
        void* rax_14 = *(rax + 0x28)
        
        if (rax_14 == 0)
            int32_t rax_20 = arg_10
            
            if (rax_20 == 0)
                rax_20 = 3
            
            arg_10 = rax_20
            *arg4 = *(rax + 0x28)
        else
            int32_t r8_4 = *(rax_14 + 0x70)
            
            if (r8_4 == 0)
                *arg4 = *(rax + 0x28)
            else
                *(*(rax + 0x28) + 0x68) =
                    sub_142b99a90(*(rax_14 + 0x88), 1, r8_4, r8_4 + 1, *(rax_14 + 0x68), &arg_10)
                
                if (arg_10 != 0)
                    goto label_142bf0c35
                
                void* rax_17 = *(rax + 0x28)
                *(zx.q(*(rax_17 + 0x70)) + *(rax_17 + 0x68)) = 0
                *arg4 = *(rax + 0x28)
    else
        int32_t rax_11
        rax_11.b = (rax_10 & 0x20) != 0
        arg_10 = rax_11 + 0xb9
    label_142bf0c35:
        sub_142bf0550(*(rax + 0x28))
        sub_142b99980(arg2, *(rax + 0x28))
        *(rax + 0x28) = 0

if (rax != 0)
    int64_t rcx_13 = *(rax + 0x48)
    
    if (rcx_13 != 0)
        sub_142b99980(rcx_13, *(rax + 0x38))
        __builtin_memset(&rax[0xe], 0, 0x18)
    
    sub_142b99980(arg2, *(rax + 0x18))
    *(rax + 0x18) = 0
    sub_142b99980(arg2, rax)

return zx.q(arg_10)
