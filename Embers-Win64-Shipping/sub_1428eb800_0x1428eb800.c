// 函数: sub_1428eb800
// 地址: 0x1428eb800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t result = 1
int32_t* r12 = nullptr
int32_t* r15 = nullptr
int32_t r13 = 0
int32_t arg_20 = 0
int64_t* r14 = arg3

if (arg2 != 0 && sub_142898c70(arg2) s> 0)
    if (arg1 == 0)
        if (r14 == 0)
            return 0
        
        if (arg1 == 0 || *(arg1 + 0x38) != 0)
            goto label_1428eb876
    else if (*(arg1 + 0x38) != 0)
    label_1428eb876:
        int32_t rbp_1
        void* rsi_1
        
        if (r14 == 0)
            rbp_1 = 0
            void* rax_2 = sub_142898ea0(arg2, 0)
            rsi_1 = rax_2
            r14 = *(rax_2 + 0x118)
            
            if (r14 != 0)
                goto label_1428eb8a3
        else
            rbp_1 = -1
            rsi_1 = nullptr
        label_1428eb8a3:
            
            if (sub_1428eb620(r14) != 0)
            label_1428eb8de:
                int32_t* rcx_3 = *r14
                
                if (rcx_3 != 0)
                    int32_t rdx_1 = *rcx_3
                    
                    if (rdx_1 == 0)
                        arg_20 = 1
                    else if (rdx_1 == 1)
                        r12 = *(rcx_3 + 8)
                
                int32_t* rcx_4 = r14[1]
                
                if (rcx_4 != 0)
                    int32_t rdx_2 = *rcx_4
                    
                    if (rdx_2 == 0)
                        r13 = 1
                    else if (rdx_2 == 1)
                        r15 = *(rcx_4 + 8)
                
                int32_t* r14_1 = arg2
                int32_t rbp_2 = rbp_1 + 1
                
                if (rbp_2 s< sub_142898c70(r14_1))
                    while (true)
                        void* rax_5 = sub_142898ea0(r14_1, rbp_2)
                        rsi_1 = rax_5
                        
                        if (rax_5 == 0)
                            break
                        
                        int64_t* rcx_7 = *(rax_5 + 0x118)
                        
                        if (rcx_7 != 0)
                            if (sub_1428eb620(rcx_7) == 0)
                                if (arg1 == 0)
                                    return 0
                                
                                *(arg1 + 0xb0) = 0x29
                                *(arg1 + 0xac) = rbp_2
                                *(arg1 + 0xb8) = rsi_1
                                int32_t result_3 = (*(arg1 + 0x38))(0, arg1)
                                result = result_3
                                
                                if (result_3 == 0)
                                    return result
                            
                            int64_t* rcx_8 = *(rsi_1 + 0x118)
                            int32_t* rax_7 = *rcx_8
                            int32_t r14_2
                            
                            if (rax_7 != 0 || r12 == 0)
                                r14_2 = arg_20
                            else
                                if (arg1 == 0)
                                    return 0
                                
                                *(arg1 + 0xb0) = 0x2e
                                *(arg1 + 0xac) = rbp_2
                                *(arg1 + 0xb8) = rsi_1
                                int32_t result_4 = (*(arg1 + 0x38))(0, arg1)
                                result = result_4
                                
                                if (result_4 == 0)
                                    return result
                                
                                rcx_8 = *(rsi_1 + 0x118)
                                r12 = nullptr
                                r14_2 = 0
                                arg_20 = 0
                                rax_7 = *rcx_8
                            
                            if (rax_7 != 0 && *rax_7 == 1)
                                int32_t rax_8
                                
                                if (r14_2 == 0)
                                    rax_8 = sub_1428eb6d0(*(rax_7 + 8), r12)
                                
                                if (r14_2 != 0 || rax_8 != 0)
                                    rcx_8 = *(rsi_1 + 0x118)
                                    r12 = *(*rcx_8 + 8)
                                    arg_20 = 0
                                else
                                    if (arg1 == 0)
                                        return 0
                                    
                                    *(arg1 + 0xb0) = 0x2e
                                    *(arg1 + 0xac) = rbp_2
                                    *(arg1 + 0xb8) = rsi_1
                                    int32_t result_5 = (*(arg1 + 0x38))(0, arg1)
                                    result = result_5
                                    
                                    if (result_5 == 0)
                                        return result
                                    
                                    rcx_8 = *(rsi_1 + 0x118)
                            
                            if (rcx_8[1] == 0 && r15 != 0)
                                if (arg1 == 0)
                                    return 0
                                
                                *(arg1 + 0xb0) = 0x2e
                                *(arg1 + 0xac) = rbp_2
                                *(arg1 + 0xb8) = rsi_1
                                int32_t result_6 = (*(arg1 + 0x38))(0, arg1)
                                result = result_6
                                
                                if (result_6 == 0)
                                    return result
                                
                                rcx_8 = *(rsi_1 + 0x118)
                                r15 = nullptr
                                r13 = 0
                            
                            int32_t* rcx_10 = rcx_8[1]
                            
                            if (rcx_10 != 0 && *rcx_10 == 1)
                                int32_t rax_10
                                
                                if (r13 == 0)
                                    rax_10 = sub_1428eb6d0(*(rcx_10 + 8), r15)
                                
                                if (r13 != 0 || rax_10 != 0)
                                    r13 = 0
                                    r15 = *(*(*(rsi_1 + 0x118) + 8) + 8)
                                else
                                    if (arg1 == 0)
                                        return 0
                                    
                                    *(arg1 + 0xb0) = 0x2e
                                    *(arg1 + 0xac) = rbp_2
                                    *(arg1 + 0xb8) = rsi_1
                                    int32_t result_7 = (*(arg1 + 0x38))(0, arg1)
                                    result = result_7
                                    
                                    if (result_7 == 0)
                                        return result
                            
                            r14_1 = arg2
                        else if (r12 != 0 || r15 != 0)
                            if (arg1 == 0)
                                return 0
                            
                            *(arg1 + 0xb0) = 0x2e
                            *(arg1 + 0xac) = rbp_2
                            *(arg1 + 0xb8) = rsi_1
                            int32_t result_2 = (*(arg1 + 0x38))(0, arg1)
                            result = result_2
                            
                            if (result_2 == 0)
                                return result
                        
                        rbp_2 += 1
                        
                        if (rbp_2 s>= sub_142898c70(r14_1))
                            goto label_1428ebb73
                    
                    goto label_1428ebb78
                
            label_1428ebb73:
                
                if (rsi_1 == 0)
                label_1428ebb78:
                    
                    if (arg1 == 0)
                        return 0
                    
                    *(arg1 + 0xb0) = 1
                    return 0
                
                int64_t* rax_13 = *(rsi_1 + 0x118)
                
                if (rax_13 != 0)
                    int32_t* rcx_14 = *rax_13
                    
                    if (rcx_14 == 0 || *rcx_14 != 0)
                    label_1428ebbda:
                        int32_t* rcx_15 = *(*(rsi_1 + 0x118) + 8)
                        
                        if (rcx_15 != 0 && *rcx_15 == 0)
                            if (arg1 == 0)
                                return 0
                            
                            *(arg1 + 0xb0) = 0x2e
                            *(arg1 + 0xac) = rbp_2
                            *(arg1 + 0xb8) = rsi_1
                            return (*(arg1 + 0x38))(0, arg1)
                    else
                        if (arg1 == 0)
                            return 0
                        
                        *(arg1 + 0xb0) = 0x2e
                        *(arg1 + 0xac) = rbp_2
                        *(arg1 + 0xb8) = rsi_1
                        int32_t result_8 = (*(arg1 + 0x38))(0, arg1)
                        result = result_8
                        
                        if (result_8 != 0)
                            goto label_1428ebbda
            else
                if (arg1 == 0)
                    return 0
                
                *(arg1 + 0xb0) = 0x29
                *(arg1 + 0xac) = rbp_1
                *(arg1 + 0xb8) = rsi_1
                int32_t result_1 = (*(arg1 + 0x38))(0, arg1)
                result = result_1
                
                if (result_1 != 0)
                    goto label_1428eb8de
        return result

if (arg1 == 0)
    return 0

*(arg1 + 0xb0) = 1
return 0
