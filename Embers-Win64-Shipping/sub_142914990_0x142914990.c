// 函数: sub_142914990
// 地址: 0x142914990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rbx = *(arg1 + 0x28)
int64_t rbp = arg4
int32_t rcx = *(rbx + 0x1c)
void* r9 = *(*(arg1 + 0x10) + 0x28)
int32_t var_30
void* var_28
void* var_20
int32_t rsi

if (rcx != 4)
    rsi = arg5
else
    rsi = sub_142897860(r9)
    int32_t rax_2 = sub_142915950(rbx, arg1)
    int32_t rax_7
    
    if (rax_2 != 0)
        var_20 = *(rbx + 0x28)
        var_28 = *(rbx + 0x20)
        var_30 = *(rbx + 0x48)
        int32_t var_38
        var_38.q = *(rbx + 0x40)
        rax_7 = sub_142923af0(*(rbx + 0x38), rsi, rbp, arg5, var_38, var_30, var_28, var_20)
    
    if (rax_2 == 0 || rax_7 == 0)
        return -1
    
    rcx = 3
    rbp = *(rbx + 0x38)
    r9 = *(*(arg1 + 0x10) + 0x28)

int32_t result = sub_1428975c0(zx.q(rsi), rbp, arg2, r9, rcx, var_30, var_28, var_20)

if (result s< 0)
    return result

*arg3 = sx.q(result)
return 1
