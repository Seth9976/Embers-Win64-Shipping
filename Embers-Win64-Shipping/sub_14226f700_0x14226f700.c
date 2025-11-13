// 函数: sub_14226f700
// 地址: 0x14226f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x2b8)

if (rdi == 0)
    return 0

if (*(rdi + 0x1440) != 0)
    sub_1422623c0(rdi + 0x1440, *(rdi + 0x220))
    int64_t result = *(rdi + 0x1440)
    
    if (result != 0)
        return result

sub_1422623c0(rdi + 0xe50, *(rdi + 0x220))
return *(rdi + 0xe50)
