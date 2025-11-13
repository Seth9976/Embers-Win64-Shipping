// 函数: sub_142825490
// 地址: 0x142825490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *arg2
int32_t var_48
void*** i = sub_142824df8(arg1 + 0x18, &var_48, &arg_8)
void** r8_1 = *i
r8_1[5].d += 1

if (r8_1[5].d s<= 1)
    i = *arg2
    void** rcx_1 = *i
    
    if (*rcx_1 != 0)
        int64_t* var_40
        void*** i_1
        int64_t var_30
        int32_t var_28
        void*** var_20
        void*** var_18
        
        if (rcx_1[2].d == 3)
            sub_14281caec(rcx_1, &var_48)
            i = sub_14281cdbc(**arg2, &var_28)
            int32_t r8_2 = var_48
            
            while (true)
                if (r8_2 == var_28)
                    if (r8_2 == 0)
                        break
                    
                    bool cond:0_1
                    
                    if (r8_2 == 1)
                        cond:0_1 = var_40 == var_20
                    else
                        if (r8_2 != 2)
                            break
                        
                        cond:0_1 = i_1 == var_18
                    
                    i.b = cond:0_1
                    
                    if (i.b != 0)
                        break
                
                int64_t rdx_3
                
                if (r8_2 == 0 || r8_2 != 1)
                    rdx_3 = 0
                else
                    rdx_3 = *var_40
                
                i = sub_142825490(arg1, rdx_3)
                r8_2 = var_48
                
                if (r8_2 == 1)
                    var_40 = &var_40[1]
                else if (r8_2 == 2)
                    i = &i_1[2]
                    void*** i_2 = i
                    
                    for (; i != var_30; i = &i[2])
                        if (****i != 0 && ***i[1] != 0)
                            break
                    
                    i_1 = i
        else if (rcx_1[2].d == 4)
            sub_14281caec(rcx_1, &var_48)
            sub_14281cdbc(**arg2, &var_28)
            int32_t r8_3 = var_48
            
            while (true)
                i = i_1
                
                while (true)
                    if (r8_3 == var_28)
                        if (r8_3 == 0)
                            return i
                        
                        bool cond:1_1
                        
                        if (r8_3 == 1)
                            cond:1_1 = var_40 == var_20
                        else
                            if (r8_3 != 2)
                                return i
                            
                            cond:1_1 = i == var_18
                        
                        void*** rcx_15
                        rcx_15.b = cond:1_1
                        
                        if (rcx_15.b != 0)
                            return i
                    
                    void** rdx_10
                    int64_t rbx_1
                    
                    if (r8_3 == 0 || r8_3 == 1 || r8_3 != 2)
                        rdx_10 = nullptr
                        rbx_1 = 0
                    else
                        rdx_10 = *i
                        rbx_1 = i[1]
                    
                    sub_142825490(arg1, rdx_10)
                    sub_142825490(arg1, rbx_1)
                    r8_3 = var_48
                    
                    if (r8_3 == 1)
                        var_40 = &var_40[1]
                        break
                    
                    if (r8_3 != 2)
                        break
                    
                    i = &i_1[2]
                    void*** i_3 = i
                    
                    for (; i != var_30; i = &i[2])
                        if (****i != 0 && ***i[1] != 0)
                            break
                    
                    i_1 = i

return i
