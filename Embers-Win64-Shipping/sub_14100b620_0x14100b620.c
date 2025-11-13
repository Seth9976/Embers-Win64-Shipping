// 函数: sub_14100b620
// 地址: 0x14100b620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rdi = nullptr
*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142effb48
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
__builtin_memset(&arg1[3], 0, 0x14)
arg1[6] = 0
arg1[7] = 0
__builtin_memset(&arg1[9], 0, 0x48)

if (data_143e2c330 == 0)
    void** const var_90 = &data_142da8070
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    char var_78_1 = 0
    sub_141035530(&var_88, 0xc, 1)
    char rcx_1 = (data_1439c7a34).b
    int128_t zmm0_1 = data_143dbb1e0
    int64_t var_68
    int64_t* var_a0_1 = &var_68
    var_68 = 0
    int64_t* rcx_2 = data_143f0f180
    int32_t var_58_1 = 1
    int32_t var_44_1 = (1 << rcx_1) - 1
    void** const* var_60_1 = &var_90
    int128_t var_54_1 = zmm0_1
    char var_40_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int64_t var_98
    (*(*rcx_2 + 0x498))(rcx_2, &var_98, &data_143f02b98, zx.q(var_80_1 << 2), 1, var_a0_1)
    int64_t* rsi_1 = data_143e2c330
    data_143e2c330 = var_98
    var_98 = 0
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            char rax_7
            
            if (rsi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (rsi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                int64_t r8_1 = *rsi_1
                (*r8_1)(rsi_1, 1, r8_1)
            else
                bool z_1
                
                if (0 == *(rsi_1 + 0xc))
                    *(rsi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rsi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_9 = sub_140a20af0()
                    
                    if (rax_9 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_9) u>> 0xe << 3))
                            + (zx.q(rax_9) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rsi_1
                    sub_1405a42f0(&data_143f02390, rax_9)
    
    sub_1405d1550(&var_98)
    sub_140a1d5c0(&var_88)

__security_check_cookie(rax_1 ^ &var_c8)
return arg1
