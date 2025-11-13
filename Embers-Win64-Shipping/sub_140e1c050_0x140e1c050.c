// 函数: sub_140e1c050
// 地址: 0x140e1c050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void var_280
int64_t* rax_2 = sub_140dd5ed0(&var_280)
rax_2[0x34].d = 2
*(rax_2 + 0x203) = 0x101
*(rax_2 + 0x1f4) = 0
*(rax_2 + 0x202) = 1
rax_2[0x3f].d = 1
*(rax_2 + 0x205) = 0
rax_2[0x41].d = 0
void*** rax_3 = j_sub_140a82f30(0xa88)
void*** rdi = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rdi = &data_142ecd2f8
    
    if (rdi != -0x10)
        sub_140dde300(&rdi[2])

int64_t* var_298 = &rdi[2]
sub_140918950(&var_298, &rdi[2])
void var_2a8
void* var_288 = &var_2a8
int64_t var_2a4
int128_t zmm1 = sub_140b58170(&var_2a4, "SWindow", 1)
rdi[0x45] = var_2a4
sub_140de51f0(&var_298, arg1, rax_2, zmm1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            void** r8_1 = *rdi
            r8_1[1](rdi, 1, r8_1)

sub_140ddefc0(&var_280)
*(*arg1 + 0x76c) = 0
int64_t* rcx_9 = *arg1
rcx_9[0xef].b |= 8
*(*arg1 + 0xa24) = 0x200
(*arg1)[0x145].d = 0x100
__security_check_cookie(rax_1 ^ &var_2c8)
return arg1
