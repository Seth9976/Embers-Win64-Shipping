// 函数: sub_142971890
// 地址: 0x142971890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax = arg3[2]
int64_t* rsi = *(arg2 + 0x20)
int64_t* r14 = *(arg2 + 0x18)
int64_t* r15 = *(arg2 + 0x10)
int64_t* rax_1 = arg3[3]
int64_t rax_2 = arg3[4]

if ((*(*arg1 + 0x108))(arg1, arg5, arg4[2], arg4[4], arg6) != 0
        && (*(*arg1 + 0x110))(arg1, rsi, arg4[4], arg6) != 0)
    int64_t rdx_2 = arg4[4]
    
    if ((*(*arg1 + 0x108))(arg1, rdx_2, rdx_2, rsi, arg6) != 0
            && (*(*arg1 + 0x110))(arg1, r14, arg4[2], arg6) != 0
            && (*(*arg1 + 0x110))(arg1, rax, arg4[4], arg6) != 0
            && (*(*arg1 + 0x108))(arg1, r15, rax, arg1[0xc], arg6) != 0
            && sub_142908460(rax_1, r14, r15, arg1[8]) != 0
            && sub_142908140(r14, r14, r15, arg1[8]) != 0
            && (*(*arg1 + 0x110))(arg1, rax_1, rax_1, arg6) != 0
            && (*(*arg1 + 0x108))(arg1, rax_2, rax, arg1[0xd], arg6) != 0
            && (*(*arg1 + 0x108))(arg1, rsi, arg4[2], arg4[4], arg6) != 0
            && (*(*arg1 + 0x108))(arg1, r15, rsi, rax_2, arg6) != 0
            && sub_1429081f0(r15, r15, 3, arg1[8]) != 0
            && sub_142908460(*(arg2 + 0x10), rax_1, r15, arg1[8]) != 0
            && (*(*arg1 + 0x108))(arg1, rsi, rsi, r14, arg6) != 0
            && (*(*arg1 + 0x108))(arg1, r14, rax, rax_2, arg6) != 0
            && sub_142908140(rsi, rsi, r14, arg1[8]) != 0
            && sub_1429081f0(*(arg2 + 0x20), rsi, 2, arg1[8]) != 0
            && sub_1428bf580(arg3, arg4) != 0)
        *(arg2 + 0x28) = 0
        arg3[5].d = 0
        arg4[5].d = 0
        return 1

return 0
