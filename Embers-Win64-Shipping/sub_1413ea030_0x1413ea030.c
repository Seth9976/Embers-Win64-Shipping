// 函数: sub_1413ea030
// 地址: 0x1413ea030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t arg_10
    sub_140865c40(arg1 + 0x1cb8, &arg_10, arg2)
    int64_t rax_1 = sx.q(arg_10)
    void* const rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x1cb8) + rax_1 * 0x18
    
    int64_t* r8_2 = rcx_1 + 8
    
    if (rcx_1 == 0)
        r8_2 = nullptr
    
    if (r8_2 != 0)
        sub_140865c40(arg1 + 0x1c68, &arg_10, *r8_2)
        int64_t rax_3 = sx.q(arg_10)
        void* const rcx_3
        
        if (rax_3.d == 0xffffffff)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x1c68) + rax_3 * 0x18
        
        int64_t* rax_5 = rcx_3 + 8
        
        if (rcx_3 == 0)
            rax_5 = nullptr
        
        if (rax_5 != 0)
            return *(*rax_5 + 0x890)

return 0
