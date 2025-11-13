// 函数: sub_1426034dd
// 地址: 0x1426034dd
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    arg4 -= 1
label_1426034e5:
    arg9 -= 1
    
    while (true)
        int64_t r8 = arg11
        
        for (void* i = *(*(arg10 + 0x80)
                + ((sx.q(arg9 * 0xd8163841 - arg4 * 0x72594cbd) & sx.q(*(arg10 + 0x38))) << 3)); i != 0; 
                i = *(i + 0x68))
            void* rax_4 = *(i + 8)
            
            if (rax_4 != 0 && *(rax_4 + 8) == arg4 && *(rax_4 + 0xc) == arg9 && r8 s< arg5)
                *(arg8 + (r8 << 3)) = i
                r8 += 1
        
        int64_t rbx = arg11
        int32_t arg_44
        
        if (arg5 s> 0)
            int32_t rax_6 = arg7 & 1
            arg_44 = rax_6
            int32_t r14_1 = (arg7 - 4) & 7
            
            do
                if (rax_6 == 0)
                    sub_142605c60(arg10, arg12, *(arg8 + (rbx << 3)), arg7, arg6)
                    sub_142605c60(arg10, *(arg8 + (rbx << 3)), arg12, r14_1, arg6)
                
                sub_142603d30(arg13, arg12, *(arg8 + (rbx << 3)))
                sub_142606150(arg10, arg12, *(arg8 + (rbx << 3)), arg7, arg6)
                sub_142606150(arg10, *(arg8 + (rbx << 3)), arg12, r14_1, arg6)
                rax_6 = arg_44
                rbx += 1
            while (rbx s< arg5)
            
            arg11 = 0
        
        arg7 += 1
        
        if (arg7 s>= 8)
            void* rbp = arg13
            
            if (rbp != 0)
                void* rax_7 = *(arg12 + 8)
                int32_t i_1 = arg11.d
                bool cond:0_1 = *(rax_7 + 0x38) s<= 0
                int16_t arg_40 = *(rax_7 + 0x44)
                int32_t arg_48 = *(rax_7 + 0x40)
                
                if (not(cond:0_1))
                    void* rsi = rbp + 0x408
                    int16_t rbp_1 = arg_40
                    
                    do
                        int32_t* rdi_2 = (sx.q(i_1) << 6) + *(arg12 + 0x50)
                        qsort(rsi - 0x408, sx.q(*(rsi - 0x208)), 0x10, sub_142616350)
                        qsort(rsi - 0x200, sx.q(*rsi), 0x10, sub_142616350)
                        arg_44 = arg11.d
                        uint64_t arg_28 = &arg_40
                        arg_40 = arg11.w
                        char arg_20
                        arg_20.q = &arg_44
                        void arg_180
                        sub_142606bc0(arg12, rsi - 0x408, &arg_180, 0x3f, arg_20, arg_28)
                        int32_t rbx_1 = arg_44
                        arg_28.w = rbp_1
                        arg_20.d = rbx_1
                        sub_1426070b0(arg10, arg12, rdi_2, &arg_180, arg_20, arg_28.w, arg_48)
                        rsi += 0x410
                        rbp_1 += arg_40
                        i_1 += 1
                        arg_48 += rbx_1
                    while (i_1 s< *(*(arg12 + 8) + 0x38))
                    
                    rbp = arg13
                
                data_143b50298(rbp)
            
            if (arg15 != 0)
                char r8_8 = (*(arg10 + 0xa0)).b
                int64_t rax_10
                int64_t rdx_11
                rdx_11:rax_10 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg12 - *(arg10 + 0x90))
                int64_t rdx_12 = rdx_11 s>> 5
                *arg15 = zx.q(*arg12) << ((*(arg10 + 0x9c)).b + r8_8)
                    | zx.q((rdx_12 u>> 0x3f).d + rdx_12.d) << r8_8
            
            if (arg17 != 0)
                data_143b50298(arg17)
            
            __security_check_cookie(arg18 ^ &__return_addr)
            return 0x40000000
        
        arg5 = sx.q(sub_14260f910(arg10, *(arg14 + 8), *(arg14 + 0xc), arg7))
        void arg_70
        
        if (arg5.d s>= 0x20)
            void* rax_18
            
            if (arg16 s>= arg5.d)
                rax_18 = arg17
            else
                if (arg17 != 0)
                    data_143b50298(arg17)
                
                rax_18 = data_143b50290(zx.q((arg5 << 3).d), 1)
                arg17 = rax_18
                arg16 = arg5.d
            
            arg8 = rax_18
        else
            arg8 = &arg_70
        arg4 = *(arg14 + 8)
        arg9 = *(arg14 + 0xc)
        
        switch (arg7)
            case 0
                arg4 += 1
                continue
            case 1
                arg4 += 1
                arg9 += 1
                continue
            case 2
                arg9 += 1
                continue
            case 3
                arg4 -= 1
                arg9 += 1
                continue
            case 4
                arg4 -= 1
                continue
            case 5
                break
            case 6
                goto label_1426034e5
            case 7
                arg4 += 1
                goto label_1426034e5
