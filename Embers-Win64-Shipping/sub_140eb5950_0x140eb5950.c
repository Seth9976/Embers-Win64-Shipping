// 函数: sub_140eb5950
// 地址: 0x140eb5950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void*** rax_2 = sub_140e920e0()
void* var_1e0 = &rax_2[2]
sub_140e90fe0(&var_1e0, &rax_2[2])
int64_t var_1f8 = 0x3c0
void var_1e8
void* var_1d0 = &var_1e8
sub_140e23ed0(&rax_2[3], "SMenuSeparatorBlock")
void var_1b8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e93f70(&var_1b8)
void var_1c8
int64_t* rax_4 = sub_140e9d410(&var_1e0, &var_1c8, rax_3, zmm1)
*arg2 = *rax_4
void* rax_6 = rax_4[1]
arg2[1] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t* var_1c0

if (var_1c0 != 0)
    var_1c0[1].d -= 1
    
    if (var_1c0[1].d == 1)
        (**var_1c0)(var_1c0)
        int32_t temp2_1 = *(var_1c0 + 0xc)
        *(var_1c0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_1c0 + 8))(var_1c0, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp3_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_3 = *rax_2
            r8_3[1](rax_2, 1, r8_3)

sub_140ddea30(&var_1b8)
__security_check_cookie(rax_1 ^ &var_218)
return arg2
