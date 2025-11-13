// 函数: sub_141a082e0
// 地址: 0x141a082e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t result = __security_cookie ^ &var_148
int64_t result_1 = result

if (arg1[0xb7].d != 0)
    int64_t* rdi_1 = arg1[0xa4]
    int32_t i_2 = arg1[0xa5].d
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int32_t r15_3 =
        *(arg1 + 0x464) + 1 + (*(arg1 + 0x46c) - arg1[0x8d].d + 1) * arg1[0xd].d - arg1[0x8c].d
    
    if (i_2 != 0)
        int32_t i
        
        do
            sub_1405d1550(rdi_1)
            rdi_1 = &rdi_1[4]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg1[0xa5].d = 0
    
    if (*(arg1 + 0x52c) != r15_3)
        sub_1405a51b0(&arg1[0xa4], r15_3)
    
    (*(*arg2 + 0x10))(arg2, zx.q(r15_3))
    char* r15_4 = arg1[0xc]
    int64_t rcx_3 = sx.q(arg1[0xd].d)
    int64_t r12_1 = 0
    char* var_110_1 = r15_4
    int64_t var_108_1 = 0
    result = &r15_4[rcx_3]
    
    if (r15_4 u> result)
        rcx_3 = 0
    
    int128_t var_f8
    int32_t var_bc
    int32_t var_94
    int32_t var_5c
    
    if (rcx_3 != 0)
        do
            char rax_2 = *r15_4
            int32_t i_1 = arg1[0x8d].d
            result = arg1[0xbd]
            
            if (i_1 s<= *(arg1 + 0x46c))
                int64_t r14_1 = sx.q(*(sx.q(arg1[0x8c].d) + result))
                
                do
                    int64_t r9_1 = arg1[0xb6]
                    var_bc &= 0xf8000000
                    var_94 &= 0xfffff800
                    var_5c = (var_5c & 0xfc0c003c) | 0x40c003c
                    int64_t var_90_1 = 0
                    int32_t var_84_1 = 1
                    int128_t var_80
                    __builtin_memset(&var_80, 0, 0x18)
                    int32_t var_68_1 = 0xffffffff
                    int32_t var_64_1 = 0
                    int32_t var_60_1 = 0xffff0000
                    int32_t var_88_1 = 1
                    __builtin_memset(&var_f8, 0, 0x3c)
                    int64_t var_b0_1 = 1
                    int32_t var_a0_1 = 0xffffffff
                    int32_t var_9c_1 = 0
                    int32_t var_98_1 = 0x3f800000
                    result = sub_141a0e180(arg1, i_1, rax_2, *(r9_1 + (r14_1 << 3)), &var_f8, 
                        &arg1[0xa4])
                    
                    if (result.b != 0)
                        arg3 = 3.40282347e+38f
                        result = (*(*arg2 + 0x18))(arg2, &var_f8, arg3)
                    
                    if (var_90_1 != 0)
                        result = sub_140a74f90(var_90_1)
                    
                    i_1 += 1
                while (i_1 s<= *(arg1 + 0x46c))
                
                r15_4 = var_110_1
                r12_1 = var_108_1
            
            r15_4 = &r15_4[1]
            r12_1 += 1
            var_110_1 = r15_4
            var_108_1 = r12_1
        while (r12_1 != rcx_3)
    
    int64_t rdi_2 = sx.q(arg1[0x8c].d)
    
    if (rdi_2.d s<= *(arg1 + 0x464))
        int64_t r14_2 = rdi_2 << 2
        
        do
            var_bc &= 0xf8000000
            var_94 &= 0xfffff800
            var_5c = (var_5c & 0xfc0c003c) | 0x40c003c
            int64_t var_90_2 = 0
            void* var_120_2 = &arg1[0xa4]
            int64_t* var_128_2 = &var_f8
            int32_t var_84_2 = 1
            int128_t var_80_1
            __builtin_memset(&var_80_1, 0, 0x18)
            int32_t var_68_2 = 0xffffffff
            int32_t var_64_2 = 0
            int32_t var_60_2 = 0xffff0000
            int32_t var_88_2 = 1
            __builtin_memset(&var_f8, 0, 0x3c)
            int64_t var_b0_2 = 1
            int32_t var_a0_2 = 0xffffffff
            int32_t var_9c_2 = 0
            int32_t var_98_2 = 0x3f800000
            result = sub_1419f7840(arg1, rdi_2.d, 0, nullptr, var_128_2)
            
            if (result.b != 0)
                if (rdi_2.d != arg1[0x8c].d)
                    arg3 = __sqrtss_xmmss_memss(arg3, *(arg1[0x8a] + r14_2))
                    arg3 = arg3 + arg3
                else
                    arg3 = 3.40282347e+38f
                
                result = (*(*arg2 + 0x18))(arg2, &var_f8, arg3)
            
            if (var_90_2 != 0)
                result = sub_140a74f90(var_90_2)
            
            rdi_2 = zx.q(rdi_2.d + 1)
            r14_2 += 4
        while (rdi_2.d s<= *(arg1 + 0x464))

__security_check_cookie(result_1 ^ &var_148)
return result
