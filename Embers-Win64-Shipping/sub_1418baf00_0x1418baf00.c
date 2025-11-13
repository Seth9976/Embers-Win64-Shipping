// 函数: sub_1418baf00
// 地址: 0x1418baf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
uint64_t result = __security_cookie ^ &var_1a8
uint64_t result_1 = result
int32_t i = 0
void* var_178 = arg1

if (*(arg1 + 0x210) s> 0)
    do
        void var_168
        sub_1405eb940(&var_168, sx.q(i) * 0x104 + *(arg1 + 0x208))
        int16_t* rsi_1 = nullptr
        int32_t rbp_1 = 0
        int16_t* var_188 = nullptr
        int32_t r12_1 = 0
        int64_t var_180_1 = 0
        int16_t* var_60
        
        if (var_60 != 0 && *var_60 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (var_60[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_188, rbx_1.d + 1)
                r12_1 = var_180_1:4.d
                rbp_1 = var_180_1.d
                rsi_1 = var_188
            
            rbp_1 += rbx_1.d + 1
            var_180_1.d = rbp_1
            
            if (rbp_1 s> r12_1)
                sub_140594770(&var_188)
                r12_1 = var_180_1:4.d
                rbp_1 = var_180_1.d
                rsi_1 = var_188
            
            UnDecorator::getReferenceType(rsi_1, var_60, (rbx_1.d + 1) * 2)
        
        int64_t* r14_1 = *arg2
        int64_t* rbx_3 = r14_1
        void* rdi_4 = &r14_1[sx.q(arg2[1].d) * 2]
        
        if (r14_1 != rdi_4)
            while (true)
                int16_t* const rdx_5 = &data_142d40450
                
                if (rbp_1 != 0)
                    rdx_5 = rsi_1
                
                int16_t* const rcx_4
                
                if (rbx_3[1].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *rbx_3
                
                result = sub_140a54510(rcx_4, rdx_5)
                
                if (result.d == 0)
                    break
                
                rbx_3 = &rbx_3[2]
                
                if (rbx_3 == rdi_4)
                    goto label_1418bb045
        
        if (r14_1 == rdi_4 || ((rbx_3 - r14_1) s>> 4).d == 0xffffffff)
        label_1418bb045:
            int64_t rbx_4 = sx.q(arg2[1].d)
            int32_t rax_2 = (rbx_4 + 1).d
            arg2[1].d = rax_2
            
            if (rax_2 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            var_188 = nullptr
            result = (rbx_4 << 4) + *arg2
            int64_t var_180_2 = 0
            *result = rsi_1
            *(result + 8) = rbp_1
            *(result + 0xc) = r12_1
        else if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
        
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        arg1 = var_178
        i += 1
    while (i s< *(arg1 + 0x210))

__security_check_cookie(result_1 ^ &var_1a8)
return result
