// 函数: sub_140db5cd0
// 地址: 0x140db5cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int32_t* result = __security_cookie ^ &var_198
int32_t* result_1 = result
void* rdx = *arg1

if (rdx != 0)
    int32_t rdi_1 = 0
    int64_t* var_168 = nullptr
    int32_t var_160_1 = 0
    int32_t rcx_1 = 0
    void var_148
    int16_t* rsi_1 = *(sub_14060c4d0(&var_148, *(rdx + 0x20)) + 0x108)
    int64_t var_178 = 0
    int32_t var_170_1 = 0
    int32_t var_16c_1 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_178, rbx_1.d + 1)
            rcx_1 = var_16c_1
            rdi_1 = var_170_1
        
        int32_t rax_2 = rbx_1.d + 1 + rdi_1
        int32_t var_170_2 = rax_2
        
        if (rax_2 s> rcx_1)
            sub_140594770(&var_178)
        
        UnDecorator::getReferenceType(var_178, rsi_1, (rbx_1.d + 1) * 2)
    
    result = sub_140a2ccb0(&var_178, &var_168, &data_142d404d4, 1)
    int64_t rcx_6 = var_178
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
    
    int64_t var_48
    
    if (var_48 != 0)
        result = sub_140a74f90(var_48)
    
    int64_t* rbx_3 = var_168
    int64_t rdi_2 = sx.q(var_160_1)
    void* rsi_4 = &rbx_3[rdi_2 * 2]
    
    if (rbx_3 != rsi_4)
        do
            int16_t* rdx_6
            
            if (rbx_3[1].d == 0)
                rdx_6 = &data_142d40450
            else
                rdx_6 = *rbx_3
            
            sub_140b58260(&var_178, rdx_6, 1)
            void var_158
            result = sub_1407d1800(&arg1[0x16], &var_158, &var_178, nullptr)
            rbx_3 = &rbx_3[2]
        while (rbx_3 != rsi_4)
        
        rdi_2 = zx.q(var_160_1)
        rbx_3 = var_168
    
    if (rdi_2.d != 0)
        int32_t i
        
        do
            int64_t rcx_10 = *rbx_3
            
            if (rcx_10 != 0)
                result = sub_140a74f90(rcx_10)
            
            rbx_3 = &rbx_3[2]
            i = rdi_2.d
            rdi_2 = zx.q(rdi_2.d - 1)
        while (i != 1)
        rbx_3 = var_168
    
    if (rbx_3 != 0)
        result = sub_140a74f90(rbx_3)

__security_check_cookie(result_1 ^ &var_198)
return result
