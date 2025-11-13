// 函数: sub_141ba6220
// 地址: 0x141ba6220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int128_t var_48
__builtin_memcpy(&var_48, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
char var_20 = 1
int128_t var_30 = zx.o(0)
int64_t* rax_2 = sub_140d3c6e0(arg1 + 0x18)
int64_t r9 = *rax_2
char var_38
(*(r9 + 0x210))(rax_2, *(arg1 + 8), &var_48, r9, var_48, var_38, var_30, var_20, rax_1)
int64_t* rbx_1 = var_30:8.q
arg2[1].b = var_38
*arg2 = var_48
*(arg2 + 0x18) = var_30.q
arg2[2].q = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = var_30:8.q

if (var_20 != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_1 = *rbx_1
        (*rdx_1)(rbx_1, rdx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_68)
return arg2
