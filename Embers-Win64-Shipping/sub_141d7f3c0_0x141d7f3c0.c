// 函数: sub_141d7f3c0
// 地址: 0x141d7f3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"-MovieQuality=", arg1 + 0xd8)
int32_t rdx = *(arg1 + 0xd8)
int32_t rax

if (rdx s>= 1)
    rax = 0x64
    
    if (rdx s< 0x64)
        rax = rdx
else
    rax = 1

*(arg1 + 0xd8) = rax
return sub_141d7f4a0(arg1) __tailcall
