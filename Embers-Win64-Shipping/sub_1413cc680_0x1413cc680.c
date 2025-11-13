// 函数: sub_1413cc680
// 地址: 0x1413cc680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int128_t var_c8
sub_141410c70(&var_c8, arg2)
int64_t var_228 = arg1
int128_t var_220 = var_c8
int64_t var_28
int64_t var_180 = var_28
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    int128_t var_b8
    int128_t var_a8
    int128_t var_98
    int128_t var_88
    int128_t var_78
    int128_t var_68
    int128_t var_58
    int128_t var_48
    int128_t var_38
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void var_248
        int64_t* rax_5 = sub_1413da750(&var_248, nullptr, 0xff)
        void* rdx_2 = *rax_5
        *(rdx_2 + 0x10) = var_228.o
        *(rdx_2 + 0x20) = var_220
        *(rdx_2 + 0x30) = var_b8
        *(rdx_2 + 0x40) = var_a8
        *(rdx_2 + 0x50) = var_98
        *(rdx_2 + 0x60) = var_88
        *(rdx_2 + 0x70) = var_78
        *(rdx_2 + 0x80) = var_68
        *(rdx_2 + 0x90) = var_58
        *(rdx_2 + 0xa0) = var_48
        *(rdx_2 + 0xb0) = var_38
        void* rcx_4 = *rax_5
        int32_t r8_1 = rax_5[2].d
        int64_t* rdx_3 = rax_5[1]
        int64_t* rbx_1 = *(rcx_4 + 0xc8)
        int64_t* var_258_1 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = var_258_1
        
        result = sub_1413f82d0(rcx_4, rdx_3, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(var_258_1)
    else
        int128_t var_178 = var_228.o
        int128_t var_168_1 = var_220
        int128_t var_158_1 = var_b8
        int128_t var_148_1 = var_a8
        int128_t var_138_1 = var_98
        int128_t var_128_1 = var_88
        int128_t var_118_1 = var_78
        int128_t var_108_1 = var_68
        int128_t var_f8_1 = var_58
        int128_t var_e8_1 = var_48
        int128_t var_d8_1 = var_38
        result = sub_1413c88c0(&var_178)
else
    result = sub_1413c88c0(&var_228)

__security_check_cookie(rax_1 ^ &var_278)
return result
