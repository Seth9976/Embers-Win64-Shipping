// 函数: sub_140a0e3b0
// 地址: 0x140a0e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rcx = arg2[1]
int64_t var_38 = *arg2
int64_t* var_30 = rcx

if (rcx != 0)
    *(rcx + 0xc) += 1
    rcx = var_30

int32_t result = &var_38

if (&var_38 != arg1 + 0x18)
    int128_t zmm1 = var_38.o
    int128_t var_28_1 = zmm1
    var_38.o = *(arg1 + 0x18)
    rcx = var_30
    *(arg1 + 0x18) = zmm1

if (rcx != 0)
    result = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (result == 1)
        result = (*(*var_30 + 8))(var_30, 1)

int64_t* rcx_2 = arg2[1]

if (rcx_2 != 0)
    int32_t rbx_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rbx_1 == 1 && rcx_2 != 0)
        result = (*(*rcx_2 + 8))(rcx_2, zx.q(rbx_1))

__security_check_cookie(rax_1 ^ &var_58)
return result
