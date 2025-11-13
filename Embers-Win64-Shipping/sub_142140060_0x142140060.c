// 函数: sub_142140060
// 地址: 0x142140060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x88].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rsi_1 = arg1[0x82]
        void* rbp_1 = *(r14_1 + arg1[0x87])
        int32_t arg_8
        sub_140865c40(rsi_1 + 0x88, &arg_8, *(rbp_1 + 0x10))
        int64_t rax_2 = sx.q(arg_8)
        void* const rcx_1
        
        if (rax_2.d == 0xffffffff)
            rcx_1 = nullptr
        else
            rcx_1 = *(rsi_1 + 0x88) + rax_2 * 0x18
        
        int64_t* rax_4 = rcx_1 + 8
        
        if (rcx_1 == 0)
            rax_4 = nullptr
        
        int64_t rcx_2
        
        if (rax_4 == 0)
            rcx_2 = 0
        else
            rcx_2 = *rax_4
        
        i += 1
        *(rbp_1 + 0x40) = rcx_2
        r14_1 = &r14_1[1]
    while (i s< arg1[0x88].d)

void* rax_5 = arg1[0x82]

if (rax_5 != 0)
    *(rax_5 + 0xd8) += 1

return sub_141f0e650(arg1, arg2) __tailcall
