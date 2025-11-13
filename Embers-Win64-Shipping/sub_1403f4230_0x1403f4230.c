// 函数: sub_1403f4230
// 地址: 0x1403f4230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
int64_t rdi = sx.q(arg2)
int32_t var_468
void var_428
sub_1403f3a20(arg1, rdi.d, &var_428, &var_468)
float var_4a8[0xe]
sub_1403f3f60(&var_428, rdi.d, arg3, &var_4a8)
int32_t i = 0

if (rdi.d s> 0 && rdi.d u>= 8)
    int32_t rax_3 = rdi.d & 0x80000007
    
    if (rax_3 s< 0)
        rax_3 = ((rax_3 - 1) | 0xfffffff8) + 1
    
    do
        int64_t i_2 = sx.q(i)
        *(&var_4a8 + (i_2 << 2)) = _mm_mul_ps(*(&var_468 + (i_2 << 2)), *(&var_4a8 + (i_2 << 2)))
        int32_t rax_6 = i + 4
        i += 8
        int64_t rcx_1 = sx.q(rax_6)
        *(&var_4a8 + (rcx_1 << 2)) =
            _mm_mul_ps(*(&var_468 + (rcx_1 << 2)), *(&var_4a8 + (rcx_1 << 2)))
    while (i s< rdi.d - rax_3)

int64_t i_1 = sx.q(i)

if (i_1 s< rdi)
    void var_4ac
    float zmm0_1[0x4]
    
    if (rdi - i_1 s>= 4)
        do
            zmm0_1 = (&var_468)[i_1]
            int32_t var_464[0xf]
            float zmm1_1[0x4] = var_464[i_1]
            i_1 += 4
            void var_4b8
            zmm0_1[0] = zmm0_1[0] f* *(&var_4b8 + (i_1 << 2))
            void var_4b4
            zmm1_1[0] = zmm1_1[0] f* *(&var_4b4 + (i_1 << 2))
            *(&var_4b8 + (i_1 << 2)) = zmm0_1[0]
            void var_470
            zmm0_1 = *(&var_470 + (i_1 << 2))
            *(&var_4b4 + (i_1 << 2)) = zmm1_1[0]
            void var_4b0
            zmm0_1[0] = zmm0_1[0] f* *(&var_4b0 + (i_1 << 2))
            void var_46c
            zmm1_1 = *(&var_46c + (i_1 << 2))
            zmm1_1[0] = zmm1_1[0] f* *(&var_4ac + (i_1 << 2))
            *(&var_4b0 + (i_1 << 2)) = zmm0_1[0]
            *(&var_4ac + (i_1 << 2)) = zmm1_1[0]
        while (i_1 s< rdi - 3)
    
    while (i_1 s< rdi)
        zmm0_1 = (&var_468)[i_1]
        i_1 += 1
        zmm0_1[0] = zmm0_1[0] f* *(&var_4ac + (i_1 << 2))
        *(&var_4ac + (i_1 << 2)) = zmm0_1[0]

uint64_t result = sub_1403f4080(&var_428, rdi.d, &var_4a8, arg4)
__security_check_cookie(rax_1 ^ &var_4c8)
return result
