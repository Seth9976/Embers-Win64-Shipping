// 函数: sub_141f6f9e0
// 地址: 0x141f6f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
sub_141ef3920(arg1)
int64_t* result = *(arg1 + 0x288)

if (result != 0)
    int128_t zmm1 = *(arg1 + 0x1d0)
    int128_t var_a8 = *(arg1 + 0x1c0)
    char rax_2 = *(arg1 + 0x1f0)
    int128_t var_88_1 = *(arg1 + 0x1e0)
    
    if (sub_140a80f40() == 0)
        uint32_t rax_4
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
            void var_d8
            void** rax_5 = sub_141f5a8f0(&var_d8, nullptr, 0xff)
            void* rcx_5 = *rax_5
            *(rcx_5 + 0x10) = result.o
            *(rcx_5 + 0x20) = var_a8
            *(rcx_5 + 0x30) = zmm1
            *(rcx_5 + 0x40) = var_88_1
            *(rcx_5 + 0x50) = rax_2.o
            void* rcx_6 = *rax_5
            int32_t r8_3 = rax_5[2].d
            int64_t* rdx_3 = rax_5[1]
            int64_t* rbx_1 = *(rcx_6 + 0x68)
            int64_t* var_e8_1 = rbx_1
            int32_t* rdi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_1 += 1
                rbx_1 = var_e8_1
            
            result = sub_14106e0b0(rcx_6, rdx_3, r8_3, 1)
            
            if (rbx_1 != 0)
                result = zx.q(*rdi_1)
                *rdi_1 -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(var_e8_1)
        else
            void* var_68_1 = result.o.q
            int128_t var_48_1 = zmm1
            int128_t var_58 = var_a8
            int128_t var_38_1 = var_88_1
            result = sub_1424508d0(var_68_1 + 0x10, &var_58, rax_2.o.b)
    else
        result = sub_1424508d0(&result[2], &var_a8, rax_2)

__security_check_cookie(rax_1 ^ &var_108)
return result
