// 函数: sub_141ceb430
// 地址: 0x141ceb430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18
sub_14090aa40(*(arg1[4] + 8) + 0x150, &arg_18, data_143f35cc8)
void* arg_20
sub_14090a980(*(arg1[4] + 8) + 0x1a8, &arg_20, data_143f360f0)
void* arg_8
sub_14090aa40(*(arg1[4] + 8) + 0x2b0, &arg_8, data_143f36130)
void* var_78
sub_14090aa40(*(arg1[4] + 8) + 0x2b0, &var_78, data_143f36138)
void* var_70
sub_14090aa40(*(arg1[4] + 8) + 0x2b0, &var_70, data_143f36140)
void* var_68
sub_14090aa40(*(arg1[4] + 8) + 0x2b0, &var_68, data_143f36148)
int32_t rcx_12 = *arg1[1]
int32_t rdx_7 = rcx_12 * arg2
int32_t result_2 = *(*arg1 + 8)
int64_t r12 = sx.q(rdx_7)
int32_t result_3 = rcx_12 + rdx_7

if (result_3 s<= result_2)
    result_2 = result_3

uint64_t result = sx.q(result_2)
uint64_t result_1 = result

if (r12 s< result)
    void* rbx_1 = arg_8
    void* rbp_1 = var_78
    void* rsi_1 = arg_20
    void* rdi_1 = arg_18
    void* r14_1 = var_70
    void* r15_1 = var_68
    uint32_t zmm6[0x4] = 0x7fffffff
    int128_t zmm7 = 0x38d1b717
    
    do
        result = *(rbx_1 + 0x18)
        int64_t rdx_8 = sx.q(*(**arg1 + (r12 << 2)))
        int64_t r8_6 = *result
        int64_t rcx_14 = rdx_8 * 3
        
        if (not(_mm_and_ps(*(r8_6 + (rcx_14 << 2)), zmm6)[0] f> zmm7.d)
                && not(_mm_and_ps(*(r8_6 + (rcx_14 << 2) + 4), zmm6)[0] f> zmm7.d)
                && not(_mm_and_ps(*(r8_6 + (rcx_14 << 2) + 8), zmm6)[0] f> zmm7.d))
            result, zmm6, zmm7 =
                sub_141cee030(arg1[3], rdx_8.d, *arg1[2], rdi_1, rsi_1, rbx_1, rbp_1, r14_1, r15_1)
        
        r12 += 1
    while (r12 s< result_1)

return result
