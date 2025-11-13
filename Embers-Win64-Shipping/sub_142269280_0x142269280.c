// 函数: sub_142269280
// 地址: 0x142269280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 8)
int16_t* r14 = arg3
int64_t result

if (rsi != 0)
label_1422692f8:
    void* rax_2
    int64_t rcx_2
    rax_2, rcx_2 = (*(*rsi + 0x150))(rsi, arg2, arg3)
    void* rax_3
    void* rdx
    
    if (data_143f5b298 != 0 && arg1 != 0x28)
        rax_3 = sub_142531230()
        rdx = *(arg1 - 0x18)
        rcx_2 = sx.q(*(rax_3 + 0x38))
    
    if (data_143f5b298 == 0 || arg1 == 0x28 || rcx_2.d s> *(rdx + 0x38)
            || *(*(rdx + 0x30) + (rcx_2 << 3)) != rax_3 + 0x30 || *(arg1 + 0x48) == 0)
        rcx_2.b = 1
    else
        rcx_2.b = 0
    
    void* rax_5 = *(arg1 + 8)
    int64_t* rbx_2
    
    if (rax_5 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = *(rax_5 + 0x250)
        
        if (rbx_2 == 0)
            rbx_2 = *(rax_5 + 0x548)
    
    if (rcx_2.b != 0)
        result = sub_142432bc0(rax_2, rax_2, r14, arg4)
    
    if (rcx_2.b != 0 && result.b != 0)
        result.b = 1
    else
        void* rax_6 = *(arg1 + 8)
        
        if (rax_6 == 0)
        label_1422693bc:
            result = (*(*rsi + 0x228))(rsi, r14, arg4, rbx_2)
            
            if (result.b != 0)
                result.b = 1
            else
                if (rbx_2 != 0)
                    result = (*(*rbx_2 + 0x228))(rbx_2, r14, arg4, rbx_2)
                
                if (rbx_2 != 0 && result.b != 0)
                    result.b = 1
                else
                    void* rax_10 = *(arg1 + 8)
                    
                    if (rax_10 == 0)
                    label_14226941b:
                        int64_t* rcx_8 = *(rax_2 + 0x128)
                        
                        if (rcx_8 != 0)
                            result = (*(*rcx_8 + 0x228))(rcx_8, r14, arg4, rbx_2)
                        
                        if (rcx_8 != 0 && result.b != 0)
                            result.b = 1
                        else
                            result = *(arg1 + 8)
                            
                            if (result == 0)
                            label_142269468:
                                int64_t* rcx_10 = *(rax_2 + 0x130)
                                
                                if (rcx_10 != 0)
                                    result = (*(*rcx_10 + 0x228))(rcx_10, r14, arg4, rbx_2)
                                
                                if (rcx_10 != 0 && result.b != 0)
                                    result.b = 1
                                else
                                    void* rcx_11 = *(arg1 + 8)
                                    
                                    if (rcx_11 == 0)
                                        result.b = 0
                                    else
                                        int64_t* rcx_12 = *(rcx_11 + 0x2b8)
                                        
                                        if (rcx_12 == 0)
                                            result.b = 0
                                        else if ((*(*rcx_12 + 0x228))(rcx_12, r14, arg4, rbx_2).b
                                                != 0)
                                            result.b = 1
                                        else
                                            result.b = 0
                            else
                                int64_t* rcx_9 = *(result + 0x338)
                                
                                if (rcx_9 == 0)
                                    goto label_142269468
                                
                                result = (*(*rcx_9 + 0x228))(rcx_9, r14, arg4, rbx_2)
                                
                                if (result.b == 0)
                                    goto label_142269468
                                
                                result.b = 1
                    else
                        int64_t* rcx_7 = *(rax_10 + 0x2b0)
                        
                        if (rcx_7 == 0)
                            goto label_14226941b
                        
                        result = (*(*rcx_7 + 0x228))(rcx_7, r14, arg4, rbx_2)
                        
                        if (result.b == 0)
                            goto label_14226941b
                        
                        result.b = 1
        else
            int64_t* rcx_4 = *(rax_6 + 0x348)
            
            if (rcx_4 == 0)
                goto label_1422693bc
            
            if ((*(*rcx_4 + 0x228))(rcx_4, r14, arg4, rbx_2).b == 0)
                goto label_1422693bc
            
            result.b = 1
else if (arg1 == 0x28)
    result.b = 0
else
    void* rax = sub_14254f450()
    arg2 = *(arg1 - 0x18)
    arg3 = rax + 0x30
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(arg2 + 0x38))
        result.b = 0
    else if (*(*(arg2 + 0x30) + (result << 3)) != arg3)
        result.b = 0
    else
        rsi = *(arg1 + 0x70)
        
        if (rsi != 0)
            goto label_1422692f8
        
        result.b = 0

return result
