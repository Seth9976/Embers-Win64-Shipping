// 函数: sub_140ee3010
// 地址: 0x140ee3010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
sub_140f20640(arg1)
*arg1 = &data_142ee16c8
__builtin_memset(&arg1[0x97], 0, 0x20)
void*** rax_2 = sub_140e48fc0()
void* var_218 = &rax_2[2]
sub_140918950(&var_218, &rax_2[2])
int64_t var_238 = 0x2c8
void var_228
void* var_208 = &var_228
sub_140e23ed0(&rax_2[2], "SSpacer")
void var_1d8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e50180(&var_1d8)
void* var_200
void** rax_4 = sub_140e57660(&var_218, &var_200, rax_3, zmm1)
arg1[0x9b] = *rax_4
void* rax_6 = rax_4[1]
arg1[0x9c] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t* var_1f8

if (var_1f8 != 0)
    var_1f8[1].d -= 1
    
    if (var_1f8[1].d == 1)
        (**var_1f8)(var_1f8)
        int32_t temp3_1 = *(var_1f8 + 0xc)
        *(var_1f8 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_1f8 + 8))(var_1f8, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp4_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rax_2)[1](rax_2, 1)

void var_28
sub_140745b20(&var_28)
sub_140ddea30(&var_1d8)
arg1[0x9d] = data_143e244b0
void* rax_12 = data_143e244b8
arg1[0x9e] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

arg1[0x9f] = data_143e244b0
void* rax_14 = data_143e244b8
arg1[0xa0] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

arg1[0xa1] = data_143e244b0
void* rax_16 = data_143e244b8
arg1[0xa2] = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

int64_t var_224 = 0
arg1[0xa3] = 0
arg1[0xa4].d = 0xffffffff
*(arg1 + 0x524) = 1
arg1[0xa5] = 0
arg1[0xa6] = 0
void var_1f0
int64_t* rax_17 = _vfprintf_p_l(&var_1f0, u"UNNAMED", u"DockTab")
arg1[0xa7] = *rax_17
void* rcx_12 = rax_17[1]
arg1[0xa8] = rcx_12

if (rcx_12 != 0)
    *(rcx_12 + 8) += 1

arg1[0xa9].d = rax_17[2].d
arg1[0xaa].b = 1
arg1[0xab] = 0
arg1[0xac].d = 0
int64_t* var_1e8

if (var_1e8 != 0)
    var_1e8[1].d -= 1
    
    if (var_1e8[1].d == 1)
        (**var_1e8)(var_1e8)
        int32_t rsi_1 = *(var_1e8 + 0xc)
        *(var_1e8 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_1e8 + 8))(var_1e8, zx.q(rsi_1))

sub_1405d9400()
arg1[0xad] = data_143cd6fd8
void* rcx_15 = data_143cd6fe0
arg1[0xae] = rcx_15

if (rcx_15 != 0)
    *(rcx_15 + 8) += 1

arg1[0xaf].d = data_143cd6fe8
arg1[0xb0].b = 1
arg1[0xb1] = 0
arg1[0xb2].d = 0
arg1[0xb3] = 0
arg1[0xb4].b = 0
arg1[0xb5] = 0
arg1[0xb6].d = 0
arg1[0xb7] = 0
arg1[0xb8].d = 0
arg1[0xb9] = 0
arg1[0xba].d = 0
arg1[0xbb] = 0
arg1[0xbc].d = 0
arg1[0xbd] = 0
arg1[0xbe].d = 0
__builtin_memcpy(&arg1[0xc1], 
    "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 0x11)
arg1[0xc4] = 0
arg1[0xc5].d = 0
arg1[0xc6].b = 0
arg1[0xc9].b = 1
*(arg1 + 0x638) = data_143dbb1e0
arg1[0xca] = 0
arg1[0xcb].d = 0
sub_140d91ed0(&arg1[0xcc])
sub_140d91ed0(&arg1[0xd8])
__builtin_memset(&arg1[0xe4], 0, 0x38)
__security_check_cookie(rax_1 ^ &var_258)
return arg1
