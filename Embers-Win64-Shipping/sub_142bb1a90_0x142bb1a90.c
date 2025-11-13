// 函数: sub_142bb1a90
// 地址: 0x142bb1a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0xa0)
int32_t i = 0
void* rsi = *(arg1 + 0x410)
int64_t var_48 = 0
int64_t rax = r14[6]
int32_t rax_1 = sub_142b97060(r14, arg2, arg4)
int32_t arg_8 = rax_1

if (rax_1 == 0)
    int16_t rax_2 = sub_142b96f00(r14, &arg_8)
    
    if (arg_8 == 0)
        if (rax_2 == 1)
            int32_t rax_3 = sub_142b96d30(r14, &arg_8)
            
            if (arg_8 == 0)
                uint32_t r9_1 = zx.d(sub_142b96f00(r14, &arg_8))
                *arg3 = r9_1
                
                if (arg_8 == 0)
                    if (r9_1 != 0)
                        int64_t rax_5 = sub_142b99a90(rax, 4, 0, r9_1, 0, &arg_8)
                        var_48 = rax_5
                        
                        if (arg_8 == 0)
                            if (*arg3 u> 0)
                                do
                                    *(rax_5 + (zx.q(i) << 2)) = sub_142b96d30(r14, &arg_8)
                                    
                                    if (arg_8 != 0)
                                        goto label_142bb1f6d
                                    
                                    i += 1
                                while (i u< *arg3)
                            
                            int32_t rbx_1 = arg2
                            int32_t rax_7 = sub_142b97060(r14, rax_3 + rbx_1, arg4)
                            arg_8 = rax_7
                            
                            if (rax_7 == 0)
                                arg3[4].w = sub_142b96f00(r14, &arg_8)
                                
                                if (arg_8 == 0)
                                    int16_t rax_9 = sub_142b96f00(r14, &arg_8)
                                    bool cond:1_1 = arg_8 != 0
                                    uint32_t r9_2 = zx.d(rax_9)
                                    arg3[5] = r9_2
                                    
                                    if (not(cond:1_1))
                                        if (zx.d(arg3[4].w) == **(rsi + 0x18))
                                            int64_t rdi_2 = rax
                                            *(arg3 + 0x18) =
                                                sub_142b99a90(rdi_2, 8, 0, r9_2, 0, &arg_8)
                                            
                                            if (arg_8 == 0)
                                                int32_t i_1 = 0
                                                
                                                if (arg3[5] u> 0)
                                                    do
                                                        uint64_t rbx = zx.q(i_1) << 3
                                                        *(rbx + *(arg3 + 0x18)) = sub_142b99a90(
                                                            rdi_2, 0xc, 0, zx.d(arg3[4].w), 0, 
                                                            &arg_8)
                                                        
                                                        if (arg_8 != 0)
                                                            goto label_142bb1f6d
                                                        
                                                        int64_t r12_2 = *(rbx + *(arg3 + 0x18))
                                                        int32_t j = 0
                                                        
                                                        if (0 u< arg3[4].w)
                                                            do
                                                                int16_t rax_15 =
                                                                    sub_142b96f00(r14, &arg_8)
                                                                
                                                                if (arg_8 != 0)
                                                                    goto label_142bb1f6d
                                                                
                                                                int16_t rax_16 =
                                                                    sub_142b96f00(r14, &arg_8)
                                                                
                                                                if (arg_8 != 0)
                                                                    goto label_142bb1f6d
                                                                
                                                                int16_t rax_17 =
                                                                    sub_142b96f00(r14, &arg_8)
                                                                
                                                                if (arg_8 != 0)
                                                                    goto label_142bb1f6d
                                                                
                                                                uint64_t j_2 = zx.q(j)
                                                                j += 1
                                                                uint64_t rdx_10 = j_2 * 3
                                                                *(r12_2 + (rdx_10 << 2)) =
                                                                    sx.d(rax_15) << 2
                                                                *(r12_2 + (rdx_10 << 2) + 4) =
                                                                    sx.d(rax_16) << 2
                                                                *(r12_2 + (rdx_10 << 2) + 8) =
                                                                    sx.d(rax_17) << 2
                                                            while (j u< zx.d(arg3[4].w))
                                                            
                                                            rdi_2 = rax
                                                        
                                                        i_1 += 1
                                                    while (i_1 u< arg3[5])
                                                    
                                                    rbx_1 = arg2
                                                
                                                int64_t rax_21 =
                                                    sub_142b99a90(rdi_2, 0x18, 0, *arg3, 0, &arg_8)
                                                bool cond:2_1 = arg_8 != 0
                                                *(arg3 + 8) = rax_21
                                                
                                                if (not(cond:2_1))
                                                    int32_t r12_3 = 0
                                                    
                                                    if (*arg3 u> 0)
                                                        while (true)
                                                            uint64_t rdx_11 = zx.q(r12_3)
                                                            uint32_t* rsi_2 =
                                                                *(arg3 + 8) + rdx_11 * 0x18
                                                            int32_t rax_24 = sub_142b97060(r14, 
                                                                *(var_48 + (rdx_11 << 2)) + rbx_1, arg4)
                                                            arg_8 = rax_24
                                                            
                                                            if (rax_24 != 0)
                                                                break
                                                            
                                                            *rsi_2 =
                                                                zx.d(sub_142b96f00(r14, &arg_8))
                                                            
                                                            if (arg_8 != 0)
                                                                break
                                                            
                                                            uint32_t r15_1 =
                                                                zx.d(sub_142b96f00(r14, &arg_8))
                                                            
                                                            if (arg_8 != 0)
                                                                break
                                                            
                                                            uint32_t r9_5 =
                                                                zx.d(sub_142b96f00(r14, &arg_8))
                                                            rsi_2[1] = r9_5
                                                            
                                                            if (arg_8 != 0)
                                                                break
                                                            
                                                            if (r15_1 u> r9_5 || r9_5 u> arg3[5])
                                                            label_142bb1f4c:
                                                                arg_8 = 8
                                                                break
                                                            
                                                            int32_t i_2 = 0
                                                            *(rsi_2 + 8) = sub_142b99a90(rdi_2, 4, 
                                                                0, r9_5, 0, &arg_8)
                                                            
                                                            if (arg_8 != 0)
                                                                break
                                                            
                                                            if (rsi_2[1] u> 0)
                                                                do
                                                                    uint32_t* rdx_18 = zx.q(i_2) << 2
                                                                    *(rdx_18 + *(rsi_2 + 8)) =
                                                                        zx.d(sub_142b96f00(r14, &arg_8))
                                                                    
                                                                    if (arg_8 != 0)
                                                                        goto label_142bb1f6d
                                                                    
                                                                    if (*(rdx_18 + *(rsi_2 + 8))
                                                                            u>= arg3[5])
                                                                        goto label_142bb1f4c
                                                                    
                                                                    i_2 += 1
                                                                while (i_2 u< rsi_2[1])
                                                            
                                                            int32_t j_1 = 0
                                                            int64_t rax_34
                                                            int512_t zmm0_1
                                                            rax_34, zmm0_1 = sub_142b99a90(rdi_2, 
                                                                2, 0, rsi_2[1] * *rsi_2, 0, &arg_8)
                                                            *(rsi_2 + 0x10) = rax_34
                                                            
                                                            if (arg_8 != 0)
                                                                break
                                                            
                                                            int32_t i_3 = 0
                                                            
                                                            if (rsi_2[1] * *rsi_2 != 0)
                                                                do
                                                                    if (r15_1 != 0)
                                                                        do
                                                                            int16_t rax_37 =
                                                                                sub_142b96f00(r14, &arg_8)
                                                                            
                                                                            if (arg_8 != 0)
                                                                                goto label_142bb1f6d
                                                                            
                                                                            j_1 += 1
                                                                            uint64_t i_5 = zx.q(i_3)
                                                                            i_3 += 1
                                                                            *(*(rsi_2 + 0x10) + (i_5 << 1)) = rax_37
                                                                        while (j_1 u< r15_1)
                                                                    
                                                                    while (j_1 u< rsi_2[1])
                                                                        char rax_38 =
                                                                            sub_142b96a20(r14, &arg_8, zmm0_1)
                                                                        
                                                                        if (arg_8 != 0)
                                                                            goto label_142bb1f6d
                                                                        
                                                                        j_1 += 1
                                                                        uint64_t i_4 = zx.q(i_3)
                                                                        i_3 += 1
                                                                        *(*(rsi_2 + 0x10) + (i_4 << 1)) =
                                                                            sx.w(rax_38)
                                                                    
                                                                    j_1 = 0
                                                                while (i_3 u< rsi_2[1] * *rsi_2)
                                                            
                                                            r12_3 += 1
                                                            
                                                            if (r12_3 u>= *arg3)
                                                                break
                                                            
                                                            rdi_2 = rax
                                                            rbx_1 = arg2
                                                            continue
                                        else
                                            arg_8 = 8
                    else
                        arg_8 = 8
        else
            arg_8 = 8

label_142bb1f6d:
sub_142b99980(rax, var_48)
return zx.q(arg_8)
