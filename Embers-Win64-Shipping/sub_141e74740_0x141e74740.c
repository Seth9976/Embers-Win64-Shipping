// 函数: sub_141e74740
// 地址: 0x141e74740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
char* result = sub_14236bfb0(arg2, nullptr)

if (result.b != 0)
    EnterCriticalSection(arg1 + 0xf8)
    int32_t arg_18
    sub_140865c40(arg1 + 0x10, &arg_18, arg_10)
    int64_t rax_1 = sx.q(arg_18)
    void* rcx_3
    
    if (rax_1.d != 0xffffffff)
        result = *(arg1 + 0x10)
        rcx_3 = &result[rax_1 * 0x18]
    
    if (rax_1.d == 0xffffffff || rcx_3 == 0 || *(rcx_3 + 8) == 0)
        result = j_sub_140a82f30(0x50)
        char* result_1 = result
        
        if (result == 0)
            result_1 = nullptr
        else
            *result = 0
            *(result + 8) = 0
            __builtin_memset(&result[0x10], 0, 0x30)
            *(result + 0x48) = 0
        
        void* rcx_4 = arg_10
        char* result_2 = result_1
        
        if (rcx_4 == 0)
            goto label_141e74902
        
        result = *(rcx_4 + 0x2e8)
        
        if (*(result + 0x18) == 0)
            goto label_141e74902
        
        *result_1 = rcx_4
        *(result_1 + 0x48) = arg1
        *(result_1 + 0x18) = 0
        
        if (*(result_1 + 0x1c) s<= 3)
            sub_1405a51b0(&result_1[0x10], 4)
        
        int32_t* rcx_7 = **(*(*result_1 + 0x2e8) + 0x10)
        int64_t* r8_5 = (sx.q(sub_141e739c0(result_1, *rcx_7, rcx_7[1])) << 5) + *(result_1 + 0x10)
        r8_5[3].d = 0
        result = sub_142363400(*result_1, 0, r8_5, 1)
        
        if (result.b == 0)
            result_1 = result_2
        label_141e74902:
            
            if (result_1 != 0)
                int64_t rcx_13 = *(result_1 + 0x30)
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                int64_t rcx_14 = *(result_1 + 0x20)
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                int64_t rcx_15 = *(result_1 + 0x10)
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                result = j_sub_140a74f90(result_1)
        else
            int64_t rbp_1 = sx.q(*(result_1 + 0x28))
            int32_t rax_5 = (rbp_1 + 1).d
            *(result_1 + 0x28) = rax_5
            
            if (rax_5 s> *(result_1 + 0x2c))
                sub_1405a4cf0(&result_1[0x20])
            
            *(*(result_1 + 0x20) + (rbp_1 << 2)) = 0
            int64_t rbp_2 = sx.q(*(result_1 + 0x38))
            int32_t rax_7 = (rbp_2 + 1).d
            *(result_1 + 0x38) = rax_7
            
            if (rax_7 s> *(result_1 + 0x3c))
                sub_1405a4cf0(&result_1[0x30])
            
            *(*(result_1 + 0x30) + (rbp_2 << 2)) = 0
            void** var_40 = &arg_10
            char** var_38_1 = &result_2
            void arg_20
            result = sub_1408d5f10(arg1 + 0x10, &arg_20, &var_40, nullptr)
    
    if (arg1 != -0xf8)
        return LeaveCriticalSection(arg1 + 0xf8)

return result
