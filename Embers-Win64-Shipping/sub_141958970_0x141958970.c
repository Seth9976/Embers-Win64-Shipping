// 函数: sub_141958970
// 地址: 0x141958970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* const rdi = arg1
void* result

if (data_1439c7a08 s< 3)
    if (rdi == 0x18)
        rdi = nullptr
    
    int64_t var_1e8(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
    sub_141961860(&var_1e8, (1 << (data_1439c7a34).b) - 1)
    void* const var_1c8_1 = rdi
    void* const var_1c0_1 = rdi
    char var_160_1 = 0
    int32_t rdi_1 = *(zx.q(*(arg2 + 0x24)) * 0x28 + 0x1439c85f8)
    uint32_t temp0_1 =
        divu.dp.d(0:((*(*arg2 + 8))(arg2)), (&data_1439c85f4)[zx.q(*(arg2 + 0x24)) * 0xa])
    int64_t var_228
    void* var_208
    int64_t (* var_1f8)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
    
    if (rdi_1 == 1)
        int64_t* var_1f0_2 = arg2
        var_1f8 = &var_1e8
        int64_t (** var_200_2)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_1f8
        var_208 = sub_140fdd510
        void** var_218_2 = &var_208
        var_228.d = 1
        sub_141950600(&var_1e8, arg2, temp0_1, 1, var_228.d, arg3)
    else if (rdi_1 == 4)
        int64_t* var_200_1 = arg2
        var_208 = &var_1e8
        void** var_1f0_1 = &var_208
        var_1f8 = sub_140fdd510
        int64_t (** var_218_1)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_1f8
        int64_t var_220_1 = arg3
        var_228.d = 1
        sub_140fcfd70(&var_1e8, arg2, temp0_1, rdi_1 - 3, var_228)
    result = sub_1419628c0(&var_1e8)
else
    data_143effcd8(0x8c2a, zx.q(*(arg2 + 0x1c)))
    result = data_143f002e0(0x8c2a, zx.q(arg2[4].d), 0x8d99, 0x1405, arg3)
    
    if (*(rdi + 0x15be8) != 0)
        result = *(rdi + 0x15c00)
        
        if (result != 0)
            *(result + 0x10) += 1
            result = *(rdi + 0x15c00)
            *(result + 0x14) += 1

__security_check_cookie(rax_1 ^ &var_248)
return result
