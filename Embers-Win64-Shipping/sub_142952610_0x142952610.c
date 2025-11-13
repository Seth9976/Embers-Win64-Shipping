// 函数: sub_142952610
// 地址: 0x142952610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0
int64_t* rbp = nullptr

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0)
    sub_1428a5670(0x10, 0xc8, 0x43, "crypto\ec\ecp_nist.c", 0x7e)
else
    int64_t* rbx_1 = arg5
    
    if (rbx_1 != 0)
    label_142952681:
        
        if (sub_1428d9290(arg2, arg3, arg4, rbx_1) != 0
                && (*(arg1 + 0x88))(arg2, arg2, *(arg1 + 0x40), rbx_1) != 0)
            rdi = 1
    else
        int64_t* rax_1 = sub_1428d8d60()
        rbx_1 = rax_1
        rbp = rax_1
        
        if (rax_1 != 0)
            goto label_142952681

sub_1428d8ae0(rbp)
return zx.q(rdi)
