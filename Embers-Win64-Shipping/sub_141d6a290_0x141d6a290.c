// 函数: sub_141d6a290
// 地址: 0x141d6a290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void*** rdi = arg1

if ((*(arg2 + 0x28) & 1) != 0)
    int32_t rsi_1 = arg1[1].d
    
    if (rsi_1 s> 1)
        int64_t rbx_1 = *arg1
        int64_t var_58 = 0
        sub_1405a4c70(&var_58, rsi_1 + 1, 0)
        memcpy(var_58, rbx_1, rsi_1 * 2)
        int32_t r12_1 = 1
        sub_140a20ba0(&var_58, &data_142d404c4, 1)
        int64_t r15_1 = var_58
        int32_t rsi_2 = rdi[6].d
        var_58 = 0
        int32_t var_50_1
        var_50_1.q = 0
        int64_t var_48
        int64_t var_38
        
        if (rsi_1 s> 1)
            int32_t r14_2 = rsi_2 - 1
            
            if (rsi_2 == 0)
                r14_2 = 0
            
            if (rsi_1 != 0 || r14_2 == 0)
                r12_1 = 0
            
            var_38 = r15_1
            int32_t rdx_5 = r14_2 + r12_1 + rsi_1
            int32_t var_4c
            
            if (rdx_5 s> var_4c)
                sub_1405947f0(&var_38, rdx_5)
            
            sub_140a20ba0(&var_38, rdi[5], r14_2)
            var_48 = var_38
            int32_t var_40_2 = rsi_1
            int32_t var_3c_2 = var_4c
        else
            int64_t r14_1 = rdi[5]
            var_48 = 0
            int32_t var_40_1 = rsi_2
            
            if (rsi_2 != 0)
                sub_1405a4c70(&var_48, rsi_2, 0)
                memcpy(var_48, r14_1, rsi_2 * 2)
            else
                int32_t var_3c_1 = 0
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
        
        var_38.o = *sub_140a1dfc0(&var_48, &var_58)
        sub_140d2c760(&rdi[2], &var_38)
        rdi[6].d = 0
        
        if (*(rdi + 0x34) s<= 0xffffffff)
            sub_1405947f0(&rdi[5], 0)
        
        int16_t* rax_5 = rdi[5]
        
        if (rax_5 != 0)
            *rax_5 = 0
        
        int32_t rax_6 = *(rdi + 0xc)
        rdi[1].d = 0
        
        if (rax_6 s< 0 && rax_6 != 0)
            sub_1405947f0(rdi, 0)
        
        result = *rdi
        
        if (result != 0)
            *result = nullptr
        
        int64_t rcx_13 = var_48
        
        if (rcx_13 != 0)
            return sub_140a74f90(rcx_13)

return result
