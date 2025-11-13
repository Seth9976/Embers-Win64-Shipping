// 函数: sub_142368f60
// 地址: 0x142368f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
void* result = __security_cookie ^ &var_c8
void* result_1 = result

if (*(arg1 + 0x10) != 0)
    int32_t rdx_1 = *(arg1 + 0x14)
    
    if (rdx_1 != 0 && (*(arg1 + 0x20) != 0 || *(arg1 + 0x34) != 0))
        char rcx = (data_1439c7a34).b
        int32_t var_58_1 = 1
        int128_t var_68 = zx.o(0)
        int64_t* rcx_1 = data_143f0f180
        int32_t var_44_1 = (1 << rcx) - 1
        int128_t* var_80_1 = &var_68
        int32_t rax_3 = *(arg1 + 0x18)
        int32_t var_90_1 = 1
        int128_t var_54_1 = data_143dbb1e0
        char var_40_1 = 0
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        int32_t var_98_1 = 1
        char var_a0_1 = *(arg1 + 0x30)
        int32_t var_a8_1 = rdx_1
        int32_t var_78
        (*(*rcx_1 + 0x560))(rcx_1, &var_78, &data_143f02b98)
        sub_1405d1600(arg1 - 0x18, &var_78)
        sub_1405d1550(&var_78)
        result = *(arg1 + 0x20)
        
        if (result != 0 && *(result + 8) s> 0)
            int64_t* rcx_4 = data_143f0f180
            var_90_1.b = 1
            var_98_1.b = 0
            var_a0_1.q = &var_78
            int64_t rbx_1 = (*(*rcx_4 + 0x510))(rcx_4, &data_143f02b98, *(arg1 - 0x18), 0, 1, 
                var_a0_1, var_98_1, var_90_1, rax_3, var_80_1)
            int64_t rdi_1 = **(arg1 + 0x20)
            int32_t rcx_8 = (&data_1439c85f4)[sx.q(*(arg1 + 0x30)) * 0xa] * *(arg1 + 0x10)
            int32_t rax_7 = *(arg1 + 0x14)
            
            if (var_78 != rcx_8)
                int32_t i = 0
                
                if (rax_7 != 0)
                    uint64_t r14_1 = zx.q(rcx_8)
                    
                    do
                        memcpy(rbx_1, rdi_1, r14_1.d)
                        rdi_1 += r14_1
                        rbx_1 += zx.q(var_78)
                        i += 1
                    while (i u< *(arg1 + 0x14))
            else
                memcpy(rbx_1, rdi_1, rax_7 * rcx_8)
            
            int64_t* rcx_11 = data_143f0f180
            int32_t var_a8_2
            var_a8_2.b = 0
            result = (*(*rcx_11 + 0x518))(rcx_11, &data_143f02b98, *(arg1 - 0x18), 0, var_a8_2, 1)
            int64_t* rcx_12 = *(arg1 + 0x20)
            rcx_12[1].d = 0
            
            if (*(rcx_12 + 0xc) != 0)
                result = sub_1405c5510(rcx_12, 0)

__security_check_cookie(result_1 ^ &var_c8)
return result
