// 函数: sub_140a0e4c0
// 地址: 0x140a0e4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rdi = nullptr
int16_t var_102 = 0
int32_t var_106 = 0x200004
int64_t var_a8 = 0.q
int32_t var_fe = 0x200102
int16_t var_fa = 0
int64_t var_a0 = 0x1000.q
int32_t var_24 = 0x10
int32_t var_28 = 2
sub_14081d930(arg1 + 0x10, sub_141972c20(&var_a8))
void* var_120 = nullptr
void** const var_128 = &data_142e4cfb8
int64_t var_118 = 4
char var_110 = 0
sub_1405e4030(&var_120, 0)
void* rcx_3

if ((var_120.b & 1) == 0)
    rcx_3 = var_120
else
    rcx_3 = &var_120 + (var_120 s>> 1)

*rcx_3 = 0xbf800000
*(rcx_3 + 4) = 0x3f800000
*(rcx_3 + 8) = 0x3f800000
*(rcx_3 + 0xc) = 0x3f800000
void* rcx_4

if ((var_120.b & 1) == 0)
    rcx_4 = var_120
else
    rcx_4 = &var_120 + (var_120 s>> 1)

*(rcx_4 + 0x10) = 0
void* rcx_5

if ((var_120.b & 1) == 0)
    rcx_5 = var_120
else
    rcx_5 = &var_120 + (var_120 s>> 1)

*(rcx_5 + 0x20) = 0x3f800000
*(rcx_5 + 0x24) = 0x3f800000
*(rcx_5 + 0x28) = 0x3f800000
*(rcx_5 + 0x2c) = 0x3f800000
void* rcx_6

if ((var_120.b & 1) == 0)
    rcx_6 = var_120
else
    rcx_6 = &var_120 + (var_120 s>> 1)

*(rcx_6 + 0x30) = 0x3f800000
void* rcx_7

if ((var_120.b & 1) == 0)
    rcx_7 = var_120
else
    rcx_7 = &var_120 + (var_120 s>> 1)

*(rcx_7 + 0x40) = 0xbf800000
*(rcx_7 + 0x44) = 0xbf800000
*(rcx_7 + 0x48) = 0x3f800000
*(rcx_7 + 0x4c) = 0x3f800000
void* rcx_8

if ((var_120.b & 1) == 0)
    rcx_8 = var_120
else
    rcx_8 = &var_120 + (var_120 s>> 1)

*(rcx_8 + 0x50) = 0
*(rcx_8 + 0x54) = 0x3f800000
void* rcx_9

if ((var_120.b & 1) == 0)
    rcx_9 = var_120
else
    rcx_9 = &var_120 + (var_120 s>> 1)

*(rcx_9 + 0x60) = 0x3f800000
*(rcx_9 + 0x64) = 0xbf800000
*(rcx_9 + 0x68) = 0x3f800000
*(rcx_9 + 0x6c) = 0x3f800000
void* rcx_10

if ((var_120.b & 1) == 0)
    rcx_10 = var_120
else
    rcx_10 = &var_120 + (var_120 s>> 1)

*(rcx_10 + 0x70) = 0x3f800000
*(rcx_10 + 0x74) = 0x3f800000
int128_t zmm0 = data_143dbb1e0
int64_t var_e8
int64_t* var_130 = &var_e8
int64_t* rcx_12 = data_143f0f180
int32_t rax_22 = (1 << (data_1439c7a34).b) - 1
var_e8 = 0
int32_t var_c4 = rax_22
void** const* var_e0 = &var_128
int32_t var_d8 = 1
int128_t var_d4 = zmm0
char var_c0 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_f8
(*(*rcx_12 + 0x498))(rcx_12, &var_f8, &data_143f02b98, 0x80, 1, var_130)

if (arg1 + 0x18 != &var_f8)
    int64_t* rbx_1 = *(arg1 + 0x18)
    *(arg1 + 0x18) = var_f8
    var_f8 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_26
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_26 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_26 != 0))
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
                    int32_t rax_28 = sub_140a20af0()
                    
                    if (rax_28 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_28) u>> 0xe << 3))
                            + (zx.q(rax_28) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_28)

sub_1405d1550(&var_f8)
int64_t result = sub_140a1d5c0(&var_120)
__security_check_cookie(rax_1 ^ &var_158)
return result
