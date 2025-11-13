// 函数: sub_1429c9630
// 地址: 0x1429c9630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_28 = -2

if (arg1[1] == 0)
    void* var_30_1 = arg5
    arg3.b = 1
    sub_1429c9350(arg1, arg2, arg3.b, *arg1, arg4)
    return arg2

int64_t* rcx = *arg1

if (arg3 != *rcx)
    if (arg3 != rcx)
        int32_t rsi_1 = *arg4
        int32_t temp0_1 = arg3[4].d
        bool cond:0_1 = temp0_1 s>= rsi_1
        
        if (temp0_1 s> rsi_1)
            void** i = arg3
            void** i_6
            
            if (*(arg3 + 0x19) == 0)
                i_6 = *arg3
                
                if (*(i_6 + 0x19) != 0)
                    int64_t* i_5 = arg3[1]
                    
                    if (*(i_5 + 0x19) == 0)
                        while (i == *i_5)
                            i = i_5
                            i_5 = i_5[1]
                            
                            if (*(i_5 + 0x19) != 0)
                                break
                    
                    i_6 = i
                    
                    if (*(i + 0x19) == 0)
                        i_6 = i_5
                else
                    void** i_7 = i_6[2]
                    
                    while (*(i_7 + 0x19) == 0)
                        i_6 = i_7
                        i_7 = i_7[2]
            else
                i_6 = arg3[2]
            
            if (i_6[4].d s< rsi_1)
                void* var_30_4 = arg5
                
                if (*(i_6[2] + 0x19) != 0)
                    sub_1429c9350(arg1, arg2, 0, i_6, arg4)
                    return arg2
                
                void** r9_3 = arg3
                arg3.b = 1
                sub_1429c9350(arg1, arg2, arg3.b, r9_3, arg4)
                return arg2
            
            cond:0_1 = arg3[4].d s>= rsi_1
        
        if (not(cond:0_1))
            void** i_1 = arg3
            
            if (*(arg3 + 0x19) == 0)
                int64_t* i_2 = arg3[2]
                
                if (*(i_2 + 0x19) != 0)
                    void** i_4 = arg3[1]
                    
                    if (*(i_4 + 0x19) == 0)
                        while (i_1 == i_4[2])
                            i_1 = i_4
                            i_4 = i_4[1]
                            
                            if (*(i_4 + 0x19) != 0)
                                break
                    
                    i_1 = i_4
                else
                    i_1 = i_2
                    void** i_3 = *i_2
                    
                    while (*(i_3 + 0x19) == 0)
                        i_1 = i_3
                        i_3 = *i_3
            
            if (i_1 == rcx || rsi_1 s< i_1[4].d)
                void* var_30_5 = arg5
                
                if (*(arg3[2] + 0x19) != 0)
                    sub_1429c9350(arg1, arg2, 0, arg3, arg4)
                    return arg2
                
                arg3.b = 1
                sub_1429c9350(arg1, arg2, arg3.b, i_1, arg4)
                return arg2
    else
        void** r9_2 = rcx[2]
        
        if (r9_2[4].d s< *arg4)
            void* var_30_3 = arg5
            sub_1429c9350(arg1, arg2, 0, r9_2, arg4)
            return arg2
else if (*arg4 s< arg3[4].d)
    void* var_30_2 = arg5
    void** r9_1 = arg3
    arg3.b = 1
    sub_1429c9350(arg1, arg2, arg3.b, r9_1, arg4)
    return arg2

void* var_20
*arg2 = *sub_1429c98a0(arg1, &var_20, false, arg4, arg5)
return arg2
