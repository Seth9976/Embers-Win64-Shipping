// 函数: sub_141455900
// 地址: 0x141455900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18
int64_t* rbx_2

if (arg3 != 0)
    sub_140cba0f0(arg3 + 0x6238, &arg_18, arg2)
    int64_t rax_1 = sx.q(arg_18)
    void* const rcx_3
    
    if (rax_1.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = (rax_1 << 5) + *(arg3 + 0x6238)
    
    rbx_2 = rcx_3 + 0x10
    
    if (rcx_3 == 0)
        rbx_2 = nullptr

int64_t result

if (arg3 == 0 || rbx_2 == 0)
    result = 0
else
    result = *rbx_2

if (result == 0)
    sub_140cba0f0(&data_143a2eb00, &arg_18, arg2)
    int64_t rax_2 = sx.q(arg_18)
    void* const rcx_6
    
    if (rax_2.d == 0xffffffff)
        rcx_6 = nullptr
    else
        rcx_6 = (rax_2 << 5) + data_143a2eb00
    
    int64_t* rax_3 = rcx_6 + 0x10
    
    if (rcx_6 == 0)
        rax_3 = nullptr
    
    if (rax_3 != 0)
        void* rax_4 = *rax_3
        
        if (rax_4 != 0)
            return *(rax_4 + 0x18)

return result
