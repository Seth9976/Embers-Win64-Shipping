// 函数: sub_141974660
// 地址: 0x141974660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
arg1[0x6e] = 0
*arg1 = 1
memset(&arg1[6], 0, 0x1a0)
int64_t* rcx_1 = *arg2
char rax_3 = (*(*rcx_1 + 8))(rcx_1, &arg1[0x1f])
char var_38 = 0
sub_141960790(&arg1[0x1f], arg1[0x3f], 0)
void* rax_4 = arg2[1]

if (rax_4 != 0)
    *(arg1 + 0x18) = *(rax_4 + 0x18)
    arg1[0xa] = *(rax_4 + 0x28)

void* rax_6 = arg2[2]

if (rax_6 != 0)
    *(arg1 + 0x54) = *(rax_6 + 0x18)
    arg1[0x19] = *(rax_6 + 0x28)

void* rax_8 = arg2[3]

if (rax_8 != 0)
    *(arg1 + 0x68) = *(rax_8 + 0x18)
    arg1[0x1e] = *(rax_8 + 0x28)

void* rax_10 = arg2[4]

if (rax_10 != 0)
    *(arg1 + 0x2c) = *(rax_10 + 0x18)
    arg1[0xf] = *(rax_10 + 0x28)

void* rax_12 = arg2[5]

if (rax_12 != 0)
    *(arg1 + 0x40) = *(rax_12 + 0x18)
    arg1[0x14] = *(rax_12 + 0x28)

int64_t* rcx_3 = arg2[6]
char rax_15 = (*(*rcx_3 + 8))(rcx_3, &arg1[0x41])
int64_t* rcx_4 = arg2[7]
char var_30
char r14 = rax_3 & 1 & rax_15 & (*(*rcx_4 + 8))(rcx_4, &var_30)
arg1[0x52].b = var_30
char var_2f
*(arg1 + 0x149) = var_2f
char var_24
*(arg1 + 0x14a) = var_24
char var_23
*(arg1 + 0x14b) = var_23
int32_t var_2c
arg1[0x50] = var_2c.d
int32_t var_28
arg1[0x51] = var_28
int64_t* rcx_5 = arg2[8]
r14 &= (*(*rcx_5 + 8))(rcx_5, &arg1[0x53])
arg1[0x57] = zx.d(arg2[0xc].b)
arg1[0x5f] = arg2[0xd].d
arg1[0x58] = zx.d(*(arg2 + 0x61))
arg1[0x60] = *(arg2 + 0x6c)
arg1[0x59] = zx.d(*(arg2 + 0x62))
arg1[0x61] = arg2[0xe].d
arg1[0x5a] = zx.d(*(arg2 + 0x63))
arg1[0x62] = *(arg2 + 0x74)
arg1[0x5b] = zx.d(*(arg2 + 0x64))
arg1[0x63] = arg2[0xf].d
arg1[0x5c] = zx.d(*(arg2 + 0x65))
arg1[0x64] = *(arg2 + 0x7c)
arg1[0x5d] = zx.d(*(arg2 + 0x66))
arg1[0x65] = arg2[0x10].d
arg1[0x5e] = zx.d(*(arg2 + 0x67))
arg1[0x66] = *(arg2 + 0x84)
arg1[0x67] = *(arg2 + 0x5c)
arg1[0x68] = zx.d(arg2[0x13].w)
arg1[0x69] = arg2[0x11].d
arg1[0x6a] = *(arg2 + 0x8c)
arg1[0x6b].b = arg2[0x12].b
*(arg1 + 0x1ad) = *(arg2 + 0x92)
*(arg1 + 0x1ae) = *(arg2 + 0x91)
*(arg1 + 0x1af) = *(arg2 + 0x93)
arg1[0x6c] = arg2[0xb].d
arg1[0x6d].b = *(arg2 + 0x9a)
*(arg1 + 0x1b5) = *(arg2 + 0x9b)
__security_check_cookie(rax_1 ^ &var_58)
return zx.q(r14)
