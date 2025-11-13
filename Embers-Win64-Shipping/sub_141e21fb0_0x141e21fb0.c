// 函数: sub_141e21fb0
// 地址: 0x141e21fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int256_t zmm1
rax, zmm1 = sub_141e34820(arg1, arg2[2])

if (rax != 0 && (*(*arg1 + 0x278))(arg1) != 0)
    uint64_t result = zx.q(arg1[0x2a].b)
    int64_t var_58
    uint64_t result_1
    
    if (result.b == 1)
        if ((*(*arg1 + 0x278))(arg1) == 0)
            return sub_141e47c50(arg2, zmm1)
        
        sub_141e227d0(arg1, arg2, arg3, arg4, 0)
        void* rax_5 = arg2[2]
        int32_t i = 0
        var_58 = 0
        int32_t rcx_3 = 0
        int32_t var_4c_1 = 0
        int32_t rdx_2 = 0
        __builtin_memset(&result_1, 0, 0x1b)
        void* var_48_1 = rax_5
        int32_t r15_1 = *(rax_5 + 8)
        
        if (r15_1 s> 0)
            int32_t var_50_1 = 0
            sub_141acba60(&var_58, r15_1)
            rcx_3 = var_4c_1
            rdx_2 = var_50_1
        
        int32_t rax_6 = rdx_2 + r15_1
        int32_t var_50_2 = rax_6
        
        if (rax_6 s> rcx_3)
            sub_141acb8e0(&var_58, rdx_2)
        
        sub_141decfa0(&result_1, arg3)
        sub_141e21d50(arg1, &var_58, &result_1, arg4)
        result = sub_141de6d80(arg2, &var_58)
        
        if (arg3[1].d s> 0)
            int32_t* rdx_7 = nullptr
            
            do
                int64_t rcx_9 = *arg3
                
                if (*(rdx_7 + rcx_9 + 4) != 0 || *(rdx_7 + result_1 + 4) != 0)
                    result.b = 1
                else
                    result.b = 0
                
                *(rdx_7 + rcx_9 + 4) = result.b
                i += 1
                int64_t rcx_10 = *arg3
                result = result_1
                *(rdx_7 + rcx_10) = *(rdx_7 + rcx_10) f- *(rdx_7 + result)
                rdx_7 = &rdx_7[2]
            while (i s< arg3[1].d)
    else if (result.b == 2)
        if ((*(*arg1 + 0x278))(arg1) == 0)
            return sub_141e47c50(arg2, zmm1)
        
        sub_141e227d0(arg1, arg2, arg3, arg4, 1)
        void* rax_9 = arg2[2]
        int32_t i_1 = 0
        var_58 = 0
        int32_t rcx_14 = 0
        int32_t var_4c_2 = 0
        int32_t rdx_9 = 0
        __builtin_memset(&result_1, 0, 0x1b)
        void* var_48_2 = rax_9
        int32_t r15_2 = *(rax_9 + 8)
        
        if (r15_2 s> 0)
            int32_t var_50_3 = 0
            sub_141acba60(&var_58, r15_2)
            rcx_14 = var_4c_2
            rdx_9 = var_50_3
        
        int32_t rax_10 = r15_2 + rdx_9
        int32_t var_50_4 = rax_10
        
        if (rax_10 s> rcx_14)
            sub_141acb8e0(&var_58, rdx_9)
        
        sub_141decfa0(&result_1, arg3)
        sub_141e21d50(arg1, &var_58, &result_1, arg4)
        sub_141de6df0(arg2)
        sub_141de6df0(&var_58)
        result = sub_141de6d80(arg2, &var_58)
        
        if (arg3[1].d s> 0)
            float* rdx_14 = nullptr
            
            do
                int64_t rcx_22 = *arg3
                
                if (*(rdx_14 + rcx_22 + 4) != 0 || *(rdx_14 + result_1 + 4) != 0)
                    result.b = 1
                else
                    result.b = 0
                
                *(rdx_14 + rcx_22 + 4) = result.b
                i_1 += 1
                int64_t rcx_23 = *arg3
                result = result_1
                *(rdx_14 + rcx_23) = *(rdx_14 + rcx_23) f- *(rdx_14 + result)
                rdx_14 = &rdx_14[2]
            while (i_1 s< arg3[1].d)
    return result

return sub_141e227d0(arg1, arg2, arg3, arg4, 0)
