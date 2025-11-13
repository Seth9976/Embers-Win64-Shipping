// 函数: sub_142171770
// 地址: 0x142171770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r14_1 = arg1[0x62] + 0x152
int32_t rsi = 0
char r15 = *r14_1
*r14_1 = 1
int64_t rax = *arg2
int32_t arg_8 = 0
void** result = (*(rax + 0x168))(arg2, &arg_8)
int32_t arg_10

if (arg1[0x70].b == 0)
    int32_t rcx_5 = 0
    int32_t rdx_5 = 0
    int64_t var_118 = 0
    int32_t r12_1 = 0
    int32_t var_110_1 = 0
    int32_t var_10c_1 = 0
    
    if (arg_8 u> 0)
        while (true)
            (*(*arg2 + 8))(arg2, sx.q(rcx_5), sx.q(rdx_5))
            int32_t rax_6 = var_110_1
            int64_t* rcx_7 = arg2[1]
            
            if ((arg2[5].b & 1) != 0)
                rax_6 = 0
            
            arg_10 = rax_6
            int32_t* rdx_7 = *rcx_7
            
            if (&rdx_7[1] u> rcx_7[1])
                int32_t* rdx_8 = &arg_10
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_8, arg3)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_8, 4)
            else
                arg_10 = *rdx_7
                *rcx_7 += 4
            
            int32_t rcx_11 = arg_10
            
            if (rcx_11 != 0)
                char rax_10 = *(arg2 + 0x29)
                
                if ((rax_10 & 1) != 0 || rcx_11 s<= 0
                        || ((*(arg2 + 0x2b) & 8) != 0 && rcx_11 s> 0x1000000))
                    *(arg2 + 0x29) = rax_10 | 1
                else
                    var_110_1 = rcx_11
                    
                    if ((arg2[5].b & 1) != 0)
                        sub_1405da9e0(&var_118, rcx_11, var_10c_1)
                        rcx_11 = var_110_1
                    
                    (*(*arg2 + 0x150))(arg2, var_118, sx.q(rcx_11))
            else if ((arg2[5].b & 1) != 0)
                var_110_1 = 0
                
                if (var_10c_1 != 0)
                    sub_1405c5510(&var_118, 0)
            
            void** const var_f8
            memset(&var_f8, 0, 0x90)
            sub_140b4c2a0(&var_f8)
            int64_t var_68_1 = 0
            int64_t* var_60_1 = &var_118
            var_f8 = &data_142d6b230
            int64_t var_58_1 = 0x7fffffffffffffff
            sub_140b55290(&var_f8, 1)
            var_f8[0x1b](&var_f8, 0)
            int64_t arg_20 = 0
            int32_t var_128_1 = 0
            void arg_18
            sub_14216a980(arg1, &arg_18, &var_f8, &arg_20, arg3)
            result, arg3 = sub_140b4cb40(&var_f8)
            r12_1 += 1
            
            if (r12_1 u>= arg_8)
                break
            
            rdx_5 = var_10c_1
            rcx_5 = var_110_1
        
        int64_t rcx_19 = var_118
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
else
    arg_10 = 0
    
    if (arg_8 u> 0)
        do
            int64_t* rcx_1 = arg2[1]
            int32_t* rdx_1 = *rcx_1
            
            if (&rdx_1[1] u> rcx_1[1])
                int32_t* rdx_2 = &arg_10
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_2, arg3)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_2, 4)
            else
                arg_10 = *rdx_1
                *rcx_1 += 4
            
            int64_t rdi_1 = *arg2
            int64_t rax_4 = (*(rdi_1 + 0x20))(arg2)
            result = (*(rdi_1 + 0x178))(arg2, sx.q(arg_10) + rax_4)
            rsi += 1
        while (rsi u< arg_8)
*r14_1 = r15
return result
