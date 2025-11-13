// 函数: sub_1428db330
// 地址: 0x1428db330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = *arg1

if (rax != 0)
label_1428db37b:
    
    if (sub_14288fa60(arg2, arg3, rax) != 0)
        return 1
    
    int64_t* rcx_1 = *arg1
    
    if (rcx_1 != 0)
        if ((*(arg4 + 0x20) & 1) != 0)
            sub_14288fbf0(rcx_1)
            *arg1 = 0
            return 0
        
        sub_1428901a0(rcx_1)
        *arg1 = 0
else
    rax = sub_142890740()
    *arg1 = rax
    
    if (rax != 0)
        goto label_1428db37b
    
    rax = sub_142890500()
    *arg1 = rax
    
    if (rax != 0)
        goto label_1428db37b

return 0
