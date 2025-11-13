// 函数: sub_1425e6c10
// 地址: 0x1425e6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char r14 = 0

if (*(arg1 + 0x40) != 0)
    int64_t rax_1 = j_sub_140a82f30(1)
    void* rdi_1 = *(arg1 + 0x40)
    int64_t arg_10 = 0
    arg_8.q = 0x2bca2875f4373fff
    int64_t* rax_2
    int64_t r9_1
    rax_2, r9_1 = sub_141cbc340()
    int32_t* var_a8_1 = &arg_8
    r9_1.b = 2
    int64_t* var_b0_1 = &arg_10
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54
    __builtin_memset(&var_54, 0, 0x1c)
    sub_1425e62b0(rdi_1, rax_1, rax_2, r9_1, &var_88)
    int64_t* rax_3 = j_sub_140a82f30(0x10)
    int64_t* r15_1 = rax_3
    int64_t rsi_1
    int64_t var_98
    
    if (rax_3 == 0)
        rsi_1 = var_98
        r15_1 = nullptr
    else
        int16_t* rax_4 = sub_140b73b20(0)
        var_98 = 0
        int32_t var_90_1 = 0
        int32_t rax_5 = 0
        int32_t var_8c_1 = 0
        rsi_1 = 0
        int32_t rdi_2 = 0
        
        if (rax_4 != 0 && *rax_4 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rax_4[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_98, rbx_2.d + 1)
                rax_5 = var_8c_1
                rdi_2 = var_90_1
                rsi_1 = var_98
            
            rdi_2 += rbx_2.d + 1
            
            if (rdi_2 s> rax_5)
                sub_140594770(&var_98)
                rsi_1 = var_98
            
            UnDecorator::getReferenceType(rsi_1, rax_4, (rbx_2.d + 1) * 2)
        
        *r15_1 = 0
        r15_1[1].d = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(r15_1, rdi_2, 0)
            memcpy(*r15_1, rsi_1, rdi_2 * 2)
            r14 = 1
        else
            *(r15_1 + 0xc) = 0
            r14 = rdi_2.b + 1
    void* rbx_4 = *(arg1 + 0x40)
    arg_8.q = 0x2bca2875f4373fff
    arg_10 = 0
    int64_t* rax_6
    int64_t r9_2
    rax_6, r9_2 = sub_1425e1d00()
    int32_t* var_a8_2 = &arg_8
    r9_2.b = 2
    int64_t* var_b0_2 = &arg_10
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_2 = 0x80
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_1
    __builtin_memset(&var_54_1, 0, 0x1c)
    sub_1425e62b0(rbx_4, r15_1, rax_6, r9_2, &var_88)
    
    if ((r14 & 1) != 0 && rsi_1 != 0)
        sub_140a74f90(rsi_1)

int64_t* result = sub_140b29d90(&arg_8)
*(arg1 + 0x28) = *result
return result
