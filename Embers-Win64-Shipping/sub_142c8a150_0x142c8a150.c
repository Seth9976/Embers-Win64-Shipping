// 函数: sub_142c8a150
// 地址: 0x142c8a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg2 + 0x20)
void* rcx = *arg1

if (r8 == 0)
    sub_142c64760(rcx, 
        "Error while processing content unencoding: Unknown failure within decompression software.", 
        r8, arg3)
    return 0x3d

sub_142c64760(rcx, "Error while processing content unencoding: %s", r8, arg3)
return 0x3d
