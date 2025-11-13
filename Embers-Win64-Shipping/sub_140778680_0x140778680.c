// 函数: sub_140778680
// 地址: 0x140778680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int128_t zmm4 = *arg3
int128_t zmm5 = *(arg3 + 4)
int128_t zmm6 = *(arg3 + 8)
int128_t zmm7
zmm7.d = zmm4.d f* arg5
int128_t zmm9
zmm9.d = zmm6.d f* arg5
int128_t zmm8
zmm8.d = zmm5.d f* arg5
int128_t zmm10 = *arg2
int128_t zmm11 = *(arg2 + 4)
zmm7.d = zmm7.d f+ zmm10.d
zmm8.d = zmm8.d f+ zmm11.d
int128_t zmm12 = *(arg2 + 8)
zmm9.d = zmm9.d f+ zmm12.d
float temp0 = _mm_sqrt_ss(0, zmm5.d f* zmm5.d + zmm4.d f* zmm4.d + zmm6.d f* zmm6.d)
float zmm0

if (temp0 <= 9.99999994e-09f)
    zmm4 = data_143dbb1f8
    zmm5 = data_143dbb1fc
    zmm6 = data_143dbb200
else
    zmm0 = 1f / temp0
    zmm4.d = zmm4.d f* zmm0
    zmm5.d = zmm5.d f* zmm0
    zmm6.d = zmm6.d f* zmm0

arg4 = arg4 * 0.5f
int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_f0 = 0
int64_t var_128 = 0
int64_t var_108 = 0
char var_ec = 0
zmm4.d = zmm4.d f* arg4
zmm0 = arg4
int64_t rax_2 = data_143cdfb48
arg4 = arg4 f* zmm6.d
int32_t var_bc = 8
zmm10.d = zmm10.d f- zmm4.d
zmm0 = zmm0 f* zmm5.d
zmm4.d = zmm4.d f+ zmm7.d
int32_t var_9c = 4
zmm12.d = zmm12.d f- arg4
char var_ea = 1
zmm11.d = zmm11.d f- zmm0
*arg2 = zmm10.d
*(arg2 + 8) = zmm12.d
*(arg2 + 4) = zmm11.d
float var_11c = zmm0 f+ zmm8.d
int32_t var_120 = zmm4.d
float var_118 = arg4 f+ zmm9.d
int32_t var_f7 = 0x10000
int64_t var_100 = rax_2
char var_f8 = 0
char var_f3 = 1
uint64_t result

if (temp0 <= 9.99999994e-09f)
    result = 0xffffffff
else
    AcquireSRWLockExclusive(arg1)
    void* rdi_3 = &arg1[sx.q(arg1->__offset(0x58).d) * 2]
    int64_t rbx_1 = sx.q(*(rdi_3 + 0x30))
    int32_t rax_3 = (rbx_1 + 1).d
    *(rdi_3 + 0x30) = rax_3
    
    if (rax_3 s> *(rdi_3 + 0x34))
        sub_140775640(rdi_3 + 0x28)
    
    sub_140744050(rbx_1 * 0xa0 + *(rdi_3 + 0x28), arg2, &var_120, 0, &var_108)
    ReleaseSRWLockExclusive(arg1)
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    if (var_c8 != 0)
        sub_140a74f90(var_c8)
    
    result = zx.q(rbx_1.d)

__security_check_cookie(rax_1 ^ &var_158)
return result
