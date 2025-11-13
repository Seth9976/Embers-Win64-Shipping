// 函数: sub_1428b6860
// 地址: 0x1428b6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0x20) == 0 || arg2 == 0)
    return 0

int32_t rax_1 = fread(arg2, 1, sx.q(arg3), *(arg1 + 0x38))

if (ferror(*(arg1 + 0x38)) == 0)
    return zx.q(rax_1)

sub_1428a5670(2, 0xb, GetLastError(), "crypto\bio\bss_file.c", 0x98)
sub_1428a5670(0x20, 0x82, 2, "crypto\bio\bss_file.c", 0x99)
return 0xffffffff
