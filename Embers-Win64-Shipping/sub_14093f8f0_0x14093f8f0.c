// 函数: sub_14093f8f0
// 地址: 0x14093f8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
void arg_10
sub_14093f560(arg1 + 0x20, &arg_8, *sub_140b58260(&arg_10, u"BEACONPORT", 1))
int64_t rax_1 = sx.q(arg_8)
void* const rax_4

if (rax_1.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_1 * 0x30 + *(arg1 + 0x20)

int32_t* rcx_2 = rax_4 + 8

if (rax_4 == 0)
    rcx_2 = nullptr

if (rcx_2 != 0 && *rcx_2 == 1)
    int32_t result = rcx_2[2]
    
    if (result s> 0)
        return result

return 0x3a98
