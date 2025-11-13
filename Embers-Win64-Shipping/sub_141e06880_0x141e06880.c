// 函数: sub_141e06880
// 地址: 0x141e06880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result
*(arg1 + 0x31) |= 0x40
int32_t i = 0
void* rdi = arg1

if (*(arg1 + 0x80) s> 0)
    int64_t** r14_1 = nullptr
    int64_t r15
    int64_t var_28_1 = r15
    
    do
        result = *(rdi + 0x78)
        int64_t* rbx_1 = *(r14_1 + result)
        
        if (rbx_1 != 0 && *rbx_1 != 0)
            char rax_1 = *(rdi + 0x30)
            r15.b = rax_1 == 2
            
            if (rbx_1[0x31].d s> 0 || (rax_1 != 2 && (rax_1 == 0 || rbx_1 != *(rdi + 0x1e0))))
                arg1.b = 0
            else
                arg1.b = 1
            
            uint32_t zmm3[0x4] = data_143f393b0
            int128_t zmm2 = zx.o(0)
            float zmm1[0x4] = zmm3
            char var_88 = 0
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_143f393c0)
            zmm1[0].q = zmm2 u>> 0x40
            void* rsi_1 = nullptr
            float var_78_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            int32_t var_84_1 = 0
            int128_t var_68_1 = zmm2
            uint32_t var_58_1[0x4] = temp0_1
            
            if (arg1.b != 0)
                rsi_1 = rdi + 0x200
                
                if (rax_1 == 1)
                    rsi_1 = &var_88
            
            sub_141e143a0(rbx_1, sub_141e2c430(rbx_1), rsi_1, r15.b)
            result, arg1 = sub_141e2c3e0(rbx_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(rdi + 0x80))

__security_check_cookie(result_1 ^ &var_a8)
return result
