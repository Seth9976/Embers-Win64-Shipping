// 函数: sub_141ca2c90
// 地址: 0x141ca2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
void* result = __security_cookie ^ &var_c8
void* result_1 = result

if (arg2[1].d s>= 2)
    int64_t* rbx_1 = *arg2
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int16_t* rdx
    
    if (rbx_1[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *rbx_1
    
    void var_80
    int64_t* var_90 = sub_140b58260(&var_80, rdx, 1)
    void* var_88_1 = &rbx_1[2]
    int32_t var_98
    sub_141c8fcf0(&var_78, &var_98, &var_90, nullptr)
    int64_t* rcx_2 = *arg1
    void* var_a8 = nullptr
    int64_t var_a0_1 = 0
    int64_t* rax_4 = (*(*rcx_2 + 0x48))(rcx_2)
    int64_t r9_1 = *rax_4
    (*(r9_1 + 0x38))(rax_4, &var_78, &var_a8, r9_1, var_a8, var_a0_1)
    int32_t i = 0
    
    if (var_a0_1.d s> 0)
        int64_t rbx_2 = 0
        
        do
            void* rdi_1 = var_a8
            sub_14098ef70(rdi_1 + 0x28 + rbx_2)
            sub_14098ef70(rdi_1 + 0x28 + rbx_2)
            i += 1
            rbx_2 += 0x50
        while (i s< var_a0_1.d)
    
    sub_141c94120(&var_a8)
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    result = sub_140597460(&var_78)

__security_check_cookie(result_1 ^ &var_c8)
return result
