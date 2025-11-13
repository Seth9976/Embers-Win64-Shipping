// 函数: sub_1429541f0
// 地址: 0x1429541f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r14 = 0

if (arg4 u<= 1 && sub_142890300(arg1[2]) == 0 && sub_142890300(arg1[3]) == 0)
    if (arg3 == 0)
        if (arg4 == 1)
            return sub_1429181f0(arg1, arg2, *arg6, *arg5, arg7)
    else if (arg4 == 0)
        return sub_1429181f0(arg1, arg2, arg3, nullptr, arg7)
    
    int64_t* rax_6 = sub_1428bfa80(arg1)
    
    if (rax_6 == 0)
        sub_1428a5670((&rax_6[2]).d, 0x121, (rax_6 + 0x41).d, "crypto\ec\ec2_smpl.c", 0x36c)
        return 0
    
    if (sub_1429181f0(arg1, rax_6, arg3, nullptr, arg7) != 0
            && sub_1429181f0(arg1, arg2, *arg6, *arg5, arg7) != 0
            && sub_1428bf3e0(arg1, arg2, rax_6, arg2, arg7) != 0)
        r14 = 1
    
    sub_1428bf6a0(rax_6)
    return zx.q(r14)

return sub_1429188c0(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
