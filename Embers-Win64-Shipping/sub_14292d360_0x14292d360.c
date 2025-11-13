// 函数: sub_14292d360
// 地址: 0x14292d360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = *(arg4 + 0x10)
char* rbx = *(arg4 + 8)

if (rdi != 0)
    int32_t rax_1 = sub_1428ea5d0(rbx, "email")
    int32_t var_18
    
    if (rax_1 == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, rax_1 + 1, var_18, arg5)
    
    int32_t rax_2 = sub_1428ea5d0(rbx, "URI")
    
    if (rax_2 == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, rax_2 + 6, var_18, arg5)
    
    int32_t rax_3 = sub_1428ea5d0(rbx, "DNS")
    
    if (rax_3 == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, rax_3 + 2, var_18, arg5)
    
    int32_t rax_4 = sub_1428ea5d0(rbx, "RID")
    
    if (rax_4 == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, rax_4 + 8, var_18, arg5)
    
    int32_t rax_5 = sub_1428ea5d0(rbx, "IP")
    
    if (rax_5 == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, rax_5 + 7, var_18, arg5)
    
    int32_t rax_6 = sub_1428ea5d0(rbx, "dirName")
    
    if (rax_6 == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, rax_6 + 4, var_18, arg5)
    
    if (sub_1428ea5d0(rbx, "otherName") == 0)
        var_18.q = rdi
        return sub_14292c820(arg1, arg2, arg3, 0, var_18, arg5)
    
    sub_1428a5670(0x22, 0x75, 0x75, "crypto\x509v3\v3_alt.c", 0x213)
    sub_1428a4880(2)
else
    sub_1428a5670(0x22, 0x75, 0x7c, "crypto\x509v3\v3_alt.c", 0x200)

return nullptr
