// 函数: sub_141bac980
// 地址: 0x141bac980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x1a0)

if (result != 0)
    void* rax_1 = sub_142543940()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rax_4 = sub_142542e20()
        void* rdx_2 = *(result + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            void* result_1 = sub_142121cc0(result, arg1)
            result = result_1
            sub_140e24dd0(arg1 + 0x158, result_1)
            int64_t* rcx_4 = *(arg1 + 0x260)
            
            if (rcx_4 != 0)
                void* var_28 = arg1 + 0x158
                int64_t var_18 = 0
                int32_t var_10_1 = 0
                char var_20_1 = 1
                sub_140f5d380(rcx_4, &var_28)
                sub_140745b20(&var_18)
        
        return result

return 0
