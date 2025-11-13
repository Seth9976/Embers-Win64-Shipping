// 函数: sub_142c32d90
// 地址: 0x142c32d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int32_t result_2
sub_142c19030(&result_2, 1, arg2, arg3)
int32_t* var_d0 = &result_2
int32_t var_64 = rdi
int32_t var_58 = 8
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x18)
int32_t var_c8 = 8
int32_t var_60
char var_4b
char rax

if (var_60 == 1 || var_4b != 0)
    rax = 1
else
    rax = 0

int64_t rdx = *(arg3 + 0x70)
int64_t r14 = *(arg3 + 0x80)
char var_c4 = rax
bool var_104 = var_60 == 1
int32_t* var_110 = &result_2
char var_4a
bool var_103 = var_4a != 0
int32_t rax_2 = *(arg3 + 0x38) & 0xfffffffe
char var_c3 = 1
int32_t result_1 = 0
uint64_t result = zx.q(*(arg3 + 0x60))
int32_t var_c0 = 0xffffffff
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x18)
int32_t var_108 = 8
int32_t var_100 = rdi
int32_t var_128 = result.d
int64_t var_120 = rdx

if (result.d != 0)
    do
        result = zx.q(result_1)
        uint64_t r15_1 = result * 0x14
        
        if ((*(r15_1 + rdx + 4) & rdi) != 0)
            result_2 = result_1
            int32_t var_e0_1 = 1
            int32_t var_dc_1 = *(*(var_110 + 0x90) + 0x60)
            void* r8_1 = *(var_110 + 0x90)
            char rdx_2
            
            if (result_1 != *(r8_1 + 0x5c))
                rdx_2 = 0
            else
                rdx_2 = *(*(r8_1 + 0x70) + zx.q(*(r8_1 + 0x5c)) * 0x14 + 0xf)
            
            char var_fc_1 = rdx_2
            result = sub_142c22680(&result_2)
            rdx = var_120
            
            if (result.b != 0)
                uint64_t result_3 = zx.q(result_2)
                void** rcx_6 = *arg1
                result = sub_142c31200(*rcx_6, *(r15_1 + rdx), *(rdx + result_3 * 0x14), rcx_6[1])
                int32_t rcx_8 = result.d
                
                if (result.d != 0)
                    if (rax_2 != 4)
                        if (arg5 != 0)
                            rcx_8 = sub_142bfd700(arg2, result.w)
                        
                        if (arg1[1].b == 0)
                            int32_t rax_19 = rcx_8 s>> 1
                            *(r15_1 + r14 + 4) += rax_19
                            int32_t rcx_12 = rcx_8 - rax_19
                            uint64_t rax_21 = result_3 * 5
                            *(r14 + (rax_21 << 2) + 4) += rcx_12
                            *(r14 + (rax_21 << 2) + 0xc) += rcx_12
                        else
                            *(r14 + result_3 * 0x14 + 8) = rcx_8
                            *(arg3 + 0x28) |= 8
                    else
                        if (arg5 != 0)
                            rcx_8 = sub_142c1db90(arg2, result.w)
                        
                        if (arg1[1].b == 0)
                            int32_t rax_12 = rcx_8 s>> 1
                            *(r15_1 + r14) += rax_12
                            int32_t rcx_10 = rcx_8 - rax_12
                            uint64_t rax_14 = result_3 * 5
                            *(r14 + (rax_14 << 2)) += rcx_10
                            *(r14 + (rax_14 << 2) + 8) += rcx_10
                        else
                            *(r14 + result_3 * 0x14 + 0xc) = rcx_8
                            *(arg3 + 0x28) |= 8
                    
                    int32_t r8_3 = (result_3 + 1).d
                    result = zx.q(r8_3 - result_1)
                    
                    if (result.d u>= 2)
                        result = sub_142bf5c70(arg3, result_1, r8_3)
                
                result_1 = result_2
                rdx = var_120
                rdi = arg4
            else
                result_1 += 1
        else
            result_1 += 1
    while (result_1 u< var_128)

return result
