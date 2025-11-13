// 函数: sub_142bc2510
// 地址: 0x142bc2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg2[6]
int32_t rbx = 0
uint64_t r13 = 0
int64_t var_50 = r12
int32_t arg_20 = 3

if (arg4 == 0)
label_142bc28b5:
    arg_20 = 0
else
    int32_t rax_1 = sub_142b97060(arg2, arg3 + arg4, arg5)
    arg_20 = rax_1
    
    if (rax_1 == 0)
        int32_t rax_2 = sub_142b970b0(arg2, 2)
        arg_20 = rax_2
        
        if (rax_2 == 0)
            int32_t rax_3 = sub_1408e52d0(arg2)
            uint32_t rcx_4 = zx.d(sub_142b96f00(arg2, &arg_20))
            
            if (arg_20 == 0)
                if (rcx_4 == 1)
                    int32_t rax_5 = sub_142b96d30(arg2, &arg_20)
                    
                    if (arg_20 == 0)
                        uint32_t r9 = zx.d(sub_142b96f00(arg2, &arg_20))
                        *arg1 = r9
                        
                        if (arg_20 == 0)
                            uint64_t rax_7 = sub_142b99a90(r12, 4, 0, r9, 0, &arg_20)
                            
                            if (arg_20 != 0)
                                r13 = rax_7
                            else if (*arg1 u<= 0)
                            label_142bc2643:
                                int32_t rbx_2 = rax_3
                                int32_t rax_9 = sub_142b97060(arg2, rax_5 + rbx_2, arg5)
                                arg_20 = rax_9
                                
                                if (rax_9 != 0)
                                    r13 = rax_7
                                else
                                    arg1[4].w = sub_142b96f00(arg2, &arg_20)
                                    
                                    if (arg_20 != 0)
                                        r13 = rax_7
                                    else
                                        uint32_t r9_1 = zx.d(sub_142b96f00(arg2, &arg_20))
                                        arg1[5] = r9_1
                                        
                                        if (arg_20 != 0)
                                            r13 = rax_7
                                        else
                                            int32_t r15_2 = 0
                                            *(arg1 + 0x18) =
                                                sub_142b99a90(r12, 8, 0, r9_1, 0, &arg_20)
                                            
                                            if (arg_20 != 0)
                                            label_142bc28be:
                                                r13 = rax_7
                                            else
                                                if (arg1[5] u> 0)
                                                    while (true)
                                                        int64_t* rdi_2 =
                                                            *(arg1 + 0x18) + (zx.q(r13.d) << 3)
                                                        int64_t* var_48_1 = rdi_2
                                                        *rdi_2 = sub_142b99a90(r12, 0xc, 0, 
                                                            zx.d(arg1[4].w), 0, &arg_20)
                                                        
                                                        if (arg_20 != 0)
                                                            goto label_142bc28be
                                                        
                                                        int32_t rbx_1 = 0
                                                        
                                                        if (0 u< arg1[4].w)
                                                            while (true)
                                                                int32_t* rdi_3 =
                                                                    *rdi_2 + zx.q(rbx_1) * 0xc
                                                                int16_t rax_17 =
                                                                    sub_142b96f00(arg2, &arg_20)
                                                                
                                                                if (arg_20 == 0)
                                                                    int16_t rax_18 =
                                                                        sub_142b96f00(arg2, &arg_20)
                                                                    
                                                                    if (arg_20 == 0)
                                                                        int16_t rax_19 =
                                                                            sub_142b96f00(arg2, &arg_20)
                                                                        
                                                                        if (arg_20 == 0)
                                                                            rbx_1 += 1
                                                                            rdi_3[2] = sx.d(rax_19) << 2
                                                                            *rdi_3 = sx.d(rax_17) << 2
                                                                            rdi_3[1] = sx.d(rax_18) << 2
                                                                            rdi_2 = var_48_1
                                                                            
                                                                            if (rbx_1 u< zx.d(arg1[4].w))
                                                                                continue
                                                                            
                                                                            r12 = var_50
                                                                            r15_2 = 0
                                                                            break
                                                                
                                                                r12 = var_50
                                                                goto label_142bc28be
                                                        
                                                        r13 = zx.q(r13.d + 1)
                                                        
                                                        if (r13.d u>= arg1[5])
                                                            rbx_2 = rax_3
                                                            break
                                                
                                                int64_t rax_23 =
                                                    sub_142b99a90(r12, 0x10, 0, *arg1, 0, &arg_20)
                                                bool cond:0_1 = arg_20 != 0
                                                r13 = rax_7
                                                *(arg1 + 8) = rax_23
                                                
                                                if (not(cond:0_1))
                                                    if (*arg1 u<= 0)
                                                    label_142bc28b5_1:
                                                        arg_20 = 0
                                                    else
                                                        while (true)
                                                            uint32_t* rdi_6 =
                                                                (zx.q(r15_2) << 4) + *(arg1 + 8)
                                                            int32_t rax_25 = sub_142b97060(arg2, 
                                                                *(r13 + (zx.q(r15_2) << 2)) + rbx_2, 
                                                                arg5)
                                                            arg_20 = rax_25
                                                            
                                                            if (rax_25 != 0)
                                                                break
                                                            
                                                            int32_t rax_26 =
                                                                sub_142b970b0(arg2, rax_25 + 4)
                                                            arg_20 = rax_26
                                                            
                                                            if (rax_26 != 0)
                                                                break
                                                            
                                                            uint32_t r9_4 =
                                                                zx.d(sub_142b96f00(arg2, &arg_20))
                                                            *rdi_6 = r9_4
                                                            
                                                            if (arg_20 != 0)
                                                                break
                                                            
                                                            int32_t i = 0
                                                            *(rdi_6 + 8) = sub_142b99a90(r12, 4, 0, 
                                                                r9_4, 0, &arg_20)
                                                            
                                                            if (arg_20 != 0)
                                                                break
                                                            
                                                            if (*rdi_6 u> 0)
                                                                do
                                                                    *(*(rdi_6 + 8) + (zx.q(i) << 2)) =
                                                                        zx.d(sub_142b96f00(arg2, &arg_20))
                                                                    
                                                                    if (arg_20 != 0)
                                                                        goto label_142bc28d2
                                                                    
                                                                    i += 1
                                                                while (i u< *rdi_6)
                                                            
                                                            rbx_2 = rax_3
                                                            r15_2 += 1
                                                            
                                                            if (r15_2 u>= *arg1)
                                                                goto label_142bc28b5_1
                            else
                                while (true)
                                    *(rax_7 + (zx.q(rbx) << 2)) = sub_142b96d30(arg2, &arg_20)
                                    
                                    if (arg_20 != 0)
                                        break
                                    
                                    rbx += 1
                                    
                                    if (rbx u>= *arg1)
                                        goto label_142bc2643
                                
                                r13 = rax_7
                else
                    arg_20 = 3

label_142bc28d2:
sub_142b99980(r12, r13)
int32_t rax_31 = arg_20

if (rax_31 == 0)
    return rax_31

sub_142bc2440(arg1, r12)
return arg_20
