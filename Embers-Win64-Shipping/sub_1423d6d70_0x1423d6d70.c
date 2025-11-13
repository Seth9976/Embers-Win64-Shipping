// 函数: sub_1423d6d70
// 地址: 0x1423d6d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = *(arg1 + 0xbf8); i != &i[sx.q(*(arg1 + 0xc00)) * 3]; i = &i[3])
    if (*i == arg3)
        int64_t var_38
        int64_t* rax_1 = sub_140b63b70(&i[1], &var_38)
        int16_t* const rbx = &data_142d40450
        int16_t* rsi
        
        if (rax_1[1].d == 0)
            rsi = &data_142d40450
        else
            rsi = *rax_1
        
        void* rax_3 = sub_140d2f240(sub_14254f510(), 0, rsi, 0, 0x2000, 0)
        int64_t rcx_4 = var_38
        void* rsi_1 = rax_3
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        char rax_6
        
        if (rsi_1 != 0)
            int64_t* rcx_5 = *(rsi_1 + 0x118)
            
            if (rcx_5 == 0)
                (*(*rsi_1 + 0x390))(rsi_1)
                rcx_5 = *(rsi_1 + 0x118)
            
            rax_6 = (*(*rcx_5 + 0x268))(rcx_5)
        
        if (rsi_1 == 0 || rax_6 == 0)
            int64_t var_28
            int64_t* rax_7 = sub_140b63b70(&i[2], &var_28)
            
            if (rax_7[1].d != 0)
                rbx = *rax_7
            
            void* rax_9 = sub_140d2f240(sub_14254f510(), 0, rbx, 0, 0, 0)
            int64_t rcx_9 = var_28
            rsi_1 = rax_9
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        
        if (rsi_1 == 0)
            return nullptr
        
        int64_t arg_8 = 0
        void* rax_10 = sub_140cde0b0()
        
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(rax_10, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* result = sub_140d2dfc0(rsi_1, rax_10, 0, 0, 0, 0, 0, 0, 0)
        sub_14217b820(result, *(result + 0x18))
        int64_t rbp_2 = sx.q(*(arg2 + 0x228))
        int32_t rcx_13 = (rbp_2 + 1).d
        *(arg2 + 0x228) = rcx_13
        
        if (rcx_13 s> *(arg2 + 0x22c))
            sub_1405a4f90(arg2 + 0x220)
        
        int64_t rax_13 = rbp_2 << 4
        int64_t* rax_14 = rax_13 + *(arg2 + 0x220)
        
        if (rax_13 != neg.q(*(arg2 + 0x220)))
            *rax_14 = result
            rax_14[1] = i
        
        return result

return 0
