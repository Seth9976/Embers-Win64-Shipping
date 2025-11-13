// 函数: sub_142931e10
// 地址: 0x142931e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x25, 0x79, 0x43, "crypto\dso\dso_win32.c", 0x89)
    return 0

if (sub_142898c70(*(arg1 + 8)) s< 1)
    return 1

int64_t* rax_3 = sub_142898c80(*(arg1 + 8))

if (rax_3 == 0)
    sub_1428a5670((rax_3 + 0x25).d, (rax_3 + 0x79).d, (&rax_3[0xd]).d, "crypto\dso\dso_win32.c", 
        0x90)
    return 0

BOOL rax_5 = FreeLibrary(*rax_3)

if (rax_5 != 0)
    sub_1428a6780(rax_3)
    return 1

sub_1428a5670(rax_5 + 0x25, rax_5 + 0x79, rax_5 + 0x6b, "crypto\dso\dso_win32.c", 0x94)
sub_142898d50(*(arg1 + 8), rax_3)
return 0
