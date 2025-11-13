// 函数: sub_14290e600
// 地址: 0x14290e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rdi = *(arg1 + 0x28)

if (arg2 == 0)
    *arg3 = sx.q(sub_1406938b0(rdi))
    return zx.q((arg2 + 1).d)

if (rdi != 0)
    int64_t rcx_3 = sx.q(sub_1406938b0(rdi))
    
    if (*arg3 u>= rcx_3)
        int64_t rbx = sx.q(sub_1406938b0(rdi))
        *arg3 = rbx
        memcpy(arg2, sub_14060aa50(rdi), rbx.d)
        return 1

return 0
