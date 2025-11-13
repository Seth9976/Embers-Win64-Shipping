// 函数: sub_140778930
// 地址: 0x140778930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
float zmm2 = arg3[1] f- arg2[1]
float zmm1 = *arg3 - *arg2
float zmm0 = arg3[2] f- arg2[2]
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t var_4c = 8
int32_t var_2c = 4
int32_t var_80 = 0
int64_t var_a8 = 0
int64_t var_98 = 0
char var_7c = 0
char var_7a = 1
int32_t var_87 = 0x10000
int64_t var_90 = data_143cdfb48
char var_88 = 0
char var_83 = 1
uint64_t result

if (zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0 <= 9.99999994e-09f)
    result = 0xffffffff
else
    AcquireSRWLockExclusive(arg1)
    void* rdi_3 = &arg1[sx.q(arg1->__offset(0x58).d) * 2]
    int64_t rbx_1 = sx.q(*(rdi_3 + 0x30))
    int32_t rax_3 = (rbx_1 + 1).d
    *(rdi_3 + 0x30) = rax_3
    
    if (rax_3 s> *(rdi_3 + 0x34))
        sub_140775640(rdi_3 + 0x28)
    
    sub_140744050(rbx_1 * 0xa0 + *(rdi_3 + 0x28), arg2, arg3, arg4, &var_98)
    ReleaseSRWLockExclusive(arg1)
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    result = zx.q(rbx_1.d)

__security_check_cookie(rax_1 ^ &var_d8)
return result
