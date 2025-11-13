// 函数: sub_1429d5b30
// 地址: 0x1429d5b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t* rsi = arg3
int64_t rcx = arg1[1]
int64_t rdx = *arg1
int64_t result = (rcx - rdx) s>> 2

if (result u> arg2)
    result = rcx + ((arg2 - result) << 2)
    arg1[1] = result
else if (result u< arg2)
    if (rsi u>= rcx || rdx u> rsi)
        sub_1429d3ec0(arg1, arg2 - result)
    else
        sub_1429d3ec0(arg1, arg2 - result)
        rsi = *arg1 + ((rsi - rdx) s>> 2 << 2)
    
    int32_t* rcx_3 = arg1[1]
    char var_28_1 = arg1.b
    sub_1429d34a0(rcx_3, arg2 - ((rcx_3 - *arg1) s>> 2), rsi)
    result = (arg1[1] - *arg1) s>> 2
    arg1[1] += (arg2 - result) << 2

return result
