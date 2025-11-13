// 函数: sub_141e07840
// 地址: 0x141e07840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int64_t* rdx_2 = nullptr
        
        do
            int64_t* rcx_3 = *(rdx_2 + *(arg1 + 0x78))
            
            if (rcx_3 != 0 && *rcx_3 != 0 && not(0f f== rcx_3[0x2a].d))
                *(rcx_3 + 0x12c) = arg3.d
            
            i += 1
            rdx_2 = &rdx_2[1]
        while (i s< *(arg1 + 0x80))
else
    int32_t arg_10
    sub_140865c40(arg1 + 0x88, &arg_10, arg2)
    int64_t rax_1 = sx.q(arg_10)
    void* rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax_1 * 0x18
    
    int64_t* rax = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax = nullptr
    
    if (rax != 0)
        void* rcx_2 = *rax
        
        if (rcx_2 != 0)
            *(rcx_2 + 0x12c) = arg3.d
