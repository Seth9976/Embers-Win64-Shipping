// 函数: sub_1426a7d20
// 地址: 0x1426a7d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
int64_t* rcx = arg2[5]
int64_t var_68 = arg2[4]
int64_t* var_60 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_60

uint128_t zmm1

if (&var_68 != &arg1[4])
    zmm1 = var_68.o
    uint128_t var_48_1 = zmm1
    var_68.o = *(arg1 + 0x20)
    rcx = var_60
    *(arg1 + 0x20) = zmm1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**var_60)(var_60)
        int32_t rax_8 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_60 + 8))(var_60, 1)

arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].d ^= (arg2[7].d ^ arg1[7].d) & 1
arg1[8] = arg2[8]
int64_t* rcx_3 = arg2[0xa]
int64_t var_58 = arg2[9]
int64_t* var_50 = rcx_3

if (rcx_3 != 0)
    rcx_3[1].d += 1
    rcx_3 = var_50

if (&var_58 != &arg1[9])
    zmm1 = var_58.o
    uint128_t var_38_1 = zmm1
    var_58.o = *(arg1 + 0x48)
    rcx_3 = var_50
    *(arg1 + 0x48) = zmm1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**var_50)(var_50)
        int32_t rbp_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*var_50 + 8))(var_50, zx.q(rbp_1))

arg1[0xb].b = arg2[0xb].b
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg1[0xc].d = arg2[0xc].d
*(arg1 + 0x64) = *(arg2 + 0x64)
arg1[0xd].d = arg2[0xd].d
arg1[0xe] = arg2[0xe]
sub_140597df0(&arg1[0xf], &arg2[0xf])
__security_check_cookie(rax_1 ^ &var_88)
return arg1
