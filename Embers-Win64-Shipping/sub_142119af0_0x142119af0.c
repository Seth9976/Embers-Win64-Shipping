// 函数: sub_142119af0
// 地址: 0x142119af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432d5bc8
arg1[5] = &data_1432d6038
arg1[6] = &data_1432d6050
arg1[8] = 0
*(arg1 + 0x5c) &= 0xe0
arg1[0xa].d = 0x3f800000
*(arg1 + 0x54) = 0x3f800000
arg1[0xb].d = 0x3f800000
__builtin_memset(&arg1[0xc], 0, 0x20)

if (((arg1[1].d u>> 4).b & 1) == 0)
    int64_t var_18
    sub_142112bc0(&var_18, 0)
    int64_t rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    if (data_14399fa4c == 0 || data_143de5452 == 0)
        sub_142111bd0()
    
    if (data_143f4a130 == 0)
        data_143f4a130 = sub_1424a6150()

*arg1 = &data_1432d6950
arg1[5] = &data_1432d6dd0
arg1[6] = &data_1432d6de8
__builtin_memset(&arg1[0x1c], 0, 0x50)
*(arg1 + 0x131) &= 0xfe
arg1[0x26].b = 0
*(arg1 + 0x132) = 0x100
*(arg1 + 0x134) = 0x3eaaaa9f
__builtin_memset(&arg1[0x29], 0, 0x40)
sub_142105850(&arg1[0x31])
arg1[0x65] = 0
arg1[0x66] = 0
arg1[0x6f].b = 0
int64_t rcx_3 = 8
arg1[0x70].b = 0
arg1[0x71] = 0
arg1[0x72] = 0
arg1[0x7f] = 0
arg1[0x1b].b &= 0xfe
arg1[0x27].d = 1
arg1[0x11] = 0

if (&arg1[0x12] u> &arg1[0x1a])
    rcx_3 = 0

if (&arg1[0x12] u<= &arg1[0x1a])
    __builtin_memset(&arg1[0x12], 0, rcx_3 << 3)

return arg1
