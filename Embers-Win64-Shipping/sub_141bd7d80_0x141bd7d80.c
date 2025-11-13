// 函数: sub_141bd7d80
// 地址: 0x141bd7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void*** rax_2 = sub_140e48fc0()
void* var_200 = &rax_2[2]
sub_140918950(&var_200, &rax_2[2])
int64_t var_218 = 0x2c8
void var_208
void* var_1f0 = &var_208
sub_140e23ed0(&rax_2[2], "SSpacer")
void var_1d8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e50180(&var_1d8)
void* var_1e8
void** rax_4 = sub_140e57660(&var_200, &var_1e8, rax_3, zmm1)
*arg2 = *rax_4
void* rax_6 = rax_4[1]
arg2[1] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t* var_1e0

if (var_1e0 != 0)
    var_1e0[1].d -= 1
    
    if (var_1e0[1].d == 1)
        (**var_1e0)(var_1e0)
        int32_t temp2_1 = *(var_1e0 + 0xc)
        *(var_1e0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_1e0 + 8))(var_1e0, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp3_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_2 = *rax_2
            r8_2[1](rax_2, 1, r8_2)

void var_28
sub_140745b20(&var_28)
sub_140ddea30(&var_1d8)
__security_check_cookie(rax_1 ^ &var_238)
return arg2
