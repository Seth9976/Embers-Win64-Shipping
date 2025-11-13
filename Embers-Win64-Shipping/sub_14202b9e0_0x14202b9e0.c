// 函数: sub_14202b9e0
// 地址: 0x14202b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rdi = 0
int32_t arg_18 = 0
bool rdx = sub_140b5b8a0(arg2.d, 0) == 0

if ((arg_10:4.d != 0 | rdx) != 0)
    void* rax_2 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax_2 != 0)
        int16_t* var_38
        sub_1420e7020(&var_38, &arg_10, rax_2)
        int16_t* var_48
        int16_t* rsi_1
        
        if (sub_140bace50(&var_38) == 0)
            rsi_1 = var_38
        else
            int32_t var_30
            int32_t rbx_2
            
            if (var_30 == 0)
                rbx_2 = 0
            else
                rbx_2 = var_30 - 1
            
            var_48 = nullptr
            int32_t var_3c_1 = 0
            int32_t rdx_3 = 0
            int32_t var_40_1 = 0
            rsi_1 = nullptr
            int32_t r14_1 = 0
            
            if (rbx_2 + 2 s> 0)
                sub_1405947f0(&var_48, rbx_2 + 2)
                rdx_3 = var_40_1
                r14_1 = var_3c_1
                rsi_1 = var_48
            
            int32_t r15_2 = rdx_3 + 2 + rbx_2
            
            if (r15_2 s> r14_1)
                sub_140594770(&var_48)
                r14_1 = var_3c_1
                rsi_1 = var_48
            
            *rsi_1 = 0x2f
            int64_t rbx_3 = sx.q(rbx_2)
            memcpy(&rsi_1[1], var_38, rbx_3.d * 2)
            rsi_1[rbx_3 + 1] = 0
            int16_t* rcx_7 = var_38
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            var_38 = rsi_1
            int32_t var_30_1 = r15_2
            int32_t var_2c_1 = r14_1
        
        void** rbx_4 = *(rax_2 + 0x98)
        void* r15_3 = &rbx_4[sx.q(*(rax_2 + 0xa0))]
        
        if (rbx_4 != r15_3)
            do
                void* result = *rbx_4
                char rax_7
                
                if (result != 0)
                    rdi |= 1
                    rax_7 = sub_140a236f0(sub_1420e4db0(result, &var_48), &var_38, 1)
                
                if (result == 0 || rax_7 == 0)
                    rsi_1.b = 0
                else
                    rsi_1.b = 1
                
                if ((rdi.b & 1) != 0)
                    int16_t* rcx_10 = var_48
                    rdi &= 0xfffffffe
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                
                if (rsi_1.b != 0)
                    int16_t* rcx_12 = var_38
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                    
                    return result
                
                rbx_4 = &rbx_4[1]
            while (rbx_4 != r15_3)
            
            rsi_1 = var_38
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

return nullptr
