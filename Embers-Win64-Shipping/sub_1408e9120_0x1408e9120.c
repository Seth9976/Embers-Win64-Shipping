// 函数: sub_1408e9120
// 地址: 0x1408e9120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t r15 = sx.q(arg4)
uint64_t i_1 = zx.q(arg3)
uint32_t count = r15.d * arg3
int64_t rdi = arg2
int32_t r8 = *(arg1 + 0x18)
int64_t var_98 = 0
int64_t rbx_1
void* r12

if (count s<= r8)
    r12 = arg1 + 0x10
    int64_t* rcx_4 = data_143f0f180
    int64_t rax_4 = (*(*rcx_4 + 0x130))(rcx_4, &data_143f02b98, *r12, 0, r8, 1)
    rbx_1 = rax_4
    var_98 = rax_4
else
    int32_t var_78_1 = 1
    *(arg1 + 0x18) = count
    int64_t* rcx_1 = data_143f0f180
    int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
    int128_t var_88 = zx.o(0)
    char var_60_1 = 0
    int128_t var_74_1 = data_143dbb1e0
    int32_t var_b0
    var_b0.q = &var_88
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    void var_90
    (*(*rcx_1 + 0x488))(rcx_1, &var_90, &data_143f02b98, zx.q(count), 0x201, var_b0, &var_98)
    r12 = arg1 + 0x10
    sub_1405d1600(r12, &var_90)
    sub_1405d1550(&var_90)
    rbx_1 = var_98

int64_t rax_5 = sx.q(arg5)

if (r15.d == rax_5.d)
    memcpy(rbx_1, rdi, count)
else if (i_1.d s> 0)
    uint64_t i
    
    do
        memcpy(rbx_1, rdi, r15.d)
        rdi += rax_5
        rbx_1 += r15
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_7 = data_143f0f180
int64_t result = (*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, *r12)
__security_check_cookie(rax_1 ^ &var_d8)
return result
