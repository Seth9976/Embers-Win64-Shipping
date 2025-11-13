// 函数: sub_142824fcc
// 地址: 0x142824fcc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result_1 = nullptr
void** result = sub_1428253d4(arg1, arg2)
int64_t var_68

if (result.b != 0)
    int64_t rax = sub_142825420(arg4, arg2)
    
    if (rax != 0)
        int64_t r9 = *arg3
        var_68 = 0
        int32_t var_60_1 = 0
        return (*(r9 + 0x20))(arg3, &var_68, rax, r9)
    
    sub_142825464(arg4, arg2)
    result = sub_142825420(arg4, arg2)
    result_1 = result

char* r8_1 = **arg2

if (*r8_1 != 0)
    int32_t rdx_4 = *(r8_1 + 0x10)
    
    if (rdx_4 == 1)
        int64_t rax_10 = *arg3
        var_68 = 0
        int32_t var_60_5 = 0
        return (*(rax_10 + 0x18))(arg3, &var_68, result_1)
    
    if (rdx_4 == 2)
        int64_t r10_3 = *arg3
        var_68 = 0
        int32_t var_60_4 = 0
        return (*(r10_3 + 0x28))(arg3, &var_68, &r8_1[0x18], result_1, &r8_1[0x40])
    
    int64_t var_78
    int32_t var_58
    int64_t* var_50
    int64_t* i_2
    int64_t var_40
    int32_t var_38
    uint64_t var_30
    uint64_t var_28
    
    if (rdx_4 == 3)
        int32_t rax_4 = *(r8_1 + 0x38)
        int64_t r10_2 = *arg3
        var_68 = 0
        int32_t var_60_3 = 0
        var_78.d = rax_4
        (*(r10_2 + 0x30))(arg3, &var_68, &r8_1[0x18], result_1, var_78)
        sub_14281caec(**arg2, &var_58)
        sub_14281cdbc(**arg2, &var_38)
        int32_t r8_8 = var_58
        
        while (true)
            if (r8_8 == var_38)
                if (r8_8 == 0)
                    return (*(*arg3 + 0x38))(arg3)
                
                bool cond:0_1
                
                if (r8_8 == 1)
                    cond:0_1 = var_50 == var_30
                else
                    if (r8_8 != 2)
                        return (*(*arg3 + 0x38))(arg3)
                    
                    cond:0_1 = i_2 == var_28
                
                uint64_t rax_5
                rax_5.b = cond:0_1
                
                if (rax_5.b != 0)
                    return (*(*arg3 + 0x38))(arg3)
            
            int64_t rdx_19
            
            if (r8_8 == 0 || r8_8 != 1)
                rdx_19 = 0
            else
                rdx_19 = *var_50
            
            sub_142824fcc(arg1, rdx_19, arg3, arg4)
            r8_8 = var_58
            
            if (r8_8 == 1)
                var_50 = &var_50[1]
            else if (r8_8 == 2)
                void* i = &i_2[2]
                void* i_4 = i
                
                for (; i != var_40; i += 0x10)
                    if (****i != 0 && ****(i + 8) != 0)
                        break
                
                i_2 = i
    else if (rdx_4 == 4)
        int32_t rax_1 = *(r8_1 + 0x38)
        int64_t r10_1 = *arg3
        var_68 = 0
        int32_t var_60_2 = 0
        var_78.d = rax_1
        (*(r10_1 + 0x40))(arg3, &var_68, &r8_1[0x18], result_1, var_78)
        sub_14281caec(**arg2, &var_58)
        sub_14281cdbc(**arg2, &var_38)
        int32_t r8_3 = var_58
        
        while (true)
            int64_t* i_1 = i_2
            
            while (true)
                if (r8_3 == var_38)
                    if (r8_3 == 0)
                        return (*(*arg3 + 0x48))(arg3, r8_3)
                    
                    int32_t rdx_11 = r8_3 - 1
                    bool cond:1_1
                    
                    if (r8_3 == 1)
                        cond:1_1 = var_50 == var_30
                    else
                        if (rdx_11 != 1)
                            return (*(*arg3 + 0x48))(arg3, rdx_11)
                        
                        cond:1_1 = i_1 == var_28
                    
                    uint64_t rcx_10
                    rcx_10.b = cond:1_1
                    
                    if (rcx_10.b != 0)
                        return (*(*arg3 + 0x48))(arg3, rdx_11)
                
                int64_t rdx_12
                int64_t rdi_1
                
                if (r8_3 == 0 || r8_3 == 1 || r8_3 != 2)
                    rdx_12 = 0
                    rdi_1 = 0
                else
                    rdx_12 = *i_1
                    rdi_1 = i_1[1]
                
                sub_142824fcc(arg1, rdx_12, arg3, arg4)
                sub_142824fcc(arg1, rdi_1, arg3, arg4)
                r8_3 = var_58
                
                if (r8_3 == 1)
                    var_50 = &var_50[1]
                    break
                
                if (r8_3 != 2)
                    break
                
                i_1 = &i_2[2]
                int64_t* i_3 = i_1
                
                for (; i_1 != var_40; i_1 = &i_1[2])
                    if (****i_1 != 0 && ***i_1[1] != 0)
                        break
                
                i_2 = i_1

return result
