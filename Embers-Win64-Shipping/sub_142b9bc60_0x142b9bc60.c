// 函数: sub_142b9bc60
// 地址: 0x142b9bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x25).d)

if (arg2 == 0)
    return zx.q((arg2 + 6).d)

int64_t* arg_8
int32_t rax_2 = sub_142b9be30(*arg1, arg1[0xc].d, &arg_8)
int32_t rbx = rax_2

if (rax_2 == 0)
    int32_t rcx_1 = arg1[0xb].d
    int64_t* rsi_1 = arg_8
    
    if (rcx_1 + 0x1fffff u> 0x3ffffe || *(arg1 + 0x5c) + 0x1fffff u> 0x3ffffe)
        rbx = 6
        sub_142b9bc20(rsi_1)
    else
        *(rsi_1 + 0x14) = rcx_1 << 0xa
        rsi_1[3].d = *(arg1 + 0x5c) << 0xa
        int32_t rax_9 = (*(rsi_1[1] + 8))(rsi_1, arg1)
        rbx = rax_9
        
        if (rax_9 != 0)
            sub_142b9bc20(rsi_1)
        else
            *arg2 = rsi_1

return zx.q(rbx)
