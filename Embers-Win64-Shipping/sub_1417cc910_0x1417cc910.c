// 函数: sub_1417cc910
// 地址: 0x1417cc910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
uint64_t result = __security_cookie ^ &var_d8
uint64_t result_1 = result

if (*(arg3 + 0x68) == 0 && arg3[0x1c].b == 0)
    if (*(arg2 + 4) s< 1)
        (*(*arg1 + 0x88))(arg1, &data_1437020ab, arg2)
    
    int64_t* r13_1 = *(arg2 + 0x48)
    char* _Str1 = (*(*r13_1 + 0x48))(r13_1)
    int64_t rdx = *r13_1
    int32_t rax_3 = (*(rdx + 0x60))(r13_1, rdx)
    int64_t rbp_1 = -1
    
    if (arg4 != 0 || _Str1 == 0)
    label_1417cc9da:
        int32_t rsi_1 = 0
        int64_t* var_b0 = nullptr
        
        if (rax_3 == 6)
            int64_t* rcx_4 = *(arg2 + 0x58)
            (*(*rcx_4 + 0x130))(rcx_4, arg2, &var_b0)
            int64_t* rcx_5 = var_b0
            
            if (rcx_5 != 0)
                int32_t rax_6 = *arg3 + 1
                
                if (rax_6 u< arg3[1])
                    *arg3 = rax_6
                    int64_t* var_50_1 = rcx_5
                    char var_a7_1 = 0
                    void var_a8
                    (*(*rcx_5 + 0x80))(rcx_5, &data_1437020ab, &var_a8)
                    sub_1417cc910(var_b0, &var_a8, arg3, 0)
                    int32_t rax_8 = *arg3
                    
                    if (rax_8 != 0)
                        *arg3 = rax_8 - 1
            
            if (*arg3 + 1 == arg3[1])
                *(arg3 + 0x68) = arg1
                *(arg3 + 8) = *arg2
                *(arg3 + 0x18) = arg2[1]
                *(arg3 + 0x28) = arg2[2]
                *(arg3 + 0x38) = arg2[3]
                *(arg3 + 0x48) = arg2[4]
                *(arg3 + 0x58) = arg2[5]
            
            goto label_1417cca94
        
        if (rax_3 == 2)
            int32_t r12_1
            r12_1.b = 0
            
            do
                rbp_1 += 1
            while (_Str1[rbp_1] != 0)
            
            if (rbp_1 != 0)
                int32_t rax_14 = *arg3 + 1
                
                if (rax_14 u< arg3[1])
                    *arg3 = rax_14
                
                r12_1.b = 1
            
            result = (*(*r13_1 + 0xf0))(r13_1)
            int32_t rbp_2 = result.d
            
            if (result.d s> 0)
                do
                    sub_1417ccef0(arg2, rsi_1)
                    sub_1417cc910(arg1, arg2, arg3, 0)
                    int32_t rax_16 = *(arg2 + 4)
                    
                    if (rax_16 s>= 1)
                        int64_t* rcx_12 = *(arg2 + 0x48)
                        *(arg2 + 4) = rax_16 - 1
                        *(arg2 + 0x48) = (*(*rcx_12 + 0x38))(rcx_12)
                    
                    result = sub_1417cc660(arg3)
                    
                    if (result.b != 0)
                        break
                    
                    rsi_1 += 1
                while (rsi_1 s< rbp_2)
            
            if (r12_1.b != 0)
                result = zx.q(*arg3)
                
                if (result.d != 0)
                    result = zx.q(result.d - 1)
                    *arg3 = result.d
        else if (rax_3 != 1)
        label_1417cca94:
            result = zx.q(*arg3 + 1)
            
            if (result.d == arg3[1])
            label_1417cca9b:
                *(arg3 + 0x68) = arg1
                *(arg3 + 8) = *arg2
                *(arg3 + 0x18) = arg2[1]
                *(arg3 + 0x28) = arg2[2]
                *(arg3 + 0x38) = arg2[3]
                *(arg3 + 0x48) = arg2[4]
                *(arg3 + 0x58) = arg2[5]
        else
            int64_t* rcx_14 = *(arg2 + 0x58)
            int32_t var_b8
            (*(*rcx_14 + 0x3c8))(rcx_14, arg2, &var_b8, 0)
            result = zx.q(*arg3)
            int32_t rdx_8 = arg3[result + 0x15e]
            
            if (rdx_8 == 0xffffffff)
                result = zx.q(result.d + 1)
                
                if (result.d == arg3[1])
                    goto label_1417cca9b
                
                arg3[0x1c].b = 1
            else if (rdx_8 s< 0 || rdx_8 s>= var_b8)
                arg3[0x1c].b = 1
            else
                sub_1417ccef0(arg2, rdx_8)
                
                if (*arg3 + 1 != arg3[1])
                    int64_t r9
                    r9.b = 1
                    sub_1417cc910(arg1, arg2, arg3, r9)
                else
                    *(arg3 + 0x68) = arg1
                    *(arg3 + 8) = *arg2
                    *(arg3 + 0x18) = arg2[1]
                    *(arg3 + 0x28) = arg2[2]
                    *(arg3 + 0x38) = arg2[3]
                    *(arg3 + 0x48) = arg2[4]
                    arg5 = arg2[5]
                    *(arg3 + 0x58) = arg5
                
                result = zx.q(*(arg2 + 4))
                
                if (result.d s>= 1)
                    int64_t* rcx_17 = *(arg2 + 0x48)
                    *(arg2 + 4) = result.d - 1
                    result = (*(*rcx_17 + 0x38))(rcx_17, arg5)
                    *(arg2 + 0x48) = result
    else
        int64_t rcx_2 = -1
        
        do
            rcx_2 += 1
        while (_Str1[rcx_2] != 0)
        
        if (rcx_2 == 0)
            goto label_1417cc9da
        
        result = _stricmp(_Str1, *(arg3 + (zx.q(*arg3) << 3) + 0x478))
        
        if (result.d == 0)
            goto label_1417cc9da

__security_check_cookie(result_1 ^ &var_d8)
return result
