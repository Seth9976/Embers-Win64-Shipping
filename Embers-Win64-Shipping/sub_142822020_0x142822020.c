// 函数: sub_142822020
// 地址: 0x142822020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2

if (arg2[3] u>= 0x10)
    rcx = *arg2

int64_t arg_18 = sub_14058e700(rcx)

while (true)
    int64_t* rcx_1 = arg2
    
    if (arg2[3] u>= 0x10)
        rcx_1 = *arg2
    
    int32_t arg_10
    
    if (sub_142820414(&arg_10, &arg_18, sub_14058e700(rcx_1) + arg2[2]) == 0)
        return 1
    
    uint64_t rcx_3 = zx.q(arg_10)
    
    if (sub_14282066c(rcx_3) == 0)
        break
    
    sub_1428220d8(arg1, rcx_3.d)

return 0
