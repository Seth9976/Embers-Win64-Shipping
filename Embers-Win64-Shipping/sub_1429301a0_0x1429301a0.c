// 函数: sub_1429301a0
// 地址: 0x1429301a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax_1 = sub_1428b6d90(arg2, "rb")

if (rax_1 != 0)
    int32_t rax_5 = sub_142930260(arg1, rax_1, arg3)
    sub_142899e70(rax_1)
    return zx.q(rax_5)

int32_t rax_3 = sub_1428a5510() & 0xfff
int32_t rcx_1 = 0xa8
int32_t r8 = 0x72

if (rax_3 != 0x80)
    rcx_1 = 0xaa

if (rax_3 != 0x80)
    r8 = 2

sub_1428a5670((rax_1 + 0xe).d, (&rax_1[0xf]).d, r8, "crypto\conf\conf_def.c", rcx_1)
return 0
