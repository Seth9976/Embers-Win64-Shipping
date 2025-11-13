// 函数: sub_14238e7f0
// 地址: 0x14238e7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r13 = sx.q(arg2)
int32_t i = 0
void* result = *(*arg1[0x2a] + (r13 << 3))
void* result_1 = result

if (*(result + 0x30) s> 0)
    do
        int32_t rax_5 = (*(*arg1 + 0x188))(arg1)
        int32_t rsi_1 = 0
        
        if (rax_5 s> 0)
            do
                int32_t var_a4 = var_a4 & 0xf8000000
                int32_t var_7c = var_7c & 0xfffff800
                int128_t var_e0
                int128_t* var_f0_1 = &var_e0
                int32_t var_44 = (var_44 & 0xfc0c003c) | 0x40c003c
                int64_t rax_9 = *arg1
                char var_f8_1 = 0
                char var_100_1 = 0
                int64_t var_78_1 = 0
                int32_t var_6c_1 = 1
                int128_t var_68
                __builtin_memset(&var_68, 0, 0x18)
                int32_t var_50_1 = 0xffffffff
                int32_t var_4c_1 = 0
                int32_t var_48_1 = 0xffff0000
                int32_t var_70_1 = 1
                __builtin_memset(&var_e0, 0, 0x3c)
                int64_t var_98_1 = 1
                int32_t var_88_1 = 0xffffffff
                int32_t var_84_1 = 0
                int32_t var_80_1 = 0x3f800000
                int128_t var_d0
                int128_t var_c0
                int64_t var_b0
                int32_t var_a8
                
                if ((*(rax_9 + 0x198))(arg1, zx.q(r13.d), zx.q(rsi_1), zx.q(i), 0, var_100_1, 
                        var_f8_1, var_f0_1, result_1, var_e0, var_d0, var_c0, var_b0, var_a8) != 0)
                    int64_t rdi_1 = sx.q(arg3[1].d)
                    int32_t rax_11 = (rdi_1 + 1).d
                    arg3[1].d = rax_11
                    
                    if (rax_11 s> *(arg3 + 0xc))
                        sub_140775640(arg3)
                    
                    sub_140819f30(rdi_1 * 0xa0 + *arg3, &var_e0)
                
                if (var_78_1 != 0)
                    sub_140a74f90(var_78_1)
                
                rsi_1 += 1
            while (rsi_1 s< rax_5)
        
        result = result_1
        i += 1
    while (i s< *(result + 0x30))

__security_check_cookie(rax_1 ^ &var_128)
return result
