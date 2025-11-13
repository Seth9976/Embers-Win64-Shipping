// 函数: sub_141d830c0
// 地址: 0x141d830c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rcx = arg2[1]
int64_t var_38 = *arg2
int64_t* var_30 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_30

if (&var_38 != arg1)
    int128_t zmm1 = var_38.o
    int128_t var_28_1 = zmm1
    var_38.o = *arg1
    rcx = var_30
    *arg1 = zmm1

if (rcx == 0)
    __security_check_cookie(rax_1 ^ &var_58)
    return arg1

rcx[1].d -= 1

if (rcx[1].d == 1)
    int64_t rdx = *var_30
    (*rdx)(var_30, rdx)
    int32_t rsi_1 = *(var_30 + 0xc)
    *(var_30 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8_1 = *var_30
        (*(r8_1 + 8))(var_30, zx.q(rsi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
