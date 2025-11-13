// 函数: sub_141c546e0
// 地址: 0x141c546e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rdx = arg1[2]
int128_t* r8_1 = *arg1 + 0x18
int64_t var_38 = arg1[1]
int64_t* var_30 = rdx

if (rdx != 0)
    *(rdx + 0xc) += 1
    rdx = var_30

int32_t result = &var_38

if (&var_38 != r8_1)
    int128_t zmm1 = var_38.o
    int128_t var_28_1 = zmm1
    var_38.o = *r8_1
    rdx = var_30
    *r8_1 = zmm1

if (rdx != 0)
    result = *(rdx + 0xc)
    *(rdx + 0xc) -= 1
    
    if (result == 1)
        result = (*(*var_30 + 8))(var_30, 1)

void* rcx_1 = *arg1

if (*(rcx_1 + 0x130) != 0)
    result = sub_141c6fc50(rcx_1)

__security_check_cookie(rax_1 ^ &var_58)
return result
