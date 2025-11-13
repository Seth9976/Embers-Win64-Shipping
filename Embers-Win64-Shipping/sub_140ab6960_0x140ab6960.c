// 函数: sub_140ab6960
// 地址: 0x140ab6960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_2 = *arg1
int64_t result_1 = result_2
int64_t rsi = result_2 + (sx.q(arg1[1].d) << 1)
int64_t result

if (result_2 u< rsi)
    result = result_2
    
    do
        result_1 = result
        
        if (iswspace(*result_2).d == 0)
            break
        
        result_2 = result_1 + 2
        result = result_2
        result_1 = result_2
    while (result_2 u< rsi)

if (result_1 u>= rsi)
label_140ab6be8:
    result.b = 1
else
    int32_t r15_1 = 0
    
    if (result_2 u< rsi)
        goto label_140ab69e3
    
    while (true)
        int32_t var_88_1
        int32_t arg_8
        int64_t result_4
        int64_t result_5
        int64_t result_6
        int32_t r14_1
        
        if (*result_2 != 0x22)
        label_140ab6af4:
            result_5 = result_2
            result_4 = result_2
            
            if (result_2 u< rsi)
                int64_t result_3 = result_2
                
                do
                    result_4 = result_3
                    
                    if (*result_2 == arg3)
                        break
                    
                    result_2 = result_3 + 2
                    result_3 = result_2
                    result_4 = result_2
                while (result_2 u< rsi)
            
            r15_1 = ((result_4 - result_5) s>> 1).d
            var_88_1 = sub_140b21160(result_5, r15_1 * 2, 0)
            result_6 = 0
            r14_1 = 0
            arg_8 = 0
        else
            int64_t var_70 = 0
            int32_t var_68_1 = 0
            int32_t arg_20 = 0
            
            if (j_sub_140b08930(result_2, &var_70, &arg_20) == 0)
                int64_t rcx_7 = var_70
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                goto label_140ab6af4
            
            r14_1 = var_68_1
            result_6 = 0
            int64_t rax_2 = sx.q(arg_20)
            int64_t rbx = var_70
            uint64_t result_7 = 0
            result_2 += rax_2 << 1
            
            if (r14_1 != 0)
                sub_1405a4c70(&result_7, r14_1, 0)
                result_6 = result_7
                memcpy(result_6, rbx, r14_1 * 2)
                int32_t var_74
                arg_8 = var_74
            else
                arg_8 = 0
            
            result_7 = 0
            int32_t var_78_1
            var_78_1.q = 0
            
            if (r14_1 == 0)
                result_5 = &data_142d40450
            else
                result_5 = result_6
                r15_1 = r14_1 - 1
            
            result = sub_140b21160(result_5, r15_1 * 2, 0)
            int64_t rcx_6 = var_70
            var_88_1 = result.d
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            result_4 = result_2
        
        if (r15_1 != 0)
            if (result_2 u>= rsi)
            label_140ab6b84:
                int64_t* r8_3 = arg2
                int64_t rbx_1 = sx.q(r8_3[1].d)
                int32_t rax_6 = (rbx_1 + 1).d
                r8_3[1].d = rax_6
                
                if (rax_6 s> *(r8_3 + 0xc))
                    sub_1405c4e40(r8_3)
                    r8_3 = arg2
                
                result = (rbx_1 << 5) + *r8_3
                *(result + 8) = r15_1
                r15_1 = 0
                *(result + 0xc) = var_88_1
                *result = result_5
                *(result + 0x10) = result_6
                *(result + 0x18) = r14_1
                *(result + 0x1c) = arg_8
                
                if (result_2 u>= rsi)
                    goto label_140ab6be8
                
            label_140ab69e3:
                
                if (iswspace(*result_2) == 0)
                    continue
                else
                    result_2 += 2
                    
                    if (result_2 u< rsi)
                        goto label_140ab69e3
                    
                    continue
            else
                while (iswspace(*result_2) != 0)
                    result_2 = result_4 + 2
                    result_4 = result_2
                    
                    if (result_2 u>= rsi)
                        goto label_140ab6b84
                
                if (result_4 u>= rsi)
                    goto label_140ab6b84
                
                result = zx.q(*result_2)
                result_2 = result_4 + 2
                
                if (result.w == arg3)
                    goto label_140ab6b84
        
        if (result_6 != 0)
            sub_140a74f90(result_6)
        
        result.b = 0
        break

return result
