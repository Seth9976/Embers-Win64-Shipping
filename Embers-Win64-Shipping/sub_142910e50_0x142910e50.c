// 函数: sub_142910e50
// 地址: 0x142910e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx = *(arg1 + 0x28)
int32_t* r10 = arg4
void* var_18_1
int32_t* rdx_2
void* r8

if (arg2 == 1)
    void* rdx_3 = *(arg1 + 0x10)
    int32_t rax_3
    
    if (rdx_3 != 0)
        rax_3 = sub_1428d5e50(rbx, *(rdx_3 + 0x28))
    
    if (rdx_3 == 0 || rax_3 != 0)
        var_18_1 = nullptr
        arg4 = nullptr
    label_142910ece:
        r8 = nullptr
        rdx_2 = nullptr
    label_142910ed6:
        
        if (sub_1428d6160(rbx, rdx_2, r8, arg4, var_18_1) != 0)
            return 1
else
    if (arg2 != 6)
        if (arg2 != 0xc)
            return 0xfffffffe
        
        var_18_1 = *(arg1 + 8)
        goto label_142910ece
    
    if (r10 != 0 && arg3 s>= 0)
        r8 = sx.q(arg3)
        arg4 = nullptr
        var_18_1 = nullptr
        rdx_2 = r10
        goto label_142910ed6
return 0
