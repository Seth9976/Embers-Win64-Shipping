// 函数: sub_142645a80
// 地址: 0x142645a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
int64_t* rcx = arg2[5]
int64_t var_38 = arg2[4]
int64_t* var_30 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_30

if (&var_38 != &arg1[4])
    uint128_t zmm1 = var_38.o
    uint128_t var_28_1 = zmm1
    var_38.o = *(arg1 + 0x20)
    rcx = var_30
    *(arg1 + 0x20) = zmm1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *var_30
            (*(r8_1 + 8))(var_30, zx.q(rsi_1), r8_1)

arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].d ^= (arg2[7].d ^ arg1[7].d) & 1
__security_check_cookie(rax_1 ^ &var_58)
return arg1
