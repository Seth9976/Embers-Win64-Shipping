// 函数: sub_140618220
// 地址: 0x140618220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbp = *arg1
int32_t rdx
int32_t rsi_1

if (*(arg3 + 0x19) == 0)
    rsi_1 = *arg4
    int32_t rax_3 = *(arg3 + 0x1c)
    
    if (arg3 != *rbp)
        if (rsi_1 u>= rax_3)
            if (rsi_1 u> rax_3)
                int64_t* arg_8 = arg3
                void* r8 = *sub_140618db0(&arg_8)
                
                if (*(r8 + 0x19) == 0)
                    rdx = rsi_1
                
                if (*(r8 + 0x19) == 0 && rsi_1 u>= *(r8 + 0x1c))
                    goto label_140618349
                
                arg2[2].b = 0
                
                if (*(arg3[2] + 0x19) == 0)
                    *arg2 = r8
                    arg2[1].d = 1
                else
                    *arg2 = arg3
                    arg2[1].d = 0
                
                return arg2
            
            arg2[2].b = 1
            arg2[1].d = 0
            *arg2 = arg3
        else
            int64_t* i_1 = *arg3
            int64_t* i = arg3
            
            if (*(i_1 + 0x19) == 0)
                int64_t* i_2 = i_1[2]
                
                while (*(i_2 + 0x19) == 0)
                    i_1 = i_2
                    i_2 = i_2[2]
            else
                i_1 = arg3[1]
                
                if (*(i_1 + 0x19) == 0)
                    while (i == *i_1)
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0x19) != 0)
                            break
                
                if (*(i + 0x19) != 0)
                    i_1 = i
            
            if (*(i_1 + 0x1c) u>= rsi_1)
                goto label_14061831e
            
            arg2[2].b = 0
            
            if (*(i_1[2] + 0x19) == 0)
                *arg2 = arg3
                arg2[1].d = 1
            else
                *arg2 = i_1
                arg2[1].d = 0
    else if (rsi_1 u>= rax_3)
    label_14061831e:
        rdx = rsi_1
    label_140618349:
        void** rax_5 = rbp[1]
        void** var_28_1 = rax_5
        int32_t var_20_1 = 0
        
        while (*(rax_5 + 0x19) == 0)
            var_28_1 = rax_5
            
            if (*(rax_5 + 0x1c) u>= rdx)
                rbp = rax_5
                int32_t var_20_3 = 1
                rax_5 = *rax_5
            else
                rax_5 = rax_5[2]
                int32_t var_20_2 = 0
        
        if (*(rbp + 0x19) != 0 || rsi_1 u< *(rbp + 0x1c))
            arg2[2].b = 0
            *arg2 = var_28_1.o
        else
            *arg2 = rbp
            arg2[1].d = 2
            arg2[2].b = 1
    else
        arg2[1].d = 1
        arg2[2].b = 0
        *arg2 = arg3
else
    if (*(rbp[1] + 0x19) == 0)
        rsi_1 = *arg4
        rdx = rsi_1
    
    if (*(rbp[1] + 0x19) == 0 && *(rbp[2] + 0x1c) u>= rsi_1)
        goto label_140618349
    
    *arg2 = rbp[2]
    arg2[1].d = 0
    arg2[2].b = 0
return arg2
