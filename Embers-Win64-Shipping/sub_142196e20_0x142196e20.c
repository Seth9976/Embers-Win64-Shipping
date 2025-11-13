// 函数: sub_142196e20
// 地址: 0x142196e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* r14 = arg4
char rax_5
void var_d8
void var_b8
TEB* gsbase

if (0f f!= *arg6 || 0f f!= arg6[1] || 0f f!= arg6[2])
    if (data_143f4d870
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f4d870)
        
        if (data_143f4d870 == 0xffffffff)
            sub_140b58170(&data_143f4d868, "ParticleCollision", 1)
            _Init_thread_footer(&data_143f4d870)
    
    sub_141eb54c0(&var_b8, data_143f4d868, &var_d8, 0, nullptr)
    sub_141eb8b10(&var_b8, arg3)
    void* rax_8 = *(arg1 + 0xa8)
    int32_t var_d0_1 = *arg6
    int32_t var_c8_1 = arg6[2]
    int32_t var_cc_1 = arg6[1]
    char var_a5_1 = 1
    int32_t var_d4 = 1
    
    if (rax_8 == 0)
        rax_8 = sub_141ee69e0(arg1)
    
    rax_5 = sub_141ecd570(rax_8, arg2, arg5, r14, &data_14399f720, arg7, &var_d4, &var_b8)
else
    if (data_143f4d860
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f4d860)
        
        if (data_143f4d860 == 0xffffffff)
            sub_140b58170(&data_143f4d858, "ParticleCollision", 1)
            _Init_thread_footer(&data_143f4d860)
    
    arg4.b = 1
    sub_141eb54c0(&var_b8, data_143f4d858, &var_d8, arg4.b, arg3)
    void* rax_4 = *(arg1 + 0xa8)
    char var_a5 = 1
    
    if (rax_4 == 0)
        rax_4 = sub_141ee69e0(arg1)
    
    rax_5 = sub_141ec6b10(rax_4, arg2, arg5, r14, arg7, &var_b8)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rax_5)
