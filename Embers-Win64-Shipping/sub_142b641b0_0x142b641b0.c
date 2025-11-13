// 函数: sub_142b641b0
// 地址: 0x142b641b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _Str1_1 = arg2
void var_38
char i = (*(*arg3 + 0x50))(arg3, &var_38, arg4)

if (*arg4 s<= 0)
    int32_t rsi_1 = 0
    
    for (i = sub_142ac2da0(&var_38, 0, &_Str1_1, arg3); i != 0; 
            i = sub_142ac2da0(&var_38, rsi_1, &_Str1_1, arg3))
        char* _Str1 = _Str1_1
        uint64_t rdx_1
        
        if (*arg4 s> 0)
            rdx_1 = 0xffffffff
        else if (strncmp(_Str1, "set", 3) != 0)
        label_142b64262:
            *arg4 = 3
            rdx_1 = 0xffffffff
        else
            char j = _Str1[3]
            void* r8_2 = &_Str1[3]
            rdx_1 = 0
            
            if (j == 0)
                goto label_142b64262
            
            do
                if (sx.d(j) - 0x30 u> 9)
                    goto label_142b64262
                
                r8_2 += 1
                rdx_1 = zx.q(sx.d(j) - 0x30 + ((rdx_1 * 5).d << 1))
                j = *r8_2
            while (j != 0)
            
            if (rdx_1.d == 0)
                goto label_142b64262
        
        void* rax_4 = data_144016e58
        
        if (rdx_1.d s> *(rax_4 + 0x10))
            *(rax_4 + 0x10) = rdx_1.d
        
        rsi_1 += 1

return i
