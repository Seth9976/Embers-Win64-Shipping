// 函数: sub_1407b4e80
// 地址: 0x1407b4e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char var_50 = 0
int32_t var_68 = 1
int128_t var_78 = zx.o(0)
int64_t var_48 = 0
int32_t var_40 = 0
arg1[3].d = arg4 * arg3 * arg2
int64_t* rcx_1 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
int128_t* var_b0 = &var_78
int32_t var_c0 = 1
int128_t var_64 = data_143dbb1e0
int32_t var_c8 = 1
int32_t var_d8 = arg4
int64_t var_a8
(*(*rcx_1 + 0x560))(rcx_1, &var_a8, &data_143f02b98)

if (arg1 != &var_a8)
    int64_t* rbx_1 = *arg1
    *arg1 = var_a8
    var_a8 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_10
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_10 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
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
                    int32_t rax_12 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_12)
                    void* const rax_13
                    
                    if (rax_12 != 0)
                        rax_13 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_13 = nullptr
                    
                    *(rax_13 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)

sub_1405d1550(&var_a8)
int64_t* rcx_7 = data_143f0f180
void var_90
(*(*rcx_7 + 0x5a0))(rcx_7, &var_90, &data_143f02b98, *arg1, 0, arg5, var_c8, var_c0, arg6, var_b0)
sub_1405d1600(&arg1[1], &var_90)
sub_1405d1550(&var_90)
int64_t* rcx_10 = data_143f0f180
int16_t var_9f = 0x100
int64_t var_9c = 0
char var_a0 = *(*arg1 + 0x3c)
int32_t var_94 = 0
int32_t var_d8_1
var_d8_1.q = &var_a0
void var_88
(*(*rcx_10 + 0x5d0))(rcx_10, &var_88, &data_143f02b98)
sub_1405d1600(&arg1[2], &var_88)
int64_t result = sub_1405ec8a0(&var_88)
__security_check_cookie(rax_1 ^ &var_f8)
return result
