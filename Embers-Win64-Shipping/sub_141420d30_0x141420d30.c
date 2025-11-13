// 函数: sub_141420d30
// 地址: 0x141420d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char result_1 = *(arg1 + 0xc)
uint32_t result

if (result_1 != 4)
    result = zx.d(result_1)
else
    result = data_1439c7a08

if (result s>= 3)
    int32_t var_58_1 = data_143f02318
    wchar16 const* const var_28_1 = u"UnknownTexture2D"
    void* rdi_1 = nullptr
    int16_t var_30_1 = 0
    char var_90_1 = 0
    char var_98_1 = 0
    char var_a0_1 = 1
    wchar16 const* const var_a8_1 = u"HZBResultsCPU"
    int128_t var_68 = data_143f02308
    int32_t var_54_1 = 0x100
    int64_t var_50_1 = 0x100
    int32_t var_48_1 = 1
    int32_t var_44_1 = 0x10000
    int16_t var_40_1 = 1
    int32_t var_3c_1 = 2
    int64_t var_38_1 = 0x240000
    int16_t var_20_1 = 1
    char var_1e_1 = 0
    sub_1419a0ce0(&data_1439c9260, &data_143f02b98, &var_68, arg1 + 0x20, var_a8_1, var_a0_1, 
        var_98_1, var_90_1)
    void var_7c
    sub_140b58260(&var_7c, u"HZBGPUFence", 1)
    int64_t* rcx_1 = data_143f0f180
    int64_t var_88
    (*(*rcx_1 + 0xa0))(rcx_1, &var_88, &var_7c)
    
    if (arg1 + 0x38 != &var_88)
        int64_t* rbx_1 = *(arg1 + 0x38)
        *(arg1 + 0x38) = var_88
        var_88 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_6
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_6 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_8 = sub_140a20af0()
                        
                        if (rax_8 != 0)
                            rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_8) u>> 0xe << 3))
                                + (zx.q(rax_8) & 0x3fff) * 0x18
                        
                        *(rdi_1 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rax_8)
    
    result = sub_14081c9d0(&var_88)

__security_check_cookie(rax_1 ^ &var_c8)
return result
