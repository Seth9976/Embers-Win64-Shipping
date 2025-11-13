// 函数: sub_140f74090
// 地址: 0x140f74090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char result = (**rcx)(rcx)

if (result == 0)
    int64_t* rcx_1 = *arg1
    result = (*(*rcx_1 + 8))(rcx_1)
    
    if (result == 0)
        result = sub_140f6a470(arg1)
        
        if (result != 0)
            sub_140f6a640(arg1)
            bool cond:0_1 = arg1[0xf3].b == 1
            int32_t arg_8 = arg1[0xf2].d
            int32_t rax_3 = 0
            int32_t rcx_4
            rcx_4.b = cond:0_1
            
            if (rcx_4 + *(arg1 + 0x794) s>= 0)
                rax_3 = rcx_4 + *(arg1 + 0x794)
            
            int32_t arg_c = rax_3
            void* rax_4 = &arg1[0xf0]
            
            if (arg1[0xf1].b == 0)
                rax_4 = &arg_8
            
            void* rcx_6 = arg1[9]
            int64_t var_18 = *rax_4
            int64_t rax_6 = arg_8.q
            int16_t* var_28 = nullptr
            int32_t var_20_1 = 0
            int64_t var_10_1 = rax_6
            sub_140f02770(rcx_6, &var_28, &var_18)
            int16_t* const rcx_7 = &data_142d40450
            
            if (var_20_1 != 0)
                rcx_7 = var_28
            
            sub_140d77020(rcx_7)
            char rdx_2
            uint32_t r8_2
            rdx_2, r8_2 = sub_140f74180(arg1)
            sub_140f8fc70(arg1, rdx_2, r8_2)
            int16_t* rcx_10 = var_28
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            return sub_140f74800(arg1)

return result
