// 函数: sub_142953e50
// 地址: 0x142953e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t arg_10 = 0

if (sub_142890300(arg2[4]) != 0)
    return sub_1428bfd80(arg1, arg2) __tailcall

if (sub_142890300(*(arg3 + 0x20)) != 0)
    if (sub_1428bf580(arg2, arg4) != 0 && sub_1428bf820(arg1, arg2, arg5) != 0)
        return 1
    
    sub_1428a5670(0x10, 0x11d, 0x10, "crypto\ec\ec2_smpl.c", 0x312)
    return 0

sub_1428d8e50(arg5)
int64_t* rax_7 = sub_1428d8ba0(arg5)
int64_t* rax_8 = sub_1428d8ba0(arg5)
int64_t* rax_9 = sub_1428d8ba0(arg5)

if (rax_9 != 0)
    if ((*(*arg1 + 0x108))(arg1, rax_7, arg2[4], *(arg3 + 0x20), arg5) != 0
            && (*(*arg1 + 0x108))(arg1, rax_8, arg4[2], arg2[4], arg5) != 0
            && sub_142972660(rax_8, arg2[2], rax_8) != 0
            && (*(*arg1 + 0x108))(arg1, rax_9, arg4[2], *(arg3 + 0x20), arg5) != 0
            && (*(*arg1 + 0x108))(arg1, arg2[4], arg2[2], rax_9, arg5) != 0
            && sub_142972660(rax_9, rax_9, *(arg3 + 0x10)) != 0
            && (*(*arg1 + 0x108))(arg1, rax_8, rax_8, rax_9, arg5) != 0
            && (*(*arg1 + 0x110))(arg1, rax_9, arg4[2], arg5) != 0
            && sub_142972660(rax_9, arg4[3], rax_9) != 0
            && (*(*arg1 + 0x108))(arg1, rax_9, rax_9, rax_7, arg5) != 0
            && sub_142972660(rax_8, rax_9, rax_8) != 0
            && (*(*arg1 + 0x108))(arg1, rax_9, arg4[2], rax_7, arg5) != 0
            && sub_142972ba0(rax_9, rax_9, arg1[8], arg5) != 0
            && (*(*arg1 + 0x108))(arg1, rax_8, rax_8, rax_9, arg5) != 0
            && (*(*arg1 + 0x108))(arg1, arg2[2], arg2[4], rax_9, arg5) != 0
            && sub_142972660(rax_9, arg4[2], arg2[2]) != 0
            && (*(*arg1 + 0x108))(arg1, rax_9, rax_9, rax_8, arg5) != 0
            && sub_142972660(arg2[3], arg4[3], rax_9) != 0 && sub_142890900(arg2[4], 1) != 0)
        arg2[5].d = 1
        sub_1428908e0(arg2[2], 0)
        sub_1428908e0(arg2[3], 0)
        arg_10 = 1
else
    sub_1428a5670((&rax_9[2]).d, 0x11d, (rax_9 + 0x41).d, "crypto\ec\ec2_smpl.c", 0x31d)

sub_1428d8a60(arg5)
return zx.q(arg_10)
