// 函数: sub_142972110
// 地址: 0x142972110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int32_t arg_10 = 0

if (sub_142890300(arg2[4]) != 0)
    return sub_1428bfd80(arg1, arg2) __tailcall

if (sub_142890300(*(arg3 + 0x20)) != 0)
    if ((*(*arg1 + 0x108))(arg1, arg2[2], *(arg4 + 0x10), *(arg4 + 0x20), arg5) != 0
            && (*(*arg1 + 0x110))(arg1, arg2[4], *(arg4 + 0x20), arg5) != 0
            && (*(*arg1 + 0x108))(arg1, arg2[3], *(arg4 + 0x18), arg2[4], arg5) != 0
            && sub_142890040(arg2[4], *(arg4 + 0x20)) != 0 && sub_1428bf820(arg1, arg2, arg5) != 0)
        return 1
    
    return 0

sub_1428d8e50(arg5)
int64_t* rax_13 = sub_1428d8ba0(arg5)
int64_t* rax_14 = sub_1428d8ba0(arg5)
int64_t* rax_15 = sub_1428d8ba0(arg5)
int64_t* rax_16 = sub_1428d8ba0(arg5)
int64_t* rax_17 = sub_1428d8ba0(arg5)
int64_t* rax_18 = sub_1428d8ba0(arg5)
int64_t* rax_19 = sub_1428d8ba0(arg5)

if (rax_19 != 0 && sub_142908180(rax_13, *(arg4 + 0x18), arg1[8]) != 0
        && (*(*arg1 + 0x108))(arg1, rax_14, arg2[2], *(arg4 + 0x20), arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_15, arg2[4], *(arg3 + 0x20), arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_15, rax_14, rax_15, arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_16, rax_15, rax_13, arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_15, arg2[4], *(arg4 + 0x20), arg5) != 0
        && (*(*arg1 + 0x110))(arg1, rax_17, rax_15, arg5) != 0
        && sub_142908180(rax_18, arg1[0xd], arg1[8]) != 0
        && (*(*arg1 + 0x108))(arg1, rax_17, rax_17, rax_18, arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_19, rax_15, arg1[0xc], arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_18, arg2[2], *(arg4 + 0x10), arg5) != 0
        && sub_142908140(rax_18, rax_19, rax_18, arg1[8]) != 0
        && (*(*arg1 + 0x108))(arg1, rax_19, arg2[4], *(arg4 + 0x10), arg5) != 0
        && sub_142908140(rax_15, rax_19, rax_14, arg1[8]) != 0
        && (*(*arg1 + 0x108))(arg1, rax_18, rax_18, rax_15, arg5) != 0
        && sub_142908460(rax_19, rax_19, rax_14, arg1[8]) != 0
        && (*(*arg1 + 0x110))(arg1, rax_19, rax_19, arg5) != 0
        && (*(*arg1 + 0x108))(arg1, rax_19, rax_19, *(arg3 + 0x10), arg5) != 0
        && sub_142908140(rax_17, rax_18, rax_17, arg1[8]) != 0
        && (*(*arg1 + 0x108))(arg1, rax_17, rax_17, *(arg3 + 0x20), arg5) != 0
        && sub_142908460(rax_17, rax_17, rax_19, arg1[8]) != 0
        && (*(*arg1 + 0x110))(arg1, rax_18, arg2[4], arg5) != 0
        && (*(*arg1 + 0x108))(arg1, arg2[4], *(arg4 + 0x20), *(arg3 + 0x20), arg5) != 0)
    int64_t rdx_30 = arg2[4]
    
    if ((*(*arg1 + 0x108))(arg1, rdx_30, rax_18, rdx_30, arg5) != 0)
        int64_t rdx_31 = arg2[4]
        
        if ((*(*arg1 + 0x108))(arg1, rdx_31, rdx_31, rax_13, arg5) != 0
                && (*(*arg1 + 0x108))(arg1, arg2[2], rax_16, arg2[4], arg5) != 0
                && (*(*arg1 + 0x110))(arg1, rax_16, arg2[4], arg5) != 0)
            int32_t rdx_35 = 0
            
            if ((*(*arg1 + 0x108))(arg1, arg2[3], rax_17, rax_16, arg5) != 0)
                rdx_35 = 1
            
            arg_10 = rdx_35

sub_1428d8a60(arg5)
return zx.q(arg_10)
