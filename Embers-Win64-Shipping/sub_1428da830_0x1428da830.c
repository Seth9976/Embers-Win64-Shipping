// 函数: sub_1428da830
// 地址: 0x1428da830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)

if (sub_14288fa30(arg3, 1) == 0 && sub_142890300(arg3) == 0)
    if (arg5 != 0)
        *arg5 = 0
    
    int32_t rax_3 = sub_142890210(arg2, 4)
    
    if (rax_3 == 0 && sub_142890210(arg3, rax_3 + 4) == 0)
        sub_1428d8e50(arg4)
        int64_t* r14_1 = sub_1428d8ba0(arg4)
        int64_t* rbp = sub_1428d8ba0(arg4)
        int64_t* rbx = sub_1428d8ba0(arg4)
        int64_t* rax_8 = sub_1428d8ba0(arg4)
        int64_t* r12 = sub_1428d8ba0(arg4)
        int64_t* rsi_1 = sub_1428d8ba0(arg4)
        int64_t* rax_11 = sub_1428d8ba0(arg4)
        int64_t* rbx_1
        int64_t* result
        int64_t* result_2
        
        if (rax_11 == 0)
            rbx_1 = arg4
            result = nullptr
            result_2 = nullptr
        label_1428dae2a:
            
            if (arg1 == 0)
                sub_1428901a0(result_2)
        else
            result_2 = arg1
            
            if (result_2 == 0)
                result_2 = sub_142890500()
            
            if (result_2 == 0)
                rbx_1 = arg4
                result = nullptr
                goto label_1428dae2a
            
            sub_142890900(rbx, 1)
            sub_142890900(rsi_1, 0)
            
            if (sub_142890040(rbp, arg2) == 0)
            label_1428dae1b:
                result = nullptr
            label_1428dae1d:
                rbx_1 = arg4
                goto label_1428dae2a
            
            result = nullptr
            
            if (sub_142890040(r14_1, arg3) == 0)
                goto label_1428dae1d
            
            r14_1[2].d = 0
            int32_t rax_14
            
            if (rbp[2].d == 0)
                rax_14 = sub_1428909a0(rbp, r14_1)
            
            int32_t rax_15
            
            if (rbp[2].d != 0 || rax_14 s>= 0)
                rax_15 = sub_1429084c0(rbp, rbp, r14_1, arg4)
            
            if ((rbp[2].d != 0 || rax_14 s>= 0) && rax_15 == 0)
                goto label_1428dae1d
            
            int32_t rdi_1 = -1
            int32_t rax_16 = sub_142890290(arg3)
            int32_t rax_17
            
            if (rax_16 != 0)
                rax_17 = sub_142890560(arg3)
            
            if (rax_16 != 0 && rax_17 s<= 0x800)
                if (sub_142890300(rbp) == 0)
                    int32_t i
                    
                    do
                        int32_t rdi_2 = 0
                        
                        if (sub_142890240(rbp, 0) == 0)
                            while (true)
                                rdi_2 += 1
                                
                                if (sub_142890290(rbx) != 0 && sub_1428d90b0(rbx, rbx, arg3) == 0)
                                    goto label_1428dae1b
                                
                                if (sub_1428f5900(rbx, rbx) == 0)
                                    goto label_1428dae1b
                                
                                if (sub_142890240(rbp, rdi_2) != 0)
                                    if (rdi_2 s<= 0)
                                        break
                                    
                                    if (sub_1428f5760(rbp, rbp, rdi_2) == 0)
                                        goto label_1428dae1b
                                    
                                    break
                        
                        int32_t rdi_3 = 0
                        
                        if (sub_142890240(r14_1, 0) == 0)
                            while (true)
                                rdi_3 += 1
                                
                                if (sub_142890290(rsi_1) != 0
                                        && sub_1428d90b0(rsi_1, rsi_1, arg3) == 0)
                                    goto label_1428dae1b
                                
                                if (sub_1428f5900(rsi_1, rsi_1) == 0)
                                    goto label_1428dae1b
                                
                                if (sub_142890240(r14_1, rdi_3) != 0)
                                    if (rdi_3 s<= 0)
                                        break
                                    
                                    if (sub_1428f5760(r14_1, r14_1, rdi_3) == 0)
                                        goto label_1428dae1b
                                    
                                    break
                        
                        int64_t* rcx_35
                        int64_t* rdx_15
                        int64_t* r8_6
                        
                        if (sub_1428909a0(rbp, r14_1) s< 0)
                            if (sub_1428d90b0(rsi_1, rsi_1, rbx) == 0)
                                goto label_1428dae1b
                            
                            r8_6 = rbp
                            rdx_15 = r14_1
                            rcx_35 = r14_1
                        else
                            if (sub_1428d90b0(rbx, rbx, rsi_1) == 0)
                                goto label_1428dae1b
                            
                            r8_6 = r14_1
                            rdx_15 = rbp
                            rcx_35 = rbp
                        
                        if (sub_1428d9180(rcx_35, rdx_15, r8_6) == 0)
                            goto label_1428dae1b
                        
                        i = sub_142890300(rbp)
                    while (i == 0)
                
                goto label_1428dad83
            
            if (sub_142890300(rbp) != 0)
            label_1428dad83:
                
                if (sub_1428d9010(rsi_1, arg3, rsi_1) == 0)
                    goto label_1428dae1b
            else
                while (true)
                    int32_t rax_36 = sub_142890560(rbp)
                    int32_t rax_39
                    
                    if (sub_142890560(r14_1) != rax_36)
                        int32_t rdi_5 = sub_142890560(rbp) + 1
                        
                        if (sub_142890560(r14_1) != rdi_5)
                            rax_39 = sub_14291a950(rax_8, r12, r14_1, rbp, arg4)
                        else
                            if (sub_1428f56a0(rax_11, rbp) == 0)
                                goto label_1428dae1b
                            
                            if (sub_1428909a0(r14_1, rax_11) s>= 0)
                                if (sub_1428d9010(r12, r14_1, rax_11) == 0)
                                    goto label_1428dae1b
                                
                                if (sub_1428d8f70(rax_8, rax_11, rbp) == 0)
                                    goto label_1428dae1b
                                
                                if (sub_1428909a0(r14_1, rax_8) s>= 0)
                                    if (sub_142890900(rax_8, 3) == 0)
                                        goto label_1428dae1b
                                    
                                    rax_39 = sub_1428d9010(r12, r12, rbp)
                                else
                                    rax_39 = sub_142890900(rax_8, 2)
                            else
                                if (sub_142890900(rax_8, 1) == 0)
                                    goto label_1428dae1b
                                
                                rax_39 = sub_1428d9010(r12, r14_1, rbp)
                    else
                        if (sub_142890900(rax_8, 1) == 0)
                            goto label_1428dae1b
                        
                        rax_39 = sub_1428d9010(r12, r14_1, rbp)
                    
                    if (rax_39 == 0)
                        goto label_1428dae1b
                    
                    int64_t* rdi_7 = r14_1
                    r14_1 = rbp
                    rbp = r12
                    int64_t* rdx_26
                    
                    if (sub_1428902b0(rax_8) == 0)
                        int32_t rax_52
                        
                        if (sub_1428902d0(rax_8, 2) == 0)
                            if (sub_1428902d0(rax_8, 4) != 0)
                                rax_52 = sub_1428f5510(rdi_7, rbx, 2)
                            else if (rax_8[1].d != 1)
                                rax_52 = sub_1428d9290(rdi_7, rax_8, rbx, arg4)
                            else
                                if (sub_142890040(rdi_7, rbx) == 0)
                                    goto label_1428dae1b
                                
                                rax_52 = sub_1428f5360(rdi_7, **rax_8)
                        else
                            rax_52 = sub_1428f56a0(rdi_7, rbx)
                        
                        if (rax_52 == 0)
                            goto label_1428dae1b
                        
                        rdx_26 = rdi_7
                    else
                        rdx_26 = rbx
                    
                    if (sub_1428d8f70(rdi_7, rdx_26, rsi_1) == 0)
                        goto label_1428dae1b
                    
                    r12 = rsi_1
                    rsi_1 = rbx
                    rbx = rdi_7
                    rdi_1 = neg.d(rdi_1)
                    
                    if (sub_142890300(rbp) != 0)
                        if (rdi_1 s>= 0)
                            break
                        
                        goto label_1428dad83
            
            if (sub_1428902b0(r14_1) == 0)
                result = nullptr
                rbx_1 = arg4
                
                if (arg5 != 0)
                    *arg5 = 1
                
                goto label_1428dae2a
            
            int32_t rax_59
            
            if (rsi_1[2].d == 0)
                rax_59 = sub_1428909a0(rsi_1, arg3)
            
            int64_t* result_1
            bool cond:0_1
            
            if (rsi_1[2].d != 0 || rax_59 s>= 0)
                rbx_1 = arg4
                result_1 = result_2
                cond:0_1 = sub_1429084c0(result_1, rsi_1, arg3, rbx_1) == 0
            else
                result_1 = result_2
                rbx_1 = arg4
                cond:0_1 = sub_142890040(result_1, rsi_1) == 0
            
            if (cond:0_1)
                result = nullptr
                result_2 = result_1
                goto label_1428dae2a
            
            result = result_1
        sub_1428d8a60(rbx_1)
        return result
    
    return sub_1428da550(arg1, arg2, arg3, arg4) __tailcall

if (arg5 != 0)
    *arg5 = 1

return 0
