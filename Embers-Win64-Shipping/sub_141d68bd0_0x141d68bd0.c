// 函数: sub_141d68bd0
// 地址: 0x141d68bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0

if ((arg1[1] == 0 & sub_140b5b8a0(*arg1, 0)) != 0)
    return nullptr

int16_t* var_38
sub_140b63b70(arg1, &var_38)
int32_t var_30

if (sub_140bace50(&var_38) != 0)
    int32_t var_2c
    
    if (var_30 != 0)
        int32_t var_30_2 = var_30 + 1
        
        if (var_30 + 1 s> var_2c)
            sub_140594770(&var_38)
        
        int16_t* rdx_3 = var_38
        memmove(&rdx_3[1], rdx_3, var_30 * 2)
        *var_38 = 0x2f
    else
        int32_t var_30_1 = 2
        
        if (var_2c s< 2)
            sub_140594770(&var_38)
        
        *var_38 = 0x2f
        var_38[1] = 0
int64_t* rbx_2 = *(arg2 + 0x98)
void* r14_1 = &rbx_2[sx.q(*(arg2 + 0xa0))]
void* const result

if (rbx_2 == r14_1)
label_141d68d1d:
    result = nullptr
else
    while (true)
        result = *rbx_2
        int64_t var_28
        char rax_9
        
        if (result != 0)
            rdi |= 1
            rax_9 = sub_140a236f0(sub_1420e4db0(result, &var_28), &var_38, 1)
        
        void* rbp
        
        if (result == 0 || rax_9 == 0)
            rbp.b = 0
        else
            rbp.b = 1
        
        if ((rdi.b & 1) != 0)
            int64_t rcx_8 = var_28
            rdi &= 0xfffffffe
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        if (rbp.b != 0)
            break
        
        rbx_2 = &rbx_2[1]
        
        if (rbx_2 == r14_1)
            goto label_141d68d1d

int16_t* rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return result
