// 函数: sub_1405b1040
// 地址: 0x1405b1040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rbx = *arg2
*arg2 = 0
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

if (rax_2 != 0)
    rax_2[1].d += 1

int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_58 = 0xffffffff
int32_t var_5c = 0x80
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405af100(&var_88, arg1)
int128_t zmm0 = *(arg1 + 0x50)
void*** rax_5 = sub_140a82f30(0x78, 8)
int64_t var_98_1 = 0
*rax_5 = &data_142d4cb40
rax_5[1] = rbx
rax_5[2] = rax_2
__builtin_memset(&rax_5[3], 0, 0x1c)
void* rdx_2 = &rax_5[5]
*(rdx_2 + 0x1c) = 0x80
void* rax_6 = *(rdx_2 + 0x10)
int64_t* var_90_1 = nullptr

if (rax_6 != 0)
    rdx_2 = rax_6

*rdx_2 = 0
*(rdx_2 + 8) = 0
rax_5[9].d = 0xffffffff
*(rax_5 + 0x4c) = 0
rax_5[0xb] = 0
rax_5[0xc].d = 0
sub_1405af100(&rax_5[3], &var_88)
*(rax_5 + 0x68) = zmm0
*rax_5 = &data_142d4cb60
int64_t (* var_d8)(int64_t* arg1)
int64_t (* rax_7)(int64_t* arg1) = var_d8

if (rax_5 != -8)
    rax_7 = j_sub_1405b0f80

void*** var_c8 = rax_5
var_d8 = rax_7
sub_140a20e40(2, &var_d8)
int32_t result = sub_1405ae080(&var_88)

if (var_90_1 != 0)
    result = var_90_1[1].d
    var_90_1[1].d -= 1
    
    if (result == 1)
        (**var_90_1)(var_90_1)
        result = *(var_90_1 + 0xc)
        *(var_90_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_90_1 + 8))(var_90_1, 1)

if (rax_2 != 0)
    result = rax_2[1].d
    rax_2[1].d -= 1
    
    if (result == 1)
        result = (**rax_2)(rax_2)
        int32_t rsi_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*rax_2)[1](rax_2, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_108)
return result
