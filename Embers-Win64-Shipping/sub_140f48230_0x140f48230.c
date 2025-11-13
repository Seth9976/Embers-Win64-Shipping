// 函数: sub_140f48230
// 地址: 0x140f48230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg1 + 0x390) != 0)
    *arg2 = *(arg1 + 0x3f8)
    void* rax_2 = *(arg1 + 0x400)
    arg2[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    arg2[2].d = *(arg1 + 0x408)
    return arg2

bool rax_6

if (*(arg1 + 0x3b8) != 0)
    rax_6 = sub_140d6df00(sub_140f46790(arg1 + 0x398))

if (*(arg1 + 0x3b8) == 0 || rax_6 == 0)
    *arg2 = *(arg1 + 0x410)
    void* rax_23 = *(arg1 + 0x418)
    arg2[1] = rax_23
    
    if (rax_23 != 0)
        *(rax_23 + 8) += 1
    
    arg2[2].d = *(arg1 + 0x420)
else
    char rax_8 = sub_140d6dea0(sub_140f46790(arg1 + 0x398))
    int64_t* rax_9 = sub_140f46790(arg1 + 0x398)
    int64_t* rax_10
    int32_t rbp_1
    
    if (rax_8 == 0)
        void var_38
        rax_10 = sub_140e662c0(rax_9, &var_38)
        rbp_1 = 2
    else
        void var_20
        rax_10 = sub_140d44c30(rax_9, &var_20, 1)
        rbp_1 = 1
    
    *arg2 = *rax_10
    void* rax_12 = rax_10[1]
    arg2[1] = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    arg2[2].d = rax_10[2].d
    
    if ((rbp_1.b & 2) != 0)
        rbp_1 &= 0xfffffffd
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t rax_16 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rax_16 == 1)
                    (*(*var_30 + 8))(var_30, 1)
    
    int64_t* var_18
    
    if ((rbp_1.b & 1) != 0 && var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rsi_2 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*(*var_18 + 8))(var_18, zx.q(rsi_2))

return arg2
