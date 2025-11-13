// 函数: sub_141d4a160
// 地址: 0x141d4a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rcx = arg2[1]
int64_t var_38 = *arg2
int64_t* var_30 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_30

int32_t result = &var_38

if (&var_38 != arg1 + 0x140)
    int128_t zmm1 = var_38.o
    int128_t var_28_1 = zmm1
    var_38.o = *(arg1 + 0x140)
    rcx = var_30
    *(arg1 + 0x140) = zmm1

if (rcx != 0)
    result = rcx[1].d
    rcx[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_30 + 8))(var_30, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_58)
return result
