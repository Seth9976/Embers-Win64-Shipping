// 函数: sub_142c91820
// 地址: 0x142c91820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*(arg1 + 0x30) = 0xffffffff
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
int32_t* rax = sub_1428a6a70(0x38)

if (rax != 0)
    *rax = 1
    rax[1] = 0x100
else
    sub_1428a5670(0x20, 0x99, 0x41, "crypto\bio\bss_conn.c", 0xe3)
    rax = nullptr

*(arg1 + 0x38) = rax
int32_t rbx
rbx.b = rax != 0
return zx.q(rbx)
