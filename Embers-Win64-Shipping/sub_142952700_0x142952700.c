// 函数: sub_142952700
// 地址: 0x142952700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0
int64_t* rbx = arg4
int64_t* rbp = nullptr

if (arg1 == 0 || arg2 == 0 || arg3 == 0)
    sub_1428a5670(0x10, 0xc9, 0x86, "crypto\ec\ecp_nist.c", 0x97)
else if (rbx != 0)
label_14295275e:
    
    if (sub_14291c760(arg2, arg3, rbx) != 0
            && (*(arg1 + 0x88))(arg2, arg2, *(arg1 + 0x40), rbx) != 0)
        rdi = 1
else
    int64_t* rax_1 = sub_1428d8d60()
    rbx = rax_1
    rbp = rax_1
    
    if (rax_1 != 0)
        goto label_14295275e

sub_1428d8ae0(rbp)
return zx.q(rdi)
