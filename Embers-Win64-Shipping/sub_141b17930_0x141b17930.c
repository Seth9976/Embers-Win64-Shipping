// 函数: sub_141b17930
// 地址: 0x141b17930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_158 = 0x3f800000
int64_t rdx

if (rax_2 == 0x80000000)
    int64_t* rdx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = *(rdx_1 + arg3)
else
    int32_t var_14c_1 = 0
    rdx = rax_2.q

char result
int32_t zmm6_1
result, zmm6_1 = sub_141a467f0(arg1 + 0x20, rdx, &var_158)

if (result != 0)
    int32_t zmm0_1 = var_158
    
    if (not(zmm0_1 f< zmm6_1))
        char var_100
        char result_1 = var_100 | 3
        int32_t var_138_1 = zmm0_1
        void** const var_140 = &data_143059ef0
        void var_f8
        int128_t* rax_3 = sub_1405ab790(&var_f8, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_140)
        int64_t rdi_1 = sx.q(arg4[1].d)
        int32_t rcx_2 = (rdi_1 + 1).d
        arg4[1].d = rcx_2
        
        if (rcx_2 s> *(arg4 + 0xc))
            sub_1405c5190(arg4)
        
        sub_1405ab620(rdi_1 * 0xc8 + *arg4, rax_3)
        char var_38
        
        if ((var_38 & 1) != 0)
            int64_t* var_78
            int64_t* rcx_6 = &var_78
            
            if ((var_38 & 2) == 0)
                rcx_6 = var_78
            
            (**rcx_6)(rcx_6, 0)
            
            if ((var_38 & 2) == 0)
                sub_140a74f90(var_78)
        
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        result = result_1
        
        if ((result & 1) != 0)
            void** const rcx_9 = &var_140
            
            if ((result & 2) == 0)
                rcx_9 = var_140
            
            char var_100_1 = result & 0xfe
            result = (**rcx_9)(rcx_9, 0)
            
            if ((var_100_1 & 2) == 0)
                result = sub_140a74f90(var_140)

__security_check_cookie(rax_1 ^ &var_188)
return result
