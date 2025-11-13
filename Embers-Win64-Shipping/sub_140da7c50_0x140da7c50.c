// 函数: sub_140da7c50
// 地址: 0x140da7c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0x16].b != 0 && arg3[0x16].b != 0)
    int16_t** rcx = *(arg2 + 8)
    
    if (rcx != 0 && arg2[0x15].b != 0 && sub_140d967b0(rcx, *(arg3 + 8)) != 0)
        void* rbp = *(*(arg1 + 0xd8) + 0x30)
        int32_t r12 = *(arg1 + 0xa8)
        *arg3
        int16_t* rdi
        rdi.b = 0
        *arg2
        *(arg2 + 0x10)
        int64_t* var_48
        int32_t zmm6_1 = sub_140da6800(*(rbp + 0x18), &var_48, *(arg2 + 8), arg4)
        int64_t* rsi_1 = var_48
        
        if (rsi_1 != 0)
            rsi_1 = *rsi_1
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (rsi_1 != 0 && (rsi_1[1].b & 0x40) != 0)
            int32_t arg_10 = sub_142b91fc0(rsi_1)
            int32_t arg_14 = sub_142b91fc0(rsi_1)
            int32_t arg_20
            
            if (sub_140da1790(*(rbp + 0x10), rsi_1, &arg_10, 0, r12, zmm6_1, &arg_20) != 0)
                rdi = zx.q((arg_20 + 0x20) s>> 6)
        
        return zx.q(rdi.b)

return 0
