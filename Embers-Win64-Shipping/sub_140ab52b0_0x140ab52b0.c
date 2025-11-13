// 函数: sub_140ab52b0
// 地址: 0x140ab52b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t result = __security_cookie ^ &var_138
int64_t result_1 = result
int32_t r14 = arg2[1].d

if (r14 != 0)
    int64_t* rbx_1 = *(arg1 + 0x140)
    void* rsi_3 = &rbx_1[sx.q(*(arg1 + 0x148)) * 2]
    int32_t var_6c_1 = 0x80
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t rax_1 = 0
    int32_t rcx = 0
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int64_t var_e8 = 0
    int32_t var_e0_1 = 0
    int32_t var_bc_1 = 0x80
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x1c)
    int32_t var_b8_1 = 0xffffffff
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    
    if (rbx_1 != rsi_3)
        int64_t r15_1 = *arg2
        
        do
            int64_t* var_118_1 = &var_e8
            int32_t var_100_1 = r14
            int128_t zmm0 = r15_1.o
            int64_t rax_2 = **rbx_1
            int128_t var_f8 = zmm0
            (*(rax_2 + 0x20))(zmm0, zx.q(arg3), &var_f8, &var_98, var_118_1)
            rbx_1 = &rbx_1[2]
        while (rbx_1 != rsi_3)
        
        rcx = var_64_1
        int32_t var_90
        rax_1 = var_90
    
    if (rax_1 != rcx)
        sub_140ac7920(arg1, &var_98, 0)
    
    if (var_e0_1 != var_b4_1)
        sub_140ac71b0(arg1, &var_e8, 0)
    
    sub_140aa65e0(arg1)
    int32_t var_a0_2 = 0
    
    if (var_a8_1 != 0)
        sub_140a74f90(var_a8_1)
    
    sub_140aa93f0(&var_e8, 0)
    int64_t var_c8
    
    if (var_c8 != 0)
        sub_140a74f90(var_c8)
    
    int64_t rcx_8 = var_e8
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    result = sub_140aa93f0(&var_98, 0)
    int64_t var_78
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    int64_t rcx_12 = var_98
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)

__security_check_cookie(result_1 ^ &var_138)
return result
