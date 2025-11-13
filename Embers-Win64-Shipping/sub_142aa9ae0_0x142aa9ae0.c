// 函数: sub_142aa9ae0
// 地址: 0x142aa9ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t var_48 = -2
int32_t* r13 = arg4

if (*arg4 s<= 0)
    bool cond:0_1
    
    if ((*(arg1 + 8) & 1) == 0)
        int16_t rax = *(arg1 + 8)
        int32_t r8_1
        
        if (rax s< 0)
            r8_1 = *(arg1 + 0xc)
        else
            r8_1 = sx.d(rax) s>> 5
        
        int16_t rax_1 = *(arg2 + 8)
        int32_t rax_3
        
        if (rax_1 s< 0)
            rax_3 = *(arg2 + 0xc)
        else
            rax_3 = sx.d(rax_1) s>> 5
        
        if ((*(arg2 + 8) & 1) != 0 || r8_1 != rax_3)
            goto label_142aa9b6e
        
        result = sub_142a490e0(arg1, arg2, r8_1)
        cond:0_1 = result.b != 0
        goto label_142aa9b68
    
    result.b = *(arg2 + 8) & 1
    cond:0_1 = result.b != 0
label_142aa9b68:
    
    if (not(cond:0_1))
    label_142aa9b6e:
        int64_t** var_78 = arg3
        int64_t** var_60 = arg3
        void* rax_4 = sub_142aa9f50(&var_78)
        void* r15_1 = rax_4
        void* i_2 = sub_142aa9f50(&var_60)
        void* i_4 = i_2
        void* const rdi_1 = r15_1
        void* const i = i_2
        void* const* result_2 = nullptr
        
        if (r15_1 != 0)
            void* const r12_1 = arg1
            void* const i_1 = arg2
            
            while (i != 0)
                bool cond:1_1
                
                if ((*(rdi_1 + 8) & 1) == 0)
                    int16_t rax_6 = *(rdi_1 + 8)
                    int32_t r8_3
                    
                    if (rax_6 s< 0)
                        r8_3 = *(rdi_1 + 0xc)
                    else
                        r8_3 = sx.d(rax_6) s>> 5
                    
                    int16_t rax_7 = *(arg2 + 8)
                    int32_t rax_9
                    
                    if (rax_7 s< 0)
                        rax_9 = *(arg2 + 0xc)
                    else
                        rax_9 = sx.d(rax_7) s>> 5
                    
                    if ((*(arg2 + 8) & 1) == 0 && r8_3 == rax_9)
                        result = sub_142a490e0(rdi_1, arg2, r8_3)
                        cond:1_1 = result.b != 0
                        goto label_142aa9c3c
                else
                    result.b = *(arg2 + 8) & 1
                    cond:1_1 = result.b != 0
                label_142aa9c3c:
                    
                    if (cond:1_1)
                        return result
                bool cond:2_1
                
                if ((*(i + 8) & 1) == 0)
                    int16_t rax_10 = *(i + 8)
                    int32_t r8_5
                    
                    if (rax_10 s< 0)
                        r8_5 = *(i + 0xc)
                    else
                        r8_5 = sx.d(rax_10) s>> 5
                    
                    int16_t rax_11 = *(arg1 + 8)
                    int32_t rax_13
                    
                    if (rax_11 s< 0)
                        rax_13 = *(arg1 + 0xc)
                    else
                        rax_13 = sx.d(rax_11) s>> 5
                    
                    if ((*(arg1 + 8) & 1) == 0 && r8_5 == rax_13)
                        result = sub_142a490e0(i, arg1, r8_5)
                        cond:2_1 = result.b != 0
                        goto label_142aa9c91
                else
                    result.b = *(arg1 + 8) & 1
                    cond:2_1 = result.b != 0
                label_142aa9c91:
                    
                    if (cond:2_1)
                        return result
                void* rax_15 = sub_142a86c30(*var_78, r12_1)
                rdi_1 = rax_15
                
                if (rax_15 == 0)
                    rdi_1 = nullptr
                else
                    bool cond:3_1
                    
                    if ((*(rax_15 + 8) & 1) == 0)
                        int16_t rax_17 = *(rax_15 + 8)
                        int32_t r8_7
                        
                        if (rax_17 s< 0)
                            r8_7 = *(rdi_1 + 0xc)
                        else
                            r8_7 = sx.d(rax_17) s>> 5
                        
                        int16_t rax_18 = *(arg1 + 8)
                        int32_t rax_20
                        
                        if (rax_18 s< 0)
                            rax_20 = *(arg1 + 0xc)
                        else
                            rax_20 = sx.d(rax_18) s>> 5
                        
                        if ((*(arg1 + 8) & 1) == 0 && r8_7 == rax_20)
                            cond:3_1 = sub_142a490e0(rdi_1, arg1, r8_7) == 0
                            goto label_142aa9d07
                        
                        r12_1 = rdi_1
                    else
                        cond:3_1 = (*(arg1 + 8) & 1) == 0
                    label_142aa9d07:
                        
                        if (cond:3_1)
                            r12_1 = rdi_1
                        else
                            rdi_1 = nullptr
                
                void* i_3 = sub_142a86c30(*var_60, i_1)
                i = i_3
                
                if (i_3 == 0)
                    i = nullptr
                else
                    bool cond:4_1
                    
                    if ((*(i_3 + 8) & 1) == 0)
                        int16_t rax_24 = *(i_3 + 8)
                        int32_t r8_9
                        
                        if (rax_24 s< 0)
                            r8_9 = *(i + 0xc)
                        else
                            r8_9 = sx.d(rax_24) s>> 5
                        
                        int16_t rax_25 = *(arg2 + 8)
                        int32_t rax_27
                        
                        if (rax_25 s< 0)
                            rax_27 = *(arg2 + 0xc)
                        else
                            rax_27 = sx.d(rax_25) s>> 5
                        
                        if ((*(arg2 + 8) & 1) == 0 && r8_9 == rax_27)
                            cond:4_1 = sub_142a490e0(i, arg2, r8_9) == 0
                            goto label_142aa9d83
                        
                        i_1 = i
                    else
                        cond:4_1 = (*(arg2 + 8) & 1) == 0
                    label_142aa9d83:
                        
                        if (cond:4_1)
                            i_1 = i
                        else
                            i = nullptr
                
                if (rdi_1 == 0)
                    break
            
            r13 = arg4
            i_4 = i_2
            r15_1 = rax_4
        
        int32_t* result_3 = j_sub_142a7dd00(0x40)
        int32_t* result_1 = result_3
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1
        
        if (i_4 != 0)
            if (r15_1 != 0)
                if (result_3 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1 = sub_142a479b0(result_3, i_4)
                
                result = j_sub_142a7dd00(0x40)
                result_1 = result
                
                if (result != 0)
                    result = sub_142a479b0(result, r15_1)
                    result_2 = result
            else
                if (result_3 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1 = sub_142a479b0(result_3, i_4)
                
                result = j_sub_142a7dd00(0x40)
                result_1 = result
                
                if (result != 0)
                    result = sub_142a479b0(result, arg1)
                    result_2 = result
        else if (r15_1 != 0)
            if (result_3 == 0)
                rbx_1 = nullptr
            else
                rbx_1 = sub_142a479b0(result_3, arg2)
            
            result = j_sub_142a7dd00(0x40)
            result_1 = result
            
            if (result != 0)
                result = sub_142a479b0(result, r15_1)
                result_2 = result
        else
            if (result_3 == 0)
                rbx_1 = nullptr
            else
                rbx_1 = sub_142a479b0(result_3, arg2)
            
            result = j_sub_142a7dd00(0x40)
            result_1 = result
            
            if (result != 0)
                result = sub_142a479b0(result, arg1)
                result_2 = result
        
        if (rbx_1 != 0)
            if (result_2 != 0)
                sub_142a5a080(arg3, arg1, rbx_1, r13)
                return sub_142a5a080(arg3, arg2, result_2, r13)
            
            result = (*rbx_1)->__offset(0x0).q(rbx_1, 1)
        
        if (result_2 != 0)
            result = (**result_2)(result_2, 1)
        
        *r13 = 7

return result
