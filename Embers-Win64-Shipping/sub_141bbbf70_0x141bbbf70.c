// 函数: sub_141bbbf70
// 地址: 0x141bbbf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x6f8)

if (rsi == 0)
    return 

int64_t arg_8 = rsi
int64_t* var_28
sub_141bb2520(arg1 + 0x500, &var_28, &arg_8)

if (*(arg1 + 0x760) != 0)
    int64_t* rcx_1 = var_28
    
    if (rcx_1 != 0)
        *(arg1 + 0x680) = rsi
        void var_18
        int64_t* rax_2 = (*(*rcx_1 + 0x50))(rcx_1, &var_18)
        int64_t var_38_1 = *rax_2
        int64_t* rcx_3 = rax_2[1]
        
        if (rcx_3 != 0)
            rcx_3[1].d += 1
        
        *(arg1 + 0x6f0)
        sub_140f7ca60()
        
        if (rcx_3 != 0)
            rcx_3[1].d -= 1
            
            if (rcx_3[1].d == 1)
                (**rcx_3)(rcx_3)
                int32_t temp4_1 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp5_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

*(arg1 + 0x760) = 0

if (*(arg1 + 0x628) != 0)
    int64_t* rcx_9 = *(arg1 + 0x620)
    
    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
        int64_t* rcx_10
        
        if (*(arg1 + 0x628) == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *(arg1 + 0x620)
        
        (*(*rcx_10 + 0x50))(rcx_10, rsi, &var_28)

*(arg1 + 0x6f8) = 0
int64_t* var_20

if (var_20 == 0)
    return 

var_20[1].d -= 1

if (var_20[1].d != 1)
    return 

(**var_20)(var_20)
int32_t temp1_1 = *(var_20 + 0xc)
*(var_20 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_20 + 8))(var_20, 1)
