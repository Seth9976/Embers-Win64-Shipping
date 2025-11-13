// 函数: sub_140e1beb0
// 地址: 0x140e1beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void var_280
int64_t* rax_2 = sub_140dd5ed0(&var_280)
rax_2[0x34].d = 3
*(rax_2 + 0x20e) = 0
*(rax_2 + 0x202) = 0x101
*(rax_2 + 0x234) = 0
rax_2[0x3f] = 1
*(rax_2 + 0x205) = 0
rax_2[0x41].d = 0
void*** rax_3 = j_sub_140a82f30(0xa88)
void*** rsi = rax_3

if (rax_3 == 0)
    rsi = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rsi = &data_142ecd2f8
    
    if (rsi != -0x10)
        sub_140dde300(&rsi[2])

int64_t* var_298 = &rsi[2]
sub_140918950(&var_298, &rsi[2])
void var_2a8
void* var_288 = &var_2a8
int64_t var_2a4
int128_t zmm1 = sub_140b58170(&var_2a4, "SWindow", 1)
rsi[0x45] = var_2a4
sub_140de51f0(&var_298, arg1, rax_2, zmm1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            void** r8_1 = *rsi
            r8_1[1](rsi, 1, r8_1)

sub_140ddefc0(&var_280)
int64_t* rcx_8 = *arg1
rcx_8[0xef].b |= 8
*(*arg1 + 0xa24) = 0x400
(*arg1)[0x145].d = 0x100
__security_check_cookie(rax_1 ^ &var_2c8)
return arg1
