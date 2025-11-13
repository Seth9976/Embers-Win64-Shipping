// 函数: sub_141b72050
// 地址: 0x141b72050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int64_t arg_10 = arg2
void* rax_1 = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218)

if (rax_1 != 0)
    void* var_18
    (*(*(rax_1 + 0x4f8) + 0xd0))(rax_1 + 0x4f8, &var_18, &arg_10)
    void* rsi_1 = var_18
    
    if (rsi_1 != 0)
        rsi_1 -= 0x3a8
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d += 1
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp2_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
    
    if (rsi_1 != 0)
        void* const result = *(rsi_1 + 0x3a0)
        void* rax_5
        int64_t rax_6
        void* rdx_1
        
        if (result != 0)
            rax_5 = sub_141c122a0()
            rdx_1 = *(result + 0x10)
            rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (result == 0 || rax_6.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            result = nullptr
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                int64_t r8_3 = *var_10
                (*r8_3)(var_10, arg3, r8_3)
                int32_t temp5_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    int64_t r8_4 = *var_10
                    (*(r8_4 + 8))(var_10, 1, r8_4)
        
        return result
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp3_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

return 0
