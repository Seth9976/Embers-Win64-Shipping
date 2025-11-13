// 函数: sub_142140f00
// 地址: 0x142140f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
void* result = __security_cookie ^ &var_118
void* result_1 = result
uint8_t r13 = *(arg1 + 0x36)

if ((r13 & 4) == 0)
    result = (*(*arg2 + 0x10))(arg2, zx.q(*(arg1 + 0x370)))
    int32_t i = 0
    
    if (*(arg1 + 0x370) s> 0)
        int64_t* rsi_1 = nullptr
        int64_t r12_1 = 0
        
        do
            result = *(arg1 + 0x360)
            void* r14_1 = *(rsi_1 + *(result + 0x438))
            
            if (*(r14_1 + 0x4c) u> 0)
                int128_t zmm0 = zx.o(0)
                int32_t var_bc = var_bc & 0xf8000000
                int32_t var_94 = var_94 & 0xfffff800
                void* result_2 = *(r14_1 + 0x40)
                void* var_80_1 = arg1 + 0x150
                int64_t rax_6 = *(arg1 + 0x368)
                int64_t var_90_1 = 0
                int32_t var_84_1 = 1
                int128_t var_78_1 = zmm0
                int32_t var_68_1 = 0xffffffff
                int32_t var_64_1 = 0
                int32_t var_60_1 = 0xffff0000
                int32_t var_88_1 = 1
                int128_t var_f8 = zmm0
                int128_t var_e0
                __builtin_memset(&var_e0, 0, 0x24)
                int64_t var_b0_1 = 1
                int32_t var_a0_1 = 0xffffffff
                int32_t var_9c_1 = 0
                int32_t var_98_1 = 0x3f800000
                int64_t* rcx_2 = *(r12_1 + rax_6 + 0x30)
                int64_t rax_8 = (*(*rcx_2 + 0x280))(rcx_2)
                int64_t rdx_1 = *(arg1 + 0x368)
                var_78_1.q = rax_8
                int32_t var_b8_1 = *(r14_1 + 0x48)
                int32_t var_b4_1 = *(r14_1 + 0x4c)
                int32_t var_a8_1 = *(r14_1 + 0x50)
                var_78_1:8.q = sx.q(i) * 0x70 + rdx_1
                int32_t var_a4_1 = *(r14_1 + 0x54)
                int128_t var_d0_1
                var_d0_1.q = *(r12_1 + rdx_1 + 0x38)
                char var_5e_1 = 0
                result = result_2
                int32_t var_5c = (zx.d(r13 u>> 4) & 7) << 0xd
                    | (((var_5c & 0xfc0c003c) | 0x40c003c) & 0xffff007f)
                int512_t zmm2
                
                if (result == 0)
                    zmm2.o = 0x7f7fffff
                    result = (*(*arg2 + 0x18))(arg2, &var_f8, zmm2)
                else if (*(result + 8) != 0xffffffff && *(result + 0x10) != 0)
                    zmm2.o = 0x7f7fffff
                    result = (*(*arg2 + 0x18))(arg2, &var_f8, zmm2)
                
                if (var_90_1 != 0)
                    result = sub_140a74f90(var_90_1)
            
            i += 1
            rsi_1 = &rsi_1[1]
            r12_1 += 0x70
        while (i s< *(arg1 + 0x370))

__security_check_cookie(result_1 ^ &var_118)
return result
