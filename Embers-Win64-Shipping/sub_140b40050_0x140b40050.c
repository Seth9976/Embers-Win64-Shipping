// 函数: sub_140b40050
// 地址: 0x140b40050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_198
int64_t var_38_1 = __security_cookie ^ &var_198
int64_t rbp
rbp.b = 1
int64_t rsi_1 = 0

do
    char* rbx_1 = arg1 + rsi_1
    
    if (*(arg1 + rsi_1) != 0)
        int64_t rax_2 = -1
        
        do
            rax_2 += 1
        while (rbx_1[rax_2] != 0)
        
        rsi_1 += sx.q(rax_2.d + 1)
        int64_t rax = 0
        
        while (true)
            char rcx = rbx_1[rax]
            rax += 1
            
            if (rcx != *(rax + 0x142e77ca7))
                void* rdi_1 = arg1 + rsi_1
                void* var_168
                
                if (arg3 == 0)
                    var_168 = rdi_1
                else
                    void* rax_5 = sub_140a82f30(0x14, 0)
                    int128_t zmm0_1 = *rdi_1
                    var_168 = rax_5
                    *rax_5 = zmm0_1
                    *(rax_5 + 0x10) = *(rdi_1 + 0x10)
                
                void var_158
                sub_1405eb940(&var_158, rbx_1)
                int32_t rdx_1 = 0
                int32_t rcx_3 = 0
                int64_t var_178 = 0
                int64_t var_170_1 = 0
                int16_t* var_50
                
                if (var_50 != 0 && *var_50 != 0)
                    int64_t rbx_2 = -1
                    
                    do
                        rbx_2 += 1
                    while (var_50[rbx_2] != 0)
                    
                    if (rbx_2.d + 1 s> 0)
                        sub_1405947f0(&var_178, rbx_2.d + 1)
                        rcx_3 = var_170_1:4.d
                        rdx_1 = var_170_1.d
                    
                    int32_t rax_6 = rbx_2.d + 1 + rdx_1
                    var_170_1.d = rax_6
                    
                    if (rax_6 s> rcx_3)
                        sub_140594770(&var_178)
                    
                    UnDecorator::getReferenceType(var_178, var_50, (rbx_2.d + 1) * 2)
                
                int64_t* rcx_7 = &data_1439a92a0
                
                if (rbp.b != 0)
                    rcx_7 = &data_1439a9250
                
                sub_14093bda0(rcx_7, &var_178, &var_168)
                int64_t rcx_8 = var_178
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t var_58
                
                if (var_58 != 0)
                    sub_140a74f90(var_58)
                
                rsi_1 += 0x14
                break
            
            if (rax == 4)
                rbp.b = 0
                break
while (rsi_1 u< arg2)

__security_check_cookie(var_38_1 ^ &var_198)
