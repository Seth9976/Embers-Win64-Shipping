// 函数: sub_14183e5f0
// 地址: 0x14183e5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xf8)
int64_t result = sx.q(*(arg1 + 0x100))

for (void* rbx_1 = result * 0x138 + i; i != rbx_1; i += 0x138)
    void arg_8
    result = sub_140960120(i + 0xe8, &arg_8, arg2)
    
    if (*result != 0xffffffff)
        int16_t* const r12_1 = &data_142d40450
        int16_t* var_38
        int64_t* var_30
        
        if (arg4 != 0)
            int64_t* rbx_2 = *(i + 0x88)
            int64_t* rax_1 = (*(*rbx_2 + 0x18))(rbx_2)
            int64_t rdx_1 = *rbx_2
            int64_t* rax_2 = (*(rdx_1 + 0x10))(rbx_2, rdx_1)
            int32_t rbx_3 = rax_1[1].d
            int32_t rsi_1 = rax_2[1].d
            int16_t* r14_2
            int32_t r15_2
            
            if (rsi_1 s> 1)
                int32_t rbx_4
                
                if (rbx_3 == 0)
                    rbx_4 = 0
                else
                    rbx_4 = rbx_3 - 1
                
                int32_t rax_3
                
                if (rsi_1 == 0)
                    rax_3 = rsi_1 + 1
                
                if (rsi_1 != 0 || rbx_4 == 0)
                    rax_3 = 0
                
                int64_t r14_3 = *rax_2
                int32_t rcx_5 = rax_3 + rbx_4
                int16_t* var_48 = nullptr
                int32_t var_3c
                
                if (rsi_1 != 0 || rcx_5 != 0)
                    sub_1405a4c70(&var_48, rsi_1 + rcx_5, 0)
                    memcpy(var_48, r14_3, rsi_1 * 2)
                else
                    var_3c = 0
                
                sub_140a20ba0(&var_48, *rax_1, rbx_4)
                r14_2 = var_48
                rbx_3 = rsi_1
                r15_2 = var_3c
                var_48 = nullptr
                int32_t var_40_1
                var_40_1.q = 0
            else
                int64_t rsi_2 = *rax_1
                r14_2 = nullptr
                var_38 = nullptr
                var_30.d = rbx_3
                
                if (rbx_3 != 0)
                    sub_1405a4c70(&var_38, rbx_3, 0)
                    r14_2 = var_38
                    memcpy(r14_2, rsi_2, rbx_3 * 2)
                    r15_2 = var_30:4.d
                    rbx_3 = var_30.d
                else
                    r15_2 = 0
            
            sub_140598750(arg3, &var_38)
            int16_t* const rdx_8 = r14_2
            *var_30 = r14_2
            *(var_30 + 0xc) = r15_2
            var_30[1].d = rbx_3
            var_30[2].d = 0xffffffff
            int32_t rcx_10
            
            if (rbx_3 != 0)
                rcx_10 = rbx_3 - 1
            else
                rdx_8 = &data_142d40450
                rcx_10 = 0
            
            sub_14059a6d0(arg3, &arg_8, sub_1405969c0(rcx_10, rdx_8), var_30, var_38.d, nullptr)
        
        int64_t* rcx_13 = *(i + 0x88)
        int64_t* rax_6 = (*(*rcx_13 + 0x130))(rcx_13)
        sub_140598750(arg3, &var_38)
        sub_140596d10(var_30, rax_6)
        var_30[2].d = 0xffffffff
        int32_t rax_7 = var_30[1].d
        
        if (rax_7 != 0)
            r12_1 = *var_30
        
        int32_t rcx_16 = rax_7 - 1
        
        if (rax_7 == 0)
            rcx_16 = 0
        
        return sub_14059a6d0(arg3, &arg_8, sub_1405969c0(rcx_16, r12_1), var_30, var_38.d, nullptr)

return result
