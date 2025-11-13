// 函数: sub_1422a13b0
// 地址: 0x1422a13b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f52844 == 0)
    arg2[3].b = 0
else
    EnterCriticalSection(arg1 + 0x10)
    int32_t arg_20
    sub_14229ddf0(arg1 + 0x38, &arg_20, arg3)
    int64_t rax_1 = sx.q(arg_20)
    void* const rax_4
    
    if (rax_1.d == 0xffffffff)
        rax_4 = nullptr
    else
        rax_4 = rax_1 * 0x60 + *(arg1 + 0x38)
    
    int128_t* rcx_2 = rax_4 + 0x10
    
    if (rax_4 == 0)
        rcx_2 = nullptr
    
    if (rcx_2 != 0 && rcx_2[3].q == data_143de5458)
        *arg2 = *rcx_2
        arg2[1] = rcx_2[1]
        arg2[2] = rcx_2[2]
        arg2[3].b = 1
        
        if (arg1 != -0x10)
            LeaveCriticalSection(arg1 + 0x10)
    else if (arg1 == -0x10)
        arg2[3].b = 0
    else
        LeaveCriticalSection(arg1 + 0x10)
        arg2[3].b = 0

return arg2
