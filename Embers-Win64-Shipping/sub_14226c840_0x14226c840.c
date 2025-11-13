// 函数: sub_14226c840
// 地址: 0x14226c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rcx = arg1[0x56]
int64_t var_b8 = arg2
int64_t* rdi = arg3
void* result

if (rcx != 0)
    arg3.b = 1
    result = sub_142090e70(rcx, arg2, arg3.b)

float var_e8
float var_d8

if (rcx != 0 && result != 0)
    result.b = 0
else if (sub_142022d00(arg1, &var_b8, &var_e8, &var_d8).b != 1)
    result.b = 0
else
    int32_t i = 0
    int32_t var_f0 = 0
    
    for (; i s>= 0; i += 1)
        if (i s>= rdi[1].d)
            break
        
        int32_t rax_3 = sub_141ffde70(zx.d(*(sx.q(i) + *rdi)))
        var_f0 |= 1 << (rax_3 u% 0x20)
    
    char var_ec_1 = 0
    TEB* gsbase
    
    if (data_143f52818
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f52818)
        
        if (data_143f52818 == 0xffffffff)
            sub_140b58170(&data_143f52810, "ClickableTrace", 1)
            _Init_thread_footer(&data_143f52818)
    
    float zmm2_1 = *(arg1 + 0x454)
    int64_t rdx_1 = data_143f52810
    void* const var_108_1 = nullptr
    float var_e4
    float var_d4
    float zmm1_1 = var_d4 * zmm2_1 + var_e4
    float var_c8 = var_d8 * zmm2_1 + var_e8
    float var_c4_1 = zmm1_1
    float var_e0
    float var_d0
    float var_c0_1 = var_d0 * zmm2_1 + var_e0
    void var_f8
    void var_a8
    int64_t* rax_6 = sub_141eb54c0(&var_a8, rdx_1, &var_f8, arg4, var_108_1)
    int64_t r8_2 = *arg1
    char result_1 =
        sub_141ec6b10((*(r8_2 + 0x150))(arg1, zmm1_1, r8_2), arg5, &var_e8, &var_c8, &var_f0, rax_6)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_128)
return result
