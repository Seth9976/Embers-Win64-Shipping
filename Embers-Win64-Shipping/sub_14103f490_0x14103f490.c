// 函数: sub_14103f490
// 地址: 0x14103f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_778
int64_t rax_1 = __security_cookie ^ &var_778
*arg1 = arg2
int32_t rsi = 0
arg1[1] = 0
*(arg1 + 0x2a) = 0
*(arg1 + 0x2c) = 0
arg1[6].b = 0
*(arg1 + 0x32) = 0
*(arg1 + 0x34) = 0
arg1[7].b = 0
*(arg1 + 0x3a) = 0
*(arg1 + 0x3c) = 0
arg1[8].b = 0
*(arg1 + 0x42) = 0
*(arg1 + 0x44) = 0
arg1[9].b = 0
*(arg1 + 0x4a) = 0
*(arg1 + 0x4c) = 0
arg1[0xa].b = 0
*(arg1 + 0x52) = 0
*(arg1 + 0x54) = 0
arg1[0xb].b = 0
*(arg1 + 0x5a) = 0
*(arg1 + 0x5c) = 0
arg1[0xc].b = 0
*(arg1 + 0x62) = 0
*(arg1 + 0x64) = 0
arg1[0xd].b = 0
*(arg1 + 0x6a) = 0
*(arg1 + 0x6c) = 0
arg1[0xe].b = 0
*(arg1 + 0x72) = 0
*(arg1 + 0x74) = 0
arg1[0xf].b = 0
__builtin_memset(&arg1[0x10], 0, 0x29)
void var_758
DBI1::clearDBI(&var_758, arg3, *(*arg1 + 0x44))
int32_t rax_3 = *(arg3 + 0x18)

if (rax_3 == 1)
    rsi = rax_3
else if (rax_3 == 2)
    rsi = 0

struct D3D12_VERSIONED_ROOT_SIGNATURE_DESC var_50
sub_14104cb70(arg1, &var_50, rsi)
__security_check_cookie(rax_1 ^ &var_778)
return arg1
