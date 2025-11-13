// 函数: sub_142bc7580
// 地址: 0x142bc7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b99980(arg2, *(arg1 + 0x60))
int64_t rdx_1 = *(arg1 + 0x68)
*(arg1 + 0x60) = 0
sub_142b99980(arg2, rdx_1)
int64_t rdx_2 = *(arg1 + 0x70)
*(arg1 + 0x68) = 0
sub_142b99980(arg2, rdx_2)
int64_t rdx_3 = *(arg1 + 0x58)
*(arg1 + 0x70) = 0
sub_142b99980(arg2, rdx_3)
int64_t rdx_4 = *(arg1 + 0x80)
*(arg1 + 0x58) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x44) = 0
sub_142b99980(arg2, rdx_4)
int64_t rdx_5 = *(arg1 + 0xb0)
*(arg1 + 0x80) = 0
*(arg1 + 0x78) = 0
sub_142b99980(arg2, rdx_5)
int64_t rdx_6 = *(arg1 + 0x90)
*(arg1 + 0xb0) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xa8) = 0
int64_t result = sub_142b99980(arg2, rdx_6)
int64_t* i_1 = *(arg1 + 0xc0)
*(arg1 + 0x90) = 0
*(arg1 + 0x88) = 0

if (i_1 != 0)
    int64_t* i
    
    do
        i = *i_1
        result = sub_142b99980(arg2, i_1)
        i_1 = i
    while (i != 0)

*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xb8) = 0
return result
